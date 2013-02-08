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
		"gsl_matrix",
		"gsl_vector",
		"FILE",
		"wchar_t ",
		"mglBase::SetFont",
		"mglCanvas::arrow_draw",
		"mglCanvas::IsSame",
		"mglFormula::GetError",
		"mglFormulaC::GetError",
		"mglTexture::Set",
		"mgl_set_pal_color",
		"mgl_set_pal_num",
		"mgl_set_font_def",
		"mgl_label",
		"mgl_write_tex",
		"mgl_subplot_d",
		"mgl_gridplot",
		"mgl_parser_del_var",
		"mgl_data_link",
		"mgl_datac_set_value",
		"mgl_datac_fill",
		"mgl_coners_xz",
	},
	ignoreDefines={
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
	locationPrefixes={"/interface/"}
}

