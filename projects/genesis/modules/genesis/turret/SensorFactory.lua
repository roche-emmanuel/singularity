local Class = require("classBuilder"){name="TurretSensorFactory",bases="genesis.turret.Object"};

function Class:createSensor(entry)
	-- create an entry from the provided details:
	details.name = details.name or name
	details.turret = details.turret or self:getTurret()
	local className = "genesis.turret." .. entry:getSubValue('stype') .. "Sensor"
	return require(className)(details)
end

return Class 
