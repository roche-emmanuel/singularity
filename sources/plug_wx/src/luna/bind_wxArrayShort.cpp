#include <plug_common.h>

class luna_wrapper_wxArrayShort {
public:
	typedef Luna< wxArrayShort > luna_t;

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

		wxArrayShort* self=(Luna< wxArrayShort >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayShort");
		
		return luna_dynamicCast(L,converters,"wxArrayShort",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayShort* LunaTraits< wxArrayShort >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayShort >::_bind_dtor(wxArrayShort* obj) {
	delete obj;
}

const char LunaTraits< wxArrayShort >::className[] = "wxArrayShort";
const char LunaTraits< wxArrayShort >::fullName[] = "wxArrayShort";
const char LunaTraits< wxArrayShort >::moduleName[] = "wx";
const char* LunaTraits< wxArrayShort >::parents[] = {0};
const int LunaTraits< wxArrayShort >::hash = 4785319;
const int LunaTraits< wxArrayShort >::uniqueIDs[] = {4785319,0};

luna_RegType LunaTraits< wxArrayShort >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayShort::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayShort >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayShort >::enumValues[] = {
	{0,0}
};


