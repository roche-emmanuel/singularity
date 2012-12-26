#include <plug_common.h>

class luna_wrapper_int64 {
public:
	typedef Luna< __int64 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32973728) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(__int64*)");
		}

		__int64* rhs =(Luna< __int64 >::check(L,2));
		__int64* self=(Luna< __int64 >::check(L,1));
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

		__int64* self=(Luna< __int64 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("__int64");
		
		return luna_dynamicCast(L,converters,"__int64",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

__int64* LunaTraits< __int64 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< __int64 >::_bind_dtor(__int64* obj) {
	delete obj;
}

const char LunaTraits< __int64 >::className[] = "int64";
const char LunaTraits< __int64 >::fullName[] = "__int64";
const char LunaTraits< __int64 >::moduleName[] = "sgt";
const char* LunaTraits< __int64 >::parents[] = {0};
const int LunaTraits< __int64 >::hash = 32973728;
const int LunaTraits< __int64 >::uniqueIDs[] = {32973728,0};

luna_RegType LunaTraits< __int64 >::methods[] = {
	{"dynCast", &luna_wrapper_int64::_bind_dynCast},
	{"__eq", &luna_wrapper_int64::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< __int64 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< __int64 >::enumValues[] = {
	{0,0}
};


