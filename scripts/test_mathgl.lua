#!/bin/sgt

log:notice "Executing init script..."

local App = require "osg.mathgl.TestApp"
local app = App{profileFile="test_mathgl_profile.log"}

app:run()
	
log:notice "Script execution done."
