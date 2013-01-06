#include <plug_common.h>

class luna_wrapper_TwBar {
public:
	typedef Luna< TwBar > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81187440) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwBar*)");
		}

		TwBar* rhs =(Luna< TwBar >::check(L,2));
		TwBar* self=(Luna< TwBar >::check(L,1));
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

		TwBar* self=(Luna< TwBar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwBar");
		
		return luna_dynamicCast(L,converters,"TwBar",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

TwBar* LunaTraits< TwBar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< TwBar >::_bind_dtor(TwBar* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< TwBar >::className[] = "TwBar";
const char LunaTraits< TwBar >::fullName[] = "TwBar";
const char LunaTraits< TwBar >::moduleName[] = "atb";
const char* LunaTraits< TwBar >::parents[] = {0};
const int LunaTraits< TwBar >::hash = 81187440;
const int LunaTraits< TwBar >::uniqueIDs[] = {81187440,0};

luna_RegType LunaTraits< TwBar >::methods[] = {
	{"dynCast", &luna_wrapper_TwBar::_bind_dynCast},
	{"__eq", &luna_wrapper_TwBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< TwBar >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwBar >::enumValues[] = {
	{0,0}
};


