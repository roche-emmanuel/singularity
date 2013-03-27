#!/bin/sgt

log:info("Updating file content.")

local lpeg = require "lpeg"

function gsub (s, patt, repl)
  patt = lpeg.P(patt)
  patt = lpeg.Cs((patt / repl + 1)^0)
  return lpeg.match(patt, s)
end

-- for each file we have to open and read the file content:
function handleFile(data)
	local filename = data.fullpath
	log:info("Checking file ".. filename)
	local f = io.open(filename,"r")
	local str = f:read("*a");
	f:close()
	
	-- Now check if we find the assert word:
	-- local res = str:gsub('([^%w_"])FLOAT([^%w_"])',"%1ork::FLOAT%2")
	-- local res = str:gsub('([^%w_"])POINTS([^%w_"])',"%1ork::POINTS%2")
	local res = str:gsub("([^%w_])std::max([^%w_])","%1osg::maximum%2")
	local res = res:gsub("([^%w_])std::min([^%w_])","%1osg::minimum%2")
	
	if res ~= str then
		log:info("Updating file ".. filename)
		res = '#include "sgtCommon.h"\n\n' .. res
		f = io.open(filename,"w")
		f:write(res)
		f:close()
	end
end

local target_dir = "W:/Cloud/Projects/singularity/sources/plug_proland"

fs:traverse{path=target_dir,
	func=handleFile,
	recursive=true,
	pattern="%.cpp$"}
	
fs:traverse{path=target_dir,
	func=handleFile,
	recursive=true,
	pattern="%.h$"}

log:info("Update done.")
