#include <plug_common.h>

class luna_wrapper_TwEnumVal {
public:
	typedef Luna< TwEnumVal > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42065624) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwEnumVal*)");
		}

		TwEnumVal* rhs =(Luna< TwEnumVal >::check(L,2));
		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
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

		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwEnumVal");
		
		return luna_dynamicCast(L,converters,"TwEnumVal",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

TwEnumVal* LunaTraits< TwEnumVal >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< TwEnumVal >::_bind_dtor(TwEnumVal* obj) {
	delete obj;
}

const char LunaTraits< TwEnumVal >::className[] = "TwEnumVal";
const char LunaTraits< TwEnumVal >::fullName[] = "TwEnumVal";
const char LunaTraits< TwEnumVal >::moduleName[] = "atb";
const char* LunaTraits< TwEnumVal >::parents[] = {0};
const int LunaTraits< TwEnumVal >::hash = 42065624;
const int LunaTraits< TwEnumVal >::uniqueIDs[] = {42065624,0};

luna_RegType LunaTraits< TwEnumVal >::methods[] = {
	{"dynCast", &luna_wrapper_TwEnumVal::_bind_dynCast},
	{"__eq", &luna_wrapper_TwEnumVal::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< TwEnumVal >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwEnumVal >::enumValues[] = {
	{0,0}
};

