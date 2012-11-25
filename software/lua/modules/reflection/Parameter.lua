local Class = require("classBuilder"){name="Parameter",bases="reflection.Entity"};

function Class:initialize(options)
    self:setType(options.type)
    self:setName(options.name)
    self:setDefaultValue(options.defVal)
end

--- Assign the type of this parameter
function Class:setType(type)
    self._type = type
end

--- Retrieve the type of this parameter
function Class:getType()
    return self._type;
end

--- Assign the default values for this parameter.
function Class:setDefaultValue(def)
    self._defaultValue = def
end

--- Return the assigned default values.
function Class:getDefaultValue()
    return self._defaultValue;
end

--- Check if this parameter is the Lua_state type:
function Class:isLuaState()
	return self:getType():isLuaState()
end

function Class:isLuaFunction()
	return self:getType():isLuaFunction()
end

function Class:isLuaTable()
	return self:getType():isLuaTable()
end

function Class:isLuaAny()
	return self:getType():isLuaAny()
end

function Class:isNothing()
	return self:getType():isNothing()
end

return Class
