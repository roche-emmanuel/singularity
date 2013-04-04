local Class = require("classBuilder"){name="SensorView",bases={"genesis.turret.Object"}};

local osg = require "osg"
local tools = require "osg.Tools"

-- A video output will take a sensor view as input
-- and render it to another texture with additional processing (black bars)
-- and optional overlay display.
-- This can then be used as an input for on screen display in a turret view.

function Class:initialize(options)
		
	self:check(self._type,"Invalid video output type")
	self:check(self._id,"Invalid video output id")
	-- self._type = options.type or config.genesis.default_video_output
	
	local res = self:getValue(string.format("video_output.%s%d_resolution",self._type,self._id))
		or self:getValue("video_output.default_resolution")
		
	self:check(res,"Invalid sensor resolution.") -- res should be a vec2s object.
	self:debug("Creating video output ", self._type, self._id, " with resolution ", res:x(),"x",res:y())

	self._colorTexture = tools:createTexture{width=res:x(),height=res:y(),format="rgba"}
	
	self._camera = tools:createRTTCamera{colorTex=self._colorTexture}
	
	-- attach this camera as a child of the sensor transform:
	self:getTurret():getRoot():addChild(self._camera)
	
	-- create the quad to render the sensor view:
	self._viewQuad = tools:createScreenQuad{}
	
	self._viewStateSet = self._viewQuad:getOrCreateStateSet()
	--tools:createTexture2DProgram{stateSet=self._viewStateSet}
	local shman = require "osg.ShaderManager"
	-- local prog = shman:loadProgram{"test_half_green"}
	local prog = shman:loadProgram{"copy_texture"}
	
	self._viewStateSet:setAttributeAndModes(prog)
	self._viewStateSet:getOrCreateUniform("tex",osg.Uniform.SAMPLER_2D):setInt(0);

	
	self._camera:addChild(self._viewQuad)
	
	-- setup the sensor view:
	local details = self:getValue("video_output.".. self:getName())
	local sensor = self:getSensor(details.source)
	self:setSensor(sensor)
end

function Class:getType()
	return self._type
end

function Class:getID()
	return self._id
end

function Class:getName()
	return self._type .. self._id
end

function Class:setSensor(sensor)
	self:debug("Assigning sensor ",sensor:getName()," to video output ",self:getName())
	self._sensor = sensor
	
	-- apply the sensor texture on the view quad:
	local tex = sensor:getView():getColorTexture()
	self._viewStateSet:setTextureAttributeAndModes(0,tex);
end

function Class:getColorTexture()
	return self._colorTexture
end

return Class 
