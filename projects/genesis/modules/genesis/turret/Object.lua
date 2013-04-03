local Class = require("classBuilder"){name="TurretObject",bases="genesis.Object"};

function Class:initialize(options)
	self:check(options and options.turret,"Invalid turret object");

	self._turret = options.turret	
end

function Class:getTurret()
	return self._turret
end

function Class:getEntry(ename)
	return self._turret:getEntry(ename)
end

function Class:getValue(ename,defVal)
	return self._turret:getValue(ename,defVal)
end

function Class:getSensor(sname)
	return self._turret:getSensor(sname)
end

function Class:getVideoOutput(oname)
	return self._turret:getVideoOutput(oname)
end


return Class 
