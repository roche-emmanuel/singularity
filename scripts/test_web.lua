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

-- local App = require "gui.web.TestApp"
local App = require "gui.web.BookApp"
local app = App{profileFile="test_web_profile.log"}

app:run()
	
log:notice "Script execution done."
