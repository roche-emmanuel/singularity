#include <plug_common.h>

class luna_wrapper_std_ostream {
public:
	typedef Luna< std::ostream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2993706) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::ostream*)");
		}

		std::ostream* rhs =(Luna< std::ostream >::check(L,2));
		std::ostream* self=(Luna< std::ostream >::check(L,1));
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

		std::ostream* self=(Luna< std::ostream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::ostream");
		
		return luna_dynamicCast(L,converters,"std::ostream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

std::ostream* LunaTraits< std::ostream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< std::ostream >::_bind_dtor(std::ostream* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< std::ostream >::className[] = "ostream";
const char LunaTraits< std::ostream >::fullName[] = "std::ostream";
const char LunaTraits< std::ostream >::moduleName[] = "std";
const char* LunaTraits< std::ostream >::parents[] = {0};
const int LunaTraits< std::ostream >::hash = 2993706;
const int LunaTraits< std::ostream >::uniqueIDs[] = {2993706,0};

luna_RegType LunaTraits< std::ostream >::methods[] = {
	{"dynCast", &luna_wrapper_std_ostream::_bind_dynCast},
	{"__eq", &luna_wrapper_std_ostream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::ostream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::ostream >::enumValues[] = {
	{0,0}
};

