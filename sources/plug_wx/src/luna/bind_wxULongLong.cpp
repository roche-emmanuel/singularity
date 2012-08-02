#include <plug_common.h>

class luna_wrapper_wxULongLong {
public:
	typedef Luna< wxULongLong > luna_t;

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

		wxULongLong* self=(Luna< wxULongLong >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxULongLong");
		
		return luna_dynamicCast(L,converters,"wxULongLong",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxULongLong* LunaTraits< wxULongLong >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxULongLong >::_bind_dtor(wxULongLong* obj) {
	delete obj;
}

const char LunaTraits< wxULongLong >::className[] = "wxULongLong";
const char LunaTraits< wxULongLong >::fullName[] = "wxULongLong";
const char LunaTraits< wxULongLong >::moduleName[] = "wx";
const char* LunaTraits< wxULongLong >::parents[] = {0};
const int LunaTraits< wxULongLong >::hash = 888873;
const int LunaTraits< wxULongLong >::uniqueIDs[] = {888873,0};

luna_RegType LunaTraits< wxULongLong >::methods[] = {
	{"dynCast", &luna_wrapper_wxULongLong::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxULongLong >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxULongLong >::enumValues[] = {
	{0,0}
};


