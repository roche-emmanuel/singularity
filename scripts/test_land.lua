#!/bin/sgt

log:notice "Executing init script..."

local App = require "osg.land.TestApp"
local app = App{profileFile="test_land_profile.log"}

app:run()
	
log:notice "Script execution done."
