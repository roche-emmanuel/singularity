dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("ork::Object","ork::ptr<ork::Object> refptr = ${1};")
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")

tm:setTypeConstructor("^ork::Uniform[0-9]*<.->$","NULL;")
tm:setTypeConstructor("^ork::UniformMatrix[0-9]*<.->$","NULL;")

local tc = require "bindings.TypeConverter"
local utils = require "utils"

local fromLua = function(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("ptr< ${1} > ${2} = Luna< ork::Object >::checkSubType< ${1} >(L,${3});",tname,argname,index)
	
	return false -- this is not a pointer result.
end

local toLua = function(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("Luna< ${1} >::push(L,${2},false);",tname,argname.. (type:isPointer() and "->get()" or ".get()"));
	
	-- here we have a problem: because the class referenced with tname might not be registered at all!
end

local ptrChecker = function(buf,index,type,defStr)
	local tname = type:getBaseName();
	tname = tname:gsub("ptr< (.+) >","%1")
	
	local bfname = "ork::Object"
	local bhash = utils.getHash(bfname)
	
	buf:writeSubLine("if( !Luna<void>::has_uniqueid(L,${1},${2}) ) return false;",index,bhash);
	buf:writeSubLine("if( !Luna< ${3} >::checkSubType< ${2} >(L,${1}) ) return false;",index,tname,bfname);
	return false
end

local toWrapper = function(type,argName)
	local tname = type:getBaseName();
	tname = tname:gsub("ptr< (.+) >","%1")
	
	if argName then
		-- this is a regular argument:
		local access = type:isPointer() and "->" or ".";
		return "(".. tname .."*)"..argName.. access .. "get()";
	else
		-- This is a function return type:
		return "return _obj.callFunction< " .. tname .."* >();"
	end
end

tc:setFromLuaConverter("^ptr<",fromLua)
tc:setToLuaConverter("^ptr<",toLua)

tc:setFromLuaConverter("ork::ptr<",fromLua)
tc:setToLuaConverter("ork::ptr<",toLua)

tc:setTypeChecker("^ptr<",ptrChecker)
tc:setTypeChecker("ork::ptr<",ptrChecker)

tc:setWrapperConverter("^ptr",toWrapper)
tc:setWrapperConverter("ork::ptr",toWrapper)

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFunctions={
		"::mapBuffer",
		"GPUBuffer::map",
		"GPUBuffer::getMappedData",
		"getTypeInfo",
	},
	ignoreClasses={
	},
	ignoreClassDeclarations={
		"vec3< int >",
		"vec2< int >",
	},
	ignoreConverters={},
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={dest_path.."interface/"}
}
