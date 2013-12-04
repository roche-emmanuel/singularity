local Class = require("classBuilder"){name="DebugPanel",bases="gui.wx.InterfaceComponent"};

local vbsDX = require "vbsDX"

function Class:buildComponent(intf)
	
	intf:pushSizerV{text="Debugging",prop=0,flags=wx.wxEXPAND,function()
		self._fpsSt = intf:addStaticText{text="Current framerate: 0 FPS"}
		intf:pushSizerH{prop=0,flags=wx.wxEXPAND,function()
			intf:addCheckBox{text="Debug textures",tip="Toggle VBSHook debug outputs",
								 handler="toggleVBSHookDebug"}
			intf:addCheckBox{text="With Depth surfaces",tip="Toggle VBSHook depth surfaces display",
							 handler="toggleVBSHookDepthSurface"}								 
								 
			intf:addSpacer{prop=1}
			intf:addBitmapButton{src="check",tip="Perform mission level unit tests",
								 -- flags=wx.wxALIGN_RIGHT,
								 handler="performMissionUnitTests"}
			intf:addBitmapButton{src="check@earth",tip="Perform global level unit tests",
								 -- flags=wx.wxALIGN_RIGHT,
								 handler="performGlobalUnitTests"}
		end}
	end}
	
	self:connectFPSTimer()	
end

function Class:connectFPSTimer()
	-- use the scheduler to update the FPS display:
	local scheduler = require "gui.wx.Scheduler"
	local fh = require "fusion.FusionHandler"
	scheduler:addTimer{frequency=10,callback=function(event) 
		-- self:info("writing FPS value!")
		self._fpsSt:SetLabel(("Current framerate: %.2f FPS."):format(fh:getFPS():at(1)))
	end}	
end

function Class:toggleVBSHookDebug(intf,event)
	local comp = require "engine.CompositeHandler"
	local handler = comp:getHandler("MainHandler")
	self:check(handler,"Invalid main handler.")
	
	self:info("Should toggle VBSHook debug state to: ",event:IsChecked())
	handler:setDebugTextures(event:IsChecked())
end

function Class:toggleVBSHookDepthSurface(intf,event)
	local comp = require "engine.CompositeHandler"
	local handler = comp:getHandler("MainHandler")
	self:check(handler,"Invalid main handler.")
	
	self:info("Should toggle Depth surface state to: ",event:IsChecked())
	handler:setWithDepthSurface(event:IsChecked())
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

return Class 
