#!/bin/sgt

require("unittests")()

local sm = require "serialization.SerializationManager"
sm:uninitialize()

collectgarbage('collect')

log:notice "Script execution done."
