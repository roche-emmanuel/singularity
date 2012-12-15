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
local Interface = require "gui.wx.ControlInterface"
local im = require "gui.wx.ImageManager"

local app = App()

local parent = app:getFrame()

local intf = Interface{root=app:getFrame()}

intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
local ctrl, canvas = intf:addOSGCtrl{}
intf:popParent(true)

parent:Layout()

canvas:createScreenQuad();

app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
