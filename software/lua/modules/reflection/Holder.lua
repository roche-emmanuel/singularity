local Class = require("classBuilder"){name="Holder",bases=
	{"reflection.Scope","reflection.IFunctionHolder",
	 "reflection.IEnumHolder"}};

local Set = require "std.Set"

function Class:initialize(options)
	local ItemSet = require "reflection.ItemSet"
	
	self._variables = ItemSet();
end

function Class:getItems(list,filters,args)
	return list:filterItems(filters,args)
end

function Class:getVariables(filters,args)
   return self:getItems(self._variables,filters,args)
end

function Class:addVariable(var)
	self:check(var,"Invalid var argument.")
	self:checkType(var,require"reflection.Variable")

	var:setParent(self)
	
	self._variables:addItem(var)
end

return Class
