#!/bin/sgt

local awe = require "Awesomium"

local outfile = "genesis_assets.pak" --root_path .. "../projects/genesis/
local dir = "web/" --root_path .. "../projects/genesis/
local ignore = ""
local num = 0;

log:info("Generating ",outfile," from dir ",dir)
awe.WriteDataPak(outfile,dir,ignore,num);

collectgarbage('collect')

log:notice "Web pak generation done."
