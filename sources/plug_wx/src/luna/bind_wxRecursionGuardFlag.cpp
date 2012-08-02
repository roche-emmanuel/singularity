#include <plug_common.h>

class luna_wrapper_wxRecursionGuardFlag {
public:
	typedef Luna< wxRecursionGuardFlag > luna_t;

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

		wxRecursionGuardFlag* self=(Luna< wxRecursionGuardFlag >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRecursionGuardFlag");
		
		return luna_dynamicCast(L,converters,"wxRecursionGuardFlag",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRecursionGuardFlag* LunaTraits< wxRecursionGuardFlag >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRecursionGuardFlag >::_bind_dtor(wxRecursionGuardFlag* obj) {
	delete obj;
}

const char LunaTraits< wxRecursionGuardFlag >::className[] = "wxRecursionGuardFlag";
const char LunaTraits< wxRecursionGuardFlag >::fullName[] = "wxRecursionGuardFlag";
const char LunaTraits< wxRecursionGuardFlag >::moduleName[] = "wx";
const char* LunaTraits< wxRecursionGuardFlag >::parents[] = {0};
const int LunaTraits< wxRecursionGuardFlag >::hash = 7196007;
const int LunaTraits< wxRecursionGuardFlag >::uniqueIDs[] = {7196007,0};

luna_RegType LunaTraits< wxRecursionGuardFlag >::methods[] = {
	{"dynCast", &luna_wrapper_wxRecursionGuardFlag::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRecursionGuardFlag >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRecursionGuardFlag >::enumValues[] = {
	{0,0}
};


