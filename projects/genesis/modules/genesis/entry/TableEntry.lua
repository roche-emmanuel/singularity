local Class = require("classBuilder"){name="TableEntry",
	bases={"genesis.entry.Entry"}};

function Class:initialize(options)
	if not self._value then
		self._value = {}
	end
		
	self:check(type(self._value)=="table","Invalid table value for TableEntry ", self._name)
	self._vtype = "table" -- this entry always contains a table value.
	self._prevValue = {}
end

-- This class is derived from the Entry class, and supports
-- accessing a table value by key.
function Class:getSubValue(key,defVal)
	self:markUsed();
	
	if self._value[key]==nil then
		self._value[key] = defVal
	end
	
	return self._value[key]
end

function Class:setSubValue(key, val)
	self:check(not self:isReadOnly(),"Trying to write to readonly entry ",self._name)
	self:check(key,"Invalid key for entry ",self._name)
	self:check(val,"Invalid value for entry ",self._name," on key ",key)
	
	if(val == self._value[key]) then
		return false -- nothing to update.
	end
	
	-- ensure we mark the entry as used:
	self:markUsed();

	-- Assign the new value:
	self._prevValue[key] = self._value[key]
	self._value[key] = val
	
	-- notify the listeners about the change:
	-- the listeners will receive the changed key, the previous and the current value.
	self:fireEvent("Changed",key, self._value[key],self._prevValue[key])
end

return Class 
