local Class = require("classBuilder"){name="SensorView",bases={"genesis.turret.Object"}};

local osg = require "osg"
local tools = require "osg.Tools"

-- A sensor view is the view of a given turret sensor
-- rendered on a texture.
-- A sensor view control its camera using the input sensor details.
-- the view renders both the color texture and the depth texture.
function Class:initialize(options)
	self:check(options and options.sensor,"Invalid sensor argument.")
	self._sensor = options.sensor
		
	local res = self:getTurret():getValue(string.format("global.sensor.%s_resolution",self._sensor:getType()))
		or self:getTurret():getValue("global.sensor.default_resolution")
		
	self:check(res,"Invalid sensor resolution.") -- res should be a vec2s object.
	self:debug("Creating sensorView for sensor ", self._sensor:getType(), " with resolution ", res:x(),"x",res:y())

	self._colorTexture = tools:createTexture{width=res:x(),height=res:y(),format="rgba"}
	self._depthTexture = tools:createTexture{width=res:x(),height=res:y(),format="depth"}
	
	self._camera = tools:createRTTCamera{colorTex=self._colorTexture, depthTex=self._depthTexture}
	
	-- attach this camera as a child of the sensor transform:
	self._sensor:getTransform():addChild(self._camera)
	
	-- setup the sensor view:
	self:setup()
	
end

function Class:setup()
	-- retrieve the platform from the turret:
	local pform = self:getTurret():getPlatform()	
	self:check(pform,"Invalid platform in turret.")
	
	-- retrieve the scene from the platform:
	local scene = pform:getScene()
	self:check(scene,"Invalid scene in platform ",pform:getName())
	
	-- Now we want to assign the scene as a child of the camera to render:
	self._camera:addChild(scene:getRoot())
end

function Class:getColorTexture()
	return self._colorTexture
end

return Class 
