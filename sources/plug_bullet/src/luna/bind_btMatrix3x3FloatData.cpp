#include <plug_common.h>

class luna_wrapper_btMatrix3x3FloatData {
public:
	typedef Luna< btMatrix3x3FloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4769007) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMatrix3x3FloatData*)");
		}

		btMatrix3x3FloatData* rhs =(Luna< btMatrix3x3FloatData >::check(L,2));
		btMatrix3x3FloatData* self=(Luna< btMatrix3x3FloatData >::check(L,1));
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

		btMatrix3x3FloatData* self=(Luna< btMatrix3x3FloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMatrix3x3FloatData");
		
		return luna_dynamicCast(L,converters,"btMatrix3x3FloatData",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

btMatrix3x3FloatData* LunaTraits< btMatrix3x3FloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btMatrix3x3FloatData >::_bind_dtor(btMatrix3x3FloatData* obj) {
	delete obj;
}

const char LunaTraits< btMatrix3x3FloatData >::className[] = "btMatrix3x3FloatData";
const char LunaTraits< btMatrix3x3FloatData >::fullName[] = "btMatrix3x3FloatData";
const char LunaTraits< btMatrix3x3FloatData >::moduleName[] = "bullet";
const char* LunaTraits< btMatrix3x3FloatData >::parents[] = {0};
const int LunaTraits< btMatrix3x3FloatData >::hash = 4769007;
const int LunaTraits< btMatrix3x3FloatData >::uniqueIDs[] = {4769007,0};

luna_RegType LunaTraits< btMatrix3x3FloatData >::methods[] = {
	{"dynCast", &luna_wrapper_btMatrix3x3FloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btMatrix3x3FloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btMatrix3x3FloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMatrix3x3FloatData >::enumValues[] = {
	{0,0}
};

