#include <plug_common.h>

class luna_wrapper_wxArrayDouble {
public:
	typedef Luna< wxArrayDouble > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25535502) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxArrayDouble*)");
		}

		wxArrayDouble* rhs =(Luna< wxArrayDouble >::check(L,2));
		wxArrayDouble* self=(Luna< wxArrayDouble >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxArrayDouble* self=(Luna< wxArrayDouble >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayDouble");
		
		return luna_dynamicCast(L,converters,"wxArrayDouble",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayDouble* LunaTraits< wxArrayDouble >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayDouble >::_bind_dtor(wxArrayDouble* obj) {
	delete obj;
}

const char LunaTraits< wxArrayDouble >::className[] = "wxArrayDouble";
const char LunaTraits< wxArrayDouble >::fullName[] = "wxArrayDouble";
const char LunaTraits< wxArrayDouble >::moduleName[] = "wx";
const char* LunaTraits< wxArrayDouble >::parents[] = {0};
const int LunaTraits< wxArrayDouble >::hash = 25535502;
const int LunaTraits< wxArrayDouble >::uniqueIDs[] = {25535502,0};

luna_RegType LunaTraits< wxArrayDouble >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayDouble::_bind_dynCast},
	{"__eq", &luna_wrapper_wxArrayDouble::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayDouble >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayDouble >::enumValues[] = {
	{0,0}
};


