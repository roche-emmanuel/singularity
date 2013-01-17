#include <plug_common.h>

#include <luna/wrappers/wrapper_btHashedOverlappingPairCache.h>

class luna_wrapper_btHashedOverlappingPairCache {
public:
	typedef Luna< btHashedOverlappingPairCache > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btOverlappingPairCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btHashedOverlappingPairCache* ptr= dynamic_cast< btHashedOverlappingPairCache* >(Luna< btOverlappingPairCallback >::check(L,1));
		btHashedOverlappingPairCache* ptr= luna_caster< btOverlappingPairCallback, btHashedOverlappingPairCache >::cast(Luna< btOverlappingPairCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btHashedOverlappingPairCache >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
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

	inline static bool _lg_typecheck_needsBroadphaseCollision(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOverlappingPair(lua_State *L) {
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

	inline static bool _lg_typecheck_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
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

	inline static bool _lg_typecheck_getOverlappingPairArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cleanOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
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

	inline static bool _lg_typecheck_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
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

	inline static bool _lg_typecheck_base_addOverlappingPair(lua_State *L) {
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

	inline static bool _lg_typecheck_base_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
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

	inline static bool _lg_typecheck_base_getOverlappingPairArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cleanOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50236777)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHashedOverlappingPairCache::btHashedOverlappingPairCache()
	static btHashedOverlappingPairCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHashedOverlappingPairCache::btHashedOverlappingPairCache() function, expected prototype:\nbtHashedOverlappingPairCache::btHashedOverlappingPairCache()\nClass arguments details:\n");
		}


		return new btHashedOverlappingPairCache();
	}

	// btHashedOverlappingPairCache::btHashedOverlappingPairCache(lua_Table * data)
	static btHashedOverlappingPairCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHashedOverlappingPairCache::btHashedOverlappingPairCache(lua_Table * data) function, expected prototype:\nbtHashedOverlappingPairCache::btHashedOverlappingPairCache(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btHashedOverlappingPairCache(L,NULL);
	}

	// Overload binder for btHashedOverlappingPairCache::btHashedOverlappingPairCache
	static btHashedOverlappingPairCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btHashedOverlappingPairCache, cannot match any of the overloads for function btHashedOverlappingPairCache:\n  btHashedOverlappingPairCache()\n  btHashedOverlappingPairCache(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->removeOverlappingPairsContainingProxy(proxy, dispatcher);

		return 0;
	}

	// void * btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btHashedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const
	static int _bind_needsBroadphaseCollision(lua_State *L) {
		if (!_lg_typecheck_needsBroadphaseCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btHashedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const function, expected prototype:\nbool btHashedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btHashedOverlappingPairCache::needsBroadphaseCollision(btBroadphaseProxy *, btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->needsBroadphaseCollision(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanProxyFromPairs(proxy, dispatcher);

		return 0;
	}

	// void btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	static int _bind_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->processAllOverlappingPairs(_arg1, dispatcher);

		return 0;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr()
	static int _bind_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() const
	static int _bind_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHashedOverlappingPairCache::getOverlappingPairArrayPtr
	static int _bind_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) return _bind_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) return _bind_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArrayPtr, cannot match any of the overloads for function getOverlappingPairArrayPtr:\n  getOverlappingPairArrayPtr()\n  getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray()
	static int _bind_getOverlappingPairArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray()\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray() const
	static int _bind_getOverlappingPairArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray() const function, expected prototype:\nconst btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHashedOverlappingPairCache::getOverlappingPairArray
	static int _bind_getOverlappingPairArray(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArray_overload_1(L)) return _bind_getOverlappingPairArray_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArray_overload_2(L)) return _bind_getOverlappingPairArray_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArray, cannot match any of the overloads for function getOverlappingPairArray:\n  getOverlappingPairArray()\n  getOverlappingPairArray()\n");
		return 0;
	}

	// void btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	static int _bind_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btHashedOverlappingPairCache::cleanOverlappingPair function");
		}
		btBroadphasePair & pair=*pair_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanOverlappingPair(pair, dispatcher);

		return 0;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_findPair(lua_State *L) {
		if (!_lg_typecheck_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->findPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// int btHashedOverlappingPairCache::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHashedOverlappingPairCache::GetCount() const function, expected prototype:\nint btHashedOverlappingPairCache::GetCount() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHashedOverlappingPairCache::GetCount() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btOverlapFilterCallback * btHashedOverlappingPairCache::getOverlapFilterCallback()
	static int _bind_getOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_getOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlapFilterCallback * btHashedOverlappingPairCache::getOverlapFilterCallback() function, expected prototype:\nbtOverlapFilterCallback * btHashedOverlappingPairCache::getOverlapFilterCallback()\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlapFilterCallback * btHashedOverlappingPairCache::getOverlapFilterCallback(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btOverlapFilterCallback * lret = self->getOverlapFilterCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlapFilterCallback >::push(L,lret,false);

		return 1;
	}

	// void btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	static int _bind_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback) function, expected prototype:\nvoid btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* callback=(Luna< btOverlapFilterCallback >::check(L,2));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setOverlapFilterCallback(callback);

		return 0;
	}

	// int btHashedOverlappingPairCache::getNumOverlappingPairs() const
	static int _bind_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHashedOverlappingPairCache::getNumOverlappingPairs() const function, expected prototype:\nint btHashedOverlappingPairCache::getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHashedOverlappingPairCache::getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHashedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(proxy, dispatcher);

		return 0;
	}

	// void * btHashedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_base_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btHashedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btHashedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btHashedOverlappingPairCache::base_removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->btHashedOverlappingPairCache::removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_base_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::base_addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btHashedOverlappingPairCache::addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void btHashedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_base_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::base_cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btHashedOverlappingPairCache::cleanProxyFromPairs(proxy, dispatcher);

		return 0;
	}

	// void btHashedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	static int _bind_base_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::base_processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btHashedOverlappingPairCache::processAllOverlappingPairs(_arg1, dispatcher);

		return 0;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr()
	static int _bind_base_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btHashedOverlappingPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr() const
	static int _bind_base_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->btHashedOverlappingPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHashedOverlappingPairCache::base_getOverlappingPairArrayPtr
	static int _bind_base_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) return _bind_base_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) return _bind_base_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairArrayPtr, cannot match any of the overloads for function base_getOverlappingPairArrayPtr:\n  base_getOverlappingPairArrayPtr()\n  base_getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// btBroadphasePairArray & btHashedOverlappingPairCache::base_getOverlappingPairArray()
	static int _bind_base_getOverlappingPairArray(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btHashedOverlappingPairCache::base_getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btHashedOverlappingPairCache::base_getOverlappingPairArray()\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btHashedOverlappingPairCache::base_getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->btHashedOverlappingPairCache::getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// void btHashedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	static int _bind_base_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) function, expected prototype:\nvoid btHashedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btHashedOverlappingPairCache::base_cleanOverlappingPair function");
		}
		btBroadphasePair & pair=*pair_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::base_cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btHashedOverlappingPairCache::cleanOverlappingPair(pair, dispatcher);

		return 0;
	}

	// btBroadphasePair * btHashedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_base_findPair(lua_State *L) {
		if (!_lg_typecheck_base_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btHashedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btHashedOverlappingPairCache::base_findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btHashedOverlappingPairCache::base_findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btHashedOverlappingPairCache::findPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void btHashedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback)
	static int _bind_base_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_base_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback) function, expected prototype:\nvoid btHashedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * callback)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* callback=(Luna< btOverlapFilterCallback >::check(L,2));

		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashedOverlappingPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btHashedOverlappingPairCache::setOverlapFilterCallback(callback);

		return 0;
	}

	// int btHashedOverlappingPairCache::base_getNumOverlappingPairs() const
	static int _bind_base_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHashedOverlappingPairCache::base_getNumOverlappingPairs() const function, expected prototype:\nint btHashedOverlappingPairCache::base_getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btHashedOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btHashedOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHashedOverlappingPairCache::base_getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->btHashedOverlappingPairCache::getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btHashedOverlappingPairCache* LunaTraits< btHashedOverlappingPairCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHashedOverlappingPairCache::_bind_ctor(L);
}

void LunaTraits< btHashedOverlappingPairCache >::_bind_dtor(btHashedOverlappingPairCache* obj) {
	delete obj;
}

const char LunaTraits< btHashedOverlappingPairCache >::className[] = "btHashedOverlappingPairCache";
const char LunaTraits< btHashedOverlappingPairCache >::fullName[] = "btHashedOverlappingPairCache";
const char LunaTraits< btHashedOverlappingPairCache >::moduleName[] = "bullet";
const char* LunaTraits< btHashedOverlappingPairCache >::parents[] = {"bullet.btOverlappingPairCache", 0};
const int LunaTraits< btHashedOverlappingPairCache >::hash = 94500885;
const int LunaTraits< btHashedOverlappingPairCache >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btHashedOverlappingPairCache >::methods[] = {
	{"removeOverlappingPairsContainingProxy", &luna_wrapper_btHashedOverlappingPairCache::_bind_removeOverlappingPairsContainingProxy},
	{"removeOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_removeOverlappingPair},
	{"needsBroadphaseCollision", &luna_wrapper_btHashedOverlappingPairCache::_bind_needsBroadphaseCollision},
	{"addOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_addOverlappingPair},
	{"cleanProxyFromPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_cleanProxyFromPairs},
	{"processAllOverlappingPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_processAllOverlappingPairs},
	{"getOverlappingPairArrayPtr", &luna_wrapper_btHashedOverlappingPairCache::_bind_getOverlappingPairArrayPtr},
	{"getOverlappingPairArray", &luna_wrapper_btHashedOverlappingPairCache::_bind_getOverlappingPairArray},
	{"cleanOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_cleanOverlappingPair},
	{"findPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_findPair},
	{"GetCount", &luna_wrapper_btHashedOverlappingPairCache::_bind_GetCount},
	{"getOverlapFilterCallback", &luna_wrapper_btHashedOverlappingPairCache::_bind_getOverlapFilterCallback},
	{"setOverlapFilterCallback", &luna_wrapper_btHashedOverlappingPairCache::_bind_setOverlapFilterCallback},
	{"getNumOverlappingPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_getNumOverlappingPairs},
	{"base_removeOverlappingPairsContainingProxy", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_removeOverlappingPairsContainingProxy},
	{"base_removeOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_removeOverlappingPair},
	{"base_addOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_addOverlappingPair},
	{"base_cleanProxyFromPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_cleanProxyFromPairs},
	{"base_processAllOverlappingPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_processAllOverlappingPairs},
	{"base_getOverlappingPairArrayPtr", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_getOverlappingPairArrayPtr},
	{"base_getOverlappingPairArray", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_getOverlappingPairArray},
	{"base_cleanOverlappingPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_cleanOverlappingPair},
	{"base_findPair", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_findPair},
	{"base_setOverlapFilterCallback", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_setOverlapFilterCallback},
	{"base_getNumOverlappingPairs", &luna_wrapper_btHashedOverlappingPairCache::_bind_base_getNumOverlappingPairs},
	{"__eq", &luna_wrapper_btHashedOverlappingPairCache::_bind___eq},
	{"getTable", &luna_wrapper_btHashedOverlappingPairCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btHashedOverlappingPairCache >::converters[] = {
	{"btOverlappingPairCallback", &luna_wrapper_btHashedOverlappingPairCache::_cast_from_btOverlappingPairCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btHashedOverlappingPairCache >::enumValues[] = {
	{0,0}
};


