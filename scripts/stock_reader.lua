#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

--core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG4)

-- load the finance agent here:
local agent = require("finance.AgentProto1")();

log:info("Running finance agent...")
agent:run()
log:info("Finance agent terminated.")

log:notice "Script execution done."
