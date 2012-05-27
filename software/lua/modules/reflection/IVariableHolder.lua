
local oo = require "loop.base"
local Set = require "std.Set"
local dbg = require "debugger"
local Variable = require "reflection.Variable"

local IVariableHolder = oo.class{}

-- Define the class name
IVariableHolder.CLASS_NAME = "reflection.IVariableHolder"

function IVariableHolder:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assert(obj.variables==nil,"Object already contains a 'variables' field")
    obj.variables = Set()
    return obj
end

--- Retrieve the variable Set in that object.
function IVariableHolder:getVariables()
    return self.variables
end

--- Add a variable to the variable Set.
function IVariableHolder:addVariable(var)
	dbg:assert(var,"'var' argument is nil")
	dbg:assertType(var,Variable)
	self.variables:push_back(var)
	
	if var.parent == self then
		return -- this variable is already added.
	end
	
	dbg:assertNil(var.parent,
		"Changing variable parent.",
		"\nVariable=",var,
		"\nPrevious parent=",var.parent,
		"\nNew parent=",self)
	var:setParent(self)	
end

return IVariableHolder
