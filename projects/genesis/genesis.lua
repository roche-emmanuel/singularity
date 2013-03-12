#!/bin/sgt

log:notice "Starting genesis..."

-- get current working dir:
local path = fs:getCurrentWorkingDirectory()
log:debug2_v("Current working dir is: ", path)
addLuaPath(path .. "modules/?.lua")

-- add the path to the config:
config.genesis_path = path

-- local App = require "gui.web.BookApp"
local App = require "genesis.App"
local app = App{profileFile="profile.log"}

app:run()
	
log:notice "Genesis stopped."
