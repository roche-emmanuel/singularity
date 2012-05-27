local oo = require "loop.cached"

local ReflectionWriter = require "bindings.ReflectionWriter"
local Set = require "std.Set"

-- Helper function for writeForeach traversals:
local getValueName = function(k,v)
	return v:getName()
end

local getKeyName = function(k,v)
	return k:getName()
end

module_start = [[#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

int luaopen_${1}(lua_State* L)
{

	// Open the luabind support:
	using namespace luabind;
	luabind::open(L);

    luabind::module(L, "${1}")
    [
]]

module_end = [[
	return 0;
}

#ifdef __cplusplus
}
#endif
]]

local dyncast_template = [[
#include <plug_common.h>

luabind::object dynamicCast${1}(${1}* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    ${1}ConverterMap::iterator it = ${1}_converters.find(destType);
    if(it==${1}_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}
]]

local convert_template = [[luabind::object convert${1}To${2}(lua_State* L, ${1}* parent) {
    return luabind::object(L,dynamic_cast<${2}*>(parent));
}
]]

-- This module defines the writer used to generate luabind bindings.
local LuabindWriter = oo.class({},ReflectionWriter)

LuabindWriter.CLASS_NAME = "bindings.LuabindWriter"


function LuabindWriter:__init(datamap)
    local object = ReflectionWriter:__init(datamap) -- pass the datamap to the ReflectionWriter class.
    object = oo.rawnew(self,object)
    object.forceSignature = false
    object:setBindingFolder("luabind")
    return object
end

--- Write the class declaration.
-- This function will write the class declaration of the current class
-- retrieving all the base classes from that current class:
function LuabindWriter:writeClassDeclaration()
    local cclass = self:getCurrentScope() -- assume the scope is a class.
    local cname = cclass:getName();
    
    -- generate the base comma separated list:
    local bases, count = self:concatenateNames(cclass:getBases());
    
    if count==1 then
        -- add advanced class déclaration:
        self:writeLineComma('class_< ' ..cname .. ', ' .. bases ..' >("' .. cname .. '")')
    elseif count>1 then
        self:writeLineComma('class_< ' ..cname .. ', bases< ' .. bases ..' > >("' .. cname .. '")')
    else
        -- add simple class déclaration:
        self:writeLineComma('class_< ' ..cname .. ' >("' .. cname .. '")')
    end  
end

--- Write an enumeration.
-- write a class member enumeration.
-- @param enum The Enumeration to write.
function LuabindWriter:writeEnum(enum)
    local cclass = self:getCurrentScope();
    local cname = cclass:getName()
    
    -- remove the comma separator:
    self:removeLastComma();
    self:newLine()
    local name = enum:getName()
    local values = enum:getValues();
    self:writeLine('.enum_("' .. name .. '") [')
    self:pushIndent()
    for _,v in values:sequence() do
        self:writeLineComma('value("' .. v .. '", ' .. v:getFullName() .. ')')
    end
    -- remove the last comma:
    self:removeLastComma()
    self:popIndent();
    self:writeLineComma(']')
end

--- Write all enums.
-- Write all the class level enums from the current class.
function LuabindWriter:writeEnums()
    local enums = self:getCurrentScope():getEnums()
    
    --LOG:info ("Writing ".. enums:size() .. " enums in scope " .. self:getCurrentScope():getName())
    for k,v in enums:sequence() do
        self:writeEnum(v)
    end
end

--- Write all functions.
-- Write all the current class level functions.
function LuabindWriter:writeFunctions()
    local cclass = self:getCurrentScope()
    local funcs = cclass:getFunctions()
    local conss = cclass:getConstructors()
    local cname = cclass:getName();
    
    -- first loop to write the public constructors:
    local dtor = cclass:getDestructor() 
    if not dtor or dtor:isPublic() then
	    for _,v in cons:sequence() do
	        if  v:isPublic() then -- don't write variadic functions or operators
	            self:removeLastComma();
	            local sig = v:getArgumentsPrototype(false)
	            self:writeLineComma('.def(constructor< '.. sig ..' >())')
	        end
	    end
    end
    
    for _,v in funcs:sequence() do
        if v:isValidForWrapping() then -- don't write variadic functions or operators
            self:removeLastComma();
            local sig = ""
            if self.forceSignature or v:isOverloaded() then
                sig = "(".. v:getSignature() ..")"
            end
            self:writeLineComma('.def("' .. v:getName() .. '",'.. sig .. '&' .. cname .. '::' .. v:getName() .. ')')
        end
    end
end

--- Write all global level functions
-- @param funcs OrderedSet of global functions
function LuabindWriter:writeNamespace(ns)
    local funcs = ns:getFunctions()
    for _,v in funcs:sequence() do
        if v:isValidForWrapping() then
            local sig = ""
            if self.forceSignature or v:isOverloaded() then
                sig = "(".. v:getSignature() ..")"
            end
            
            self:writeLineComma('def("' .. v:getName() .. '",'.. sig ..'&'.. v:getName() .. ')')
        end
    end
end

--- Write a complete class
-- Assign the given class as current class and then write all the class bindings elements.
-- @param class The class object to bind.
function LuabindWriter:writeClass(class)    
    self:pushScope(class)
    self:writeClassDeclaration()
    self:pushIndent()
    self:writeEnums()
    self:writeFunctions()
    
    -- check if this class is in the derivation list:
    if(class:hasDerivations() and not class:hasBases() and not class:isConverterIgnored()) then
        -- add the dynamic cast function:
        self:removeLastComma();
        self:writeLineComma('.def("dynamicCast",&dynamicCast' .. class:getName() .. ',raw(_4))')
    end
    self:popIndent();
    self:popScope()
end

function LuabindWriter:writeRegistrationHeader()
	self:clearContent()
	local bname = self.datamap:getModuleName();

    self:writeLine("#ifndef _" .. bname .."_REGISTERS_H_" )
    self:writeLine("#define _" .. bname .."_REGISTERS_H_" )
    self:writeLine("")
    
	
    self:writeLine("// ".. bname .. " registration functions:")
    self:writeLine("")
    
    local classes = self.datamap:getAllClasses()

    for k,v in classes:sequence() do
		if not v:isTemplated() then
        	self:writeLine("luabind::scope register_" .. v:getName().. "();");
        end
    end
    
    
    -- add a line for the functions:
    self:writeLine("luabind::scope register_global_functions();");
    
    -- Also add the global registration function:
    self:newLine()
    self:writeLine([[#ifdef __cplusplus
extern "C" {
#endif

int luaopen_]] .. bname .. [[(lua_State* L);

#ifdef __cplusplus
}
#endif
]]);

    self:newLine()
    self:writeLine("#endif")
    self:newLine()

    self:writeHeader( bname .. "_registers.h")
    
    self:clearContent()
        
end

function LuabindWriter:writeRegistrationSources()
    local classes = self.datamap:getAllClasses()
	local bname = self.datamap:getModuleName();

	for _,v in classes:sequence() do
		if not v:isTemplated() then
			self:clearContent()
			self:setIndent(0)
			self:writeLine("#include <plug_common.h>")
			self:writeLine("")
			
			
		    self:writeLine("luabind::scope register_" .. v:getName().. "() {")
		    self:pushIndent()
		    
	    	self:writeLine("using namespace luabind;")
	    	self:writeLine("return")
	    	
	    	self:pushIndent()
	    	self:writeClass(v)
	    	self:removeLastComma()
	    	self:appendContent(";\n")
	    	self:popIndent()
	    	
		    self:popIndent()
		    self:writeLine("}")
		    self:writeLine("")
		    
		    self:writeSource("register_".. v:getName() .. ".cpp")
		end
	end

	-- Also register the global functions:
	self:clearContent()
	self:setIndent(0)
	self:writeLine("#include <plug_common.h>")
	self:writeLine("")
	
	
    self:writeLine("luabind::scope register_global_functions() {")
    self:pushIndent()
	self:writeLine("using namespace luabind;")
	self:writeLine("return")
	
	self:pushIndent()
    local namespaces = self.datamap:getAllNamespaces()
    for k,v in namespaces:sequence() do
        self:writeNamespace(v)
    end
    
	self:removeLastComma()
	self:appendContent(";\n")
	self:popIndent()
	
    self:popIndent()
    self:writeLine("}")
    self:writeLine("")
    
    self:writeSource("register_global_functions.cpp")
end


--- Write the base converters.
-- Write the converter functions to convert a base pointer to a derived pointer
-- @param base The base class
-- @param derived The vector of derived classes
function LuabindWriter:writeBaseConverters(base, derived) 
    -- we write each converter in its own file:
    self:clearContent()
    
    local bname = base:getName();
    local derived = self.datamap:getDerivedClasses(base)
    
    self:writeLine("#include <plug_common.h>")
    self:newLine()
    
    self:writeLine("// ".. bname .. " converters:")
    self:writeLine("")
    
    -- prepare the typemap for the converters:
    self:writeLine(bname.."ConverterMap " .. bname.. "_converters;")
    self:writeLine("")
    
    self:writeForeach(derived,convert_template,bname,getValueName)
    
    -- Now write the converter registration function:
    self:writeLine("void register".. bname.. "Converters() {")
        self:pushIndent()
        self:writeForeach(derived,'${1}_converters["${2}"] = &convert${1}To${2};',bname,getValueName)
        self:popIndent()
    self:writeLine("}")
    self:writeLine("")
    self:writeLine("")
    
    self:writeSource("converter_".. bname ..".cpp")
    self:clearContent();
end



--- Write all the converters.
-- Write all the convertion functions needed to convert from base classes to derived classes:
function LuabindWriter:writeConverters()   
    -- write the converters header file:
    self:clearContent()
    self:writeLine("#ifndef _" ..self.datamap:getModuleName() .."_CONVERTERS_H_" )
    self:writeLine("#define _" ..self.datamap:getModuleName() .."_CONVERTERS_H_" )
    self:writeLine("")
    
    self:writeLine("// Converters registration functions:")
    
    -- write the convert functions here:
    self:writeForeachConvertable("typedef boost::function<luabind::object (lua_State* L, ${1}* parent)> ${1}Converter;",getKeyName)
    self:newLine()
    self:writeForeachConvertable("typedef std::map<std::string, ${1}Converter> ${1}ConverterMap;",getKeyName)
    self:newLine()
    self:writeForeachConvertable("extern ${1}ConverterMap ${1}_converters;",getKeyName)
    self:newLine()
    self:writeForeachConvertable("void register${1}Converters();",getKeyName)
    
    self:newLine()
    self:writeLine("#endif")
    self:newLine()

    self:writeHeader(self.datamap:getModuleName() .. "_converters.h")
    
    self:clearContent()
    
    for k,v in self.convertables:sequence() do
        LOG:info ("Writing converters for base ",k:getName())
        self:writeBaseConverters(k,v);
    end
end

--- Write all dynamic cast functions for all base classes
function LuabindWriter:writeDynamicCasters() 
        
    self:clearContent()
    local mname = self.datamap:getModuleName()
    self:writeLine("#ifndef _" .. mname .."_DYNAMICCASTERS_H_" )
    self:writeLine("#define _" .. mname .."_DYNAMICCASTERS_H_" )
    self:writeLine("")
    self:writeLine("// DynamicCasters functions:")
    self:newLine()
    
    self:writeForeachConvertable("luabind::object dynamicCast${1}(${1}* parent, std::string destType, lua_State* L);",getKeyName)
    
    self:newLine()
    self:writeLine("#endif")
    self:newLine()
    self:writeHeader(self.datamap:getModuleName() .. "_dynamicCasters.h")
    
    -- write the convert functions here:
    for k,v in self.convertables:sequence() do
        local bname = k:getName()
        self:clearContent()
        self:writeSubLine(dyncast_template,bname)
        self:writeSource("dynamicCaster_"..bname .. ".cpp")
        self:clearContent()
    end
end


-- Write the main module function
function LuabindWriter:writeModuleFunction()
    local mname = self.datamap:getModuleName()
    
	self:clearContent()
	self:setIndent(0)
	
	self:writeSubLine(module_start,mname)

    self:setIndent(2)

    self:writeForeachClass("register_${1}(),",getValueName)
    
    -- add a line for the functions:
    self:writeLine("register_global_functions()");
    
    self:setIndent(1)
    
    self:writeLine("];")
    
    self:writeLine("")
    self:writeLine("// Register all converters:")
    
    self:writeForeachConvertable("register${1}Converters();",getKeyName)
    
    self:setIndent(0)
        
    self:writeLine(module_end)
end

--- Write the complete reflection
function LuabindWriter:writeBindings(folder)
    self:setTargetFolder(folder)
    
    self:writeConverters()
    self:writeDynamicCasters()
    
    self:writeRegistrationHeader()
	self:writeRegistrationSources()
     
    self:writeModuleFunction()
    
    self:writeSource(self.datamap:getModuleName() .. "_bindings.cxx")
end

--- Force display of function signatures.
function LuabindWriter:setForceSignature(enabled)
    self.forceSignature = enabled
end

return LuabindWriter

