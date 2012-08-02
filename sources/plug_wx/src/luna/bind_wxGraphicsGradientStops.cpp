#include <plug_common.h>

class luna_wrapper_wxGraphicsGradientStops {
public:
	typedef Luna< wxGraphicsGradientStops > luna_t;

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

		wxGraphicsGradientStops* self=(Luna< wxGraphicsGradientStops >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGraphicsGradientStops");
		
		return luna_dynamicCast(L,converters,"wxGraphicsGradientStops",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxGraphicsGradientStops* LunaTraits< wxGraphicsGradientStops >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsGradientStops >::_bind_dtor(wxGraphicsGradientStops* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsGradientStops >::className[] = "wxGraphicsGradientStops";
const char LunaTraits< wxGraphicsGradientStops >::fullName[] = "wxGraphicsGradientStops";
const char LunaTraits< wxGraphicsGradientStops >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsGradientStops >::parents[] = {0};
const int LunaTraits< wxGraphicsGradientStops >::hash = 9196144;
const int LunaTraits< wxGraphicsGradientStops >::uniqueIDs[] = {9196144,0};

luna_RegType LunaTraits< wxGraphicsGradientStops >::methods[] = {
	{"dynCast", &luna_wrapper_wxGraphicsGradientStops::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsGradientStops >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsGradientStops >::enumValues[] = {
	{0,0}
};


