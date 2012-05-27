flavor = flavor or "win32"
sgt_path=sgt_path or "W:/Shared/Dev/Projects/singularity/"
root_path = sgt_path.."software/"
dest_path= dest_path or "W:/Shared/Dev/Projects/singularity/sources/plug_" .. project
src_path = src_path or dest_path

root_path = root_path:gsub("\\","/")

print("Flavor is: ".. flavor)
print("Path is: ".. root_path)
print("Dest path is: ".. dest_path)
print("Src path is: ".. src_path)
print("Project name is: ".. project)

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

log = require "logger" 

log:info "Executing init script"

function stdStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function stdStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

local tc = require "bindings.TypeConverter"
	
tc:setFromLuaConverter("std::string",stdStringFromLua)
tc:setFromLuaConverter("string",stdStringFromLua)
tc:setToLuaConverter("std::string",stdStringToLua)
tc:setToLuaConverter("string",stdStringToLua)

local im = require "bindings.IgnoreManager"

im:getIgnoreFunctionsPatterns():push_back("boost::any")
im:getIgnoreFunctionsPatterns():push_back("slot_type")
im:getIgnoreFunctionsPatterns():push_back("iterator")
im:getIgnoreFunctionsPatterns():push_back("std::ostream")
im:getIgnoreFunctionsPatterns():push_back("registerKeyObserver")

local options = {
	xmlpath=src_path.."/xml",
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path.."/",
}

function buildBindings()
    log:info("Generating reflection...")
    local ReflectionGenerator = require "bindings.LunaReflectionGenerator"
	ReflectionGenerator.generate(options)
    log:info("Luna reflection generated.")
end

local t0 = os.clock()
buildBindings()
local dt = os.clock()-t0

log:notice("Done executing script in "..dt.." seconds.")


