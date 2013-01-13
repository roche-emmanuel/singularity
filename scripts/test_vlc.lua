#!/bin/sgt


-- NOTE: Need to disable the win7 firewall for this example to work.

require "luna"
 
--require("mobdebug").start()

-- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local App = require "vlc.VLCTestApp"
local app = App{profileFile="test_vlc_profile.log",file="tests/data/skinned.mp4"}
-- local app = App{profileFile="test_vlc_profile.log",file="tests/data/dataset.avi"}
-- local app = App{profileFile="test_vlc_profile.log",file="tests/data/zerobrane.mp4"}

app:run()
	
log:notice "Script execution done."
