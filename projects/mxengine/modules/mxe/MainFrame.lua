local Class = require("classBuilder"){name="MainFrame",bases="mxe.TurretController"};

function Class:initialize(options)
	-- build the main frame on the app frame:
	self:check(options and options.app,"Invalid app to build main frame")
	
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"
	
	local app = options.app
	
	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame(),handler=self}

	local panel = intf:pushPanel{prop=1,flags=wx.wxEXPAND}
	
	intf:pushNotebook{prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushBookPage{caption="Mission"}
			intf:pushChoicebook{prop=1,flags=wx.wxALL+wx.wxEXPAND,
								name="mission_type",
								defaultValue="SingleTurret",
								handler="onMissionChanged"}
			-- intf:pushBookPage{caption="UnitTest"}
				-- intf:addStaticText{text="This type of mission has no parameter."}
			-- intf:popParent(true)
			
			intf:pushBookPage{caption="TestTurret"}
				intf:addStaticText{text="This type of mission has no parameter."}
			intf:popParent(true)
			
			intf:pushBookPage{caption="TestTurret2"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)
			
			intf:pushBookPage{caption="TestTurret3"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)

			intf:pushBookPage{caption="TestTurret4"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)
			
			intf:pushBookPage{caption="SingleTurret"}
				intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
					intf:addSingleChoiceEntry{name="single_turret.turret_model",prop=1,caption="Turret model",
						choices={"basic_turret"},
						defaultValue="basic_turret",
						handler="onTurretModelChanged"}
					intf:addSingleChoiceEntry{name="single_turret.platform_model",prop=1,caption="Platform model",
						choices={"basic_platform","basic_platform_2","basic_platform_offset1"},
						defaultValue="basic_platform",
						handler="onPlatformModelChanged"}
				intf:popSizer()
				
				intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
					intf:addSingleChoiceEntry{name="single_turret.output_model",prop=1,caption="Output model",
						choices={"std_outputs","debug_sources","debug_streams","debug_outputs"},
						defaultValue="std_outputs",
						handler="onOutputModelChanged"}
					intf:addSingleChoiceEntry{name="single_turret.network_model",prop=1,caption="Network model",
						choices={"no_network"},
						defaultValue="no_network",
						handler="onNetworkModelChanged"}
				intf:popSizer()
			intf:popParent(true)
			
			intf:popParent() -- choicebook.
		intf:popParent(true) -- mission page
		
		intf:pushBookPage{caption="Controls"}
			self:buildControlPanel(intf)
		intf:popParent(true) -- controls page
		
		intf:pushBookPage{caption="Turrets"}
		intf:popParent(true) -- turrets page

		intf:pushBookPage{caption="Outputs"}
		intf:popParent(true) -- outputs page
		
		intf:pushBookPage{caption="Network"}
		intf:popParent(true) -- Network page
	intf:popParent()
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALIGN_RIGHT}
		intf:addBitmapButton{src="check",tip="Perform mission level unit tests",
							 -- flags=wx.wxALIGN_RIGHT,
							 handler="performMissionUnitTests"}
		intf:addBitmapButton{src="check@earth",tip="Perform global level unit tests",
							 -- flags=wx.wxALIGN_RIGHT,
							 handler="performGlobalUnitTests"}
	intf:popSizer()
	intf:addOutputPanel{}
	intf:popParent(true)
	
	parent:Layout()	
	
	intf:updateProviders()
	intf:updateEntries() -- force updating the content of the data map.
	
	local data = intf:getDefaultProvider():getDataHolder()
	self:warn("Datamap content: ",data)
	
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

function Class:onMissionChanged(data)
	self:debug("Mission was changed to ",data.value)
	self:getMissionManager():setMissionClass(data.value)
end

function Class:onTurretModelChanged(data)
	self:debug("Updating turret model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	mobj:setTurretModel(data.value)
end

function Class:onPlatformModelChanged(data)
	self:debug("Updating platform model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	mobj:setPlatformModel(data.value)	
end

function Class:onOutputModelChanged(data)
	self:debug("Updating output model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	mobj:setOutputModel(data.value)	
end

function Class:onNetworkModelChanged(data)
	self:info("Updating network model to: ",data.value)
	local mobj = self:getMissionManager():getMissionObject()
	mobj:setNetworkModel(data.value)	
end

function Class:performMissionUnitTests()
	if not self:isMissionRunning() then
		self:error("Cannot perform mission tests when no mission is running.")
		return
	end
	
	local tester = require "utils.MissionUnitTests"
	tester:run()
end

function Class:performGlobalUnitTests()
	local tester = require "utils.GlobalUnitTests"
	tester:run()
end

return Class -- return class instance.
