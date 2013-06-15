dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("ork::Object","ork::ptr<ork::Object> refptr = ${1};")
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFunctions={
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
