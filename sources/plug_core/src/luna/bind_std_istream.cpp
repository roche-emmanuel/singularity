#include <plug_common.h>

class luna_wrapper_std_istream {
public:
	typedef Luna< std::istream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::istream*)");
		}

		std::istream* rhs =(Luna< std::istream >::check(L,2));
		std::istream* self=(Luna< std::istream >::check(L,1));
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

		std::istream* self=(Luna< std::istream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::istream");
		
		return luna_dynamicCast(L,converters,"std::istream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

std::istream* LunaTraits< std::istream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::istream >::_bind_dtor(std::istream* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< std::istream >::className[] = "istream";
const char LunaTraits< std::istream >::fullName[] = "std::istream";
const char LunaTraits< std::istream >::moduleName[] = "std";
const char* LunaTraits< std::istream >::parents[] = {0};
const int LunaTraits< std::istream >::hash = 77972206;
const int LunaTraits< std::istream >::uniqueIDs[] = {77972206,0};

luna_RegType LunaTraits< std::istream >::methods[] = {
	{"dynCast", &luna_wrapper_std_istream::_bind_dynCast},
	{"__eq", &luna_wrapper_std_istream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::istream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::istream >::enumValues[] = {
	{0,0}
};


