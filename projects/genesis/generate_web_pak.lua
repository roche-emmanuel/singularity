#!/bin/sgt

local awe = require "Awesomium"

local outfile = "assets.pak"
local dir = "assets/" 
local ignore = ""
local num = 0;

log:info("Generating ",outfile," from dir ",dir)
awe.WriteDataPak(outfile,dir,ignore,num);

collectgarbage('collect')

log:notice "Web pak generation done."
