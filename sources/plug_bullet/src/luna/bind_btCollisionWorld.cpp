#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld.h>

class luna_wrapper_btCollisionWorld {
public:
	typedef Luna< btCollisionWorld > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62162664) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld*)");
		}

		btCollisionWorld* rhs =(Luna< btCollisionWorld >::check(L,2));
		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
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

		btCollisionWorld* self= (btCollisionWorld*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62162664) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionWorld >::check(L,1));
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

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71097681)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDispatcher >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25261840)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btBroadphaseInterface >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31901746)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionConfiguration >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDispatcher >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25261840)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btBroadphaseInterface >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31901746)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionConfiguration >::check(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setBroadphase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25261840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBroadphase_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphase_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPairCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDispatcher_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDispatcher_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSingleAabb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_debugDrawObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumCollisionObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_convexSweepTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18279310) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contactTest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79983320) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contactPairTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,79983320) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollisionObjectArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionObjectArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_performDiscreteCollisionDetection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDispatchInfo_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDispatchInfo_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForceUpdateAllAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setForceUpdateAllAabbs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTestSingle(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTestSingleInternal(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_objectQuerySingle(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,85758361)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,18279310) ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_objectQuerySingleInternal(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18279310) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_debugDrawObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_performDiscreteCollisionDetection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::btCollisionWorld(btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration)
	static btCollisionWorld* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::btCollisionWorld(btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtCollisionWorld::btCollisionWorld(btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 25261840\narg 3 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,1));
		btBroadphaseInterface* broadphasePairCache=(Luna< btBroadphaseInterface >::check(L,2));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,3));

		return new btCollisionWorld(dispatcher, broadphasePairCache, collisionConfiguration);
	}

	// btCollisionWorld::btCollisionWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration)
	static btCollisionWorld* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::btCollisionWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtCollisionWorld::btCollisionWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 2 ID = 71097681\narg 3 ID = 25261840\narg 4 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btBroadphaseInterface* broadphasePairCache=(Luna< btBroadphaseInterface >::check(L,3));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,4));

		return new wrapper_btCollisionWorld(L,NULL, dispatcher, broadphasePairCache, collisionConfiguration);
	}

	// Overload binder for btCollisionWorld::btCollisionWorld
	static btCollisionWorld* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCollisionWorld, cannot match any of the overloads for function btCollisionWorld:\n  btCollisionWorld(btDispatcher *, btBroadphaseInterface *, btCollisionConfiguration *)\n  btCollisionWorld(lua_Table *, btDispatcher *, btBroadphaseInterface *, btCollisionConfiguration *)\n");
		return NULL;
	}


	// Function binds:
	// void btCollisionWorld::setBroadphase(btBroadphaseInterface * pairCache)
	static int _bind_setBroadphase(lua_State *L) {
		if (!_lg_typecheck_setBroadphase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::setBroadphase(btBroadphaseInterface * pairCache) function, expected prototype:\nvoid btCollisionWorld::setBroadphase(btBroadphaseInterface * pairCache)\nClass arguments details:\narg 1 ID = 25261840\n");
		}

		btBroadphaseInterface* pairCache=(Luna< btBroadphaseInterface >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::setBroadphase(btBroadphaseInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setBroadphase(pairCache);

		return 0;
	}

	// const btBroadphaseInterface * btCollisionWorld::getBroadphase() const
	static int _bind_getBroadphase_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBroadphase_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphaseInterface * btCollisionWorld::getBroadphase() const function, expected prototype:\nconst btBroadphaseInterface * btCollisionWorld::getBroadphase() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphaseInterface * btCollisionWorld::getBroadphase() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btBroadphaseInterface * lret = self->getBroadphase();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseInterface >::push(L,lret,false);

		return 1;
	}

	// btBroadphaseInterface * btCollisionWorld::getBroadphase()
	static int _bind_getBroadphase_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBroadphase_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseInterface * btCollisionWorld::getBroadphase() function, expected prototype:\nbtBroadphaseInterface * btCollisionWorld::getBroadphase()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseInterface * btCollisionWorld::getBroadphase(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btBroadphaseInterface * lret = self->getBroadphase();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseInterface >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionWorld::getBroadphase
	static int _bind_getBroadphase(lua_State *L) {
		if (_lg_typecheck_getBroadphase_overload_1(L)) return _bind_getBroadphase_overload_1(L);
		if (_lg_typecheck_getBroadphase_overload_2(L)) return _bind_getBroadphase_overload_2(L);

		luaL_error(L, "error in function getBroadphase, cannot match any of the overloads for function getBroadphase:\n  getBroadphase()\n  getBroadphase()\n");
		return 0;
	}

	// btOverlappingPairCache * btCollisionWorld::getPairCache()
	static int _bind_getPairCache(lua_State *L) {
		if (!_lg_typecheck_getPairCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btCollisionWorld::getPairCache() function, expected prototype:\nbtOverlappingPairCache * btCollisionWorld::getPairCache()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btCollisionWorld::getPairCache(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->getPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// btDispatcher * btCollisionWorld::getDispatcher()
	static int _bind_getDispatcher_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDispatcher_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDispatcher * btCollisionWorld::getDispatcher() function, expected prototype:\nbtDispatcher * btCollisionWorld::getDispatcher()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDispatcher * btCollisionWorld::getDispatcher(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDispatcher * lret = self->getDispatcher();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDispatcher >::push(L,lret,false);

		return 1;
	}

	// const btDispatcher * btCollisionWorld::getDispatcher() const
	static int _bind_getDispatcher_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDispatcher_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDispatcher * btCollisionWorld::getDispatcher() const function, expected prototype:\nconst btDispatcher * btCollisionWorld::getDispatcher() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDispatcher * btCollisionWorld::getDispatcher() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btDispatcher * lret = self->getDispatcher();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDispatcher >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionWorld::getDispatcher
	static int _bind_getDispatcher(lua_State *L) {
		if (_lg_typecheck_getDispatcher_overload_1(L)) return _bind_getDispatcher_overload_1(L);
		if (_lg_typecheck_getDispatcher_overload_2(L)) return _bind_getDispatcher_overload_2(L);

		luaL_error(L, "error in function getDispatcher, cannot match any of the overloads for function getDispatcher:\n  getDispatcher()\n  getDispatcher()\n");
		return 0;
	}

	// void btCollisionWorld::updateSingleAabb(btCollisionObject * colObj)
	static int _bind_updateSingleAabb(lua_State *L) {
		if (!_lg_typecheck_updateSingleAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::updateSingleAabb(btCollisionObject * colObj) function, expected prototype:\nvoid btCollisionWorld::updateSingleAabb(btCollisionObject * colObj)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::updateSingleAabb(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->updateSingleAabb(colObj);

		return 0;
	}

	// void btCollisionWorld::updateAabbs()
	static int _bind_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::updateAabbs() function, expected prototype:\nvoid btCollisionWorld::updateAabbs()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->updateAabbs();

		return 0;
	}

	// void btCollisionWorld::computeOverlappingPairs()
	static int _bind_computeOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_computeOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::computeOverlappingPairs() function, expected prototype:\nvoid btCollisionWorld::computeOverlappingPairs()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::computeOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->computeOverlappingPairs();

		return 0;
	}

	// void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)
	static int _bind_setDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_setDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::setDebugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setDebugDrawer(debugDrawer);

		return 0;
	}

	// btIDebugDraw * btCollisionWorld::getDebugDrawer()
	static int _bind_getDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_getDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btCollisionWorld::getDebugDrawer() function, expected prototype:\nbtIDebugDraw * btCollisionWorld::getDebugDrawer()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btCollisionWorld::getDebugDrawer(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->getDebugDrawer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// void btCollisionWorld::debugDrawWorld()
	static int _bind_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::debugDrawWorld() function, expected prototype:\nvoid btCollisionWorld::debugDrawWorld()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawWorld();

		return 0;
	}

	// void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	static int _bind_debugDrawObject(lua_State *L) {
		if (!_lg_typecheck_debugDrawObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) function, expected prototype:\nvoid btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\narg 3 ID = 91544891\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btCollisionWorld::debugDrawObject function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;
		const btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btCollisionWorld::debugDrawObject function");
		}
		const btVector3 & color=*color_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::debugDrawObject(const btTransform &, const btCollisionShape *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawObject(worldTransform, shape, color);

		return 0;
	}

	// int btCollisionWorld::getNumCollisionObjects() const
	static int _bind_getNumCollisionObjects(lua_State *L) {
		if (!_lg_typecheck_getNumCollisionObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionWorld::getNumCollisionObjects() const function, expected prototype:\nint btCollisionWorld::getNumCollisionObjects() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionWorld::getNumCollisionObjects() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->getNumCollisionObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btCollisionWorld::convexSweepTest(const btConvexShape * castShape, const btTransform & from, const btTransform & to, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = float (0.)) const
	static int _bind_convexSweepTest(lua_State *L) {
		if (!_lg_typecheck_convexSweepTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::convexSweepTest(const btConvexShape * castShape, const btTransform & from, const btTransform & to, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = float (0.)) const function, expected prototype:\nvoid btCollisionWorld::convexSweepTest(const btConvexShape * castShape, const btTransform & from, const btTransform & to, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = float (0.)) const\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 18279310\n");
		}

		int luatop = lua_gettop(L);

		const btConvexShape* castShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btTransform* from_ptr=(Luna< btTransform >::check(L,3));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btCollisionWorld::convexSweepTest function");
		}
		const btTransform & from=*from_ptr;
		const btTransform* to_ptr=(Luna< btTransform >::check(L,4));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btCollisionWorld::convexSweepTest function");
		}
		const btTransform & to=*to_ptr;
		btCollisionWorld::ConvexResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,5));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::convexSweepTest function");
		}
		btCollisionWorld::ConvexResultCallback & resultCallback=*resultCallback_ptr;
		float allowedCcdPenetration=luatop>5 ? (float)lua_tonumber(L,6) : (float)float (0.);

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::convexSweepTest(const btConvexShape *, const btTransform &, const btTransform &, btCollisionWorld::ConvexResultCallback &, float) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->convexSweepTest(castShape, from, to, resultCallback, allowedCcdPenetration);

		return 0;
	}

	// void btCollisionWorld::contactTest(btCollisionObject * colObj, btCollisionWorld::ContactResultCallback & resultCallback)
	static int _bind_contactTest(lua_State *L) {
		if (!_lg_typecheck_contactTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::contactTest(btCollisionObject * colObj, btCollisionWorld::ContactResultCallback & resultCallback) function, expected prototype:\nvoid btCollisionWorld::contactTest(btCollisionObject * colObj, btCollisionWorld::ContactResultCallback & resultCallback)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 79983320\n");
		}

		btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,2));
		btCollisionWorld::ContactResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ContactResultCallback >::check(L,3));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::contactTest function");
		}
		btCollisionWorld::ContactResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::contactTest(btCollisionObject *, btCollisionWorld::ContactResultCallback &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->contactTest(colObj, resultCallback);

		return 0;
	}

	// void btCollisionWorld::contactPairTest(btCollisionObject * colObjA, btCollisionObject * colObjB, btCollisionWorld::ContactResultCallback & resultCallback)
	static int _bind_contactPairTest(lua_State *L) {
		if (!_lg_typecheck_contactPairTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::contactPairTest(btCollisionObject * colObjA, btCollisionObject * colObjB, btCollisionWorld::ContactResultCallback & resultCallback) function, expected prototype:\nvoid btCollisionWorld::contactPairTest(btCollisionObject * colObjA, btCollisionObject * colObjB, btCollisionWorld::ContactResultCallback & resultCallback)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 79983320\n");
		}

		btCollisionObject* colObjA=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* colObjB=(Luna< btCollisionObject >::check(L,3));
		btCollisionWorld::ContactResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ContactResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::contactPairTest function");
		}
		btCollisionWorld::ContactResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::contactPairTest(btCollisionObject *, btCollisionObject *, btCollisionWorld::ContactResultCallback &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->contactPairTest(colObjA, colObjB, resultCallback);

		return 0;
	}

	// void btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	static int _bind_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) function, expected prototype:\nvoid btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : (short int)btBroadphaseProxy::DefaultFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : (short int)btBroadphaseProxy::AllFilter;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray()
	static int _bind_getCollisionObjectArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollisionObjectArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray() function, expected prototype:\nbtCollisionObjectArray & btCollisionWorld::getCollisionObjectArray()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btCollisionObjectArray* lret = &self->getCollisionObjectArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectArray >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray() const
	static int _bind_getCollisionObjectArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollisionObjectArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray() const function, expected prototype:\nconst btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObjectArray & btCollisionWorld::getCollisionObjectArray() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btCollisionObjectArray* lret = &self->getCollisionObjectArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionWorld::getCollisionObjectArray
	static int _bind_getCollisionObjectArray(lua_State *L) {
		if (_lg_typecheck_getCollisionObjectArray_overload_1(L)) return _bind_getCollisionObjectArray_overload_1(L);
		if (_lg_typecheck_getCollisionObjectArray_overload_2(L)) return _bind_getCollisionObjectArray_overload_2(L);

		luaL_error(L, "error in function getCollisionObjectArray, cannot match any of the overloads for function getCollisionObjectArray:\n  getCollisionObjectArray()\n  getCollisionObjectArray()\n");
		return 0;
	}

	// void btCollisionWorld::removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btCollisionWorld::removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeCollisionObject(collisionObject);

		return 0;
	}

	// void btCollisionWorld::performDiscreteCollisionDetection()
	static int _bind_performDiscreteCollisionDetection(lua_State *L) {
		if (!_lg_typecheck_performDiscreteCollisionDetection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::performDiscreteCollisionDetection() function, expected prototype:\nvoid btCollisionWorld::performDiscreteCollisionDetection()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::performDiscreteCollisionDetection(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->performDiscreteCollisionDetection();

		return 0;
	}

	// btDispatcherInfo & btCollisionWorld::getDispatchInfo()
	static int _bind_getDispatchInfo_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDispatchInfo_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDispatcherInfo & btCollisionWorld::getDispatchInfo() function, expected prototype:\nbtDispatcherInfo & btCollisionWorld::getDispatchInfo()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDispatcherInfo & btCollisionWorld::getDispatchInfo(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btDispatcherInfo* lret = &self->getDispatchInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDispatcherInfo >::push(L,lret,false);

		return 1;
	}

	// const btDispatcherInfo & btCollisionWorld::getDispatchInfo() const
	static int _bind_getDispatchInfo_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDispatchInfo_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDispatcherInfo & btCollisionWorld::getDispatchInfo() const function, expected prototype:\nconst btDispatcherInfo & btCollisionWorld::getDispatchInfo() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDispatcherInfo & btCollisionWorld::getDispatchInfo() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btDispatcherInfo* lret = &self->getDispatchInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDispatcherInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionWorld::getDispatchInfo
	static int _bind_getDispatchInfo(lua_State *L) {
		if (_lg_typecheck_getDispatchInfo_overload_1(L)) return _bind_getDispatchInfo_overload_1(L);
		if (_lg_typecheck_getDispatchInfo_overload_2(L)) return _bind_getDispatchInfo_overload_2(L);

		luaL_error(L, "error in function getDispatchInfo, cannot match any of the overloads for function getDispatchInfo:\n  getDispatchInfo()\n  getDispatchInfo()\n");
		return 0;
	}

	// bool btCollisionWorld::getForceUpdateAllAabbs() const
	static int _bind_getForceUpdateAllAabbs(lua_State *L) {
		if (!_lg_typecheck_getForceUpdateAllAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::getForceUpdateAllAabbs() const function, expected prototype:\nbool btCollisionWorld::getForceUpdateAllAabbs() const\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::getForceUpdateAllAabbs() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		bool lret = self->getForceUpdateAllAabbs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionWorld::setForceUpdateAllAabbs(bool forceUpdateAllAabbs)
	static int _bind_setForceUpdateAllAabbs(lua_State *L) {
		if (!_lg_typecheck_setForceUpdateAllAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::setForceUpdateAllAabbs(bool forceUpdateAllAabbs) function, expected prototype:\nvoid btCollisionWorld::setForceUpdateAllAabbs(bool forceUpdateAllAabbs)\nClass arguments details:\n");
		}

		bool forceUpdateAllAabbs=(bool)(lua_toboolean(L,2)==1);

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::setForceUpdateAllAabbs(bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setForceUpdateAllAabbs(forceUpdateAllAabbs);

		return 0;
	}

	// static void btCollisionWorld::rayTestSingle(const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::RayResultCallback & resultCallback)
	static int _bind_rayTestSingle(lua_State *L) {
		if (!_lg_typecheck_rayTestSingle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btCollisionWorld::rayTestSingle(const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::RayResultCallback & resultCallback) function, expected prototype:\nstatic void btCollisionWorld::rayTestSingle(const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::RayResultCallback & resultCallback)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 85758361\narg 4 ID = 58243831\narg 5 ID = 13247377\narg 6 ID = 44790882\n");
		}

		const btTransform* rayFromTrans_ptr=(Luna< btTransform >::check(L,1));
		if( !rayFromTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromTrans in btCollisionWorld::rayTestSingle function");
		}
		const btTransform & rayFromTrans=*rayFromTrans_ptr;
		const btTransform* rayToTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !rayToTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToTrans in btCollisionWorld::rayTestSingle function");
		}
		const btTransform & rayToTrans=*rayToTrans_ptr;
		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,3));
		const btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,4));
		const btTransform* colObjWorldTransform_ptr=(Luna< btTransform >::check(L,5));
		if( !colObjWorldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colObjWorldTransform in btCollisionWorld::rayTestSingle function");
		}
		const btTransform & colObjWorldTransform=*colObjWorldTransform_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,6));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::rayTestSingle function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld::rayTestSingle(rayFromTrans, rayToTrans, collisionObject, collisionShape, colObjWorldTransform, resultCallback);

		return 0;
	}

	// static void btCollisionWorld::rayTestSingleInternal(const btTransform & rayFromTrans, const btTransform & rayToTrans, const btCollisionObjectWrapper * collisionObjectWrap, btCollisionWorld::RayResultCallback & resultCallback)
	static int _bind_rayTestSingleInternal(lua_State *L) {
		if (!_lg_typecheck_rayTestSingleInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btCollisionWorld::rayTestSingleInternal(const btTransform & rayFromTrans, const btTransform & rayToTrans, const btCollisionObjectWrapper * collisionObjectWrap, btCollisionWorld::RayResultCallback & resultCallback) function, expected prototype:\nstatic void btCollisionWorld::rayTestSingleInternal(const btTransform & rayFromTrans, const btTransform & rayToTrans, const btCollisionObjectWrapper * collisionObjectWrap, btCollisionWorld::RayResultCallback & resultCallback)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 32391296\narg 4 ID = 44790882\n");
		}

		const btTransform* rayFromTrans_ptr=(Luna< btTransform >::check(L,1));
		if( !rayFromTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromTrans in btCollisionWorld::rayTestSingleInternal function");
		}
		const btTransform & rayFromTrans=*rayFromTrans_ptr;
		const btTransform* rayToTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !rayToTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToTrans in btCollisionWorld::rayTestSingleInternal function");
		}
		const btTransform & rayToTrans=*rayToTrans_ptr;
		const btCollisionObjectWrapper* collisionObjectWrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::rayTestSingleInternal function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld::rayTestSingleInternal(rayFromTrans, rayToTrans, collisionObjectWrap, resultCallback);

		return 0;
	}

	// static void btCollisionWorld::objectQuerySingle(const btConvexShape * castShape, const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration)
	static int _bind_objectQuerySingle(lua_State *L) {
		if (!_lg_typecheck_objectQuerySingle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btCollisionWorld::objectQuerySingle(const btConvexShape * castShape, const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration) function, expected prototype:\nstatic void btCollisionWorld::objectQuerySingle(const btConvexShape * castShape, const btTransform & rayFromTrans, const btTransform & rayToTrans, btCollisionObject * collisionObject, const btCollisionShape * collisionShape, const btTransform & colObjWorldTransform, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 85758361\narg 5 ID = 58243831\narg 6 ID = 13247377\narg 7 ID = 18279310\n");
		}

		const btConvexShape* castShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btTransform* rayFromTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !rayFromTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromTrans in btCollisionWorld::objectQuerySingle function");
		}
		const btTransform & rayFromTrans=*rayFromTrans_ptr;
		const btTransform* rayToTrans_ptr=(Luna< btTransform >::check(L,3));
		if( !rayToTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToTrans in btCollisionWorld::objectQuerySingle function");
		}
		const btTransform & rayToTrans=*rayToTrans_ptr;
		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,4));
		const btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,5));
		const btTransform* colObjWorldTransform_ptr=(Luna< btTransform >::check(L,6));
		if( !colObjWorldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colObjWorldTransform in btCollisionWorld::objectQuerySingle function");
		}
		const btTransform & colObjWorldTransform=*colObjWorldTransform_ptr;
		btCollisionWorld::ConvexResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,7));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::objectQuerySingle function");
		}
		btCollisionWorld::ConvexResultCallback & resultCallback=*resultCallback_ptr;
		float allowedPenetration=(float)lua_tonumber(L,8);

		btCollisionWorld::objectQuerySingle(castShape, rayFromTrans, rayToTrans, collisionObject, collisionShape, colObjWorldTransform, resultCallback, allowedPenetration);

		return 0;
	}

	// static void btCollisionWorld::objectQuerySingleInternal(const btConvexShape * castShape, const btTransform & convexFromTrans, const btTransform & convexToTrans, const btCollisionObjectWrapper * colObjWrap, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration)
	static int _bind_objectQuerySingleInternal(lua_State *L) {
		if (!_lg_typecheck_objectQuerySingleInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btCollisionWorld::objectQuerySingleInternal(const btConvexShape * castShape, const btTransform & convexFromTrans, const btTransform & convexToTrans, const btCollisionObjectWrapper * colObjWrap, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration) function, expected prototype:\nstatic void btCollisionWorld::objectQuerySingleInternal(const btConvexShape * castShape, const btTransform & convexFromTrans, const btTransform & convexToTrans, const btCollisionObjectWrapper * colObjWrap, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedPenetration)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 32391296\narg 5 ID = 18279310\n");
		}

		const btConvexShape* castShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btTransform* convexFromTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !convexFromTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexFromTrans in btCollisionWorld::objectQuerySingleInternal function");
		}
		const btTransform & convexFromTrans=*convexFromTrans_ptr;
		const btTransform* convexToTrans_ptr=(Luna< btTransform >::check(L,3));
		if( !convexToTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexToTrans in btCollisionWorld::objectQuerySingleInternal function");
		}
		const btTransform & convexToTrans=*convexToTrans_ptr;
		const btCollisionObjectWrapper* colObjWrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		btCollisionWorld::ConvexResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,5));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::objectQuerySingleInternal function");
		}
		btCollisionWorld::ConvexResultCallback & resultCallback=*resultCallback_ptr;
		float allowedPenetration=(float)lua_tonumber(L,6);

		btCollisionWorld::objectQuerySingleInternal(castShape, convexFromTrans, convexToTrans, colObjWrap, resultCallback, allowedPenetration);

		return 0;
	}

	// void btCollisionWorld::base_updateAabbs()
	static int _bind_base_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_base_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_updateAabbs() function, expected prototype:\nvoid btCollisionWorld::base_updateAabbs()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::updateAabbs();

		return 0;
	}

	// void btCollisionWorld::base_computeOverlappingPairs()
	static int _bind_base_computeOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_computeOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_computeOverlappingPairs() function, expected prototype:\nvoid btCollisionWorld::base_computeOverlappingPairs()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_computeOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::computeOverlappingPairs();

		return 0;
	}

	// void btCollisionWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)
	static int _bind_base_setDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_setDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btCollisionWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_setDebugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::setDebugDrawer(debugDrawer);

		return 0;
	}

	// btIDebugDraw * btCollisionWorld::base_getDebugDrawer()
	static int _bind_base_getDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_getDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btCollisionWorld::base_getDebugDrawer() function, expected prototype:\nbtIDebugDraw * btCollisionWorld::base_getDebugDrawer()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btCollisionWorld::base_getDebugDrawer(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->btCollisionWorld::getDebugDrawer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// void btCollisionWorld::base_debugDrawWorld()
	static int _bind_base_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_debugDrawWorld() function, expected prototype:\nvoid btCollisionWorld::base_debugDrawWorld()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::debugDrawWorld();

		return 0;
	}

	// void btCollisionWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	static int _bind_base_debugDrawObject(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) function, expected prototype:\nvoid btCollisionWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\narg 3 ID = 91544891\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btCollisionWorld::base_debugDrawObject function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;
		const btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btCollisionWorld::base_debugDrawObject function");
		}
		const btVector3 & color=*color_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_debugDrawObject(const btTransform &, const btCollisionShape *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::debugDrawObject(worldTransform, shape, color);

		return 0;
	}

	// void btCollisionWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btCollisionWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::base_rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::base_rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btCollisionWorld::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btCollisionWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	static int _bind_base_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) function, expected prototype:\nvoid btCollisionWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : (short int)btBroadphaseProxy::DefaultFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : (short int)btBroadphaseProxy::AllFilter;

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// void btCollisionWorld::base_removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_base_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btCollisionWorld::base_removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::removeCollisionObject(collisionObject);

		return 0;
	}

	// void btCollisionWorld::base_performDiscreteCollisionDetection()
	static int _bind_base_performDiscreteCollisionDetection(lua_State *L) {
		if (!_lg_typecheck_base_performDiscreteCollisionDetection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::base_performDiscreteCollisionDetection() function, expected prototype:\nvoid btCollisionWorld::base_performDiscreteCollisionDetection()\nClass arguments details:\n");
		}


		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::base_performDiscreteCollisionDetection(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btCollisionWorld::performDiscreteCollisionDetection();

		return 0;
	}


	// Operator binds:

};

btCollisionWorld* LunaTraits< btCollisionWorld >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld::_bind_ctor(L);
}

void LunaTraits< btCollisionWorld >::_bind_dtor(btCollisionWorld* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld >::className[] = "btCollisionWorld";
const char LunaTraits< btCollisionWorld >::fullName[] = "btCollisionWorld";
const char LunaTraits< btCollisionWorld >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld >::parents[] = {0};
const int LunaTraits< btCollisionWorld >::hash = 62162664;
const int LunaTraits< btCollisionWorld >::uniqueIDs[] = {62162664,0};

luna_RegType LunaTraits< btCollisionWorld >::methods[] = {
	{"setBroadphase", &luna_wrapper_btCollisionWorld::_bind_setBroadphase},
	{"getBroadphase", &luna_wrapper_btCollisionWorld::_bind_getBroadphase},
	{"getPairCache", &luna_wrapper_btCollisionWorld::_bind_getPairCache},
	{"getDispatcher", &luna_wrapper_btCollisionWorld::_bind_getDispatcher},
	{"updateSingleAabb", &luna_wrapper_btCollisionWorld::_bind_updateSingleAabb},
	{"updateAabbs", &luna_wrapper_btCollisionWorld::_bind_updateAabbs},
	{"computeOverlappingPairs", &luna_wrapper_btCollisionWorld::_bind_computeOverlappingPairs},
	{"setDebugDrawer", &luna_wrapper_btCollisionWorld::_bind_setDebugDrawer},
	{"getDebugDrawer", &luna_wrapper_btCollisionWorld::_bind_getDebugDrawer},
	{"debugDrawWorld", &luna_wrapper_btCollisionWorld::_bind_debugDrawWorld},
	{"debugDrawObject", &luna_wrapper_btCollisionWorld::_bind_debugDrawObject},
	{"getNumCollisionObjects", &luna_wrapper_btCollisionWorld::_bind_getNumCollisionObjects},
	{"rayTest", &luna_wrapper_btCollisionWorld::_bind_rayTest},
	{"convexSweepTest", &luna_wrapper_btCollisionWorld::_bind_convexSweepTest},
	{"contactTest", &luna_wrapper_btCollisionWorld::_bind_contactTest},
	{"contactPairTest", &luna_wrapper_btCollisionWorld::_bind_contactPairTest},
	{"addCollisionObject", &luna_wrapper_btCollisionWorld::_bind_addCollisionObject},
	{"getCollisionObjectArray", &luna_wrapper_btCollisionWorld::_bind_getCollisionObjectArray},
	{"removeCollisionObject", &luna_wrapper_btCollisionWorld::_bind_removeCollisionObject},
	{"performDiscreteCollisionDetection", &luna_wrapper_btCollisionWorld::_bind_performDiscreteCollisionDetection},
	{"getDispatchInfo", &luna_wrapper_btCollisionWorld::_bind_getDispatchInfo},
	{"getForceUpdateAllAabbs", &luna_wrapper_btCollisionWorld::_bind_getForceUpdateAllAabbs},
	{"setForceUpdateAllAabbs", &luna_wrapper_btCollisionWorld::_bind_setForceUpdateAllAabbs},
	{"rayTestSingle", &luna_wrapper_btCollisionWorld::_bind_rayTestSingle},
	{"rayTestSingleInternal", &luna_wrapper_btCollisionWorld::_bind_rayTestSingleInternal},
	{"objectQuerySingle", &luna_wrapper_btCollisionWorld::_bind_objectQuerySingle},
	{"objectQuerySingleInternal", &luna_wrapper_btCollisionWorld::_bind_objectQuerySingleInternal},
	{"base_updateAabbs", &luna_wrapper_btCollisionWorld::_bind_base_updateAabbs},
	{"base_computeOverlappingPairs", &luna_wrapper_btCollisionWorld::_bind_base_computeOverlappingPairs},
	{"base_setDebugDrawer", &luna_wrapper_btCollisionWorld::_bind_base_setDebugDrawer},
	{"base_getDebugDrawer", &luna_wrapper_btCollisionWorld::_bind_base_getDebugDrawer},
	{"base_debugDrawWorld", &luna_wrapper_btCollisionWorld::_bind_base_debugDrawWorld},
	{"base_debugDrawObject", &luna_wrapper_btCollisionWorld::_bind_base_debugDrawObject},
	{"base_rayTest", &luna_wrapper_btCollisionWorld::_bind_base_rayTest},
	{"base_addCollisionObject", &luna_wrapper_btCollisionWorld::_bind_base_addCollisionObject},
	{"base_removeCollisionObject", &luna_wrapper_btCollisionWorld::_bind_base_removeCollisionObject},
	{"base_performDiscreteCollisionDetection", &luna_wrapper_btCollisionWorld::_bind_base_performDiscreteCollisionDetection},
	{"dynCast", &luna_wrapper_btCollisionWorld::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionWorld::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionWorld::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld >::enumValues[] = {
	{0,0}
};


