dofile(sgt_path .. "scripts/generate_common.lua")

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName=project,
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
	},
	ignoreClasses={
	},
	ignoreEnums={
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={
	},
	locationPrefixes={
		dest_path.."interface/",
	}
}




