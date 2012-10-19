#!/bin/sgt

require "luna"
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
intf:addStaticText{text="Hello manu!"}
intf:addStaticLine{}
intf:addStaticBitmap{bitmap=im:getBitmap("folder@add")}
intf:popParent(true)

intf:addSpacer{size=30}

intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
intf:addSlider{}
intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND}
intf:addButton{text="My button"}
intf:popParent(true)


parent:Layout()

app:run()
	
log:notice "Script execution done."