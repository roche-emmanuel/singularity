local Class = require("classBuilder"){name="EOWSensor",bases="genesis.turret.Sensor"};

-- This class represents a EOW sensor.
function Class:new(options)
	self:debug("Creating EOW sensor...")
	self._type = "EOW"
end

function Class:initialize(options)
end

return Class 
