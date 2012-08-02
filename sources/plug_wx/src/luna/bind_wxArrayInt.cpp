#include <plug_common.h>

class luna_wrapper_wxArrayInt {
public:
	typedef Luna< wxArrayInt > luna_t;

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

		wxArrayInt* self=(Luna< wxArrayInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayInt");
		
		return luna_dynamicCast(L,converters,"wxArrayInt",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayInt* LunaTraits< wxArrayInt >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayInt >::_bind_dtor(wxArrayInt* obj) {
	delete obj;
}

const char LunaTraits< wxArrayInt >::className[] = "wxArrayInt";
const char LunaTraits< wxArrayInt >::fullName[] = "wxArrayInt";
const char LunaTraits< wxArrayInt >::moduleName[] = "wx";
const char* LunaTraits< wxArrayInt >::parents[] = {0};
const int LunaTraits< wxArrayInt >::hash = 47342076;
const int LunaTraits< wxArrayInt >::uniqueIDs[] = {47342076,0};

luna_RegType LunaTraits< wxArrayInt >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayInt::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayInt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayInt >::enumValues[] = {
	{0,0}
};


