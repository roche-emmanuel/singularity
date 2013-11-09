
-- When calling this script externally the caller should provide the following arguments:
-- flavor [optional, default = "win32" ] : Use to specify which flavor of the lua modules should be loaded.
-- sgt_path : the root path of the singularity repository, this is needed to retrieve the modules.
-- xml_path : the folder where the source xml files are located
-- project : the current project name.

flavor = flavor or "win32"
sgt_path = sgt_path:gsub("\\","/")
root_path = sgt_path .. "software/"
dest_path = sgt_path .. "sources/plug_" .. project .. "/"

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua;".. sgt_path .."sources/lua_core/modules/?.lua;".. sgt_path .."sources/lua_externals/modules/?.lua;"

require "core"

