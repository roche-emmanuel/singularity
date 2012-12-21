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

local tools = require "osg.Tools"

--tools:createScreenQuad{parent=canvas:getRoot()};

local WebTile = require "web.WebTile"
local obj = WebTile()
canvas:getRoot():addChild(obj:getWrapper())
--obj:loadURL("http://www.google.fr")
obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")

-- local quad = tools:createScreenQuad{image=obj:getImage()}
local tt = {}
function tt:traverse(nv)
	log:info("I'm calling traverse!")
end

-- local grp = osg.Group(tt)
-- grp:addChild(quad)

-- canvas:getRoot():addChild(grp)

--canvas:getRoot():addChild(quad)


--obj = require("osg.BasicNode")()
--wrap = obj:getWrapper()
--canvas:getRoot():addChild(wrap)

--local obj = osg.Node()

--canvas:getRoot():addChild(quad)
--canvas:getRoot():addChild(obj)

--obj:info("Creation completed")
app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
