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
local app = App{profileFile="test_spark_profile.log"}

local mt = app:loadModel("tests/data/glider.osgt")
app:createCube(1)
app:createBase()
app:applyCircleAnimation(mt, 4.0, 6.0)

--local spark = require "spark"

app:run()
	
log:notice "Script execution done."
