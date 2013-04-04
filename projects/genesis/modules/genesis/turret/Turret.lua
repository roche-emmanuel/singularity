local Class = require("classBuilder"){name="Turret",bases="genesis.Object"};

local osg = require "osg"

function Class:initialize(options)
	options = options or {}
	--self:check(options and options.platform,"Invalid platform for turret.")
	
	self._name = options.name or "default"
	self:debug("Creating turret '",self._name,"'")

	-- now register the turret:
	self:getTurretManager():registerTurret(self)
	
	-- Start with creating the turret state object:
	options.turret = self
	self._state = require("genesis.turret.State")(options)
	self:debug("Turret ready.")
	
	-- retrieve the platform for the turret:
	self._platform = options.platform
	if not self._platform then
		-- we create a default scene and platform if none is provided:
		local scn = require ("scenes." .. self:getValue("global.scene.default"))		
		self._platform = scn:getPlatform()
	end
	
	self._platform:addListener("PlatformUpdated",self)
	
	self._root = osg.MatrixTransform()
	
	self._parent = osg.MatrixTransform()
	self._root:addChild(self._parent)
	
	-- create the turret transform:
	self._transform = osg.MatrixTransform();
	self._parent:addChild(self._transform)
	
	-- self._rotateCB = osg.NodeCallback{
		-- op_call = function(tt, obj, node, nv) 
			-- angle = nv:getFrameStamp():getReferenceTime()*math.pi*2.0/10.0
			-- local rot = osg.Matrixd.rotate(angle,osg.ZAXIS)
			-- self:info("Setting rotation matrix: ",rot)
			-- self._transform:setMatrix(rot)
		-- end
	-- }
	-- self._transform:setUpdateCallback(self._rotateCB)
	
	-- Create the gimbal:
	self._gimbal = require("genesis.turret.Gimbal"){turret=self}
	
	-- create the sensors:
	local list = self:getValue("global.sensor_list")
	
	self._sensors = require("std.Set")()
	for _,sens in ipairs(list) do
		local sensor = require("genesis.turret." .. sens .. "Sensor"){turret=self}
		self._sensors:push_back(sensor)
	end

	-- create the video outputs:
	local list = self:getValue("global.video_output_list")
	
	self._outputs = require("std.Set")()
	for _,out in ipairs(list) do
		local output = require("genesis.display." .. out.type .. "Output"){turret=self,id=out.id}
		self._outputs:push_back(output)
	end
end

function Class:onPlatformUpdated(handler,event,mat)
	-- self:info("Received platform updated matrix: ", mat)
	self._parent:setMatrix(mat)
	self:updateViews()
end

function Class:update()
	-- get the platform matrix:
	local mat = self._platform:getLocalToWorldMatrix()
	self._transform:setMatrix(mat)
end

function Class:getPlatform()
	self:check(self._platform,"Invalid platform")
	return self._platform
end

function Class:getScene()
	self:check(self._platform,"Invalid platform")
	return self._platform:getScene()
end

function Class:updateViews()
	for _,sens in self._sensors:sequence() do
		sens:getView():updateViewMatrix()
	end
end

function Class:getTransform()
	return self._transform
end

function Class:getRoot()
	return self._root
end

function Class:getGimbal()
	return self._gimbal
end

function Class:getEntry(ename)
	return self._state:getEntry(ename)
end

function Class:getValue(ename,defVal)
	return self._state:getValue(ename,defVal)
end

function Class:getSensor(sname)
	for _,sens in self._sensors:sequence() do
		if sens:getName() == sname then
			return sens
		end
	end
	
	self:error("Could not find sensor with name ",sname)
end

function Class:getVideoOutput(oname)
	for _,out in self._outputs:sequence() do
		if out:getName() == oname then
			return out
		end
	end
	
	self:error("Could not find video output with name ",oname)
end

-- function Class:getEntryList(search)
	-- return self._state:getEntryList(search)
-- end

function Class:getName()
	return self._name
end

return Class 
