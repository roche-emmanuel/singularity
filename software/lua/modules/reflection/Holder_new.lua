
local Class = require("classBuilder"){name="Holder",bases="reflection.Scope"};

local Scope = require "reflection.Scope"
local Set = require "std.Set"
local ItemSet = require "reflection.ItemSet"

function Class:initialize()
	self._children = Set();
	self.children = self._children
	self._functions = ItemSet()
	self._variables = ItemSet()
	self._enums = ItemSet()
end

function Class:getItems(list,filters,args)
	return list:filterItems(filters,args)
end

function Class:getFunctions(prot,validOnly)	
	return getItems(self._functions,
		{prot and "Protection",validOnly and "BindableFunction"},
		{{protection=prot}})
end


--- Retrieve the set of children in that Scope
function Class:getChildren()
	return self._children
end

function Class:addChild(child)
	self:check(child and self:isInstanceOf(Scope,child),"Invalid child argument.")
	
	self:debug0_v("Adding child ",child:getName()," to scope ", self:getName())
	
	if child:getParent() == self then
		return -- nothing to do the child is already in the list.
	end

	self.children:push_back(child)
	
	--Add this object as parent of the child:
	if (child:getParent() and child:getParent():getName()~="") then
		self:warn("changing scope parent from ".. child:getParent():getFullName() .. " to ".. self:getName())
	end
	

	-- if this class was in the global namespace so far, remove it:		
	if child:getParent() then
		child:getParent():getChildren():eraseValue(child)
	end
		
	child:setParent(self)	
end

return Class
