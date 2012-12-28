#include <plug_common.h>

class luna_wrapper_osgText_Font_GlyphTextureList {
public:
	typedef Luna< osgText::Font::GlyphTextureList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5080884) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::Font::GlyphTextureList*)");
		}

		osgText::Font::GlyphTextureList* rhs =(Luna< osgText::Font::GlyphTextureList >::check(L,2));
		osgText::Font::GlyphTextureList* self=(Luna< osgText::Font::GlyphTextureList >::check(L,1));
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

		osgText::Font::GlyphTextureList* self=(Luna< osgText::Font::GlyphTextureList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Font::GlyphTextureList");
		
		return luna_dynamicCast(L,converters,"osgText::Font::GlyphTextureList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::Font::GlyphTextureList* LunaTraits< osgText::Font::GlyphTextureList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgText::Font::GlyphTextureList >::_bind_dtor(osgText::Font::GlyphTextureList* obj) {
	delete obj;
}

const char LunaTraits< osgText::Font::GlyphTextureList >::className[] = "GlyphTextureList";
const char LunaTraits< osgText::Font::GlyphTextureList >::fullName[] = "osgText::Font::GlyphTextureList";
const char LunaTraits< osgText::Font::GlyphTextureList >::moduleName[] = "osg";
const char* LunaTraits< osgText::Font::GlyphTextureList >::parents[] = {0};
const int LunaTraits< osgText::Font::GlyphTextureList >::hash = 5080884;
const int LunaTraits< osgText::Font::GlyphTextureList >::uniqueIDs[] = {5080884,0};

luna_RegType LunaTraits< osgText::Font::GlyphTextureList >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_Font_GlyphTextureList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_Font_GlyphTextureList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Font::GlyphTextureList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Font::GlyphTextureList >::enumValues[] = {
	{0,0}
};


