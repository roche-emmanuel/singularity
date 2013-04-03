local Class = require("classBuilder"){name="TurretObject",bases="genesis.Object"};

function Class:initialize(options)
	self:check(options and options.turret,"Invalid turret object");

	self._turret = options.turret	
end

function Class:getTurret()
	return self._turret
end

return Class 
