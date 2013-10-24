#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionConfiguration.h>

class luna_wrapper_btCollisionConfiguration {
public:
	typedef Luna< btCollisionConfiguration > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionConfiguration,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31901746) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionConfiguration*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionConfiguration* rhs =(Luna< btCollisionConfiguration >::check(L,2));
		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
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

		btCollisionConfiguration* self= (btCollisionConfiguration*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionConfiguration >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31901746) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCollisionConfiguration >::check(L,1));
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

		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionConfiguration");
		
		return luna_dynamicCast(L,converters,"btCollisionConfiguration",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPersistentManifoldPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionAlgorithmPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStackAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionConfiguration::btCollisionConfiguration(lua_Table * data)
	static btCollisionConfiguration* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionConfiguration::btCollisionConfiguration(lua_Table * data) function, expected prototype:\nbtCollisionConfiguration::btCollisionConfiguration(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btCollisionConfiguration(L,NULL);
	}


	// Function binds:
	// btPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool()
	static int _bind_getPersistentManifoldPool(lua_State *L) {
		if (!_lg_typecheck_getPersistentManifoldPool(L)) {
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool() function, expected prototype:\nbtPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool(). Got : '%s'\n%s",typeid(Luna< btCollisionConfiguration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btPoolAllocator * lret = self->getPersistentManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool()
	static int _bind_getCollisionAlgorithmPool(lua_State *L) {
		if (!_lg_typecheck_getCollisionAlgorithmPool(L)) {
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool() function, expected prototype:\nbtPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool(). Got : '%s'\n%s",typeid(Luna< btCollisionConfiguration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btPoolAllocator * lret = self->getCollisionAlgorithmPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btStackAlloc * btCollisionConfiguration::getStackAllocator()
	static int _bind_getStackAllocator(lua_State *L) {
		if (!_lg_typecheck_getStackAllocator(L)) {
			luaL_error(L, "luna typecheck failed in btStackAlloc * btCollisionConfiguration::getStackAllocator() function, expected prototype:\nbtStackAlloc * btCollisionConfiguration::getStackAllocator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btStackAlloc * btCollisionConfiguration::getStackAllocator(). Got : '%s'\n%s",typeid(Luna< btCollisionConfiguration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btStackAlloc * lret = self->getStackAllocator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
	static int _bind_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if (!_lg_typecheck_getCollisionAlgorithmCreateFunc(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) function, expected prototype:\nbtCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int proxyType0=(int)lua_tointeger(L,2);
		int proxyType1=(int)lua_tointeger(L,3);

		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int, int). Got : '%s'\n%s",typeid(Luna< btCollisionConfiguration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionAlgorithmCreateFunc * lret = self->getCollisionAlgorithmCreateFunc(proxyType0, proxyType1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithmCreateFunc >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btCollisionConfiguration* LunaTraits< btCollisionConfiguration >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionConfiguration::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool()
	// btPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool()
	// btStackAlloc * btCollisionConfiguration::getStackAllocator()
	// btCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
}

void LunaTraits< btCollisionConfiguration >::_bind_dtor(btCollisionConfiguration* obj) {
	delete obj;
}

const char LunaTraits< btCollisionConfiguration >::className[] = "btCollisionConfiguration";
const char LunaTraits< btCollisionConfiguration >::fullName[] = "btCollisionConfiguration";
const char LunaTraits< btCollisionConfiguration >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionConfiguration >::parents[] = {0};
const int LunaTraits< btCollisionConfiguration >::hash = 31901746;
const int LunaTraits< btCollisionConfiguration >::uniqueIDs[] = {31901746,0};

luna_RegType LunaTraits< btCollisionConfiguration >::methods[] = {
	{"getPersistentManifoldPool", &luna_wrapper_btCollisionConfiguration::_bind_getPersistentManifoldPool},
	{"getCollisionAlgorithmPool", &luna_wrapper_btCollisionConfiguration::_bind_getCollisionAlgorithmPool},
	{"getStackAllocator", &luna_wrapper_btCollisionConfiguration::_bind_getStackAllocator},
	{"getCollisionAlgorithmCreateFunc", &luna_wrapper_btCollisionConfiguration::_bind_getCollisionAlgorithmCreateFunc},
	{"dynCast", &luna_wrapper_btCollisionConfiguration::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionConfiguration::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionConfiguration::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionConfiguration::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionConfiguration::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionConfiguration >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionConfiguration >::enumValues[] = {
	{0,0}
};


