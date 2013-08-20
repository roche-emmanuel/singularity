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
	if self._app then
		self._app:getFrame():Close(true)
		self._app = nil
	end
	self:info "Cleaning up..."
	wx.wxEntryCleanup()
	collectgarbage('collect')
	self:info "Cleanup done."	
end

function Class:onLoad()
	
	local loader = function()
		self:info("Now loading...")

		local cfg = require "config"
		local core = require "core"

		-- core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

		-- local App = require "gui.wx.SimpleApp"
		local App = require "mxe.App"
		local MainFrame = require "mxe.MainFrame"

		local app = App()
		
		MainFrame{app=app} -- build the main frame on it.
		
		self._app = app
	end
	
	local res, err = pcall(loader)
	if not res then
		self:error("OnLoad callback for MXE failed with error: ", err)
		wx.wxMessageBox("OnLoad callback for MXE failed with error: ".. tostring(err),"Internal error")
	end
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
