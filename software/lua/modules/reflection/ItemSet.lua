local Class = require("classBuilder"){name="ItemSet",bases="std.Set"};

local ChainValidator = require "reflection.validators.ChainValidator"

function Class:initialize(options)
end

function Class:filterItems(filters,args)
	local va = ChainValidator{validators=filters,args=args}
	return self:getItems(va)
end

function Class:getItems(validator)
	if not validator then
		return self._items
	end
	
	-- use the validator for item validation
	local result = Class()
	for _,item in self:sequence() do
		if validator(item) then
			result:push_back(item)
		end
	end
	
	return result;
end

function Class:addItem(item)
	self:check(item,"Invalid item argument.")
	return self:push_back(item)
end

return Class
