local Class = require("classBuilder"){name="IVariableHolder",bases="base.Object"};

local Set = require "std.Set"
local Variable = require "reflection.Variable"

function Class:initialize(obj)
    self._variables = Set()
end

--- Retrieve the variable Set in that object.
function Class:getVariables()
    return self._variables
end

--- Add a variable to the variable Set.
function Class:addVariable(var)
	self:check(var and self:isInstanceOf(Variable,var),"Invalid variable");
	
	self._variables:push_back(var)
	
	if var:getParent() == self then
		return -- this variable is already added.
	end
	
	self:check(var:getParent()==nil,
		"Changing variable parent.",
		"\nVariable=",var:getName(),
		"\nPrevious parent=",var:getParent() and var:getParent():getFullName(),
		"\nNew parent=",self:getFullName())
	var:setParent(self)	
end

return Class
