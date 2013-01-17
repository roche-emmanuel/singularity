#include <plug_common.h>

class luna_wrapper_btShortIntIndexTripletData {
public:
	typedef Luna< btShortIntIndexTripletData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10920434) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btShortIntIndexTripletData*)");
		}

		btShortIntIndexTripletData* rhs =(Luna< btShortIntIndexTripletData >::check(L,2));
		btShortIntIndexTripletData* self=(Luna< btShortIntIndexTripletData >::check(L,1));
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

		btShortIntIndexTripletData* self=(Luna< btShortIntIndexTripletData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btShortIntIndexTripletData");
		
		return luna_dynamicCast(L,converters,"btShortIntIndexTripletData",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

btShortIntIndexTripletData* LunaTraits< btShortIntIndexTripletData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btShortIntIndexTripletData >::_bind_dtor(btShortIntIndexTripletData* obj) {
	delete obj;
}

const char LunaTraits< btShortIntIndexTripletData >::className[] = "btShortIntIndexTripletData";
const char LunaTraits< btShortIntIndexTripletData >::fullName[] = "btShortIntIndexTripletData";
const char LunaTraits< btShortIntIndexTripletData >::moduleName[] = "bullet";
const char* LunaTraits< btShortIntIndexTripletData >::parents[] = {0};
const int LunaTraits< btShortIntIndexTripletData >::hash = 10920434;
const int LunaTraits< btShortIntIndexTripletData >::uniqueIDs[] = {10920434,0};

luna_RegType LunaTraits< btShortIntIndexTripletData >::methods[] = {
	{"dynCast", &luna_wrapper_btShortIntIndexTripletData::_bind_dynCast},
	{"__eq", &luna_wrapper_btShortIntIndexTripletData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btShortIntIndexTripletData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btShortIntIndexTripletData >::enumValues[] = {
	{0,0}
};


