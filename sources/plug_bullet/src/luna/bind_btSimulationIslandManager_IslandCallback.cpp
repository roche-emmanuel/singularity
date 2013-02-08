#include <plug_common.h>

#include <luna/wrappers/wrapper_btSimulationIslandManager_IslandCallback.h>

class luna_wrapper_btSimulationIslandManager_IslandCallback {
public:
	typedef Luna< btSimulationIslandManager::IslandCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btSimulationIslandManager::IslandCallback* self=(Luna< btSimulationIslandManager::IslandCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btSimulationIslandManager::IslandCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56758259) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSimulationIslandManager::IslandCallback*)");
		}

		btSimulationIslandManager::IslandCallback* rhs =(Luna< btSimulationIslandManager::IslandCallback >::check(L,2));
		btSimulationIslandManager::IslandCallback* self=(Luna< btSimulationIslandManager::IslandCallback >::check(L,1));
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

		btSimulationIslandManager::IslandCallback* self= (btSimulationIslandManager::IslandCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSimulationIslandManager::IslandCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56758259) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSimulationIslandManager::IslandCallback >::check(L,1));
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

		btSimulationIslandManager::IslandCallback* self=(Luna< btSimulationIslandManager::IslandCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSimulationIslandManager::IslandCallback");
		
		return luna_dynamicCast(L,converters,"btSimulationIslandManager::IslandCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSimulationIslandManager::IslandCallback::IslandCallback(lua_Table * data)
	static btSimulationIslandManager::IslandCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimulationIslandManager::IslandCallback::IslandCallback(lua_Table * data) function, expected prototype:\nbtSimulationIslandManager::IslandCallback::IslandCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btSimulationIslandManager_IslandCallback(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

btSimulationIslandManager::IslandCallback* LunaTraits< btSimulationIslandManager::IslandCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSimulationIslandManager_IslandCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btSimulationIslandManager::IslandCallback::processIsland(btCollisionObject ** bodies, int numBodies, class btPersistentManifold ** manifolds, int numManifolds, int islandId)
}

void LunaTraits< btSimulationIslandManager::IslandCallback >::_bind_dtor(btSimulationIslandManager::IslandCallback* obj) {
	delete obj;
}

const char LunaTraits< btSimulationIslandManager::IslandCallback >::className[] = "btSimulationIslandManager_IslandCallback";
const char LunaTraits< btSimulationIslandManager::IslandCallback >::fullName[] = "btSimulationIslandManager::IslandCallback";
const char LunaTraits< btSimulationIslandManager::IslandCallback >::moduleName[] = "bullet";
const char* LunaTraits< btSimulationIslandManager::IslandCallback >::parents[] = {0};
const int LunaTraits< btSimulationIslandManager::IslandCallback >::hash = 56758259;
const int LunaTraits< btSimulationIslandManager::IslandCallback >::uniqueIDs[] = {56758259,0};

luna_RegType LunaTraits< btSimulationIslandManager::IslandCallback >::methods[] = {
	{"dynCast", &luna_wrapper_btSimulationIslandManager_IslandCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btSimulationIslandManager_IslandCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btSimulationIslandManager_IslandCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSimulationIslandManager_IslandCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btSimulationIslandManager_IslandCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSimulationIslandManager::IslandCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSimulationIslandManager::IslandCallback >::enumValues[] = {
	{0,0}
};


