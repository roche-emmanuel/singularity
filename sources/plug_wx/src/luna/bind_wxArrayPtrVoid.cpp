#include <plug_common.h>

class luna_wrapper_wxArrayPtrVoid {
public:
	typedef Luna< wxArrayPtrVoid > luna_t;

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

		wxArrayPtrVoid* self=(Luna< wxArrayPtrVoid >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayPtrVoid");
		
		return luna_dynamicCast(L,converters,"wxArrayPtrVoid",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayPtrVoid* LunaTraits< wxArrayPtrVoid >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayPtrVoid >::_bind_dtor(wxArrayPtrVoid* obj) {
	delete obj;
}

const char LunaTraits< wxArrayPtrVoid >::className[] = "wxArrayPtrVoid";
const char LunaTraits< wxArrayPtrVoid >::fullName[] = "wxArrayPtrVoid";
const char LunaTraits< wxArrayPtrVoid >::moduleName[] = "wx";
const char* LunaTraits< wxArrayPtrVoid >::parents[] = {0};
const int LunaTraits< wxArrayPtrVoid >::hash = 81664985;
const int LunaTraits< wxArrayPtrVoid >::uniqueIDs[] = {81664985,0};

luna_RegType LunaTraits< wxArrayPtrVoid >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayPtrVoid::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayPtrVoid >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayPtrVoid >::enumValues[] = {
	{0,0}
};

