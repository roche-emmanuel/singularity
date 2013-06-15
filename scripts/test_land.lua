#!/bin/sgt

log:notice "Executing init script..."

-- local App = require "osg.land.TestApp"
-- local App = require "osg.land.TestApp2"
-- local App = require "osg.land.TestApp3"
local App = require "osg.land.TestApp4"
local app = App{profileFile="test_land_profile.log"}

app:run()
	
log:notice "Script execution done."
