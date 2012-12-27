#!/bin/sgt

require "luna"
 
--require("mobdebug").start()

-- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local App = require "gui.wx.SimpleApp"

local onStartFunc = function(parent)
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=parent}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	local ctrl, canvas = intf:addOSGCtrl{}
	intf:popParent(true)

	parent:Layout()

	local tools = require "osg.Tools"

	local WebTile = require "web.WebTile"
	local obj = WebTile()
	canvas:getRoot():addChild(obj:getWrapper())
	-- obj:loadURL("http://www.google.fr")
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

local app = App{onStart=onStartFunc,profileFile="test_osg_profile.log"}

--obj:info("Creation completed")
app:run()
	
log:notice "Script execution done."
