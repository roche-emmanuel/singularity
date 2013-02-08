_G.requireLua = _G.require

local sgt = require "core"
local level = sgt.LogManager.INFO

sgt.doLog(level,"Updating require function.")

local loadModule = function(content,modName)
	-- sgt.doLog(level,"Found internal content for module ",modName)
	
	-- load the module content:
	local func, msg = loadstring(content,modName)
	if not func then
		sgt.doLog(sgt.LogManager.ERROR,"Cannot load content for module ", modName,": ",msg)
		return
	end
	
	-- the function is loaded properly, now call it:
	local res = func()
	-- if not res and not package.loaded[modName] then
		-- sgt.doLog(sgt.LogManager.ERROR,"No result when loading module "..modName)		
	-- end
	
	package.loaded[modName] = package.loaded[modName] or res or true
	return package.loaded[modName]
end

_G.require = function(modName)
	-- sgt.doLog(level,"Requiring module ",modName)
	if package.loaded[modName] then
		return package.loaded[modName]
	end
	
	local res;
	
	local content = sgt.ModuleManager.instance().getModule(modName)
	if content=="" then
		res = _G.requireLua(modName)
	else
		res = loadModule(content,modName)		
	end
	
	-- check if we have extensions for this module:
	--sgt.doLog(level,"Trying to load extensions:  extensions."..modName)
	local ext = sgt.ModuleManager.instance().getModule("extensions." .. modName)
	if ext ~= "" then
		sgt.doLog(level,"Loading extensions for module "..modName)
		loadModule(ext,"extensions." .. modName)
	end
		
	return res;
end

sgt.doLog(level,"Loading external package...")
sgt.ModuleProvider.loadPackage(root_path .. "bin/".. flavor .."/packages/externals.lpak")

require "luna"

require "extensions.core" -- this one should be loaded manually.

_G.log = require "logger"

_G.fs = require "base.FileSystem"

_G.profiler = require "debugging.Profiler"

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)
core.LogManager.instance():setDefaultLevelFlags(core.LogManager.TIME_STAMP+core.LogManager.THREAD_ID)
core.LogManager.instance():setDefaultTraceFlags(core.LogManager.TIME_STAMP+core.LogManager.THREAD_ID)

sgt.doLog(level,"Creating StartModule class.")
local Class = require("classBuilder"){name="StartModule",bases="base.Object"};

function Class:initialize(options)
	self:debug2("Initializing start module.")
end

return Class()
