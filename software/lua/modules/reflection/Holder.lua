
local oo = require "loop.cached"

local IFunctionHolder = require "reflection.IFunctionHolder"
local IVariableHolder = require "reflection.IVariableHolder"
local IEnumHolder = require "reflection.IEnumHolder"
local Scope = require "reflection.Scope"

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
    obj = oo.rawnew(self,obj)
    obj._TRACE_ = "reflection.Holder"
    
    obj.children = Set()
    return obj
end

--- Retrieve the set of children in that Scope
function Holder:getChildren()
	return self.children
end

function Holder:removeChild(child)
	self:check(child and self:isInstanceOf(Scope,child),"Invalid child argument.")

	return self.children:eraseValue(child)
end

function Holder:addChild(child)
	self:check(child and self:isInstanceOf(Scope,child),"Invalid child argument.")
	
	self:debug0_v("Adding child ",child:getName()," to scope ", self:getName())
	
	if child:getParent() == self then
		return -- nothing to do the child is already in the list.
	end

	self.children:push_back(child)
	
	--Add this object as parent of the child:
	-- we may frce changing the namespace if the object is in the standard
	-- namespace:
	-- local stdNS = child:getParent() and child:getParent():getFullName()=="";
	child:setParent(self,true) --stdNS)	
end

return Holder
