#!/bin/sgt
version_path=arg[1]:gsub("\\","/")

-- print("Version path is: ", version_path)
package.path= version_path.."/?.lua;" .. package.path

local version = require "version"
io.write(version[arg[2]])
