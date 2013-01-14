#include <plug_common.h>

class luna_wrapper_b2ContactPositionConstraint {
public:
	typedef Luna< b2ContactPositionConstraint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38983117) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactPositionConstraint*)");
		}

		b2ContactPositionConstraint* rhs =(Luna< b2ContactPositionConstraint >::check(L,2));
		b2ContactPositionConstraint* self=(Luna< b2ContactPositionConstraint >::check(L,1));
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

		b2ContactPositionConstraint* self=(Luna< b2ContactPositionConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactPositionConstraint");
		
		return luna_dynamicCast(L,converters,"b2ContactPositionConstraint",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

b2ContactPositionConstraint* LunaTraits< b2ContactPositionConstraint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2ContactPositionConstraint >::_bind_dtor(b2ContactPositionConstraint* obj) {
	delete obj;
}

const char LunaTraits< b2ContactPositionConstraint >::className[] = "b2ContactPositionConstraint";
const char LunaTraits< b2ContactPositionConstraint >::fullName[] = "b2ContactPositionConstraint";
const char LunaTraits< b2ContactPositionConstraint >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactPositionConstraint >::parents[] = {0};
const int LunaTraits< b2ContactPositionConstraint >::hash = 38983117;
const int LunaTraits< b2ContactPositionConstraint >::uniqueIDs[] = {38983117,0};

luna_RegType LunaTraits< b2ContactPositionConstraint >::methods[] = {
	{"dynCast", &luna_wrapper_b2ContactPositionConstraint::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactPositionConstraint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactPositionConstraint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactPositionConstraint >::enumValues[] = {
	{0,0}
};


