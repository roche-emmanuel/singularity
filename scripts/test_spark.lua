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
-- local app = App{profileFile="test_spark_profile.log",system="simple"}
local app = App{profileFile="test_spark_profile.log",system="smoke"}
-- local app = App{profileFile="test_spark_profile.log",system="fire"}
-- local app = App{profileFile="test_spark_profile.log",system="explosion"}
-- local app = App{profileFile="test_spark_profile.log",system="rain"}

app:run()

app = nil
collectgarbage('collect')
	
log:notice "Script execution done."
