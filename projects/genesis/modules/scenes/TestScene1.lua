local Class = require("classBuilder"){name="TestScene1",bases="scenes.TestScene"};

function Class:new(options)
	self._name = "TestScene1"
end

-- This class is a simple test scene with default osg objects
-- and no platform registered.
function Class:initialize(options)
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local tools = require "osg.Tools"
	
	local sb = tools:createSkyBox{
		x_pos="skybox1/right.jpg",
		x_neg="skybox1/left.jpg",
		y_pos="skybox1/front.jpg",
		y_neg="skybox1/back.jpg",
		z_pos="skybox1/top.jpg",
		z_neg="skybox1/bottom.jpg",
	}
	
	self:getRoot():addChild(sb)	
	
	local pform = require("genesis.scene.Platform"){scene=self,root=mt}
	
end

return Class
