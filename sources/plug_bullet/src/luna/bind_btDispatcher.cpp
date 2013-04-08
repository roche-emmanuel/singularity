#include <plug_common.h>

#include <luna/wrappers/wrapper_btDispatcher.h>

class luna_wrapper_btDispatcher {
public:
	typedef Luna< btDispatcher > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDispatcher,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71097681) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDispatcher*)");
		}

		btDispatcher* rhs =(Luna< btDispatcher >::check(L,2));
		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
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

		btDispatcher* self= (btDispatcher*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDispatcher >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71097681) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDispatcher >::check(L,1));
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

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDispatcher");
		
		return luna_dynamicCast(L,converters,"btDispatcher",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_findAlgorithm(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNewManifold(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsResponse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dispatchAllCollisionPairs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,95201256) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumManifolds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getManifoldByIndexInternal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalManifoldPool_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalManifoldPool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_freeCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDispatcher::btDispatcher(lua_Table * data)
	static btDispatcher* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDispatcher::btDispatcher(lua_Table * data) function, expected prototype:\nbtDispatcher::btDispatcher(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btDispatcher(L,NULL);
	}


	// Function binds:
	// btCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	static int _bind_findAlgorithm(lua_State *L) {
		if (!_lg_typecheck_findAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0) function, expected prototype:\nbtCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		btPersistentManifold* sharedManifold=luatop>3 ? (Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,4)) : (btPersistentManifold*)0;

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// btPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	static int _bind_getNewManifold(lua_State *L) {
		if (!_lg_typecheck_getNewManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1) function, expected prototype:\nbtPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* b0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* b1=(Luna< btCollisionObject >::check(L,3));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getNewManifold(b0, b1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btDispatcher::releaseManifold(btPersistentManifold * manifold)
	static int _bind_releaseManifold(lua_State *L) {
		if (!_lg_typecheck_releaseManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcher::releaseManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btDispatcher::releaseManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcher::releaseManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->releaseManifold(manifold);

		return 0;
	}

	// void btDispatcher::clearManifold(btPersistentManifold * manifold)
	static int _bind_clearManifold(lua_State *L) {
		if (!_lg_typecheck_clearManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcher::clearManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btDispatcher::clearManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcher::clearManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->clearManifold(manifold);

		return 0;
	}

	// bool btDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcher::needsCollision(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->needsCollision(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_needsResponse(lua_State *L) {
		if (!_lg_typecheck_needsResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcher::needsResponse(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->needsResponse(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	static int _bind_dispatchAllCollisionPairs(lua_State *L) {
		if (!_lg_typecheck_dispatchAllCollisionPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher) function, expected prototype:\nvoid btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 78133027\narg 2 ID = 95201256\narg 3 ID = 71097681\n");
		}

		btOverlappingPairCache* pairCache=(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,3));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btDispatcher::dispatchAllCollisionPairs function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache *, const btDispatcherInfo &, btDispatcher *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->dispatchAllCollisionPairs(pairCache, dispatchInfo, dispatcher);

		return 0;
	}

	// int btDispatcher::getNumManifolds() const
	static int _bind_getNumManifolds(lua_State *L) {
		if (!_lg_typecheck_getNumManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDispatcher::getNumManifolds() const function, expected prototype:\nint btDispatcher::getNumManifolds() const\nClass arguments details:\n");
		}


		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDispatcher::getNumManifolds() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		int lret = self->getNumManifolds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btPersistentManifold * btDispatcher::getManifoldByIndexInternal(int index)
	static int _bind_getManifoldByIndexInternal(lua_State *L) {
		if (!_lg_typecheck_getManifoldByIndexInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btDispatcher::getManifoldByIndexInternal(int index) function, expected prototype:\nbtPersistentManifold * btDispatcher::getManifoldByIndexInternal(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btDispatcher::getManifoldByIndexInternal(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getManifoldByIndexInternal(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btDispatcher::getInternalManifoldPool()
	static int _bind_getInternalManifoldPool_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInternalManifoldPool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDispatcher::getInternalManifoldPool() function, expected prototype:\nbtPoolAllocator * btDispatcher::getInternalManifoldPool()\nClass arguments details:\n");
		}


		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDispatcher::getInternalManifoldPool(). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// const btPoolAllocator * btDispatcher::getInternalManifoldPool() const
	static int _bind_getInternalManifoldPool_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInternalManifoldPool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPoolAllocator * btDispatcher::getInternalManifoldPool() const function, expected prototype:\nconst btPoolAllocator * btDispatcher::getInternalManifoldPool() const\nClass arguments details:\n");
		}


		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPoolAllocator * btDispatcher::getInternalManifoldPool() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		const btPoolAllocator * lret = self->getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDispatcher::getInternalManifoldPool
	static int _bind_getInternalManifoldPool(lua_State *L) {
		if (_lg_typecheck_getInternalManifoldPool_overload_1(L)) return _bind_getInternalManifoldPool_overload_1(L);
		if (_lg_typecheck_getInternalManifoldPool_overload_2(L)) return _bind_getInternalManifoldPool_overload_2(L);

		luaL_error(L, "error in function getInternalManifoldPool, cannot match any of the overloads for function getInternalManifoldPool:\n  getInternalManifoldPool()\n  getInternalManifoldPool()\n");
		return 0;
	}

	// void * btDispatcher::allocateCollisionAlgorithm(int size)
	static int _bind_allocateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_allocateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDispatcher::allocateCollisionAlgorithm(int size) function, expected prototype:\nvoid * btDispatcher::allocateCollisionAlgorithm(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDispatcher::allocateCollisionAlgorithm(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		void * lret = self->allocateCollisionAlgorithm(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btDispatcher::freeCollisionAlgorithm(void * ptr)
	static int _bind_freeCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_freeCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcher::freeCollisionAlgorithm(void * ptr) function, expected prototype:\nvoid btDispatcher::freeCollisionAlgorithm(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btDispatcher* self=(Luna< btDispatcher >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcher::freeCollisionAlgorithm(void *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->freeCollisionAlgorithm(ptr);

		return 0;
	}


	// Operator binds:

};

btDispatcher* LunaTraits< btDispatcher >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDispatcher::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	// btPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	// void btDispatcher::releaseManifold(btPersistentManifold * manifold)
	// void btDispatcher::clearManifold(btPersistentManifold * manifold)
	// bool btDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	// bool btDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	// void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	// int btDispatcher::getNumManifolds() const
	// btPersistentManifold * btDispatcher::getManifoldByIndexInternal(int index)
	// btPersistentManifold ** btDispatcher::getInternalManifoldPointer()
	// btPoolAllocator * btDispatcher::getInternalManifoldPool()
	// const btPoolAllocator * btDispatcher::getInternalManifoldPool() const
	// void * btDispatcher::allocateCollisionAlgorithm(int size)
	// void btDispatcher::freeCollisionAlgorithm(void * ptr)
}

void LunaTraits< btDispatcher >::_bind_dtor(btDispatcher* obj) {
	delete obj;
}

const char LunaTraits< btDispatcher >::className[] = "btDispatcher";
const char LunaTraits< btDispatcher >::fullName[] = "btDispatcher";
const char LunaTraits< btDispatcher >::moduleName[] = "bullet";
const char* LunaTraits< btDispatcher >::parents[] = {0};
const int LunaTraits< btDispatcher >::hash = 71097681;
const int LunaTraits< btDispatcher >::uniqueIDs[] = {71097681,0};

luna_RegType LunaTraits< btDispatcher >::methods[] = {
	{"findAlgorithm", &luna_wrapper_btDispatcher::_bind_findAlgorithm},
	{"getNewManifold", &luna_wrapper_btDispatcher::_bind_getNewManifold},
	{"releaseManifold", &luna_wrapper_btDispatcher::_bind_releaseManifold},
	{"clearManifold", &luna_wrapper_btDispatcher::_bind_clearManifold},
	{"needsCollision", &luna_wrapper_btDispatcher::_bind_needsCollision},
	{"needsResponse", &luna_wrapper_btDispatcher::_bind_needsResponse},
	{"dispatchAllCollisionPairs", &luna_wrapper_btDispatcher::_bind_dispatchAllCollisionPairs},
	{"getNumManifolds", &luna_wrapper_btDispatcher::_bind_getNumManifolds},
	{"getManifoldByIndexInternal", &luna_wrapper_btDispatcher::_bind_getManifoldByIndexInternal},
	{"getInternalManifoldPool", &luna_wrapper_btDispatcher::_bind_getInternalManifoldPool},
	{"allocateCollisionAlgorithm", &luna_wrapper_btDispatcher::_bind_allocateCollisionAlgorithm},
	{"freeCollisionAlgorithm", &luna_wrapper_btDispatcher::_bind_freeCollisionAlgorithm},
	{"dynCast", &luna_wrapper_btDispatcher::_bind_dynCast},
	{"__eq", &luna_wrapper_btDispatcher::_bind___eq},
	{"fromVoid", &luna_wrapper_btDispatcher::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDispatcher::_bind_asVoid},
	{"getTable", &luna_wrapper_btDispatcher::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDispatcher >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDispatcher >::enumValues[] = {
	{0,0}
};


