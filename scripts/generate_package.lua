
dofile(sgt_path .. "scripts/generate_common.lua")

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

--local man = core.LogManager.instance()
--man:setNotifyLevel(core.LogManager.DEBUG2)
core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local fs = require "base.FileSystem"

-- check if we have a specific generation command in the parent folder:
if fs:exists(src_path.."../generate.lua") then
	dofile(src_path.."../generate.lua")
end

require("utils.LuaCConverter"){src_folder=src_path,package=project}

collectgarbage('collect')

log:notice "Done generating package."





