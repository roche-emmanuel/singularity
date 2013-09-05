local Class = require("classBuilder"){name="MainFrame",bases="mxe.TurretController"};

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

function Class:initialize(options)
	-- build the main frame on the app frame:
	self:check(options and options.app,"Invalid app to build main frame")
	
	-- first retrieve the list of turret/output/network/platform models
	local prefix = root_path .. "/lua/modules/vbsng/models/"
	local turretList = self:findModels(prefix .."turret/")
	self:findModels(mxe_root .. "models/turret/",turretList)
	local platformList = self:findModels(prefix .."platform/")
	local outputList = self:findModels(prefix .."output/")
	local networkList = self:findModels(prefix .."network/")

	
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"
	
	local app = options.app
	
	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame(),handler=self}
	self._intf = intf
	
	local panel = intf:pushPanel{prop=1,flags=wx.wxEXPAND}
	
	intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushBookPage{caption="Mission"}
		
			intf:pushSizer{text="Mission settings",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
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
							-- choices={"MX15HDi","MX15DiD","MX15DiD_SOCOM","basic_turret","awe_turret"},
							choices=turretList,
							defaultValue="MX15DiD_SOCOM",
							handler="onTurretModelChanged"}
						intf:addSingleChoiceEntry{name="single_turret.platform_model",prop=1,caption="Platform model",
							-- choices={"basic_platform","basic_platform_2","basic_platform_offset1"},
							choices=platformList,
							defaultValue="basic_platform",
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
				intf:popParent(true)
				
				intf:popParent() -- choicebook.
			intf:popSizer()
			
			intf:pushSizer{text="Debugging",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
				intf:addCheckBox{text="Debug textures",tip="Toggle VBSHook debug outputs",
									 handler="toggleVBSHookDebug"}
				intf:addCheckBox{text="With alt surfaces",tip="Toggle VBSHook alt surfaces display",
									 handler="toggleVBSHookAltSurface"}
									 
									 
				intf:addSpacer{prop=1}
				intf:addBitmapButton{src="check",tip="Perform mission level unit tests",
									 -- flags=wx.wxALIGN_RIGHT,
									 handler="performMissionUnitTests"}
				intf:addBitmapButton{src="check@earth",tip="Perform global level unit tests",
									 -- flags=wx.wxALIGN_RIGHT,
									 handler="performGlobalUnitTests"}
			intf:popSizer()
			
		intf:popParent(true) -- mission page
		
		intf:pushBookPage{caption="Controls"}
			self:buildControlPanel()
		intf:popParent(true) -- controls page
		
		intf:pushBookPage{caption="Turrets"}
		intf:popParent(true) -- turrets page

		intf:pushBookPage{caption="Outputs"}
		intf:popParent(true) -- outputs page
		
		intf:pushBookPage{caption="Network"}
		intf:popParent(true) -- Network page
	intf:popParent()

	intf:pushSizer{text="Logging",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
		intf:pushSizer{orient=wx.wxVERTICAL,prop=2,flags=wx.wxEXPAND}
			local owin
			owin, self._output = intf:addOutputPanel{prop=2,flags=wx.wxALL+wx.wxEXPAND}
			intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
				intf:addBitmapButton{src="delete",tip="Clear the log console",
							 handler="clearLogConsole"}
				-- intf:addSpacer{size=5}						 
				intf:addSingleChoiceEntry{name="logging.log_level",prop=1,caption="Log level",
								choices={"Fatal","Error","Warning","Notice","Info","Debug0",
										 "Debug1","Debug2","Debug3","Debug4","Debug5"},
								defaultValue="Debug0",
								handler="changeLogLevel"}
				intf:addSpacer{size=10}
				intf:addBoolEntry{name="logging.verbose_state",caption="Verbose",style=0,
								  flags=wx.wxALIGN_CENTER_VERTICAL,
								  tip="Toggle verbose outputs", handler="toggleVerbose"}
			intf:popSizer()
		intf:popSizer()
		
		intf:pushSizer{orient=wx.wxVERTICAL,prop=1,flags=wx.wxEXPAND}
			self._execTc = intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND,
											style=bit.bor(wx.wxTE_MULTILINE,wx.wxTE_BESTWRAP,wx.wxTE_RICH2)}
			intf:addBitmapButton{src="execute", flags=wx.wxALL+wx.wxALIGN_RIGHT,
								 tip="Execute the content of the script console",
								 handler="executeScript"}
		intf:popSizer()
	intf:popSizer()
	
	intf:popParent(true)
	
	parent:Layout()	
	parent:Fit()
	
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
	assert.InstanceOf(require "mission.SingleTurretMission",mobj)
	mobj:setTurretModel(data.value)
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

function Class:performMissionUnitTests()
	if not self:isMissionRunning() then
		self:error("Cannot perform mission tests when no mission is running.")
		return
	end
	
	local tester = require "utils.MissionUnitTests"
	tester:run()
end

function Class:toggleVBSHookDebug(intf,event)
	local comp = require "engine.CompositeHandler"
	local handler = comp:getHandler("MainHandler")
	self:check(handler,"Invalid main handler.")
	
	self:info("Should toggle VBSHook debug state to: ",event:IsChecked())
	handler:setDebugTextures(event:IsChecked())
end

function Class:toggleVBSHookAltSurface(intf,event)
	local comp = require "engine.CompositeHandler"
	local handler = comp:getHandler("MainHandler")
	self:check(handler,"Invalid main handler.")
	
	self:info("Should toggle Alt surface state to: ",event:IsChecked())
	handler:setWithAltSurface(event:IsChecked())
end

function Class:toggleVerbose(data)
	self:info("Toggling verbose outputs to : ",data.value)
	sgt.LogManager.instance():setVerbose(data.value)
	
	scLog.LogManager.instance():setVerbose(data.value)
end

function Class:clearLogConsole(data)
	self:info("Clearing log outputs...")
	self._output:clear()
end

function Class:changeLogLevel(data)
	self:info("Changing log level to : ",data.value)
	local lvl = sgt.LogManager[data.value:upper()]
	sgt.LogManager.instance():setNotifyLevel(lvl)
	scLog.LogManager.instance():setNotifyLevel(lvl)
end

function Class:performGlobalUnitTests()
	local tester = require "utils.GlobalUnitTests"
	tester:run()
end

function Class:executeScript()
	-- execute the content of the script console:
	local content = self._execTc:GetValue()
	if content == "" then
		return -- nothing to do.
	end
	
	local f, msg = loadstring(content)
	if not f then
		self:error("Error while compiling lua chunk: ",msg)
		return
	end
	
	-- The chunk was compiled successfully, now execute it:
	local status, msg = pcall(f)
	if not status then
		self:error("Error while executing lua chunk: ",msg)
	end
end


return Class -- return class instance.
