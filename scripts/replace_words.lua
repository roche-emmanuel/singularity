#!/bin/sgt

log:info("Updating file content.")

-- for each file we have to open and read the file content:
function handleFile(data)
	local filename = data.fullpath
	log:info("Checking file ".. filename)
	local f = io.open(filename,"r")
	local str = f:read("*a");
	f:close()
	
	-- Now check if we find the assert word:
	local res = str:gsub("assert%(","sgtASSERT(")
	
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
