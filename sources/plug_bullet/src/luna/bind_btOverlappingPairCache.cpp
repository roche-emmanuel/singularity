#include <plug_common.h>

#include <luna/wrappers/wrapper_btOverlappingPairCache.h>

class luna_wrapper_btOverlappingPairCache {
public:
	typedef Luna< btOverlappingPairCache > luna_t;

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

		btOverlappingPairCache* self= (btOverlappingPairCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btOverlappingPairCache >::push(L,self,false);
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
		//btOverlappingPairCache* ptr= dynamic_cast< btOverlappingPairCache* >(Luna< btOverlappingPairCallback >::check(L,1));
		btOverlappingPairCache* ptr= luna_caster< btOverlappingPairCallback, btOverlappingPairCache >::cast(Luna< btOverlappingPairCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btOverlappingPairCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cleanOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cleanProxyFromPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50236777)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btOverlappingPairCache::btOverlappingPairCache(lua_Table * data)
	static btOverlappingPairCache* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache::btOverlappingPairCache(lua_Table * data) function, expected prototype:\nbtOverlappingPairCache::btOverlappingPairCache(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btOverlappingPairCache(L,NULL);
	}


	// Function binds:
	// btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr()
	static int _bind_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const
	static int _bind_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btOverlappingPairCache::getOverlappingPairArrayPtr
	static int _bind_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) return _bind_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) return _bind_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArrayPtr, cannot match any of the overloads for function getOverlappingPairArrayPtr:\n  getOverlappingPairArrayPtr()\n  getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// btBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray()
	static int _bind_getOverlappingPairArray(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray()\nClass arguments details:\n");
		}


		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// void btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	static int _bind_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) function, expected prototype:\nvoid btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btOverlappingPairCache::cleanOverlappingPair function");
		}
		btBroadphasePair & pair=*pair_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanOverlappingPair(pair, dispatcher);

		return 0;
	}

	// int btOverlappingPairCache::getNumOverlappingPairs() const
	static int _bind_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOverlappingPairCache::getNumOverlappingPairs() const function, expected prototype:\nint btOverlappingPairCache::getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOverlappingPairCache::getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanProxyFromPairs(proxy, dispatcher);

		return 0;
	}

	// void btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	static int _bind_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback) function, expected prototype:\nvoid btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* callback=(Luna< btOverlapFilterCallback >::check(L,2));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setOverlapFilterCallback(callback);

		return 0;
	}

	// void btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	static int _bind_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) function, expected prototype:\nvoid btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->processAllOverlappingPairs(_arg1, dispatcher);

		return 0;
	}

	// btBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_findPair(lua_State *L) {
		if (!_lg_typecheck_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->findPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// bool btOverlappingPairCache::hasDeferredRemoval()
	static int _bind_hasDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_hasDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btOverlappingPairCache::hasDeferredRemoval() function, expected prototype:\nbool btOverlappingPairCache::hasDeferredRemoval()\nClass arguments details:\n");
		}


		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btOverlappingPairCache::hasDeferredRemoval(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->hasDeferredRemoval();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	static int _bind_setInternalGhostPairCallback(lua_State *L) {
		if (!_lg_typecheck_setInternalGhostPairCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) function, expected prototype:\nvoid btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCallback* ghostPairCallback=(Luna< btOverlappingPairCallback >::check(L,2));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setInternalGhostPairCallback(ghostPairCallback);

		return 0;
	}

	// void btOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_sortOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_sortOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btOverlappingPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCache::sortOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->sortOverlappingPairs(dispatcher);

		return 0;
	}


	// Operator binds:

};

btOverlappingPairCache* LunaTraits< btOverlappingPairCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btOverlappingPairCache::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr()
	// const btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const
	// btBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray()
	// void btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	// int btOverlappingPairCache::getNumOverlappingPairs() const
	// void btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	// void btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	// void btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	// btBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	// bool btOverlappingPairCache::hasDeferredRemoval()
	// void btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	// void btOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	// btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	// void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	// void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)
}

void LunaTraits< btOverlappingPairCache >::_bind_dtor(btOverlappingPairCache* obj) {
	delete obj;
}

const char LunaTraits< btOverlappingPairCache >::className[] = "btOverlappingPairCache";
const char LunaTraits< btOverlappingPairCache >::fullName[] = "btOverlappingPairCache";
const char LunaTraits< btOverlappingPairCache >::moduleName[] = "bullet";
const char* LunaTraits< btOverlappingPairCache >::parents[] = {"bullet.btOverlappingPairCallback", 0};
const int LunaTraits< btOverlappingPairCache >::hash = 85831874;
const int LunaTraits< btOverlappingPairCache >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btOverlappingPairCache >::methods[] = {
	{"getOverlappingPairArrayPtr", &luna_wrapper_btOverlappingPairCache::_bind_getOverlappingPairArrayPtr},
	{"getOverlappingPairArray", &luna_wrapper_btOverlappingPairCache::_bind_getOverlappingPairArray},
	{"cleanOverlappingPair", &luna_wrapper_btOverlappingPairCache::_bind_cleanOverlappingPair},
	{"getNumOverlappingPairs", &luna_wrapper_btOverlappingPairCache::_bind_getNumOverlappingPairs},
	{"cleanProxyFromPairs", &luna_wrapper_btOverlappingPairCache::_bind_cleanProxyFromPairs},
	{"setOverlapFilterCallback", &luna_wrapper_btOverlappingPairCache::_bind_setOverlapFilterCallback},
	{"processAllOverlappingPairs", &luna_wrapper_btOverlappingPairCache::_bind_processAllOverlappingPairs},
	{"findPair", &luna_wrapper_btOverlappingPairCache::_bind_findPair},
	{"hasDeferredRemoval", &luna_wrapper_btOverlappingPairCache::_bind_hasDeferredRemoval},
	{"setInternalGhostPairCallback", &luna_wrapper_btOverlappingPairCache::_bind_setInternalGhostPairCallback},
	{"sortOverlappingPairs", &luna_wrapper_btOverlappingPairCache::_bind_sortOverlappingPairs},
	{"__eq", &luna_wrapper_btOverlappingPairCache::_bind___eq},
	{"fromVoid", &luna_wrapper_btOverlappingPairCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btOverlappingPairCache::_bind_asVoid},
	{"getTable", &luna_wrapper_btOverlappingPairCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btOverlappingPairCache >::converters[] = {
	{"btOverlappingPairCallback", &luna_wrapper_btOverlappingPairCache::_cast_from_btOverlappingPairCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btOverlappingPairCache >::enumValues[] = {
	{0,0}
};


