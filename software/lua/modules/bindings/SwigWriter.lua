
local oo = require "loop.simple"

local utils = require "utils"
local ReflectionWriter = require "bindings.ReflectionWriter"
local Set = require "std.Set"

local LOG = LOG

-- This module defines the writer used to generate luabind bindings.

module "bindings.SwigWriter"

oo.class(_M, ReflectionWriter)

function __init(class,datamap)
    local object = ReflectionWriter:__init(datamap) -- pass the datamap to the ReflectionWriter class.
    object = oo.rawnew(class,object)
    object:setBindingFolder("swig")
    return object
end

--- Write the class declaration.
-- This function will write the class declaration of the current class
-- retrieving all the base classes from that current class:
function writeClassDeclaration(self)
    local cclass = self:getCurrentScope() -- assume the scope is a class.
    local cname = cclass:getName();
    
    -- generate the base comma separated list:
    local bases, count = self:concatenateNames(cclass:getBases(),", public ");
    
    if count > 0 then
        -- add advanced class déclaration:
        self:writeLine('class  ' ..cname .. ' : public ' .. bases ..' {')
    else
        -- add simple class déclaration:
        self:writeLine('class  ' ..cname .. ' {')
    end  
end

--- Write an enumeration.
-- write a class member enumeration.
-- @param enum The Enumeration to write.
function writeEnum(self,enum)
    local cclass = self:getCurrentScope();
    local cname = cclass:getName()
    
    --self:newLine()
    local name = enum:getName()
    local values = enum:getValues();
    self:writeLine('enum ' .. name .. ' {')
    self:pushIndent()
    for _,v in values:sequence() do        
        self:writeLine(v:getName() .. ",")
    end
    -- remove the last comma:
    self:removeLastComma()
    self:newLine()
    self:popIndent();
    self:writeLine('};')
    self:newLine()
end

--- Write all enums.
-- Write all the class level enums from the current class.
function writeEnums(self)
    local enums = self:getCurrentScope():getEnums()
    
    --LOG:info ("Writing ".. enums:size() .. " enums in scope " .. self:getCurrentScope():getName())
    for k,v in enums:sequence() do
        self:writeEnum(v)
    end
end

--- Write all functions.
-- Write all the current class level functions.
function writeFunctions(self)
    local cclass = self:getCurrentScope()
    local funcs = cclass:getFunctions()
    local cname = cclass:getName();
    
    --LOG:info ("Writing ".. funcs:size() .. " funcs in scope " .. self:getCurrentScope():getName())

    for _,v in funcs:sequence() do
        if v:isValidForWrapping() and not v:isConstructor() and not v:isDestructor() then -- don't write variadic functions or operators
            local proto = v:getPrototype(true).. (v:getAbstract() and " =0;" or ";");
            self:writeLine(proto)
        end
    end
end

--- Write all functions.
-- Write all the current class level functions.
function writeConstructors(self,lastsection)
    local cclass = self:getCurrentScope()
    local funcs = cclass:getFunctions()
    local cname = cclass:getName();
    
    --LOG:info ("Writing ".. funcs:size() .. " funcs in scope " .. self:getCurrentScope():getName())
    --self:writeLine("public:")
    self:pushIndent()
    local lastsection = lastsection or ""
    
    for _,v in funcs:sequence() do
        if v:isValidForWrapping() and v:isConstructor() then -- don't write variadic functions or operators
            lastsection = self:checkProtection(v,lastsection)
            local proto = v:getPrototype(true).. (v:getAbstract() and " =0;" or ";");
            self:writeLine(proto)
        end
    end
    
    self:popIndent()
    
    return lastsection
end

function checkProtection(self,func,lastsection)
	local prot = func:getProtectionString()
    if prot ~= lastsection then
        self:popIndent()
        self:writeLine(prot..":")
        self:pushIndent()
    end
	return prot
end

--- Write all functions.
-- Write all the current class level functions.
function writeDestructors(self,lastsection)
    local cclass = self:getCurrentScope()
    local funcs = cclass:getFunctions()
    local cname = cclass:getName();
    
    --LOG:info ("Writing ".. funcs:size() .. " funcs in scope " .. self:getCurrentScope():getName())
    --self:writeLine("public:")
    self:pushIndent()
    local lastsection = lastsection or ""
    
    for _,v in funcs:sequence() do
        if v:isValidForWrapping() and v:isDestructor() then -- don't write variadic functions or operators
			lastsection = self:checkProtection(v,lastsection)

            local proto = v:getPrototype(true).. (v:getAbstract() and " =0;" or ";");
            self:writeLine(proto)
        end
    end
    
    self:popIndent()
    
    return lastsection
end

--- Write all global level functions
-- @param funcs OrderedSet of global functions
function writeNamespace(self,ns)
    local funcs = ns:getFunctions()
    for _,v in funcs:sequence() do
        if v:isValidForWrapping() then
            local proto = v:getPrototype(true)..";"
            self:writeLine(proto)
        end
    end
end

--- Write a complete class
-- Assign the given class as current class and then write all the class bindings elements.
-- @param class The class object to bind.
function writeClass(self,class)
    self:pushScope(class)
    self:writeClassDeclaration()
    
    -- Also write the class constructors and destructors
    local ls = self:writeConstructors()
    ls = self:writeDestructors(ls)

    self:newLine()
    
    if ls ~= "public" then
        self:writeLine("public:")
    end
    
    self:pushIndent()
    
    self:writeEnums()
    self:writeFunctions()
    
    
    self:popIndent()
    
    -- finish the class:
    self:writeLine('};')
    self:newLine()
    
    self:popScope()
end

function getModuleName(self)
    return self.datamap:getModuleName()
end

--- Write Luabind bindings headers
-- Write all the needed luabind bindings headers plus the user provided headers
function writeHeaders(self) 
    local mname = self:getModuleName()
    
    self:writeLine("%module ".. mname)
    self:writeLine("%{")
    self:writeLine("#include <plug_common.h>")
    self:writeLine("%}")
    self:writeLine("")
    
    -- write user content here:
	for _,v in self.datamap:getUserContents():sequence() do
		self:writeLine(v)
	end
	
    self:writeLine("")
end

-- Write the main module function
function writeSwigInterface(self)
    local mname = self:getModuleName()
    
    self:setIndent(0)

    local classes = self.datamap:getAllClasses()
    
    for k,v in classes:sequence() do
        self:writeClass(v);
    end
    
    self:newLine()
    
    local namespaces = self.datamap:getAllNamespaces()
    for k,v in namespaces:sequence() do
        self:writeNamespace(v)
    end
    
    self:setIndent(0)
end

function setTargetFolder(self,folder)
    self.targetFolder = folder
end

--- Write the complete reflection
function writeBindings(self,folder)
    self:setTargetFolder(folder)
    
    self:writeHeaders()    
    
    self:writeSwigInterface()
    
    self:writeSource(self:getModuleName() .. ".i")
end

