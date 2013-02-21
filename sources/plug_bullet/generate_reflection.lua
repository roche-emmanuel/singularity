dofile(sgt_path .. "scripts/generate_common.lua")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")
tm:registerExternals(sgt_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_osg/functions.luna")
-- tm:registerExternalClass("osg","osg::Vec2","osg::Vec2f")

-- tm:registerMappedType("btAlignedObjectArray< btVector3 >")
-- tm:registerMappedType("btAlignedObjectArray< int >")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFiles={
	},
	ignoreFunctions={
		"btHashPtr::m_pointer",
		"::serialize",
		"::deSerialize",
		"btGeometryUtil::isInside",
		"CProfileIterator::Enter_Largest_Child",
		"btAlignedObjectArray< btBridgeProxy %* >",
		"btRaycastVehicle::m_wheelInfo",
		"btHeightfieldTerrainShape::m_", -- union members
		"btTypedConstraint::m_user", -- union members
		"btMultiSapBroadphase::quicksort",
		"btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQuantizedTree",
	},
	ignoreDefines={
		"DBVT_IMPL_GENERIC",
		"DBVT_IMPL_SSE",
		"DBVT_USE_TEMPLATE",
		"DBVT_USE_INTRINSIC_SSE",
		"DBVT_USE_MEMMOVE",
	},
	ignoreClasses={
	},
	ignoreClassDeclarations={
	},
	ignoreConverters={ }, --"Surface"
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={"/interface/","bullet/"}
}

