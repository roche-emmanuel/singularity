#!/bin/sgt

log:notice "Executing init script..."

local App = require "misc.FrequencyTestApp"
local app = App{profileFile="test_frequency_profile.log"}

app:run()
	
log:notice "Script execution done."
