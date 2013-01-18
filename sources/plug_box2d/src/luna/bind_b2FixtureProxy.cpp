#include <plug_common.h>

class luna_wrapper_b2FixtureProxy {
public:
	typedef Luna< b2FixtureProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57479237) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2FixtureProxy*)");
		}

		b2FixtureProxy* rhs =(Luna< b2FixtureProxy >::check(L,2));
		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		b2FixtureProxy* self= (b2FixtureProxy*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2FixtureProxy >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57479237) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2FixtureProxy");
		
		return luna_dynamicCast(L,converters,"b2FixtureProxy",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFixture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProxyId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAabb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFixture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProxyId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2AABB b2FixtureProxy::aabb()
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2AABB b2FixtureProxy::aabb() function, expected prototype:\nb2AABB b2FixtureProxy::aabb()\nClass arguments details:\n");
		}


		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2AABB b2FixtureProxy::aabb(). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		const b2AABB* lret = &self->aabb;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2AABB >::push(L,lret,false);

		return 1;
	}

	// b2Fixture * b2FixtureProxy::fixture()
	static int _bind_getFixture(lua_State *L) {
		if (!_lg_typecheck_getFixture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2FixtureProxy::fixture() function, expected prototype:\nb2Fixture * b2FixtureProxy::fixture()\nClass arguments details:\n");
		}


		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2FixtureProxy::fixture(). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		b2Fixture * lret = self->fixture;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// signed int b2FixtureProxy::childIndex()
	static int _bind_getChildIndex(lua_State *L) {
		if (!_lg_typecheck_getChildIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2FixtureProxy::childIndex() function, expected prototype:\nsigned int b2FixtureProxy::childIndex()\nClass arguments details:\n");
		}


		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2FixtureProxy::childIndex(). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		signed int lret = self->childIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2FixtureProxy::proxyId()
	static int _bind_getProxyId(lua_State *L) {
		if (!_lg_typecheck_getProxyId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2FixtureProxy::proxyId() function, expected prototype:\nsigned int b2FixtureProxy::proxyId()\nClass arguments details:\n");
		}


		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2FixtureProxy::proxyId(). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		signed int lret = self->proxyId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2FixtureProxy::aabb(b2AABB value)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FixtureProxy::aabb(b2AABB value) function, expected prototype:\nvoid b2FixtureProxy::aabb(b2AABB value)\nClass arguments details:\narg 1 ID = 53833672\n");
		}

		b2AABB* value_ptr=(Luna< b2AABB >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2FixtureProxy::aabb function");
		}
		b2AABB value=*value_ptr;

		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FixtureProxy::aabb(b2AABB). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		self->aabb = value;

		return 0;
	}

	// void b2FixtureProxy::fixture(b2Fixture * value)
	static int _bind_setFixture(lua_State *L) {
		if (!_lg_typecheck_setFixture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FixtureProxy::fixture(b2Fixture * value) function, expected prototype:\nvoid b2FixtureProxy::fixture(b2Fixture * value)\nClass arguments details:\narg 1 ID = 92969381\n");
		}

		b2Fixture* value=(Luna< b2Fixture >::check(L,2));

		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FixtureProxy::fixture(b2Fixture *). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		self->fixture = value;

		return 0;
	}

	// void b2FixtureProxy::childIndex(signed int value)
	static int _bind_setChildIndex(lua_State *L) {
		if (!_lg_typecheck_setChildIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FixtureProxy::childIndex(signed int value) function, expected prototype:\nvoid b2FixtureProxy::childIndex(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FixtureProxy::childIndex(signed int). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		self->childIndex = value;

		return 0;
	}

	// void b2FixtureProxy::proxyId(signed int value)
	static int _bind_setProxyId(lua_State *L) {
		if (!_lg_typecheck_setProxyId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FixtureProxy::proxyId(signed int value) function, expected prototype:\nvoid b2FixtureProxy::proxyId(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2FixtureProxy* self=(Luna< b2FixtureProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FixtureProxy::proxyId(signed int). Got : '%s'",typeid(Luna< b2FixtureProxy >::check(L,1)).name());
		}
		self->proxyId = value;

		return 0;
	}


	// Operator binds:

};

b2FixtureProxy* LunaTraits< b2FixtureProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2FixtureProxy >::_bind_dtor(b2FixtureProxy* obj) {
	delete obj;
}

const char LunaTraits< b2FixtureProxy >::className[] = "b2FixtureProxy";
const char LunaTraits< b2FixtureProxy >::fullName[] = "b2FixtureProxy";
const char LunaTraits< b2FixtureProxy >::moduleName[] = "box2d";
const char* LunaTraits< b2FixtureProxy >::parents[] = {0};
const int LunaTraits< b2FixtureProxy >::hash = 57479237;
const int LunaTraits< b2FixtureProxy >::uniqueIDs[] = {57479237,0};

luna_RegType LunaTraits< b2FixtureProxy >::methods[] = {
	{"getAabb", &luna_wrapper_b2FixtureProxy::_bind_getAabb},
	{"getFixture", &luna_wrapper_b2FixtureProxy::_bind_getFixture},
	{"getChildIndex", &luna_wrapper_b2FixtureProxy::_bind_getChildIndex},
	{"getProxyId", &luna_wrapper_b2FixtureProxy::_bind_getProxyId},
	{"setAabb", &luna_wrapper_b2FixtureProxy::_bind_setAabb},
	{"setFixture", &luna_wrapper_b2FixtureProxy::_bind_setFixture},
	{"setChildIndex", &luna_wrapper_b2FixtureProxy::_bind_setChildIndex},
	{"setProxyId", &luna_wrapper_b2FixtureProxy::_bind_setProxyId},
	{"dynCast", &luna_wrapper_b2FixtureProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_b2FixtureProxy::_bind___eq},
	{"fromVoid", &luna_wrapper_b2FixtureProxy::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2FixtureProxy::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2FixtureProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2FixtureProxy >::enumValues[] = {
	{0,0}
};


