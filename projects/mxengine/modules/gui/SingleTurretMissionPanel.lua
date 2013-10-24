local Class = require("classBuilder"){name="SingleTurretMissionPanel",bases="gui.wx.InterfaceComponent"};

local assert = require "utils.assert"

function Class:findModels(folder,list)
	list = list or {}
	
	local dir = require "utils.dir"
	local path = require "utils.path"
	
	local files = dir.getFiles(folder,"*.lua")
	local ext
	for _,file in files:sequence() do
		file, ext = path.splitExt(path.baseName(file))
		table.insert(list,file)
	end
	
	return list
end

function Class:buildComponent(intf)
	-- first retrieve the list of turret/output/network/platform models
	local prefix = root_path .. "/lua/modules/vbsng/models/"

	local turretList = self:findModels(prefix .."turret/")
	self:findModels(mxe_root .. "models/turret/",turretList)
	local platformList = self:findModels(prefix .."platform/")
	local outputList = self:findModels(prefix .."output/")
	local networkList = self:findModels(prefix .."network/")

			
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addSingleChoiceEntry{name="single_turret.turret_model",prop=1,caption="Turret model",
			-- choices={"MX15HDi","MX15DiD","MX15DiD_SOCOM","basic_turret","awe_turret"},
			choices=turretList,
			defaultValue="MX15DiD_SOCOM",
			handler="onTurretModelChanged"}
		intf:addSingleChoiceEntry{name="single_turret.platform_model",prop=1,caption="Platform model",
			-- choices={"basic_platform","basic_platform_2","basic_platform_offset1"},
			choices=platformList,
			defaultValue="delegate_platform",
			handler="onPlatformModelChanged"}
	intf:popSizer()
	
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addSingleChoiceEntry{name="single_turret.output_model",prop=1,caption="Output model",
			-- choices={"std_outputs","debug_sources","debug_streams","debug_outputs","no_outputs","digital1","digital2"},
			choices=outputList,
			defaultValue="std_outputs",
			handler="onOutputModelChanged"}
		intf:addSingleChoiceEntry{name="single_turret.network_model",prop=1,caption="Network model",
			-- choices={"no_network","std_mxsim"},
			choices=networkList,
			defaultValue="no_network",
			handler="onNetworkModelChanged"}
	intf:popSizer()
	
	self:connectMissionEvents(intf)
end

function Class:connectMissionEvents(intf)
	-- Add an event listener on the mission manager:
	local mman = self:getMissionManager()
	mman:addListener{mman.EVT_STARTING_MISSION,function()
		local data = intf:getDefaultProvider():getDataHolder()
		self:getMissionManager():setMissionClass(data.mission_type)
		
		if data.mission_type == "SingleTurret" then
			-- we are jsut starting the mission:
			-- self:warn("Setting up mission before start...")
			data = data.single_turret
			local mobj = self:getMissionManager():getMissionObject()
			mobj:setTurretModel(data.turret_model)
			mobj:setPlatformModel(data.platform_model)
			mobj:setOutputModel(data.output_model)
			mobj:setNetworkModel(data.network_model)
		end		
	end}
end

function Class:onTurretModelChanged(data)
	self:debug("Updating turret model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	assert.InstanceOf(require "mission.SingleTurretMission",mobj)
	mobj:setTurretModel(data.value)
	
	if self:isMissionRunning() then
		-- we also need to replace the turret object from the "Control" page:
		self:updateTurretList()
	end
end

function Class:onPlatformModelChanged(data)
	self:debug("Updating platform model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	assert.InstanceOf(require "mission.SingleTurretMission",mobj)
	mobj:setPlatformModel(data.value)	
end

function Class:onOutputModelChanged(data)
	self:debug("Updating output model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	assert.InstanceOf(require "mission.SingleTurretMission",mobj)
	mobj:setOutputModel(data.value)	
end

function Class:onNetworkModelChanged(data)
	self:info("Updating network model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	assert.InstanceOf(require "mission.SingleTurretMission",mobj)
	mobj:setNetworkModel(data.value)	
end

return Class 
