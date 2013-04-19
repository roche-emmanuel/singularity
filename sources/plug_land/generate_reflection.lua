dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
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
		land="sgt",
	},
	ignoreFunctions={
		"CPUBuffer::CPUBuffer%(",
	},
	ignoreClasses={
	},
	ignoreClassDeclarations={
		"sgt::vec2< sgt::half >",
		"sgt::vec2< float >",
		"sgt::vec2< double >",
		"sgt::vec2< int >",
		"sgt::vec3< sgt::half >",
		"sgt::vec3< float >",
		"sgt::vec3< double >",
		"sgt::vec3< int >",
		"sgt::vec4< sgt::half >",
		"sgt::vec4< float >",
		"sgt::vec4< double >",
		"sgt::vec4< int >",
		"sgt::box2< float >",
		"sgt::box2< double >",
		"sgt::box2< int >",
		"sgt::box3< float >",
		"sgt::box3< double >",
		"sgt::box3< int >",	
		"sgt::mat2< float >",
		"sgt::mat2< double >",		
		"sgt::mat3< float >",
		"sgt::mat3< double >",		
		"sgt::mat4< float >",
		"sgt::mat4< double >",		
		"sgt::quat< float >",
		"sgt::quat< double >",		
		"std::pair< int, std::pair< int, std::pair< int, int > > >",		
	},
	ignoreConverters={},
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={dest_path.."interface/"}
}
