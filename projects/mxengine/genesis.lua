#!/bin/sgt

log:notice "Starting genesis..."

-- get current working dir:
local path = fs:getCurrentWorkingDirectory()
log:debug2_v("Current working dir is: ", path)
addLuaPath(path .. "modules/?.lua")

dofile(path .. "config.lua")
config.genesis.root_path = path

require "wx" -- need to require this before accessing the ImageManager.
local im = require "gui.wx.ImageManager"
im:addImagePath(path .."assets/images/")

-- local App = require "gui.web.BookApp"
local App = require "genesis.App"
-- local App = require "genesis.AppWebPanel"
-- local App = require "genesis.AppTest"
local app = App{profileFile="profile.log"}

app:run()
	
log:notice "Genesis stopped."
