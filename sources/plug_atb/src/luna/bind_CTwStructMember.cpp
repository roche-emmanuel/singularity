#include <plug_common.h>

class luna_wrapper_CTwStructMember {
public:
	typedef Luna< CTwStructMember > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78323133) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CTwStructMember*)");
		}

		CTwStructMember* rhs =(Luna< CTwStructMember >::check(L,2));
		CTwStructMember* self=(Luna< CTwStructMember >::check(L,1));
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

		CTwStructMember* self=(Luna< CTwStructMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CTwStructMember");
		
		return luna_dynamicCast(L,converters,"CTwStructMember",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

CTwStructMember* LunaTraits< CTwStructMember >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< CTwStructMember >::_bind_dtor(CTwStructMember* obj) {
	delete obj;
}

const char LunaTraits< CTwStructMember >::className[] = "CTwStructMember";
const char LunaTraits< CTwStructMember >::fullName[] = "CTwStructMember";
const char LunaTraits< CTwStructMember >::moduleName[] = "atb";
const char* LunaTraits< CTwStructMember >::parents[] = {0};
const int LunaTraits< CTwStructMember >::hash = 78323133;
const int LunaTraits< CTwStructMember >::uniqueIDs[] = {78323133,0};

luna_RegType LunaTraits< CTwStructMember >::methods[] = {
	{"dynCast", &luna_wrapper_CTwStructMember::_bind_dynCast},
	{"__eq", &luna_wrapper_CTwStructMember::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< CTwStructMember >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CTwStructMember >::enumValues[] = {
	{0,0}
};


