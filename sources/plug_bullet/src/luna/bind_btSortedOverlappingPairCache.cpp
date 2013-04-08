#include <plug_common.h>

#include <luna/wrappers/wrapper_btSortedOverlappingPairCache.h>

class luna_wrapper_btSortedOverlappingPairCache {
public:
	typedef Luna< btSortedOverlappingPairCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btOverlappingPairCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78133027) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOverlappingPairCallback*)");
		}

		btOverlappingPairCallback* rhs =(Luna< btOverlappingPairCallback >::check(L,2));
		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btSortedOverlappingPairCache* self= (btSortedOverlappingPairCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSortedOverlappingPairCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78133027) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btOverlappingPairCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSortedOverlappingPairCache* ptr= dynamic_cast< btSortedOverlappingPairCache* >(Luna< btOverlappingPairCallback >::check(L,1));
		btSortedOverlappingPairCache* ptr= luna_caster< btOverlappingPairCallback, btSortedOverlappingPairCache >::cast(Luna< btOverlappingPairCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSortedOverlappingPairCache >::push(L,ptr,false);
		return 1;
	};


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
	inline static bool _lg_typecheck_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cleanOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cleanProxyFromPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsBroadphaseCollision(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50236777)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasDeferredRemoval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalGhostPairCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sortOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cleanOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cleanProxyFromPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getOverlappingPairArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50236777)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_hasDeferredRemoval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setInternalGhostPairCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sortOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSortedOverlappingPairCache::btSortedOverlappingPairCache()
	static btSortedOverlappingPairCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSortedOverlappingPairCache::btSortedOverlappingPairCache() function, expected prototype:\nbtSortedOverlappingPairCache::btSortedOverlappingPairCache()\nClass arguments details:\n");
		}


		return new btSortedOverlappingPairCache();
	}

	// btSortedOverlappingPairCache::btSortedOverlappingPairCache(lua_Table * data)
	static btSortedOverlappingPairCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSortedOverlappingPairCache::btSortedOverlappingPairCache(lua_Table * data) function, expected prototype:\nbtSortedOverlappingPairCache::btSortedOverlappingPairCache(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btSortedOverlappingPairCache(L,NULL);
	}

	// Overload binder for btSortedOverlappingPairCache::btSortedOverlappingPairCache
	static btSortedOverlappingPairCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSortedOverlappingPairCache, cannot match any of the overloads for function btSortedOverlappingPairCache:\n  btSortedOverlappingPairCache()\n  btSortedOverlappingPairCache(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	static int _bind_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->processAllOverlappingPairs(_arg1, dispatcher);

		return 0;
	}

	// void * btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	static int _bind_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btSortedOverlappingPairCache::cleanOverlappingPair function");
		}
		btBroadphasePair & pair=*pair_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanOverlappingPair(pair, dispatcher);

		return 0;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_findPair(lua_State *L) {
		if (!_lg_typecheck_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->findPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanProxyFromPairs(proxy, dispatcher);

		return 0;
	}

	// void btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->removeOverlappingPairsContainingProxy(proxy, dispatcher);

		return 0;
	}

	// bool btSortedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const
	static int _bind_needsBroadphaseCollision(lua_State *L) {
		if (!_lg_typecheck_needsBroadphaseCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSortedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const function, expected prototype:\nbool btSortedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSortedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy *, btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->needsBroadphaseCollision(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray()
	static int _bind_getOverlappingPairArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray() const
	static int _bind_getOverlappingPairArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray() const function, expected prototype:\nconst btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray() const\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSortedOverlappingPairCache::getOverlappingPairArray
	static int _bind_getOverlappingPairArray(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArray_overload_1(L)) return _bind_getOverlappingPairArray_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArray_overload_2(L)) return _bind_getOverlappingPairArray_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArray, cannot match any of the overloads for function getOverlappingPairArray:\n  getOverlappingPairArray()\n  getOverlappingPairArray()\n");
		return 0;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr()
	static int _bind_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() const
	static int _bind_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSortedOverlappingPairCache::getOverlappingPairArrayPtr
	static int _bind_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) return _bind_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) return _bind_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArrayPtr, cannot match any of the overloads for function getOverlappingPairArrayPtr:\n  getOverlappingPairArrayPtr()\n  getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// int btSortedOverlappingPairCache::getNumOverlappingPairs() const
	static int _bind_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSortedOverlappingPairCache::getNumOverlappingPairs() const function, expected prototype:\nint btSortedOverlappingPairCache::getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSortedOverlappingPairCache::getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btOverlapFilterCallback * btSortedOverlappingPairCache::getOverlapFilterCallback()
	static int _bind_getOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_getOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlapFilterCallback * btSortedOverlappingPairCache::getOverlapFilterCallback() function, expected prototype:\nbtOverlapFilterCallback * btSortedOverlappingPairCache::getOverlapFilterCallback()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlapFilterCallback * btSortedOverlappingPairCache::getOverlapFilterCallback(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btOverlapFilterCallback * lret = self->getOverlapFilterCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlapFilterCallback >::push(L,lret,false);

		return 1;
	}

	// void btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	static int _bind_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback) function, expected prototype:\nvoid btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* callback=(Luna< btOverlapFilterCallback >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setOverlapFilterCallback(callback);

		return 0;
	}

	// bool btSortedOverlappingPairCache::hasDeferredRemoval()
	static int _bind_hasDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_hasDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSortedOverlappingPairCache::hasDeferredRemoval() function, expected prototype:\nbool btSortedOverlappingPairCache::hasDeferredRemoval()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSortedOverlappingPairCache::hasDeferredRemoval(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->hasDeferredRemoval();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	static int _bind_setInternalGhostPairCallback(lua_State *L) {
		if (!_lg_typecheck_setInternalGhostPairCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) function, expected prototype:\nvoid btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCallback* ghostPairCallback=(Luna< btOverlappingPairCallback >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setInternalGhostPairCallback(ghostPairCallback);

		return 0;
	}

	// void btSortedOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_sortOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_sortOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::sortOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->sortOverlappingPairs(dispatcher);

		return 0;
	}

	// void btSortedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	static int _bind_base_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::processAllOverlappingPairs(_arg1, dispatcher);

		return 0;
	}

	// void * btSortedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_base_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btSortedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btSortedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btSortedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->btSortedOverlappingPairCache::removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btSortedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	static int _bind_base_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btSortedOverlappingPairCache::base_cleanOverlappingPair function");
		}
		btBroadphasePair & pair=*pair_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::cleanOverlappingPair(pair, dispatcher);

		return 0;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_base_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btSortedOverlappingPairCache::addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_base_findPair(lua_State *L) {
		if (!_lg_typecheck_base_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::base_findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btSortedOverlappingPairCache::findPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void btSortedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_base_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::cleanProxyFromPairs(proxy, dispatcher);

		return 0;
	}

	// void btSortedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(proxy, dispatcher);

		return 0;
	}

	// btBroadphasePairArray & btSortedOverlappingPairCache::base_getOverlappingPairArray()
	static int _bind_base_getOverlappingPairArray(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btSortedOverlappingPairCache::base_getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btSortedOverlappingPairCache::base_getOverlappingPairArray()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btSortedOverlappingPairCache::base_getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->btSortedOverlappingPairCache::getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr()
	static int _bind_base_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btSortedOverlappingPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr() const
	static int _bind_base_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->btSortedOverlappingPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSortedOverlappingPairCache::base_getOverlappingPairArrayPtr
	static int _bind_base_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) return _bind_base_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) return _bind_base_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairArrayPtr, cannot match any of the overloads for function base_getOverlappingPairArrayPtr:\n  base_getOverlappingPairArrayPtr()\n  base_getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// int btSortedOverlappingPairCache::base_getNumOverlappingPairs() const
	static int _bind_base_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSortedOverlappingPairCache::base_getNumOverlappingPairs() const function, expected prototype:\nint btSortedOverlappingPairCache::base_getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSortedOverlappingPairCache::base_getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->btSortedOverlappingPairCache::getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSortedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback)
	static int _bind_base_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_base_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* callback=(Luna< btOverlapFilterCallback >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::setOverlapFilterCallback(callback);

		return 0;
	}

	// bool btSortedOverlappingPairCache::base_hasDeferredRemoval()
	static int _bind_base_hasDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_base_hasDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSortedOverlappingPairCache::base_hasDeferredRemoval() function, expected prototype:\nbool btSortedOverlappingPairCache::base_hasDeferredRemoval()\nClass arguments details:\n");
		}


		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSortedOverlappingPairCache::base_hasDeferredRemoval(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->btSortedOverlappingPairCache::hasDeferredRemoval();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSortedOverlappingPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	static int _bind_base_setInternalGhostPairCallback(lua_State *L) {
		if (!_lg_typecheck_base_setInternalGhostPairCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCallback* ghostPairCallback=(Luna< btOverlappingPairCallback >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::setInternalGhostPairCallback(ghostPairCallback);

		return 0;
	}

	// void btSortedOverlappingPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_sortOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_sortOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSortedOverlappingPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btSortedOverlappingPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btSortedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btSortedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSortedOverlappingPairCache::base_sortOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btSortedOverlappingPairCache::sortOverlappingPairs(dispatcher);

		return 0;
	}


	// Operator binds:

};

btSortedOverlappingPairCache* LunaTraits< btSortedOverlappingPairCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSortedOverlappingPairCache::_bind_ctor(L);
}

void LunaTraits< btSortedOverlappingPairCache >::_bind_dtor(btSortedOverlappingPairCache* obj) {
	delete obj;
}

const char LunaTraits< btSortedOverlappingPairCache >::className[] = "btSortedOverlappingPairCache";
const char LunaTraits< btSortedOverlappingPairCache >::fullName[] = "btSortedOverlappingPairCache";
const char LunaTraits< btSortedOverlappingPairCache >::moduleName[] = "bullet";
const char* LunaTraits< btSortedOverlappingPairCache >::parents[] = {"bullet.btOverlappingPairCache", 0};
const int LunaTraits< btSortedOverlappingPairCache >::hash = 42569715;
const int LunaTraits< btSortedOverlappingPairCache >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btSortedOverlappingPairCache >::methods[] = {
	{"processAllOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_processAllOverlappingPairs},
	{"removeOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_removeOverlappingPair},
	{"cleanOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_cleanOverlappingPair},
	{"addOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_addOverlappingPair},
	{"findPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_findPair},
	{"cleanProxyFromPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_cleanProxyFromPairs},
	{"removeOverlappingPairsContainingProxy", &luna_wrapper_btSortedOverlappingPairCache::_bind_removeOverlappingPairsContainingProxy},
	{"needsBroadphaseCollision", &luna_wrapper_btSortedOverlappingPairCache::_bind_needsBroadphaseCollision},
	{"getOverlappingPairArray", &luna_wrapper_btSortedOverlappingPairCache::_bind_getOverlappingPairArray},
	{"getOverlappingPairArrayPtr", &luna_wrapper_btSortedOverlappingPairCache::_bind_getOverlappingPairArrayPtr},
	{"getNumOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_getNumOverlappingPairs},
	{"getOverlapFilterCallback", &luna_wrapper_btSortedOverlappingPairCache::_bind_getOverlapFilterCallback},
	{"setOverlapFilterCallback", &luna_wrapper_btSortedOverlappingPairCache::_bind_setOverlapFilterCallback},
	{"hasDeferredRemoval", &luna_wrapper_btSortedOverlappingPairCache::_bind_hasDeferredRemoval},
	{"setInternalGhostPairCallback", &luna_wrapper_btSortedOverlappingPairCache::_bind_setInternalGhostPairCallback},
	{"sortOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_sortOverlappingPairs},
	{"base_processAllOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_processAllOverlappingPairs},
	{"base_removeOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_removeOverlappingPair},
	{"base_cleanOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_cleanOverlappingPair},
	{"base_addOverlappingPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_addOverlappingPair},
	{"base_findPair", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_findPair},
	{"base_cleanProxyFromPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_cleanProxyFromPairs},
	{"base_removeOverlappingPairsContainingProxy", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_removeOverlappingPairsContainingProxy},
	{"base_getOverlappingPairArray", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_getOverlappingPairArray},
	{"base_getOverlappingPairArrayPtr", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_getOverlappingPairArrayPtr},
	{"base_getNumOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_getNumOverlappingPairs},
	{"base_setOverlapFilterCallback", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_setOverlapFilterCallback},
	{"base_hasDeferredRemoval", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_hasDeferredRemoval},
	{"base_setInternalGhostPairCallback", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_setInternalGhostPairCallback},
	{"base_sortOverlappingPairs", &luna_wrapper_btSortedOverlappingPairCache::_bind_base_sortOverlappingPairs},
	{"__eq", &luna_wrapper_btSortedOverlappingPairCache::_bind___eq},
	{"fromVoid", &luna_wrapper_btSortedOverlappingPairCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSortedOverlappingPairCache::_bind_asVoid},
	{"getTable", &luna_wrapper_btSortedOverlappingPairCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSortedOverlappingPairCache >::converters[] = {
	{"btOverlappingPairCallback", &luna_wrapper_btSortedOverlappingPairCache::_cast_from_btOverlappingPairCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btSortedOverlappingPairCache >::enumValues[] = {
	{0,0}
};


