dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")
tm:registerExternalClass("osg","osg::Matrix")
tm:registerExternalClass("osg","osg::Vec3")
tm:registerExternalClass("osg","osg::BoundingBox")

tm:setTypeConstructor("SPK::ArrayBufferCreator< float >","NULL;");
tm:setTypeConstructor("SPK::ArrayBuffer< float >","NULL;");
tm:setTypeDestructor("SPK::ArrayBuffer< float >","// do nothing");

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
		SPK="spark",
		GL="spark",
	},
	ignoreFunctions={
		"std::vector",
		"std::set",
		"std::map",
	},
	ignoreClasses={
		"SPK::Group::",
		"SPK::Particle::",
		"iterator",
		"SparkUpdatingHandler::",
	},
	ignoreClassDeclarations={
		"iterator",
	},
	ignoreConverters={ }, --"Surface"
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={dest_path.."interface/"}
}

