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

function obsptrToLua(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::observer_ptr< (.+) >","%1")
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

function obsptrFromLua(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::observer_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("osg::observer_ptr< ${1} > ${2} = dynamic_cast< ${1}* >(Luna< osg::Referenced >::check(L,${3}));",tname,argname,index)
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

tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_osg/classes.luna")
tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_osgUtil/classes.luna")
tm:registerExternals("W:/Shared/Dev/Projects/singularity/sources/plug_osgDB/classes.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_osg/functions.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_osgUtil/functions.luna")
tm:registerExternalFunctions("W:/Shared/Dev/Projects/singularity/sources/plug_osgDB/functions.luna")

corr:addCorrector("type_name","(OSG_EXPORT )","")
corr:addCorrector("type_name","(OSGDB_EXPORT )","")
corr:addCorrector("type_name","(OSGUTIL_EXPORT )","")
corr:addCorrector("type_name","(OSGTEXT_EXPORT )","")
corr:addCorrector("type_name","(GL_APIENTRY%s*)","")
	
tc:setFromLuaConverter("osg::ref_ptr<",refptrFromLua)
tc:setFromLuaConverter("osg::observer_ptr<",obsptrFromLua)
tc:setFromLuaConverter("wxString",wxStringFromLua)
tc:setFromLuaConverter("std::string",stdStringFromLua)
tc:setFromLuaConverter("std::string &",stdStringFromLua)
tc:setFromLuaConverter("const std::string &",stdStringFromLua)
tc:setFromLuaConverter("string",stdStringFromLua)
tc:setFromLuaConverter("unsigned char",ucharFromLua)
tc:setFromLuaConverter("const wxChar *",wxcharFromLua)

tc:setToLuaConverter("osg::ref_ptr<",refptrToLua)
tc:setToLuaConverter("osg::observer_ptr<",obsptrToLua)
tc:setToLuaConverter("wxString",wxStringToLua)
tc:setToLuaConverter("^std::string$",stdStringToLua)
tc:setToLuaConverter("^std::string &$",stdStringToLua)
tc:setToLuaConverter("^const std::string &$",stdStringToLua)
tc:setToLuaConverter("^string$",stdStringToLua)
tc:setToLuaConverter("^unsigned char$",ucharToLua)
tc:setToLuaConverter("^const wxChar *$",wxcharToLua)

tc:setTypeChecker("unsigned char",ucharChecker)

local im = require "bindings.IgnoreManager"

im:addPattern("function","iterator")
im:addPattern("function","GLTexImage3DProc")
im:addPattern("function","_GLUfuncptr")
im:addPattern("function","GLU_TESS_CALLBACK")
im:addPattern("function","META_")
im:addPattern("function","wstring")
im:addPattern("function","wchar_t")
im:addPattern("function","BEGIN_BRACKET")
im:addPattern("function","std::ostream")
im:addPattern("function","std::istream")
im:addPattern("function","getPathElements")
im:addPattern("function","FILE")
im:addPattern("function","readNodeFiles")
im:addPattern("function","Proxy")
im:addPattern("function","Wrapper")
im:addPattern("function","ofstream")
im:addPattern("function","ifstream")
im:addPattern("function","Mutex")
im:addPattern("function","ios_base")
im:addPattern("function","Exception")
im:addPattern("function","getFileNames")
im:addPattern("function","Thread")
im:addPattern("function","IncrementalCompileOperation")
im:addPattern("function","objectRead")
im:addPattern("function","PrimitiveSetList")
im:addPattern("function","IsOperationPermissibleForObjectCallback")
im:addPattern("function","HitList")
im:addPattern("function","Identifier")
im:addPattern("function","Prim")
im:addPattern("function","AttributeFunctor")

im:addPattern("converter","RenderInfo")

im:addPattern("class","osgUtil::CullVisitor::") --DatabaseRequest, ReadQueue, RequestQueue
im:addPattern("class","osgUtil::IntersectVisitor::") --ImageRequest, ReadQueue, RequestQueue
im:addPattern("class","osgUtil::Optimizer::") --CompareStateAttributes, CompareStateSets
im:addPattern("class","osgUtil::SceneGraphBuilder::") --CompareStateAttributes, CompareStateSets
im:addPattern("class","osgUtil::Tessellator::") --CompareStateAttributes, CompareStateSets
im:addPattern("class","osgDB::DatabasePager::") --DatabaseRequest, ReadQueue, RequestQueue
im:addPattern("class","osgDB::ImagePager::") --ImageRequest, ReadQueue, RequestQueue
im:addPattern("class","osgDB::SharedStateManager::") --CompareStateAttributes, CompareStateSets
im:addPattern("class","osg::State::")
im:addPattern("class","Serializer")
im:addPattern("class","Functor")
im:addPattern("class","Input")
im:addPattern("class","ControlMap")
im:addPattern("class","osgParticle::PrecipitationEffect::PrecipitationDrawableSet")


im:addPattern("enum_value","osgUtil::Optimizer::")
im:addPattern("enum_value","osg::")
im:addPattern("enum_value","osgDB::")
im:addPattern("enum_value","osgUtil::")
im:addPattern("enum_value","FileOpResult::")

injector:addFragment("after_headers","using namespace osg;\nusing namespace osgParticle;\n")

local options = {
	xmlpath=src_path.."/xml",
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path.."/",
	ignoreHeaders = { "helpers%.h" },
	locationPrefixes={"W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/"}
	
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
