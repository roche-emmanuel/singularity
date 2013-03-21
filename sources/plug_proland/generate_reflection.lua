dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName="sgt",
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={},
	locationPrefixes={
		dest_path.."interface/",
	}
}




