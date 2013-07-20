local Class = require("classBuilder"){name="MXEHandler",bases={"engine.BasicHandler"}};

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

	local App = require "gui.wx.SimpleApp"
	local BasicInterface = require "gui.wx.BasicInterface"

	local app = App()

	local parent = app:getFrame()

	parent:SetCursor(wx.wxCURSOR_HAND);

	local intf = BasicInterface{root=app:getFrame()}

	local panel = wx.wxPanel:new(parent,wx.wxID_ANY);
	local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
	parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

	panel:SetSizer(sizer)
	intf:pushParent(panel,sizer)

	intf:popParent(true)

	intf:addSpacer{size=30}

	local panel = wx.wxPanel:new(parent,wx.wxID_ANY);
	local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
	parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

	panel:SetSizer(sizer)
	intf:pushParent(panel,sizer)

	intf:popParent(true)

	parent:Layout()

	self._app = app
end

function Class:onSimulationStep(obj,deltaT)
	-- self:info("Refreshing...")
	-- self._app:getFrame():Refresh()
end

-- Add this handler to the master:
local comp = require "engine.CompositeHandler"
local handler = Class()
comp:addHandler(handler)

-- return the newly create handler:
return handler
