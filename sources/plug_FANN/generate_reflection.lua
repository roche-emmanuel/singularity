dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
		"struct fann",
		"connection ",
		"FILE",
		"create_standard_array",
		"create_shortcut_array",
		"create_sparse_array",
		"neural_net::run%(float"
	},
	ignoreClasses={
		"neural_net::user_context_type",
	},
	ignoreConverters={},
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
			--{"(OSG_EXPORT )",""},
		},
	},
	locationPrefixes={dest_path.."interface/"}
}

