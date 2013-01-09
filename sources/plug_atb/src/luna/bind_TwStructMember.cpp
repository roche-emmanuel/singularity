#include <plug_common.h>

class luna_wrapper_TwStructMember {
public:
	typedef Luna< TwStructMember > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50602391) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwStructMember*)");
		}

		TwStructMember* rhs =(Luna< TwStructMember >::check(L,2));
		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
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

		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwStructMember");
		
		return luna_dynamicCast(L,converters,"TwStructMember",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

TwStructMember* LunaTraits< TwStructMember >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< TwStructMember >::_bind_dtor(TwStructMember* obj) {
	delete obj;
}

const char LunaTraits< TwStructMember >::className[] = "TwStructMember";
const char LunaTraits< TwStructMember >::fullName[] = "TwStructMember";
const char LunaTraits< TwStructMember >::moduleName[] = "atb";
const char* LunaTraits< TwStructMember >::parents[] = {0};
const int LunaTraits< TwStructMember >::hash = 50602391;
const int LunaTraits< TwStructMember >::uniqueIDs[] = {50602391,0};

luna_RegType LunaTraits< TwStructMember >::methods[] = {
	{"dynCast", &luna_wrapper_TwStructMember::_bind_dynCast},
	{"__eq", &luna_wrapper_TwStructMember::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< TwStructMember >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwStructMember >::enumValues[] = {
	{0,0}
};

