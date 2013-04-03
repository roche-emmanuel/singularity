local Class = require("classBuilder"){name="Sensor",bases="genesis.turret.Object"};

local osg = require "osg"

-- This class represents a basic sensor installed on a turret.
function Class:initialize(options)
	self._transform = osg.MatrixTransform()
	
	-- attach the transform to the turret roll joint:
	self:getTurret():getGimbal():getTransform():addChild(self._transform)
	
	-- create the view for this sensor:
	self._view = require("genesis.display.SensorView"){turret=self:getTurret(),sensor=self}
end

function Class:getType()
	self:check(self._type,"Invalid sensor type")
	return self._type
end

function Class:getTransform()
	return self._transform
end

function Class:getView()
	return self._view
end

return Class 
