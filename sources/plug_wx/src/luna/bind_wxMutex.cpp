#include <plug_common.h>

class luna_wrapper_wxMutex {
public:
	typedef Luna< wxMutex > luna_t;

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

		wxMutex* self=(Luna< wxMutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMutex");
		
		return luna_dynamicCast(L,converters,"wxMutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxMutex* LunaTraits< wxMutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMutex >::_bind_dtor(wxMutex* obj) {
	delete obj;
}

const char LunaTraits< wxMutex >::className[] = "wxMutex";
const char LunaTraits< wxMutex >::fullName[] = "wxMutex";
const char LunaTraits< wxMutex >::moduleName[] = "wx";
const char* LunaTraits< wxMutex >::parents[] = {0};
const int LunaTraits< wxMutex >::hash = 23141959;
const int LunaTraits< wxMutex >::uniqueIDs[] = {23141959,0};

luna_RegType LunaTraits< wxMutex >::methods[] = {
	{"dynCast", &luna_wrapper_wxMutex::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxMutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMutex >::enumValues[] = {
	{0,0}
};

