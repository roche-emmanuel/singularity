local Class = require("classBuilder"){name="Entry",
	bases={"genesis.turret.Object","base.EventHandler"}};

-- This class will trigger the event "Changed" when a new value is received
-- for the entry.

function Class:initialize(options)
	self:check(options and options.name,"Invalid entry name")
	self._name = options.name
	self:debug2("Creating entry '",self._name,"'")

	self._used = false -- used to check if a given entry was used at all during a run.
	
	self._value = options.value
	self._readOnly = options.readonly
	self._vtype = options.vtype
	self._desc = options.desc
	self._volatile = options.volatile
end

function Class:getName()
	return self._name
end

function Class:getDesc()
	return self._desc
end

function Class:isUsed()
	return self._used
end

function Class:isReadOnly()
	return self._readOnly or false
end

function Class:markUsed()
	self._used = true
end

function Class:getValue(defVal)
	self:markUsed();
	
	if self._value==nil then
		self._value = defVal
	end
	
	return self._value
end

function Class:setValue(val)
	self:check(not self:isReadOnly(),"Trying to write to readonly entry ",self._name)
	self:check(val,"Invalid value for entry ",self._name)
	
	-- if a value type is provided, we check the correspondance:
	self:check(not self._vtype or utils.typeEx(val)==self._vtype,"Invalid value '",utils.typeEx,"' for entry ", self._name) 
		
	if(val == self._value) then
		return false -- nothing to update.
	end
	
	-- ensure we mark the entry as used:
	self:markUsed();

	-- Assign the new value:
	self._prevValue = self._value
	self._value = val
	
	-- notify the listeners about the change:
	-- the listeners will receive the previous and the current value.
	self:fireEvent("Changed",self._value,self._prevValue)
end

return Class 
