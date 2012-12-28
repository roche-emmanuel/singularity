#include <plug_common.h>

class luna_wrapper_osgText_Text_GlyphQuads_Glyphs {
public:
	typedef Luna< osgText::Text::GlyphQuads::Glyphs > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3878690) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::Text::GlyphQuads::Glyphs*)");
		}

		osgText::Text::GlyphQuads::Glyphs* rhs =(Luna< osgText::Text::GlyphQuads::Glyphs >::check(L,2));
		osgText::Text::GlyphQuads::Glyphs* self=(Luna< osgText::Text::GlyphQuads::Glyphs >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osgText::Text::GlyphQuads::Glyphs* self=(Luna< osgText::Text::GlyphQuads::Glyphs >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Text::GlyphQuads::Glyphs");
		
		return luna_dynamicCast(L,converters,"osgText::Text::GlyphQuads::Glyphs",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::Text::GlyphQuads::Glyphs* LunaTraits< osgText::Text::GlyphQuads::Glyphs >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgText::Text::GlyphQuads::Glyphs >::_bind_dtor(osgText::Text::GlyphQuads::Glyphs* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgText::Text::GlyphQuads::Glyphs >::className[] = "Glyphs";
const char LunaTraits< osgText::Text::GlyphQuads::Glyphs >::fullName[] = "osgText::Text::GlyphQuads::Glyphs";
const char LunaTraits< osgText::Text::GlyphQuads::Glyphs >::moduleName[] = "osg";
const char* LunaTraits< osgText::Text::GlyphQuads::Glyphs >::parents[] = {0};
const int LunaTraits< osgText::Text::GlyphQuads::Glyphs >::hash = 3878690;
const int LunaTraits< osgText::Text::GlyphQuads::Glyphs >::uniqueIDs[] = {3878690,0};

luna_RegType LunaTraits< osgText::Text::GlyphQuads::Glyphs >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_Text_GlyphQuads_Glyphs::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_Text_GlyphQuads_Glyphs::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text::GlyphQuads::Glyphs >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text::GlyphQuads::Glyphs >::enumValues[] = {
	{0,0}
};


