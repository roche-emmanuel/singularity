local Class = require("classBuilder"){name="MXEHandler",bases={"engine.BasicHandler"}};

local fh = require "fusion.FusionHandler"

--[[
Class: mxe.MXEHandler

MXEngine specific handler used to create the extension interface.

This class inherits from <engine.BasicHandler>.
]]

--[=[
--[[
Constructor: MXEHandler

Create a new instance of the class.
]]
function MXEHandler(options)
]=]
function Class:initialize(options)
	
end

function Class:onUnload()
	self:info("Now unloading...")
	self:info("Closing frame")
	self._app:getFrame():Close(true)
	self._app = nil
	self:info "Cleaning up..."
	wx.wxEntryCleanup()
	collectgarbage('collect')
	self:info "Cleanup done."	
end

function Class:onLoad()
	self:info("Now loading...")

	local cfg = require "config"
	local core = require "core"

	-- core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

	-- local App = require "gui.wx.SimpleApp"
	local App = require "mxe.App"
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local app = App()

	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame()}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}

	intf:addStaticText{text="Hello manu!"}
	intf:addStaticLine{}
	intf:addStaticBitmap{bitmap=im:getBitmap("folder@add")}
	intf:addDatePickerCtrl{handler=intf.debugShowEvent}
	intf:addTimePickerCtrl{handler=intf.debugShowEvent,flags=wx.wxALL}
	intf:addFontPickerCtrl{handler=intf.debugShowEvent}
	intf:addOSGCtrl{}
	intf:addSTCCtrl{flags=wx.wxALL+wx.wxEXPAND,prop=1}


	intf:popParent(true)

	intf:addSpacer{size=30}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addSlider{}
	intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	-- intf:addButton{text="My button",handler=intf.debugShowEvent}
	intf:addButton{text="My button",handler=function(event)
		-- check if there is a mission is the mission manager:
		local mis = self:getMissionManager():getCurrentMission()
		if mis then
			wx.wxMessageBox("Running mission: "..mis._CLASSNAME_)
		else
			wx.wxMessageBox("No mission running!")
		end
	end}
	intf:addBitmapButton{src="add",handler=intf.debugShowEvent}

	intf:popParent(true)

	parent:Layout()

	self._app = app
end

function Class:onSimulationStep(obj,deltaT)
	-- self:info("Refreshing...")
	-- self._app:getFrame():Refresh()
	-- local mis = self:getMissionManager():getCurrentMission()
	-- if mis then
		-- fh:showMap()
	-- end
end

-- Add this handler to the master:
local comp = require "engine.CompositeHandler"
local handler = Class()
comp:addHandler(handler)

-- return the newly create handler:
return handler
