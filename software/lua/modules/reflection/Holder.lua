
local oo = require "loop.cached"
local dbg = require "debugger"

local IFunctionHolder = require "reflection.IFunctionHolder"
local IVariableHolder = require "reflection.IVariableHolder"
local IEnumHolder = require "reflection.IEnumHolder"
local Scope = require "reflection.Scope"
local log = require "logger"

local Set = require "std.Set"

-- The Holder class implements the IFunctionHolder and 
-- IvariableHolder interfaces. This class serves as a parent
-- for scope holding functions and variables: namespaces and classes
local Holder = oo.class({},Scope,IFunctionHolder,IVariableHolder,IEnumHolder)

-- Define the class name
Holder.CLASS_NAME = "reflection.Holder"

function Holder:__init(obj)
    obj = Scope:__init(obj or {})
    obj = IFunctionHolder:__init(obj)
    obj = IVariableHolder:__init(obj)
    obj = IEnumHolder:__init(obj)
    dbg:assertNil(obj.children,"Object already contains a 'children' field")
    obj.children = Set()
    obj = oo.rawnew(self,obj)
    return obj
end

--- Retrieve the set of children in that Scope
function Holder:getChildren()
	return self.children
end

function Holder:addChild(child)
	dbg:assert(child,"'child' argument is nil.")
	dbg:assertType(child,Scope)
	
	if child.parent == self then
		return -- nothing to do the child is already in the list.
	end

	self.children:push_back(child)
	
	--Add this object as parent of the child:
	if (child.parent and child.parent:getName()~="") then
		log:warn("changing scope parent from ".. child.parent:getFullName() .. " to ".. self:getName())
	end
	
	--[[dbg:assert(not child.parent or child.parent:getName()=="",
		"Changing Scope parent.",
		"\nScope=",child,
		"\nPrevious parent=",child.parent,
		"\nNew parent=",self)]]
	
	-- if this class was in the global namespace so far, remove it:
		
	if child.parent then
		child.parent:getChildren():eraseValue(child)
	end
	
	dbg:assert(not child.parent or not child.parent.children:contains(child),"The old parent contains the child.")
	
	child:setParent(self)
	dbg:assert(child.parent.children:contains(child),"The new parent doesn't contain the child.")
	
end

return Holder
