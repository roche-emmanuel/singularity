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

if lanes then
	log:notice("lanes module found")
else
	log:error("lanes module not found")
end

lanes.configure({protect_allocator=true, with_timers=false})

-- check if we have a createEnv function:
if createEnv then
	log:notice("Have createEnv")
	local env = createEnv()
	if env then
		log:notice("Env created")
		env:init()
	else
		log:error("Cannot create env.")
	end
else
	log:error("createEnv function not found")
end
	
log:notice "Script execution done."
