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

local App = require "osg.OSGTestApp"
local app = App{profileFile="test_freeimage_profile.log"}

local tools = require "osg.Tools"

local img = tools:getImage("tests/data/tong.psd.freeimage")

app:check(img,"Invalid Image result")

local quad = tools:createScreenQuad{image=img}
app:getRoot():addChild(quad)

app:run()
	
log:notice "Script execution done."
