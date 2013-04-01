local Class = require("classBuilder"){name="TurretEntry",bases="genesis.Object"};

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

function Class:isUsed()
	return self._used
end

function Class:isReadOnly()
	return self._readOnly or false
end

function Class:getValue(defVal)
	self._used = true;
	if self._value==nil then
		self._value = defVal
	end
	
	return self._value
end

function Class:setValue(val)
	self:check(not self:isReadOnly(),"Trying to write to readonly entry ",self._name)
	
	self._used = true;
end

return Class 
