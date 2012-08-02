#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgText(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osgText::TextBase >::Register(L);
	Luna< osgText::Text >::Register(L);
	Luna< osgText::FadeText >::Register(L);
	Luna< osgText::Font >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgText::GlyphTexture > > >::Register(L);
	Luna< osgText::Font::FontImplementation >::Register(L);
	Luna< osgText::Glyph >::Register(L);
	Luna< osgText::GlyphGeometry >::Register(L);
	Luna< osgText::Glyph3D >::Register(L);
	Luna< osgText::GlyphTexture >::Register(L);
	Luna< osgText::String >::Register(L);
	Luna< osgText::Bevel >::Register(L);
	Luna< std::vector< osg::Vec2f > >::Register(L);
	Luna< osgText::Style >::Register(L);
	Luna< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::Register(L);
	Luna< osgText::Text::GlyphQuads >::Register(L);
	Luna< std::vector< osgText::Glyph * > >::Register(L);
	Luna< std::vector< osg::Vec4f > >::Register(L);
	Luna< osgText::Text3D >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgText");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgText");
	lua_getglobal(L,"osgText");

	luna_copyParents(L,"osgText");

	return 1;
}

#ifdef __cplusplus
}
#endif

