#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

-- local App = require "misc.RedBirdApp"
local App = require "misc.RedBirdDumpApp"
local app = App{profileFile="test_redbird_mockup_profile.log"}

app:run()
	
log:notice "Script execution done."
