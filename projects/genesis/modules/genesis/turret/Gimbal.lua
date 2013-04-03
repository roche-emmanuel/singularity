local Class = require("classBuilder"){name="Gimbal",bases="genesis.turret.Object"};

-- This class represents a basic gimbal control installed on a turret.
-- there can be only one gimbal per turret.
function Class:initialize(options)
	self._yawTransform = osg.MatrixTransform()
	self:getTurret():getTransform():addChild(self._yawTransform)
	
	self._pitchTransform = osg.MatrixTransform()
	self._yawTransform:addChild(self._pitchTransform)
	
	self._rollTransform = osg.MatrixTransform()
	self._pitchTransform:addChild(self._rollTransform)
end

function Class:getTransform()
	return self._rollTransform
end

return Class 
