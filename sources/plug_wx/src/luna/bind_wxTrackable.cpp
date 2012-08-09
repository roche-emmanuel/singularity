#include <plug_common.h>

class luna_wrapper_wxTrackable {
public:
	typedef Luna< wxTrackable > luna_t;

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

		wxTrackable* self=(Luna< wxTrackable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTrackable");
		
		return luna_dynamicCast(L,converters,"wxTrackable",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxTrackable* LunaTraits< wxTrackable >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTrackable >::_bind_dtor(wxTrackable* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxTrackable >::className[] = "wxTrackable";
const char LunaTraits< wxTrackable >::fullName[] = "wxTrackable";
const char LunaTraits< wxTrackable >::moduleName[] = "wx";
const char* LunaTraits< wxTrackable >::parents[] = {0};
const int LunaTraits< wxTrackable >::hash = 53506535;
const int LunaTraits< wxTrackable >::uniqueIDs[] = {53506535,0};

luna_RegType LunaTraits< wxTrackable >::methods[] = {
	{"dynCast", &luna_wrapper_wxTrackable::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTrackable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTrackable >::enumValues[] = {
	{0,0}
};

