flavor = flavor or "win32" --"mingw32"
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

local core = require "core"

-- setup the log manager:

local logman = core.LogManager.instance()
logman:setDefaultLevelFlags(core.LogManager.TIME_STAMP);
logman:setDefaultTraceFlags(core.LogManager.TIME_STAMP);
logman:addLevelFlags(core.LogManager.FATAL,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);
logman:addLevelFlags(core.LogManager.ERROR,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);
logman:addLevelFlags(core.LogManager.WARNING,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);

logman:setVerbose(true);
logman:setNotifyLevel(core.LogManager.DEBUG3);

logman:addSink(core.FileLogger:new(dest_path.."/reflection.log"));
--logman:addSink(core.StdLogger:new());

local issuesLog = core.FileLogger:new(dest_path.."/reflection_issues.log");
issuesLog:setLevelRange(core.LogManager.FATAL,core.LogManager.WARNING);
logman:addSink(issuesLog);
	
local log = require "logger" 

log:info "Executing init script"

function stdStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function stdStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function wxStringFromLua(buf,index,type,argname)
	buf:writeSubLine("wxString ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function wxStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function ucharFromLua(buf,index,type,argname)
	buf:writeSubLine("unsigned char ${2} = (unsigned char)(lua_tointeger(L,${1}));",index,argname)
end

function ucharToLua(buf,type,argname)
    if type:isPointer() then
        buf:writeSubLine('luaL_error(L,"Trying to convert pointer on unsigned char ${1} to lua. This usage should be clarifierd.");',argname)
    else
        buf:writeSubLine("lua_pushnumber(L,(int)${1});",argname,access)
    end
end

function refptrToLua(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::ref_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("Luna< ${1} >::push(L,${2},false);",tname,argname.. (type:isPointer() and "->get()" or ".get()"));
end

function refptrFromLua(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::ref_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("osg::ref_ptr< ${1} > ${2} = dynamic_cast< ${1}* >(Luna< osg::Referenced >::check(L,${3}));",tname,argname,index)
	return false -- this is not a pointer result.
end

function wxcharFromLua(buf,index,type,argname)
    buf:writeSubLine("wxString ${2}_str(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
    buf:writeSubLine("const wxChar* ${1} = ${1}_str.wc_str();",argname)
end

function wxcharToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("wxString ${1}_str(${1});",argname)
	buf:writeSubLine("lua_pushlstring(L,${1}_str.data(),${1}_str.size());",argname)
end

function ucharChecker(buf,index,type,defStr)
    buf:writeSubLine("if( ${2}(lua_isnumber(L,${1})==0 || lua_tointeger(L,${1}) != lua_tonumber(L,${1})) ) return false;",index,defStr)
end

local tc = require "bindings.TypeConverter"
local injector = require "bindings.CodeInjector"
local corr = require "bindings.TextCorrector"
local tm = require "bindings.TypeManager"

tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")

tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_osg/classes.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_osg/functions.luna")

tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_osgViewer/classes.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_osgViewer/functions.luna")

tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_wx/classes.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_wx/functions.luna")

--tm:registerExternalClass("wx","wxWindow","wxObject")

corr:addCorrector("type_name","(OSG_EXPORT )","")
corr:addCorrector("type_name","(GL_APIENTRY%s*)","")
	
tc:setFromLuaConverter("osg::ref_ptr<",refptrFromLua)
tc:setFromLuaConverter("wxString",wxStringFromLua)
tc:setFromLuaConverter("std::string",stdStringFromLua)
tc:setFromLuaConverter("std::string &",stdStringFromLua)
tc:setFromLuaConverter("const std::string &",stdStringFromLua)
tc:setFromLuaConverter("string",stdStringFromLua)
tc:setFromLuaConverter("unsigned char",ucharFromLua)
tc:setFromLuaConverter("const wxChar *",wxcharFromLua)

tc:setToLuaConverter("osg::ref_ptr<",refptrToLua)
tc:setToLuaConverter("wxString",wxStringToLua)
tc:setToLuaConverter("^std::string$",stdStringToLua)
tc:setToLuaConverter("^std::string &$",stdStringToLua)
tc:setToLuaConverter("^const std::string &$",stdStringToLua)
tc:setToLuaConverter("^string$",stdStringToLua)
tc:setToLuaConverter("^unsigned char$",ucharToLua)
tc:setToLuaConverter("^const wxChar *$",wxcharToLua)

tc:setTypeChecker("unsigned char",ucharChecker)

local im = require "bindings.IgnoreManager"

injector:addFragment("after_headers","using namespace osg;\n")

local options = {
	xmlpath=src_path.."/xml",
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path.."/",
    ignoreClasses={
		"osg::State::[^D]"
    },
	ignoreHeaders = { "helpers%.h" },
	locationPrefixes={"W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/", dest_path.."/interface/"}
	
}
function buildBindings()
    log:info "Generating reflection..."
    local ReflectionGenerator = require "bindings.LunaReflectionGenerator"
	ReflectionGenerator.generate(options)
    log:info "Luna reflection generated."
end

local t0 = os.clock()
local res, msg = pcall(buildBindings)
if not res then
	log:error("Error while generating bindings: ", msg)
end

local dt = os.clock()-t0

log:notice("Done executing script in "..dt.." seconds.")

core.LogManager.destroy()
