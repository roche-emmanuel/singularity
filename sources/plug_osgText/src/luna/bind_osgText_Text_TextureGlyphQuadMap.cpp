#include <plug_common.h>

class luna_wrapper_osgText_Text_TextureGlyphQuadMap {
public:
	typedef Luna< osgText::Text::TextureGlyphQuadMap > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text::TextureGlyphQuadMap* self=(Luna< osgText::Text::TextureGlyphQuadMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Text::TextureGlyphQuadMap");
		
		return luna_dynamicCast(L,converters,"osgText::Text::TextureGlyphQuadMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::Text::TextureGlyphQuadMap* LunaTraits< osgText::Text::TextureGlyphQuadMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgText::Text::TextureGlyphQuadMap >::_bind_dtor(osgText::Text::TextureGlyphQuadMap* obj) {
	delete obj;
}

const char LunaTraits< osgText::Text::TextureGlyphQuadMap >::className[] = "TextureGlyphQuadMap";
const char LunaTraits< osgText::Text::TextureGlyphQuadMap >::fullName[] = "osgText::Text::TextureGlyphQuadMap";
const char LunaTraits< osgText::Text::TextureGlyphQuadMap >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text::TextureGlyphQuadMap >::parents[] = {0};
const int LunaTraits< osgText::Text::TextureGlyphQuadMap >::hash = 48619134;
const int LunaTraits< osgText::Text::TextureGlyphQuadMap >::uniqueIDs[] = {48619134,0};

luna_RegType LunaTraits< osgText::Text::TextureGlyphQuadMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_Text_TextureGlyphQuadMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text::TextureGlyphQuadMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text::TextureGlyphQuadMap >::enumValues[] = {
	{0,0}
};


