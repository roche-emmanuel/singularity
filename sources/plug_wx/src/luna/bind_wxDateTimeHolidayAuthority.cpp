#include <plug_common.h>

class luna_wrapper_wxDateTimeHolidayAuthority {
public:
	typedef Luna< wxDateTimeHolidayAuthority > luna_t;

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

		wxDateTimeHolidayAuthority* self=(Luna< wxDateTimeHolidayAuthority >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateTimeHolidayAuthority");
		
		return luna_dynamicCast(L,converters,"wxDateTimeHolidayAuthority",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDateTimeHolidayAuthority* LunaTraits< wxDateTimeHolidayAuthority >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDateTimeHolidayAuthority >::_bind_dtor(wxDateTimeHolidayAuthority* obj) {
	delete obj;
}

const char LunaTraits< wxDateTimeHolidayAuthority >::className[] = "wxDateTimeHolidayAuthority";
const char LunaTraits< wxDateTimeHolidayAuthority >::fullName[] = "wxDateTimeHolidayAuthority";
const char LunaTraits< wxDateTimeHolidayAuthority >::moduleName[] = "wx";
const char* LunaTraits< wxDateTimeHolidayAuthority >::parents[] = {0};
const int LunaTraits< wxDateTimeHolidayAuthority >::hash = 6204115;
const int LunaTraits< wxDateTimeHolidayAuthority >::uniqueIDs[] = {6204115,0};

luna_RegType LunaTraits< wxDateTimeHolidayAuthority >::methods[] = {
	{"dynCast", &luna_wrapper_wxDateTimeHolidayAuthority::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateTimeHolidayAuthority >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateTimeHolidayAuthority >::enumValues[] = {
	{0,0}
};

