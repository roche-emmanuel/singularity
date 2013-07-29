local vlog = require "logger"

vlog:notice "Starting MXEngine extension..."

sgt_root="W:/Cloud/Projects/singularity/software/"
mxe_root="W:/Cloud/Projects/singularity/projects/mxengine/modules/"

flavor="win32"

local setupPackagePaths = function()
	package.cpath = sgt_root.."bin/win32/libraries/?.dll;"..package.cpath
	package.cpath = sgt_root.."bin/win32/libraries/?51.dll;"..package.cpath
	package.cpath = sgt_root.."bin/win32/modules/?.sgp;"..package.cpath

	package.path = sgt_root.."lua/libraries/?.lua;"..package.path
	package.path = sgt_root.."lua/libraries/?/?.lua;"..package.path
	package.path = sgt_root.."lua/libraries/?/init.lua;"..package.path
	package.path = sgt_root.."lua/modules/?.lua;"..package.path
	package.path = sgt_root.."lua/modules/?/?.lua;"..package.path
end

local setupLogManager = function(file)
	require "core"
	--require "extensions.core"

	local lman = sgt.LogManager.instance()
	
	-- Init the log system.
	lman:setDefaultLevelFlags(sgt.LogManager.TIME_STAMP);
	lman:setDefaultTraceFlags(sgt.LogManager.TIME_STAMP);
	lman:addLevelFlags(sgt.LogManager.FATAL,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));
	lman:addLevelFlags(sgt.LogManager.ERROR,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));
	lman:addLevelFlags(sgt.LogManager.WARNING,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));

	lman:setVerbose(true);
	lman:setNotifyLevel(sgt.LogManager.DEBUG0); -- Log until DEBUG0 level only.

	lman:addSink(sgt.FileLogger(file));
	-- lman:addSink(sgt.StdLogger());
end

for k,v in pairs(package.loaded) do
	vlog:info("Already loaded package: ", k)
end

local mxObj = require "base.Object"

-- remove previously loaded packages that should be overriden:
package.loaded["base.Object"] = nil
package.loaded["logger"] = nil
package.loaded["tracer"] = nil
package.loaded["logging.LoggerBase"] = nil
package.loaded["logging.DefaultTracer"] = nil
package.loaded["logging.DefaultLogger"] = nil
package.loaded["std.Vector"] = nil
package.loaded["std.Set"] = nil

setupPackagePaths()
setupLogManager("mxengine.log")

sgt.ModuleProvider.loadPackage(sgt_root.. "bin/win32/packages/core.lpak");

local startModule = sgt.ModuleProvider.getModule("StartModule");
local func = loadstring(startModule,"startModule")
local res, err = pcall(func)
if not res then
	error("Executing start module failed with error: "..err)
end

local realObj = require "base.Object"

-- package.loaded["base.Object"] = mxObj

-- force integrating the MX base object functions into our base Object:
local oo = require "loop.cached"

-- copy the members:
for k,v in oo.allmembers(mxObj) do
	if not realObj[k] then
		log:info("Copying base.Object member '",k,"'")
		realObj[k] = v
	end
end

addLuaPath(mxe_root.."?.lua")

local dxColorf = osg.Vec4f.toDXColor
local dxColord = osg.Vec4d.toDXColor
local fromYPR = osg.Quat.fromYPR
local toYPR = osg.Quat.toYPR

-- reload the extensions from MX project:
require "osg"
package.loaded["extensions"] = nil
require "extensions"

osg.Vec4f.toDXColor = dxColorf
osg.Vec4d.toDXColor = dxColord

osg.Quat.fromYPR = fromYPR
osg.Quat.toYPR = toYPR

require "mxe.MXEHandler"

vlog:info "MXEngine extension started."

log:info("This message should be in the mxengine.log file.")

