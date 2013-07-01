#!/bin/sgt

require("unittests"){path="tests/dev"}

require("test.Manager") -- to initialize the test envo properly.

local sm = require "serialization.SerializationManager"
sm:uninitialize()

collectgarbage('collect')

log:notice "Script execution done."
