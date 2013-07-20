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
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local app = App()

	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame()}

	intf:pushPanel{prop=1,flags=wx.wxEXPAND}
	-- intf:addStringEntry{name="my_string",caption="My string"}
	intf:addSingleChoiceEntry{name="mission",caption="Current Mission",
		choices={"TestTurret","TestTurret2","TestTurret3","TestTurret4"},
		defaultValue=self.cfg.default_mission,
		handler=function(data)
			local val = data.value
			self:info("Setting current mission class to ",val)
			self:getMissionManager():setMissionClass(val)
		end}
		
	-- intf:addBoolEntry{name="my_bool",caption="My bool"}
	-- intf:addDoubleEntry{name="my_double",caption="My double"}
	-- intf:addColorEntry{name="my_color",caption="My color"}
	-- intf:addIntegerEntry{name="my_int",caption="My integer"}
	-- intf:addVec3dEntry{name="my_data.my_vec3d",caption="My vec3d"}
	intf:addOutputPanel{}
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
