
local oo = require "loop.cached"
local Object = require "reflection.Object"
local dbg = require "debugger"

-- The object class implements the IName and IParent interfaces
local Parameter = oo.class({},Object)

-- Define the class name
Parameter.CLASS_NAME = "reflection.Parameter"

function Parameter:__init(type,name,def)
    local obj = Object:__init({})
    obj = oo.rawnew(self,obj)
    obj:setType(type)
    obj:setName(name)
    obj:setDefaultValue(def)
    return obj
end

--- Assign the type of this parameter
function Parameter:setType(type)
    self._type = type
end

--- Retrieve the type of this parameter
function Parameter:getType()
    return self._type;
end

--- Assign the default values for this parameter.
function Parameter:setDefaultValue(def)
    self._defaultValue = def
end

--- Return the assigned default values.
function Parameter:getDefaultValue()
    return self._defaultValue;
end

--- Check if this parameter is the Lua_state type:
function Parameter:isLuaState()
	return self:getType():isLuaState()
end

function Parameter:isLuaFunction()
	return self:getType():isLuaFunction()
end

function Parameter:isLuaTable()
	return self:getType():isLuaTable()
end

function Parameter:isLuaAny()
	return self:getType():isLuaAny()
end

return Parameter
