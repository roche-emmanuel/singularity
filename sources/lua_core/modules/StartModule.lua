_G.requireLua = _G.require

local sgt = require "core"
local level = sgt.LogManager.INFO

sgt.doLog(level,"Updating require function.")

_G.require = function(modName)
	-- sgt.doLog(level,"Requiring module ",modName)
	
	if package.loaded[modName] then
		return package.loaded[modName]
	end
	
	local content = sgt.ModuleManager.instance().getModule(modName)
	if content=="" then
		return _G.requireLua(modName)
	else
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
end

sgt.doLog(level,"Loading external package...")
sgt.ModuleProvider.loadPackage(root_path .. "bin/".. flavor .."/packages/externals.lpak")

require "luna"

_G.log = require "logger"

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

sgt.doLog(level,"Creating StartModule class.")
local Class = require("classBuilder"){name="StartModule",bases="base.Object"};

function Class:initialize(options)
	self:debug2("Initializing start module.")
end

return Class()
