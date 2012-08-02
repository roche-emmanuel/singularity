#include <plug_common.h>

class luna_wrapper_wxThreadHelper {
public:
	typedef Luna< wxThreadHelper > luna_t;

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

		wxThreadHelper* self=(Luna< wxThreadHelper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxThreadHelper");
		
		return luna_dynamicCast(L,converters,"wxThreadHelper",name);
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxThreadHelper* LunaTraits< wxThreadHelper >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// ExitCode wxThreadHelper::Entry()

	// Abstract operators:
}

void LunaTraits< wxThreadHelper >::_bind_dtor(wxThreadHelper* obj) {
	delete obj;
}

const char LunaTraits< wxThreadHelper >::className[] = "wxThreadHelper";
const char LunaTraits< wxThreadHelper >::fullName[] = "wxThreadHelper";
const char LunaTraits< wxThreadHelper >::moduleName[] = "wx";
const char* LunaTraits< wxThreadHelper >::parents[] = {0};
const int LunaTraits< wxThreadHelper >::hash = 76382729;
const int LunaTraits< wxThreadHelper >::uniqueIDs[] = {76382729,0};

luna_RegType LunaTraits< wxThreadHelper >::methods[] = {
	{"dynCast", &luna_wrapper_wxThreadHelper::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxThreadHelper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxThreadHelper >::enumValues[] = {
	{0,0}
};


