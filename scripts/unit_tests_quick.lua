#!/bin/sgt

require("unittests"){path="tests/dev"}

local sm = require "serialization.SerializationManager"
sm:uninitialize()

collectgarbage('collect')

log:notice "Script execution done."
