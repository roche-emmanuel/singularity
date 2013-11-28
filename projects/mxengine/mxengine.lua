local vlog = require "logger"


--core2.showMessageBox("Starting MXEngine extension...","Loading")

vlog:notice "Starting MXEngine extension..."

sgt_root="W:/Cloud/Projects/singularity/software/"
mxe_root="W:/Cloud/Projects/singularity/projects/mxengine/modules/"
mxe_assets="W:/Cloud/Projects/singularity/projects/mxengine/assets/"
vbs2_root="W:/Games/VBS2/"

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
	--core2.showMessageBox("requiring core","Loading")
	require "core"
	--require "extensions.core"
	--core2.showMessageBox("getting log manager","Loading")

	local lman = sgt.LogManager.instance()
	
	-- Init the log system.
	lman:setDefaultLevelFlags(sgt.LogManager.TIME_STAMP);
	lman:setDefaultTraceFlags(sgt.LogManager.TIME_STAMP);
	lman:addLevelFlags(sgt.LogManager.FATAL,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));
	lman:addLevelFlags(sgt.LogManager.ERROR,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));
	lman:addLevelFlags(sgt.LogManager.WARNING,bit.bor(sgt.LogManager.FILE_NAME,sgt.LogManager.LINE_NUMBER));

	lman:setVerbose(true);
	lman:setNotifyLevel(sgt.LogManager.DEBUG0); -- Log until DEBUG0 level only.

	-- WARNING: if we add the file sink below we get a crash when exiting the application while verbose is enabled.
	-- lman:addSink(sgt.FileLogger(file,false,"mxengine_log_file_sink"));
	-- lman:addSink(sgt.StdLogger());
end

--core2.showMessageBox("Enumerating packages","Loading")

for k,v in pairs(package.loaded) do
	vlog:info("Already loaded package: ", k)
end

--core2.showMessageBox("requiring base.object","Loading")

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

-- backup of VBS specific osg functions:
local dxColorf = osg.Vec4f.toDXColor
local dxColord = osg.Vec4d.toDXColor
local fromYPR = osg.Quat.fromYPR
local toYPR = osg.Quat.toYPR
-- local toLLA = osg.Vec3d.toLLA
-- local toUTM = osg.Vec3d.toUTM

--core2.showMessageBox("Setting up package paths","Loading")

setupPackagePaths()

--core2.showMessageBox("Setting up logger","Loading")

setupLogManager("mxengine.log")

--core2.showMessageBox("Loading core pak","Loading")

requirePackage("core",sgt_root.. "bin/win32/packages/")

-- sgt.ModuleProvider.loadPackage(sgt_root.. "bin/win32/packages/core.lpak");

-- core2.showMessageBox("Retrieving start module","Loading")

local startModule = sgt.ModuleProvider.getModule("StartModule");
local func = loadstring(startModule,"startModule")

-- core2.showMessageBox("Executing start module","Loading")

local res, err = pcall(func)
if not res then
	error("Executing start module failed with error: "..err)
end

-- core2.showMessageBox("retrieving base.Object","Loading")

local realObj = require "base.Object"

package.loaded["base.Object"] = mxObj

-- force integrating the MX base object functions into our base Object:
local oo = require "loop.cached"

-- copy the members:
for k,v in oo.allmembers(mxObj) do
	if not realObj[k] then
		log:info("Copying base.Object member '",k,"'")
		realObj[k] = v
	end
end

for k,v in oo.allmembers(realObj) do
	if not mxObj[k] then
		log:info("Copying (real) base.Object member '",k,"'")
		mxObj[k] = v
	end
end

addLuaPath(mxe_root.."?.lua")

-- reload the extensions from MX project:
-- core2.showMessageBox("loading extensions module","Loading")
package.loaded["extensions"] = nil
require "extensions"

osg.Vec4f.toDXColor = dxColorf
osg.Vec4d.toDXColor = dxColord
osg.Quat.fromYPR = fromYPR
osg.Quat.toYPR = toYPR

-- osg.Vec3d.toLLA = toLLA
-- osg.Vec3d.toUTM = toUTM

local loader = function()
	local res = osg.Vec4f(1.0,0.0,1.0,0.5):toDXColor()
	
	-- core2.showMessageBox("loading sdl module","Loading")
	-- require "sdl"
	-- core2.showMessageBox("Done loading sdl module","Loading")
	
	require "mxe.MXEHandler"
	vlog:info "MXEngine extension started."
	vlog:info("This message should be in the mxengine.log file.")
	
	require "wx"
	
	local im = require "gui.wx.ImageManager"
	im:addImagePath(mxe_assets.."images/")
end

--core2.showMessageBox("Calling loader","Loading")

local res, err = pcall(loader)
if not res then
	vlog:error("Loading MXEHandler failed with error: "..err)
end

--core2.showMessageBox("MXEngine extension started.","Loading")