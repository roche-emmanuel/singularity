require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

log:debug0("Flavor is: ".. flavor)
log:debug0("Path is: ".. root_path)

if flavor=="ds411" then
	log:notice "Script execution done on ds411."
end

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG4)

if cfg.tests_enabled then
	require "unittests"
end

if cfg.init_script then
	local script = root_path.."lua/scripts/".. cfg.init_script
	log:info("Executing script: ",script)
	dofile(script)
end

-- load the finance agent here:
--local agent = require("finance.AgentProto1")();

--log:info("Running finance agent...")
--agent:run()
--log:info("Finance agent terminated.")

local mainframe = cfg.mainframe_enabled and require "gui.MainFrame"

if mainframe then
	mainframe:run()
end

log:notice "Script execution done."
