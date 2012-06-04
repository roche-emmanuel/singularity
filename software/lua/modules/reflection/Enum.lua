
local oo = require "loop.cached"
local dbg = require "debugger"

local Scope = require "reflection.Scope"
local Vector = require "std.Vector"
local EnumValue = require "reflection.EnumValue"
local log = require "logger"

-- The Enum class represents a regular enum
-- which may contain enum values.
local Enum = oo.class({},Scope)

-- Define the class name
Enum.CLASS_NAME = "reflection.Enum"

function Enum:__init(obj)
    obj = Scope:__init(obj or {})
    obj = oo.rawnew(self,obj)
    dbg:assertNil(obj.values,"Object already contains a 'values' field")
	obj.scopeType = Scope.ENUM
	obj.values = Vector()
    return obj
end

--- Retrieve the values in this class.
-- @return Vector of EnumValue objects.
function Enum:getValues()
	return self.values
end

--- Check if a given Enum already contains a value by name:
function Enum:contains(value)
	dbg:assert(value,"value argument is nil");
	dbg:assertType(value,EnumValue);
	
	local vname = value:getName()
	for _,v in self.values:sequence() do
		if v:getName() == vname then
			return true;
		end
	end
	
	return false;
end

--- Add a new value in this class.
-- @param value The new value object to add. Should not be nil.
function Enum:addValue(value)
	dbg:assert(value,"value argument is nil");
	dbg:assertType(value,EnumValue);
	
	if self:contains(value) then
		return -- do not add duplicates.
	end
	
	self.values:push_back(value);

	if value:getParent() == self then
		return -- nothing to do, value is already added.
	end 

	if value:getParent() then
		log:warn("Overriding Enum value parent ".. value:getParent():getName() .. " with new parent " .. self:getName())
	end
	--dbg:assertNil(value:getParent(),"The enum value already has a parent: ".. (value:getParent() and value:getParent():getName() or "") .. " and trying to add it to: ".. self:getName())
	
	value:setParent(self)	
end

return Enum
