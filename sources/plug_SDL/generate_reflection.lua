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
	},
	ignoreFunctions={
		"iterator",
		"SDL_ListModes",
		"SDL_LoadBMP_RW",
		"SDL_SaveBMP_RW",	
		"SDL_AudioSpec::stream",	
		"SDL_AudioSpec::len",	
		"SDL_AudioCVT::format",	
		"WMcursor",	
		"private_",	
		"SDL_BlitMap",
		"SDL_SysWMmsg",		
		"SysWMEvent",		
	},
	ignoreTypes={
		"private_",
	},
	ignoreClasses={
		"private_",
		"SDL_BlitMap",
		"SDL_SysWMmsg",
		"SysWMEvent",
	},
	ignoreConverters={"RenderInfo"},
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={dest_path.."interface/SDL/"}
}

