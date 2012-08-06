local oo = require "loop.cached"

local BaseWriter = require "bindings.BaseWriter"
local IScopeStack = require "reflection.IScopeStack"
local Vector = require "std.Vector"

-- This module defines the base class used for writing bindings based on the doxygen
-- XML reflection data.
-- To use this class, the user must first call the setDataMap() function to assing the datamap
local ReflectionWriter = oo.class({},BaseWriter,IScopeStack)

ReflectionWriter.CLASS_NAME = "bindings.ReflectionWriter"


--- Create a new instance of the class with direct assignment of the Reflection datamap
function ReflectionWriter:__init(datamap)
    local object = BaseWriter:__init()
    object = IScopeStack:__init(object)
    object = oo.rawnew(self,object)
    object.scopeStack = Vector() -- to hold the scope stack.
    object:setReflectionMap(datamap)    
    object.convertables = datamap:getConvertableClassesMap()
    object.classes = datamap:getAllClasses(true)
    return object
end

--- Assign the reflection datamap.
-- This function is called to assign the XML DataMap to this writer class.
-- @param data The new datamap to use.
function ReflectionWriter:setReflectionMap(data)
    self.datamap = data;
    if not self.datamap:isInitialized() then
    	self.datamap:generateClassHierarchy()
    end
end

function ReflectionWriter:clone()
	local obj = oo.classof(self)(self.datamap,true) 
	return obj
end


--- Retrieve the global namespace
function ReflectionWriter:getGlobalNamespace()
    return self.datamap:getGlobalNamespace()
end

function ReflectionWriter:concatenateNames(set,sep)    
    sep = sep or ", "
    local result = "";
    local count = 0
    for _,v in set:sequence() do
        result = result .. v:getName() .. sep;
        count = count + 1
    end    
    
    -- Remove the final separator:
    result = result:sub(1,-sep:len()-1)
    return result, count;
end

function ReflectionWriter:writeForeachClass(msg,...)
	self:writeForeach(self.classes,msg,...)
end

function ReflectionWriter:writeForeachConvertable(msg,...)
	self:writeForeach(self.convertables,msg,...)
end

function ReflectionWriter:getModuleName()
	return self.datamap:getModuleName()
end

function ReflectionWriter:getLuaOpenName()
	return self.datamap:getLuaOpenName()
end

return ReflectionWriter
