local Class = require("classBuilder"){name="IEnumHolder",bases="base.Object"};

local Set = require "std.Set"
local Enum = require "reflection.Enum"

function Class:initialize(options)
    self._enums = Set()
end

--- Retrieve the variable Set in that object.
function Class:getEnums()
    return self._enums
end

--- Add a variable to the variable Set.
function Class:addEnum(var)
	self:check(var and self:isInstanceOf(Enum,var),"Invalid enum");

	self._enums:push_back(var)
	
	if var:getParent() == self then
		return -- nothing to do.
	end
	
	-- also add the enum as a regular scope:
	--self:addChild(var)
	
	self:check(var:getParent()==nil,
		"Changing enum parent.",
		"\nEnum=",var:getName(),
		"\nPrevious parent=",var:getParent() and var:getParent():getFullName(),
		"\nNew parent=",self:getFullName())
	var:setParent(self)	
end

return Class
