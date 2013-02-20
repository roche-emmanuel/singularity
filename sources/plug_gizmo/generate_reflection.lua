dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")
-- tm:registerExternalClass("osg","osg::Vec2","osg::Vec2f")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFiles={
		"dx11",
	},
	ignoreFunctions={
		-- "btAlignedAllocator",
		-- "rebind::other",
	},
	ignoreClasses={
		-- "btHashMap",
		-- "btAlignedAllocator",
		-- "btAlignedObjectArray",
		-- "rebind::other",
		-- "btAxisSweep3Internal",
		-- "btMultiSapBroadphase::",
		-- "BP_FP_INT_TYPE",
		-- "^Edge$",
		-- "Func$",
	},
	ignoreClassDeclarations={
		-- "btHashMap",
		-- "btAlignedAllocator",
		-- "btAlignedObjectArray",
		-- "rebind::other",
		-- "btAxisSweep3Internal",
		-- "btMultiSapBroadphase::",
		-- "BP_FP_INT_TYPE:",
		-- "^Edge$",
		-- "Func$",
	},
	ignoreConverters={ }, --"Surface"
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={"/interface/","/bullet/"}
}

