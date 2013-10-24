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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactPositionConstraint*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactPositionConstraint* rhs =(Luna< b2ContactPositionConstraint >::check(L,2));
		b2ContactPositionConstraint* self=(Luna< b2ContactPositionConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactPositionConstraint* self= (b2ContactPositionConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ContactPositionConstraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38983117) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2ContactPositionConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
	{"fromVoid", &luna_wrapper_b2ContactPositionConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ContactPositionConstraint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactPositionConstraint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactPositionConstraint >::enumValues[] = {
	{0,0}
};


