local Class = require("classBuilder"){name="MainFrame",bases="base.Object"};

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
								defaultValue="TestTurret4",
								handler="onMissionChanged"}
			
			intf:pushBookPage{caption="UnitTest"}
				intf:addStaticText{text="This type of mission has no parameter."}
			intf:popParent(true)
			
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
				intf:addSingleChoiceEntry{name="t0_turret_model",caption="Turret model",
					choices={"basic_turret"},
					defaultValue="basic_turret",
					handler="onTurretModelChanged"}
				intf:addSingleChoiceEntry{name="t0_platform_model",caption="Platform model",
					choices={"basic_platform","basic_platform_2","basic_platform_offset1"},
					defaultValue="basic_platform",
					handler="onPlatformModelChanged"}
				intf:addSingleChoiceEntry{name="t0_output_model",caption="Output model",
					choices={"debug_sources","debug_streams","debug_outputs"},
					defaultValue="debug_outputs",
					handler="onOutputModelChanged"}
				intf:addSingleChoiceEntry{name="t0_network_model",caption="Network model",
					choices={"no_network"},
					defaultValue="no_network",
					handler="onNetworkModelChanged"}
			intf:popParent(true)
			
			intf:popParent() -- choicebook.
		intf:popParent(true) -- mission page
		
		intf:pushBookPage{caption="Controls"}
		intf:popParent(true) -- controls page
		
		intf:pushBookPage{caption="Turrets"}
		intf:popParent(true) -- turrets page

		intf:pushBookPage{caption="Outputs"}
		intf:popParent(true) -- outputs page
		
		intf:pushBookPage{caption="Network"}
		intf:popParent(true) -- Network page
	intf:popParent()
	
	intf:addOutputPanel{}
	intf:popParent(true)
	
	parent:Layout()	
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

return Class -- return class instance.
