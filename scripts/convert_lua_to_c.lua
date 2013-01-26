#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

--local man = core.LogManager.instance()
--man:setNotifyLevel(core.LogManager.DEBUG2)
core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

require("utils.LuaCConverter")()

collectgarbage('collect')

log:notice "Script execution done."
