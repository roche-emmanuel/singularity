#include <plug_common.h>

#include <luna/wrappers/wrapper_btNullPairCache.h>

class luna_wrapper_btNullPairCache {
public:
	typedef Luna< btNullPairCache > luna_t;

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

		btNullPairCache* self= (btNullPairCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btNullPairCache >::push(L,self,false);
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
		//btNullPairCache* ptr= dynamic_cast< btNullPairCache* >(Luna< btOverlappingPairCallback >::check(L,1));
		btNullPairCache* ptr= luna_caster< btOverlappingPairCallback, btNullPairCache >::cast(Luna< btOverlappingPairCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btNullPairCache >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sortOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
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

	inline static bool _lg_typecheck_base_getNumOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cleanProxyFromPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setOverlapFilterCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50236777)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processAllOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83643253)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
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

	inline static bool _lg_typecheck_base_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
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
	// btNullPairCache::btNullPairCache()
	static btNullPairCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btNullPairCache::btNullPairCache() function, expected prototype:\nbtNullPairCache::btNullPairCache()\nClass arguments details:\n");
		}


		return new btNullPairCache();
	}

	// btNullPairCache::btNullPairCache(lua_Table * data)
	static btNullPairCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btNullPairCache::btNullPairCache(lua_Table * data) function, expected prototype:\nbtNullPairCache::btNullPairCache(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btNullPairCache(L,NULL);
	}

	// Overload binder for btNullPairCache::btNullPairCache
	static btNullPairCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btNullPairCache, cannot match any of the overloads for function btNullPairCache:\n  btNullPairCache()\n  btNullPairCache(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr()
	static int _bind_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() const
	static int _bind_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btNullPairCache::getOverlappingPairArrayPtr
	static int _bind_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_1(L)) return _bind_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_getOverlappingPairArrayPtr_overload_2(L)) return _bind_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairArrayPtr, cannot match any of the overloads for function getOverlappingPairArrayPtr:\n  getOverlappingPairArrayPtr()\n  getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// btBroadphasePairArray & btNullPairCache::getOverlappingPairArray()
	static int _bind_getOverlappingPairArray(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btNullPairCache::getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btNullPairCache::getOverlappingPairArray()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btNullPairCache::getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// void btNullPairCache::cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2)
	static int _bind_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* _arg1_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btNullPairCache::cleanOverlappingPair function");
		}
		btBroadphasePair & _arg1=*_arg1_ptr;
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanOverlappingPair(_arg1, _arg2);

		return 0;
	}

	// int btNullPairCache::getNumOverlappingPairs() const
	static int _bind_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btNullPairCache::getNumOverlappingPairs() const function, expected prototype:\nint btNullPairCache::getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btNullPairCache::getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btNullPairCache::cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->cleanProxyFromPairs(_arg1, _arg2);

		return 0;
	}

	// void btNullPairCache::setOverlapFilterCallback(btOverlapFilterCallback * arg1)
	static int _bind_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::setOverlapFilterCallback(btOverlapFilterCallback * arg1) function, expected prototype:\nvoid btNullPairCache::setOverlapFilterCallback(btOverlapFilterCallback * arg1)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* _arg1=(Luna< btOverlapFilterCallback >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setOverlapFilterCallback(_arg1);

		return 0;
	}

	// void btNullPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2)
	static int _bind_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->processAllOverlappingPairs(_arg1, _arg2);

		return 0;
	}

	// btBroadphasePair * btNullPairCache::findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	static int _bind_findPair(lua_State *L) {
		if (!_lg_typecheck_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) function, expected prototype:\nbtBroadphasePair * btNullPairCache::findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->findPair(_arg1, _arg2);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// bool btNullPairCache::hasDeferredRemoval()
	static int _bind_hasDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_hasDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btNullPairCache::hasDeferredRemoval() function, expected prototype:\nbool btNullPairCache::hasDeferredRemoval()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btNullPairCache::hasDeferredRemoval(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->hasDeferredRemoval();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btNullPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * arg1)
	static int _bind_setInternalGhostPairCallback(lua_State *L) {
		if (!_lg_typecheck_setInternalGhostPairCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * arg1) function, expected prototype:\nvoid btNullPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * arg1)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCallback* _arg1=(Luna< btOverlappingPairCallback >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::setInternalGhostPairCallback(btOverlappingPairCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->setInternalGhostPairCallback(_arg1);

		return 0;
	}

	// btBroadphasePair * btNullPairCache::addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	static int _bind_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) function, expected prototype:\nbtBroadphasePair * btNullPairCache::addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->addOverlappingPair(_arg1, _arg2);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void * btNullPairCache::removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3)
	static int _bind_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btNullPairCache::removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3) function, expected prototype:\nvoid * btNullPairCache::removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* _arg3=(Luna< btDispatcher >::check(L,4));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btNullPairCache::removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->removeOverlappingPair(_arg1, _arg2, _arg3);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btNullPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->removeOverlappingPairsContainingProxy(_arg1, _arg2);

		return 0;
	}

	// void btNullPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_sortOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_sortOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::sortOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btNullPairCache::sortOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::sortOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->sortOverlappingPairs(dispatcher);

		return 0;
	}

	// btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr()
	static int _bind_base_getOverlappingPairArrayPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr() function, expected prototype:\nbtBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btNullPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// const btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr() const
	static int _bind_base_getOverlappingPairArrayPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr() const function, expected prototype:\nconst btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr() const\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphasePair * btNullPairCache::base_getOverlappingPairArrayPtr() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePair * lret = self->btNullPairCache::getOverlappingPairArrayPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btNullPairCache::base_getOverlappingPairArrayPtr
	static int _bind_base_getOverlappingPairArrayPtr(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_1(L)) return _bind_base_getOverlappingPairArrayPtr_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairArrayPtr_overload_2(L)) return _bind_base_getOverlappingPairArrayPtr_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairArrayPtr, cannot match any of the overloads for function base_getOverlappingPairArrayPtr:\n  base_getOverlappingPairArrayPtr()\n  base_getOverlappingPairArrayPtr()\n");
		return 0;
	}

	// btBroadphasePairArray & btNullPairCache::base_getOverlappingPairArray()
	static int _bind_base_getOverlappingPairArray(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePairArray & btNullPairCache::base_getOverlappingPairArray() function, expected prototype:\nbtBroadphasePairArray & btNullPairCache::base_getOverlappingPairArray()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePairArray & btNullPairCache::base_getOverlappingPairArray(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		const btBroadphasePairArray* lret = &self->btNullPairCache::getOverlappingPairArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePairArray >::push(L,lret,false);

		return 1;
	}

	// void btNullPairCache::base_cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2)
	static int _bind_base_cleanOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_cleanOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::base_cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\n");
		}

		btBroadphasePair* _arg1_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btNullPairCache::base_cleanOverlappingPair function");
		}
		btBroadphasePair & _arg1=*_arg1_ptr;
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_cleanOverlappingPair(btBroadphasePair &, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::cleanOverlappingPair(_arg1, _arg2);

		return 0;
	}

	// int btNullPairCache::base_getNumOverlappingPairs() const
	static int _bind_base_getNumOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_getNumOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btNullPairCache::base_getNumOverlappingPairs() const function, expected prototype:\nint btNullPairCache::base_getNumOverlappingPairs() const\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btNullPairCache::base_getNumOverlappingPairs() const. Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		int lret = self->btNullPairCache::getNumOverlappingPairs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btNullPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_base_cleanProxyFromPairs(lua_State *L) {
		if (!_lg_typecheck_base_cleanProxyFromPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::base_cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_cleanProxyFromPairs(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::cleanProxyFromPairs(_arg1, _arg2);

		return 0;
	}

	// void btNullPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * arg1)
	static int _bind_base_setOverlapFilterCallback(lua_State *L) {
		if (!_lg_typecheck_base_setOverlapFilterCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * arg1) function, expected prototype:\nvoid btNullPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback * arg1)\nClass arguments details:\narg 1 ID = 50236777\n");
		}

		btOverlapFilterCallback* _arg1=(Luna< btOverlapFilterCallback >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_setOverlapFilterCallback(btOverlapFilterCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::setOverlapFilterCallback(_arg1);

		return 0;
	}

	// void btNullPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2)
	static int _bind_base_processAllOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_processAllOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::base_processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 83643253\narg 2 ID = 71097681\n");
		}

		btOverlapCallback* _arg1=(Luna< btOverlapCallback >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_processAllOverlappingPairs(btOverlapCallback *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::processAllOverlappingPairs(_arg1, _arg2);

		return 0;
	}

	// btBroadphasePair * btNullPairCache::base_findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	static int _bind_base_findPair(lua_State *L) {
		if (!_lg_typecheck_base_findPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::base_findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) function, expected prototype:\nbtBroadphasePair * btNullPairCache::base_findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::base_findPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btNullPairCache::findPair(_arg1, _arg2);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// bool btNullPairCache::base_hasDeferredRemoval()
	static int _bind_base_hasDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_base_hasDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btNullPairCache::base_hasDeferredRemoval() function, expected prototype:\nbool btNullPairCache::base_hasDeferredRemoval()\nClass arguments details:\n");
		}


		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btNullPairCache::base_hasDeferredRemoval(). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		bool lret = self->btNullPairCache::hasDeferredRemoval();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btNullPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * arg1)
	static int _bind_base_setInternalGhostPairCallback(lua_State *L) {
		if (!_lg_typecheck_base_setInternalGhostPairCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * arg1) function, expected prototype:\nvoid btNullPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback * arg1)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCallback* _arg1=(Luna< btOverlappingPairCallback >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_setInternalGhostPairCallback(btOverlappingPairCallback *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::setInternalGhostPairCallback(_arg1);

		return 0;
	}

	// btBroadphasePair * btNullPairCache::base_addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	static int _bind_base_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btNullPairCache::base_addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) function, expected prototype:\nbtBroadphasePair * btNullPairCache::base_addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btNullPairCache::base_addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->btNullPairCache::addOverlappingPair(_arg1, _arg2);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void * btNullPairCache::base_removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3)
	static int _bind_base_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btNullPairCache::base_removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3) function, expected prototype:\nvoid * btNullPairCache::base_removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* _arg2=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* _arg3=(Luna< btDispatcher >::check(L,4));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btNullPairCache::base_removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->btNullPairCache::removeOverlappingPair(_arg1, _arg2, _arg3);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btNullPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btNullPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::removeOverlappingPairsContainingProxy(_arg1, _arg2);

		return 0;
	}

	// void btNullPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_sortOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_sortOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNullPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btNullPairCache::base_sortOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btNullPairCache* self=Luna< btOverlappingPairCallback >::checkSubType< btNullPairCache >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNullPairCache::base_sortOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->btNullPairCache::sortOverlappingPairs(dispatcher);

		return 0;
	}


	// Operator binds:

};

btNullPairCache* LunaTraits< btNullPairCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btNullPairCache::_bind_ctor(L);
}

void LunaTraits< btNullPairCache >::_bind_dtor(btNullPairCache* obj) {
	delete obj;
}

const char LunaTraits< btNullPairCache >::className[] = "btNullPairCache";
const char LunaTraits< btNullPairCache >::fullName[] = "btNullPairCache";
const char LunaTraits< btNullPairCache >::moduleName[] = "bullet";
const char* LunaTraits< btNullPairCache >::parents[] = {"bullet.btOverlappingPairCache", 0};
const int LunaTraits< btNullPairCache >::hash = 8264942;
const int LunaTraits< btNullPairCache >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btNullPairCache >::methods[] = {
	{"getOverlappingPairArrayPtr", &luna_wrapper_btNullPairCache::_bind_getOverlappingPairArrayPtr},
	{"getOverlappingPairArray", &luna_wrapper_btNullPairCache::_bind_getOverlappingPairArray},
	{"cleanOverlappingPair", &luna_wrapper_btNullPairCache::_bind_cleanOverlappingPair},
	{"getNumOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_getNumOverlappingPairs},
	{"cleanProxyFromPairs", &luna_wrapper_btNullPairCache::_bind_cleanProxyFromPairs},
	{"setOverlapFilterCallback", &luna_wrapper_btNullPairCache::_bind_setOverlapFilterCallback},
	{"processAllOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_processAllOverlappingPairs},
	{"findPair", &luna_wrapper_btNullPairCache::_bind_findPair},
	{"hasDeferredRemoval", &luna_wrapper_btNullPairCache::_bind_hasDeferredRemoval},
	{"setInternalGhostPairCallback", &luna_wrapper_btNullPairCache::_bind_setInternalGhostPairCallback},
	{"addOverlappingPair", &luna_wrapper_btNullPairCache::_bind_addOverlappingPair},
	{"removeOverlappingPair", &luna_wrapper_btNullPairCache::_bind_removeOverlappingPair},
	{"removeOverlappingPairsContainingProxy", &luna_wrapper_btNullPairCache::_bind_removeOverlappingPairsContainingProxy},
	{"sortOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_sortOverlappingPairs},
	{"base_getOverlappingPairArrayPtr", &luna_wrapper_btNullPairCache::_bind_base_getOverlappingPairArrayPtr},
	{"base_getOverlappingPairArray", &luna_wrapper_btNullPairCache::_bind_base_getOverlappingPairArray},
	{"base_cleanOverlappingPair", &luna_wrapper_btNullPairCache::_bind_base_cleanOverlappingPair},
	{"base_getNumOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_base_getNumOverlappingPairs},
	{"base_cleanProxyFromPairs", &luna_wrapper_btNullPairCache::_bind_base_cleanProxyFromPairs},
	{"base_setOverlapFilterCallback", &luna_wrapper_btNullPairCache::_bind_base_setOverlapFilterCallback},
	{"base_processAllOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_base_processAllOverlappingPairs},
	{"base_findPair", &luna_wrapper_btNullPairCache::_bind_base_findPair},
	{"base_hasDeferredRemoval", &luna_wrapper_btNullPairCache::_bind_base_hasDeferredRemoval},
	{"base_setInternalGhostPairCallback", &luna_wrapper_btNullPairCache::_bind_base_setInternalGhostPairCallback},
	{"base_addOverlappingPair", &luna_wrapper_btNullPairCache::_bind_base_addOverlappingPair},
	{"base_removeOverlappingPair", &luna_wrapper_btNullPairCache::_bind_base_removeOverlappingPair},
	{"base_removeOverlappingPairsContainingProxy", &luna_wrapper_btNullPairCache::_bind_base_removeOverlappingPairsContainingProxy},
	{"base_sortOverlappingPairs", &luna_wrapper_btNullPairCache::_bind_base_sortOverlappingPairs},
	{"fromVoid", &luna_wrapper_btNullPairCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btNullPairCache::_bind_asVoid},
	{"getTable", &luna_wrapper_btNullPairCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btNullPairCache >::converters[] = {
	{"btOverlappingPairCallback", &luna_wrapper_btNullPairCache::_cast_from_btOverlappingPairCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btNullPairCache >::enumValues[] = {
	{0,0}
};


