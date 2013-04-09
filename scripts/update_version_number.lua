#!/bin/sgt

version_path=arg[1]:gsub("\\","/")

nver=arg[2]

-- print("Version path is: ", version_path)
package.path= version_path.."/?.lua;" .. package.path

local version = require "version"
-- print("Reading major=",version.major,", minor=",version.minor,", patch=",version.patch,", build=",version.build,", date='",version.date,"'")

-- increment build:
local content = [[local version = {}

version.major = %d
version.minor = %d
version.patch = %d

version.build = %d
version.date = "%s"

return version;
]]

if nver and nver~="major" and nver~="minor" and nver~="patch" then
	print("Parsing version number: ",nver)
	local p1,p2,major,minor,patch = nver:find("(%d+)%.(%d+)%.(%d+)")
	version.major = major+0
	version.minor = minor+0
	version.patch = patch+0
end

local file = io.open(version_path.."/version.lua","w")
file:write(content:format(version.major,version.minor,version.patch,version.build + 1,os.date()))
file:close()

print(("Version file updated to v%d.%d.%d build %d"):format(version.major,version.minor,version.patch,version.build + 1))
