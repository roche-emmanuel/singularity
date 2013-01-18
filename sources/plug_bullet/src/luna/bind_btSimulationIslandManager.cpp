#include <plug_common.h>

#include <luna/wrappers/wrapper_btSimulationIslandManager.h>

class luna_wrapper_btSimulationIslandManager {
public:
	typedef Luna< btSimulationIslandManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btSimulationIslandManager,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80381571) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSimulationIslandManager*)");
		}

		btSimulationIslandManager* rhs =(Luna< btSimulationIslandManager >::check(L,2));
		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
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

		btSimulationIslandManager* self= (btSimulationIslandManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSimulationIslandManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80381571) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSimulationIslandManager >::check(L,1));
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

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSimulationIslandManager");
		
		return luna_dynamicCast(L,converters,"btSimulationIslandManager",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_initUnionFind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnionFind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateActivationState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_storeIslandActivationState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findUnions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildAndProcessIslands(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,62162664)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56758259)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildIslands(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitIslands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitIslands(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateActivationState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_storeIslandActivationState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSimulationIslandManager::btSimulationIslandManager()
	static btSimulationIslandManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimulationIslandManager::btSimulationIslandManager() function, expected prototype:\nbtSimulationIslandManager::btSimulationIslandManager()\nClass arguments details:\n");
		}


		return new btSimulationIslandManager();
	}

	// btSimulationIslandManager::btSimulationIslandManager(lua_Table * data)
	static btSimulationIslandManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimulationIslandManager::btSimulationIslandManager(lua_Table * data) function, expected prototype:\nbtSimulationIslandManager::btSimulationIslandManager(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btSimulationIslandManager(L,NULL);
	}

	// Overload binder for btSimulationIslandManager::btSimulationIslandManager
	static btSimulationIslandManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSimulationIslandManager, cannot match any of the overloads for function btSimulationIslandManager:\n  btSimulationIslandManager()\n  btSimulationIslandManager(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btSimulationIslandManager::initUnionFind(int n)
	static int _bind_initUnionFind(lua_State *L) {
		if (!_lg_typecheck_initUnionFind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::initUnionFind(int n) function, expected prototype:\nvoid btSimulationIslandManager::initUnionFind(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::initUnionFind(int). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->initUnionFind(n);

		return 0;
	}

	// btUnionFind & btSimulationIslandManager::getUnionFind()
	static int _bind_getUnionFind(lua_State *L) {
		if (!_lg_typecheck_getUnionFind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btUnionFind & btSimulationIslandManager::getUnionFind() function, expected prototype:\nbtUnionFind & btSimulationIslandManager::getUnionFind()\nClass arguments details:\n");
		}


		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btUnionFind & btSimulationIslandManager::getUnionFind(). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		const btUnionFind* lret = &self->getUnionFind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btUnionFind >::push(L,lret,false);

		return 1;
	}

	// void btSimulationIslandManager::updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher)
	static int _bind_updateActivationState(lua_State *L) {
		if (!_lg_typecheck_updateActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimulationIslandManager::updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 62162664\narg 2 ID = 71097681\n");
		}

		btCollisionWorld* colWorld=(Luna< btCollisionWorld >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::updateActivationState(btCollisionWorld *, btDispatcher *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->updateActivationState(colWorld, dispatcher);

		return 0;
	}

	// void btSimulationIslandManager::storeIslandActivationState(btCollisionWorld * world)
	static int _bind_storeIslandActivationState(lua_State *L) {
		if (!_lg_typecheck_storeIslandActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::storeIslandActivationState(btCollisionWorld * world) function, expected prototype:\nvoid btSimulationIslandManager::storeIslandActivationState(btCollisionWorld * world)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* world=(Luna< btCollisionWorld >::check(L,2));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::storeIslandActivationState(btCollisionWorld *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->storeIslandActivationState(world);

		return 0;
	}

	// void btSimulationIslandManager::findUnions(btDispatcher * dispatcher, btCollisionWorld * colWorld)
	static int _bind_findUnions(lua_State *L) {
		if (!_lg_typecheck_findUnions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::findUnions(btDispatcher * dispatcher, btCollisionWorld * colWorld) function, expected prototype:\nvoid btSimulationIslandManager::findUnions(btDispatcher * dispatcher, btCollisionWorld * colWorld)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 62162664\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btCollisionWorld* colWorld=(Luna< btCollisionWorld >::check(L,3));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::findUnions(btDispatcher *, btCollisionWorld *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->findUnions(dispatcher, colWorld);

		return 0;
	}

	// void btSimulationIslandManager::buildAndProcessIslands(btDispatcher * dispatcher, btCollisionWorld * collisionWorld, btSimulationIslandManager::IslandCallback * callback)
	static int _bind_buildAndProcessIslands(lua_State *L) {
		if (!_lg_typecheck_buildAndProcessIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::buildAndProcessIslands(btDispatcher * dispatcher, btCollisionWorld * collisionWorld, btSimulationIslandManager::IslandCallback * callback) function, expected prototype:\nvoid btSimulationIslandManager::buildAndProcessIslands(btDispatcher * dispatcher, btCollisionWorld * collisionWorld, btSimulationIslandManager::IslandCallback * callback)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 62162664\narg 3 ID = 56758259\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,3));
		btSimulationIslandManager::IslandCallback* callback=(Luna< btSimulationIslandManager::IslandCallback >::check(L,4));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::buildAndProcessIslands(btDispatcher *, btCollisionWorld *, btSimulationIslandManager::IslandCallback *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->buildAndProcessIslands(dispatcher, collisionWorld, callback);

		return 0;
	}

	// void btSimulationIslandManager::buildIslands(btDispatcher * dispatcher, btCollisionWorld * colWorld)
	static int _bind_buildIslands(lua_State *L) {
		if (!_lg_typecheck_buildIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::buildIslands(btDispatcher * dispatcher, btCollisionWorld * colWorld) function, expected prototype:\nvoid btSimulationIslandManager::buildIslands(btDispatcher * dispatcher, btCollisionWorld * colWorld)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 62162664\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btCollisionWorld* colWorld=(Luna< btCollisionWorld >::check(L,3));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::buildIslands(btDispatcher *, btCollisionWorld *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->buildIslands(dispatcher, colWorld);

		return 0;
	}

	// bool btSimulationIslandManager::getSplitIslands()
	static int _bind_getSplitIslands(lua_State *L) {
		if (!_lg_typecheck_getSplitIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSimulationIslandManager::getSplitIslands() function, expected prototype:\nbool btSimulationIslandManager::getSplitIslands()\nClass arguments details:\n");
		}


		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSimulationIslandManager::getSplitIslands(). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		bool lret = self->getSplitIslands();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSimulationIslandManager::setSplitIslands(bool doSplitIslands)
	static int _bind_setSplitIslands(lua_State *L) {
		if (!_lg_typecheck_setSplitIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::setSplitIslands(bool doSplitIslands) function, expected prototype:\nvoid btSimulationIslandManager::setSplitIslands(bool doSplitIslands)\nClass arguments details:\n");
		}

		bool doSplitIslands=(bool)(lua_toboolean(L,2)==1);

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::setSplitIslands(bool). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->setSplitIslands(doSplitIslands);

		return 0;
	}

	// void btSimulationIslandManager::base_updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher)
	static int _bind_base_updateActivationState(lua_State *L) {
		if (!_lg_typecheck_base_updateActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::base_updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimulationIslandManager::base_updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 62162664\narg 2 ID = 71097681\n");
		}

		btCollisionWorld* colWorld=(Luna< btCollisionWorld >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::base_updateActivationState(btCollisionWorld *, btDispatcher *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->btSimulationIslandManager::updateActivationState(colWorld, dispatcher);

		return 0;
	}

	// void btSimulationIslandManager::base_storeIslandActivationState(btCollisionWorld * world)
	static int _bind_base_storeIslandActivationState(lua_State *L) {
		if (!_lg_typecheck_base_storeIslandActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimulationIslandManager::base_storeIslandActivationState(btCollisionWorld * world) function, expected prototype:\nvoid btSimulationIslandManager::base_storeIslandActivationState(btCollisionWorld * world)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* world=(Luna< btCollisionWorld >::check(L,2));

		btSimulationIslandManager* self=(Luna< btSimulationIslandManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimulationIslandManager::base_storeIslandActivationState(btCollisionWorld *). Got : '%s'",typeid(Luna< btSimulationIslandManager >::check(L,1)).name());
		}
		self->btSimulationIslandManager::storeIslandActivationState(world);

		return 0;
	}


	// Operator binds:

};

btSimulationIslandManager* LunaTraits< btSimulationIslandManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSimulationIslandManager::_bind_ctor(L);
}

void LunaTraits< btSimulationIslandManager >::_bind_dtor(btSimulationIslandManager* obj) {
	delete obj;
}

const char LunaTraits< btSimulationIslandManager >::className[] = "btSimulationIslandManager";
const char LunaTraits< btSimulationIslandManager >::fullName[] = "btSimulationIslandManager";
const char LunaTraits< btSimulationIslandManager >::moduleName[] = "bullet";
const char* LunaTraits< btSimulationIslandManager >::parents[] = {0};
const int LunaTraits< btSimulationIslandManager >::hash = 80381571;
const int LunaTraits< btSimulationIslandManager >::uniqueIDs[] = {80381571,0};

luna_RegType LunaTraits< btSimulationIslandManager >::methods[] = {
	{"initUnionFind", &luna_wrapper_btSimulationIslandManager::_bind_initUnionFind},
	{"getUnionFind", &luna_wrapper_btSimulationIslandManager::_bind_getUnionFind},
	{"updateActivationState", &luna_wrapper_btSimulationIslandManager::_bind_updateActivationState},
	{"storeIslandActivationState", &luna_wrapper_btSimulationIslandManager::_bind_storeIslandActivationState},
	{"findUnions", &luna_wrapper_btSimulationIslandManager::_bind_findUnions},
	{"buildAndProcessIslands", &luna_wrapper_btSimulationIslandManager::_bind_buildAndProcessIslands},
	{"buildIslands", &luna_wrapper_btSimulationIslandManager::_bind_buildIslands},
	{"getSplitIslands", &luna_wrapper_btSimulationIslandManager::_bind_getSplitIslands},
	{"setSplitIslands", &luna_wrapper_btSimulationIslandManager::_bind_setSplitIslands},
	{"base_updateActivationState", &luna_wrapper_btSimulationIslandManager::_bind_base_updateActivationState},
	{"base_storeIslandActivationState", &luna_wrapper_btSimulationIslandManager::_bind_base_storeIslandActivationState},
	{"dynCast", &luna_wrapper_btSimulationIslandManager::_bind_dynCast},
	{"__eq", &luna_wrapper_btSimulationIslandManager::_bind___eq},
	{"fromVoid", &luna_wrapper_btSimulationIslandManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSimulationIslandManager::_bind_asVoid},
	{"getTable", &luna_wrapper_btSimulationIslandManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSimulationIslandManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSimulationIslandManager >::enumValues[] = {
	{0,0}
};


