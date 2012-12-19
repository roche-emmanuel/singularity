#include <plug_common.h>

class luna_wrapper_wxArrayLong {
public:
	typedef Luna< wxArrayLong > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67694453) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxArrayLong*)");
		}

		wxArrayLong* rhs =(Luna< wxArrayLong >::check(L,2));
		wxArrayLong* self=(Luna< wxArrayLong >::check(L,1));
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

		wxArrayLong* self=(Luna< wxArrayLong >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayLong");
		
		return luna_dynamicCast(L,converters,"wxArrayLong",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayLong* LunaTraits< wxArrayLong >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxArrayLong >::_bind_dtor(wxArrayLong* obj) {
	delete obj;
}

const char LunaTraits< wxArrayLong >::className[] = "wxArrayLong";
const char LunaTraits< wxArrayLong >::fullName[] = "wxArrayLong";
const char LunaTraits< wxArrayLong >::moduleName[] = "wx";
const char* LunaTraits< wxArrayLong >::parents[] = {0};
const int LunaTraits< wxArrayLong >::hash = 67694453;
const int LunaTraits< wxArrayLong >::uniqueIDs[] = {67694453,0};

luna_RegType LunaTraits< wxArrayLong >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayLong::_bind_dynCast},
	{"__eq", &luna_wrapper_wxArrayLong::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayLong >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayLong >::enumValues[] = {
	{0,0}
};


