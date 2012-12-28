#include <plug_common.h>

class luna_wrapper_osgText_Text_GlyphQuads_ColorCoords {
public:
	typedef Luna< osgText::Text::GlyphQuads::ColorCoords > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26979605) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::Text::GlyphQuads::ColorCoords*)");
		}

		osgText::Text::GlyphQuads::ColorCoords* rhs =(Luna< osgText::Text::GlyphQuads::ColorCoords >::check(L,2));
		osgText::Text::GlyphQuads::ColorCoords* self=(Luna< osgText::Text::GlyphQuads::ColorCoords >::check(L,1));
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

		osgText::Text::GlyphQuads::ColorCoords* self=(Luna< osgText::Text::GlyphQuads::ColorCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Text::GlyphQuads::ColorCoords");
		
		return luna_dynamicCast(L,converters,"osgText::Text::GlyphQuads::ColorCoords",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::Text::GlyphQuads::ColorCoords* LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::_bind_dtor(osgText::Text::GlyphQuads::ColorCoords* obj) {
	delete obj;
}

const char LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::className[] = "ColorCoords";
const char LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::fullName[] = "osgText::Text::GlyphQuads::ColorCoords";
const char LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::moduleName[] = "osg";
const char* LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::parents[] = {0};
const int LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::hash = 26979605;
const int LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::uniqueIDs[] = {26979605,0};

luna_RegType LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_Text_GlyphQuads_ColorCoords::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_Text_GlyphQuads_ColorCoords::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text::GlyphQuads::ColorCoords >::enumValues[] = {
	{0,0}
};


