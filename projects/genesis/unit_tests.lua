#!/bin/sgt

local path = fs:getCurrentWorkingDirectory()
addLuaPath(path .. "modules/?.lua")

dofile(path .. "config.lua")

require("unittests"){sourcePath=path.."modules", path="genesis/tests"}

collectgarbage('collect')

log:notice "Script execution done."

