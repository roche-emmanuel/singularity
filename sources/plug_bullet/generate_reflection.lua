-- When calling this script externally the caller should provide the following arguments:
-- flavor [optional, default = "win32" ] : Use to specify which flavor of the lua modules should be loaded.
-- sgt_path : the root path of the singularity repository, this is needed to retrieve the modules.
-- xml_path : the folder where the source xml files are located
-- project : the current project name.

flavor = flavor or "win32"
sgt_path = sgt_path:gsub("\\","/")
root_path = sgt_path .. "software/"
dest_path = sgt_path .. "sources/plug_" .. project .. "/"

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

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
		"btHeightfieldTerrainShape::m_",
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

