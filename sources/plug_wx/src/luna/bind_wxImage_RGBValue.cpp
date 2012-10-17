#include <plug_common.h>

class luna_wrapper_wxImage_RGBValue {
public:
	typedef Luna< wxImage::RGBValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45106465) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxImage::RGBValue*)");
		}

		wxImage::RGBValue* rhs =(Luna< wxImage::RGBValue >::check(L,2));
		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
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

		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImage::RGBValue");
		
		return luna_dynamicCast(L,converters,"wxImage::RGBValue",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxImage::RGBValue* LunaTraits< wxImage::RGBValue >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxImage::RGBValue >::_bind_dtor(wxImage::RGBValue* obj) {
	delete obj;
}

const char LunaTraits< wxImage::RGBValue >::className[] = "RGBValue";
const char LunaTraits< wxImage::RGBValue >::fullName[] = "wxImage::RGBValue";
const char LunaTraits< wxImage::RGBValue >::moduleName[] = "wxImage";
const char* LunaTraits< wxImage::RGBValue >::parents[] = {0};
const int LunaTraits< wxImage::RGBValue >::hash = 45106465;
const int LunaTraits< wxImage::RGBValue >::uniqueIDs[] = {45106465,0};

luna_RegType LunaTraits< wxImage::RGBValue >::methods[] = {
	{"dynCast", &luna_wrapper_wxImage_RGBValue::_bind_dynCast},
	{"__eq", &luna_wrapper_wxImage_RGBValue::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage::RGBValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage::RGBValue >::enumValues[] = {
	{0,0}
};


