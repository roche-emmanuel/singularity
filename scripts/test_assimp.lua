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
local app = App{profileFile="test_assimp_profile.log"}

app:loadModel("tests/data/CoconutGroveHouse/models/AutoSave_AA.- Casa #17.1.dae.assimp")

app:run()
	
log:notice "Script execution done."
