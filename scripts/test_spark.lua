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

local App = require "spark.SparkTestApp"
local app = App{profileFile="test_spark_profile.log",system="simple"}

app:run()
	
log:notice "Script execution done."
