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

-- This function can be used to load a package easily:
_G.requirePackage = function(packName)
	sgt.ModuleProvider.loadPackage(root_path .. "bin/" .. flavor .. "/packages/" .. packName .. ".lpak")
end

-- function used to add a search path for lua module:
_G.addLuaPath = function(path)
	sgt.doLog(sgt.LogManager.DEBUG2,"Adding lua path '" .. path .. "'")
	package.path = package.path .. ";" .. path
end

_G.addModulePath = function(path)
	sgt.doLog(sgt.LogManager.DEBUG2,"Adding module path '" .. path .. "'")
	package.cpath = package.cpath .. ";" .. path
end

-- retrieve config:
_G.config = require "config"

-- setup garbage collection:
collectgarbage('setpause',config.gc_pause or 100)
collectgarbage('setstepmul',config.gc_step_multiplier or 200)

sgt.LogManager.instance():setNotifyLevel(sgt.LogManager[config.log_level or "INFO"])
sgt.LogManager.instance():setVerbose(config.log_verbose)
sgt.LogManager.instance():setDefaultLevelFlags(sgt.LogManager.TIME_STAMP+sgt.LogManager.THREAD_ID)
sgt.LogManager.instance():setDefaultTraceFlags(sgt.LogManager.TIME_STAMP+sgt.LogManager.THREAD_ID)


sgt.doLog(level,"Loading external package...")
-- sgt.ModuleProvider.loadPackage(root_path .. "bin/".. flavor .."/packages/externals.lpak")
requirePackage "externals"

require "luna"

local v = require "version"
sgt.doLog(level,("Starting Singularity v%d.%d.%d build %d - %s"):format(v.major,v.minor,v.patch,v.build,v.date));

require "extensions.core" -- this one should be loaded manually.

_G.log = require "logger"

_G.fs = require "base.FileSystem"

_G.profiler = require "debugging.Profiler"

sgt.doLog(level,"Creating StartModule class.")
local Class = require("classBuilder"){name="StartModule",bases="base.Object"};

function Class:initialize(options)
	self:debug2("Initializing start module.")
end

return Class()
