#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionDispatcher.h>

class luna_wrapper_btCollisionDispatcher {
public:
	typedef Luna< btCollisionDispatcher > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btDispatcher(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCollisionDispatcher* ptr= dynamic_cast< btCollisionDispatcher* >(Luna< btDispatcher >::check(L,1));
		btCollisionDispatcher* ptr= luna_caster< btDispatcher, btCollisionDispatcher >::cast(Luna< btDispatcher >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCollisionDispatcher >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31901746)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionConfiguration >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31901746)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionConfiguration >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDispatcherFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDispatcherFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerCollisionCreateFunc(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,67911425)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumManifolds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getManifoldByIndexInternal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getManifoldByIndexInternal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_findAlgorithm(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66271199)) ) return false;
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

	inline static bool _lg_typecheck_getCollisionConfiguration_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionConfiguration_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionConfiguration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31901746)) ) return false;
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

	inline static bool _lg_typecheck_defaultNearCallback(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82050774) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,71097681) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,95201256) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumManifolds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getManifoldByIndexInternal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNewManifold(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clearManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findAlgorithm(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsResponse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dispatchAllCollisionPairs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,95201256) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_allocateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_freeCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInternalManifoldPool_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getInternalManifoldPool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration * collisionConfiguration)
	static btCollisionDispatcher* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 1 ID = 31901746\n");
		}

		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,1));

		return new btCollisionDispatcher(collisionConfiguration);
	}

	// btCollisionDispatcher::btCollisionDispatcher(lua_Table * data, btCollisionConfiguration * collisionConfiguration)
	static btCollisionDispatcher* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionDispatcher::btCollisionDispatcher(lua_Table * data, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtCollisionDispatcher::btCollisionDispatcher(lua_Table * data, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 2 ID = 31901746\n");
		}

		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,2));

		return new wrapper_btCollisionDispatcher(L,NULL, collisionConfiguration);
	}

	// Overload binder for btCollisionDispatcher::btCollisionDispatcher
	static btCollisionDispatcher* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCollisionDispatcher, cannot match any of the overloads for function btCollisionDispatcher:\n  btCollisionDispatcher(btCollisionConfiguration *)\n  btCollisionDispatcher(lua_Table *, btCollisionConfiguration *)\n");
		return NULL;
	}


	// Function binds:
	// int btCollisionDispatcher::getDispatcherFlags() const
	static int _bind_getDispatcherFlags(lua_State *L) {
		if (!_lg_typecheck_getDispatcherFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionDispatcher::getDispatcherFlags() const function, expected prototype:\nint btCollisionDispatcher::getDispatcherFlags() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionDispatcher::getDispatcherFlags() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		int lret = self->getDispatcherFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionDispatcher::setDispatcherFlags(int flags)
	static int _bind_setDispatcherFlags(lua_State *L) {
		if (!_lg_typecheck_setDispatcherFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::setDispatcherFlags(int flags) function, expected prototype:\nvoid btCollisionDispatcher::setDispatcherFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::setDispatcherFlags(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->setDispatcherFlags(flags);

		return 0;
	}

	// void btCollisionDispatcher::registerCollisionCreateFunc(int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc * createFunc)
	static int _bind_registerCollisionCreateFunc(lua_State *L) {
		if (!_lg_typecheck_registerCollisionCreateFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::registerCollisionCreateFunc(int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc * createFunc) function, expected prototype:\nvoid btCollisionDispatcher::registerCollisionCreateFunc(int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc * createFunc)\nClass arguments details:\narg 3 ID = 67911425\n");
		}

		int proxyType0=(int)lua_tointeger(L,2);
		int proxyType1=(int)lua_tointeger(L,3);
		btCollisionAlgorithmCreateFunc* createFunc=(Luna< btCollisionAlgorithmCreateFunc >::check(L,4));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::registerCollisionCreateFunc(int, int, btCollisionAlgorithmCreateFunc *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->registerCollisionCreateFunc(proxyType0, proxyType1, createFunc);

		return 0;
	}

	// int btCollisionDispatcher::getNumManifolds() const
	static int _bind_getNumManifolds(lua_State *L) {
		if (!_lg_typecheck_getNumManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionDispatcher::getNumManifolds() const function, expected prototype:\nint btCollisionDispatcher::getNumManifolds() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionDispatcher::getNumManifolds() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		int lret = self->getNumManifolds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index)
	static int _bind_getManifoldByIndexInternal_overload_1(lua_State *L) {
		if (!_lg_typecheck_getManifoldByIndexInternal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index) function, expected prototype:\nbtPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getManifoldByIndexInternal(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// const btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index) const
	static int _bind_getManifoldByIndexInternal_overload_2(lua_State *L) {
		if (!_lg_typecheck_getManifoldByIndexInternal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index) const function, expected prototype:\nconst btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int) const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		const btPersistentManifold * lret = self->getManifoldByIndexInternal(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionDispatcher::getManifoldByIndexInternal
	static int _bind_getManifoldByIndexInternal(lua_State *L) {
		if (_lg_typecheck_getManifoldByIndexInternal_overload_1(L)) return _bind_getManifoldByIndexInternal_overload_1(L);
		if (_lg_typecheck_getManifoldByIndexInternal_overload_2(L)) return _bind_getManifoldByIndexInternal_overload_2(L);

		luaL_error(L, "error in function getManifoldByIndexInternal, cannot match any of the overloads for function getManifoldByIndexInternal:\n  getManifoldByIndexInternal(int)\n  getManifoldByIndexInternal(int)\n");
		return 0;
	}

	// btPersistentManifold * btCollisionDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	static int _bind_getNewManifold(lua_State *L) {
		if (!_lg_typecheck_getNewManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btCollisionDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1) function, expected prototype:\nbtPersistentManifold * btCollisionDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* b0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* b1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btCollisionDispatcher::getNewManifold(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getNewManifold(b0, b1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btCollisionDispatcher::releaseManifold(btPersistentManifold * manifold)
	static int _bind_releaseManifold(lua_State *L) {
		if (!_lg_typecheck_releaseManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::releaseManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btCollisionDispatcher::releaseManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::releaseManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->releaseManifold(manifold);

		return 0;
	}

	// void btCollisionDispatcher::clearManifold(btPersistentManifold * manifold)
	static int _bind_clearManifold(lua_State *L) {
		if (!_lg_typecheck_clearManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::clearManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btCollisionDispatcher::clearManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::clearManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->clearManifold(manifold);

		return 0;
	}

	// btCollisionAlgorithm * btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	static int _bind_findAlgorithm(lua_State *L) {
		if (!_lg_typecheck_findAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0) function, expected prototype:\nbtCollisionAlgorithm * btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		btPersistentManifold* sharedManifold=luatop>3 ? (Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,4)) : (btPersistentManifold*)0;

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// bool btCollisionDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btCollisionDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionDispatcher::needsCollision(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->needsCollision(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_needsResponse(lua_State *L) {
		if (!_lg_typecheck_needsResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btCollisionDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionDispatcher::needsResponse(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->needsResponse(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	static int _bind_dispatchAllCollisionPairs(lua_State *L) {
		if (!_lg_typecheck_dispatchAllCollisionPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher) function, expected prototype:\nvoid btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 78133027\narg 2 ID = 95201256\narg 3 ID = 71097681\n");
		}

		btOverlappingPairCache* pairCache=(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,3));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btCollisionDispatcher::dispatchAllCollisionPairs function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache *, const btDispatcherInfo &, btDispatcher *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->dispatchAllCollisionPairs(pairCache, dispatchInfo, dispatcher);

		return 0;
	}

	// void * btCollisionDispatcher::allocateCollisionAlgorithm(int size)
	static int _bind_allocateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_allocateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionDispatcher::allocateCollisionAlgorithm(int size) function, expected prototype:\nvoid * btCollisionDispatcher::allocateCollisionAlgorithm(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionDispatcher::allocateCollisionAlgorithm(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		void * lret = self->allocateCollisionAlgorithm(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btCollisionDispatcher::freeCollisionAlgorithm(void * ptr)
	static int _bind_freeCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_freeCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::freeCollisionAlgorithm(void * ptr) function, expected prototype:\nvoid btCollisionDispatcher::freeCollisionAlgorithm(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::freeCollisionAlgorithm(void *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->freeCollisionAlgorithm(ptr);

		return 0;
	}

	// btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration()
	static int _bind_getCollisionConfiguration_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollisionConfiguration_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration() function, expected prototype:\nbtCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration()\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration(). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btCollisionConfiguration * lret = self->getCollisionConfiguration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionConfiguration >::push(L,lret,false);

		return 1;
	}

	// const btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration() const
	static int _bind_getCollisionConfiguration_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollisionConfiguration_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration() const function, expected prototype:\nconst btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionConfiguration * btCollisionDispatcher::getCollisionConfiguration() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		const btCollisionConfiguration * lret = self->getCollisionConfiguration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionConfiguration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionDispatcher::getCollisionConfiguration
	static int _bind_getCollisionConfiguration(lua_State *L) {
		if (_lg_typecheck_getCollisionConfiguration_overload_1(L)) return _bind_getCollisionConfiguration_overload_1(L);
		if (_lg_typecheck_getCollisionConfiguration_overload_2(L)) return _bind_getCollisionConfiguration_overload_2(L);

		luaL_error(L, "error in function getCollisionConfiguration, cannot match any of the overloads for function getCollisionConfiguration:\n  getCollisionConfiguration()\n  getCollisionConfiguration()\n");
		return 0;
	}

	// void btCollisionDispatcher::setCollisionConfiguration(btCollisionConfiguration * config)
	static int _bind_setCollisionConfiguration(lua_State *L) {
		if (!_lg_typecheck_setCollisionConfiguration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::setCollisionConfiguration(btCollisionConfiguration * config) function, expected prototype:\nvoid btCollisionDispatcher::setCollisionConfiguration(btCollisionConfiguration * config)\nClass arguments details:\narg 1 ID = 31901746\n");
		}

		btCollisionConfiguration* config=(Luna< btCollisionConfiguration >::check(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::setCollisionConfiguration(btCollisionConfiguration *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->setCollisionConfiguration(config);

		return 0;
	}

	// btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool()
	static int _bind_getInternalManifoldPool_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInternalManifoldPool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() function, expected prototype:\nbtPoolAllocator * btCollisionDispatcher::getInternalManifoldPool()\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool(). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// const btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() const
	static int _bind_getInternalManifoldPool_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInternalManifoldPool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() const function, expected prototype:\nconst btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		const btPoolAllocator * lret = self->getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionDispatcher::getInternalManifoldPool
	static int _bind_getInternalManifoldPool(lua_State *L) {
		if (_lg_typecheck_getInternalManifoldPool_overload_1(L)) return _bind_getInternalManifoldPool_overload_1(L);
		if (_lg_typecheck_getInternalManifoldPool_overload_2(L)) return _bind_getInternalManifoldPool_overload_2(L);

		luaL_error(L, "error in function getInternalManifoldPool, cannot match any of the overloads for function getInternalManifoldPool:\n  getInternalManifoldPool()\n  getInternalManifoldPool()\n");
		return 0;
	}

	// static void btCollisionDispatcher::defaultNearCallback(btBroadphasePair & collisionPair, btCollisionDispatcher & dispatcher, const btDispatcherInfo & dispatchInfo)
	static int _bind_defaultNearCallback(lua_State *L) {
		if (!_lg_typecheck_defaultNearCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btCollisionDispatcher::defaultNearCallback(btBroadphasePair & collisionPair, btCollisionDispatcher & dispatcher, const btDispatcherInfo & dispatchInfo) function, expected prototype:\nstatic void btCollisionDispatcher::defaultNearCallback(btBroadphasePair & collisionPair, btCollisionDispatcher & dispatcher, const btDispatcherInfo & dispatchInfo)\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 71097681\narg 3 ID = 95201256\n");
		}

		btBroadphasePair* collisionPair_ptr=(Luna< btBroadphasePair >::check(L,1));
		if( !collisionPair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collisionPair in btCollisionDispatcher::defaultNearCallback function");
		}
		btBroadphasePair & collisionPair=*collisionPair_ptr;
		btCollisionDispatcher* dispatcher_ptr=(Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,2));
		if( !dispatcher_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatcher in btCollisionDispatcher::defaultNearCallback function");
		}
		btCollisionDispatcher & dispatcher=*dispatcher_ptr;
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,3));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btCollisionDispatcher::defaultNearCallback function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;

		btCollisionDispatcher::defaultNearCallback(collisionPair, dispatcher, dispatchInfo);

		return 0;
	}

	// int btCollisionDispatcher::base_getNumManifolds() const
	static int _bind_base_getNumManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getNumManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionDispatcher::base_getNumManifolds() const function, expected prototype:\nint btCollisionDispatcher::base_getNumManifolds() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionDispatcher::base_getNumManifolds() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		int lret = self->btCollisionDispatcher::getNumManifolds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btPersistentManifold * btCollisionDispatcher::base_getManifoldByIndexInternal(int index)
	static int _bind_base_getManifoldByIndexInternal(lua_State *L) {
		if (!_lg_typecheck_base_getManifoldByIndexInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btCollisionDispatcher::base_getManifoldByIndexInternal(int index) function, expected prototype:\nbtPersistentManifold * btCollisionDispatcher::base_getManifoldByIndexInternal(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btCollisionDispatcher::base_getManifoldByIndexInternal(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->btCollisionDispatcher::getManifoldByIndexInternal(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// btPersistentManifold * btCollisionDispatcher::base_getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	static int _bind_base_getNewManifold(lua_State *L) {
		if (!_lg_typecheck_base_getNewManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btCollisionDispatcher::base_getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1) function, expected prototype:\nbtPersistentManifold * btCollisionDispatcher::base_getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* b0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* b1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btCollisionDispatcher::base_getNewManifold(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->btCollisionDispatcher::getNewManifold(b0, b1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btCollisionDispatcher::base_releaseManifold(btPersistentManifold * manifold)
	static int _bind_base_releaseManifold(lua_State *L) {
		if (!_lg_typecheck_base_releaseManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::base_releaseManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btCollisionDispatcher::base_releaseManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::base_releaseManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->btCollisionDispatcher::releaseManifold(manifold);

		return 0;
	}

	// void btCollisionDispatcher::base_clearManifold(btPersistentManifold * manifold)
	static int _bind_base_clearManifold(lua_State *L) {
		if (!_lg_typecheck_base_clearManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::base_clearManifold(btPersistentManifold * manifold) function, expected prototype:\nvoid btCollisionDispatcher::base_clearManifold(btPersistentManifold * manifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::base_clearManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->btCollisionDispatcher::clearManifold(manifold);

		return 0;
	}

	// btCollisionAlgorithm * btCollisionDispatcher::base_findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	static int _bind_base_findAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_findAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCollisionDispatcher::base_findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0) function, expected prototype:\nbtCollisionAlgorithm * btCollisionDispatcher::base_findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		btPersistentManifold* sharedManifold=luatop>3 ? (Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,4)) : (btPersistentManifold*)0;

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCollisionDispatcher::base_findAlgorithm(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btPersistentManifold *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->btCollisionDispatcher::findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// bool btCollisionDispatcher::base_needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionDispatcher::base_needsCollision(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btCollisionDispatcher::base_needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionDispatcher::base_needsCollision(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->btCollisionDispatcher::needsCollision(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionDispatcher::base_needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_base_needsResponse(lua_State *L) {
		if (!_lg_typecheck_base_needsResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionDispatcher::base_needsResponse(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbool btCollisionDispatcher::base_needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionDispatcher::base_needsResponse(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		bool lret = self->btCollisionDispatcher::needsResponse(body0, body1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionDispatcher::base_dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	static int _bind_base_dispatchAllCollisionPairs(lua_State *L) {
		if (!_lg_typecheck_base_dispatchAllCollisionPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::base_dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher) function, expected prototype:\nvoid btCollisionDispatcher::base_dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 78133027\narg 2 ID = 95201256\narg 3 ID = 71097681\n");
		}

		btOverlappingPairCache* pairCache=(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,3));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btCollisionDispatcher::base_dispatchAllCollisionPairs function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::base_dispatchAllCollisionPairs(btOverlappingPairCache *, const btDispatcherInfo &, btDispatcher *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->btCollisionDispatcher::dispatchAllCollisionPairs(pairCache, dispatchInfo, dispatcher);

		return 0;
	}

	// void * btCollisionDispatcher::base_allocateCollisionAlgorithm(int size)
	static int _bind_base_allocateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_allocateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionDispatcher::base_allocateCollisionAlgorithm(int size) function, expected prototype:\nvoid * btCollisionDispatcher::base_allocateCollisionAlgorithm(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionDispatcher::base_allocateCollisionAlgorithm(int). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		void * lret = self->btCollisionDispatcher::allocateCollisionAlgorithm(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btCollisionDispatcher::base_freeCollisionAlgorithm(void * ptr)
	static int _bind_base_freeCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_freeCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionDispatcher::base_freeCollisionAlgorithm(void * ptr) function, expected prototype:\nvoid btCollisionDispatcher::base_freeCollisionAlgorithm(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionDispatcher::base_freeCollisionAlgorithm(void *). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		self->btCollisionDispatcher::freeCollisionAlgorithm(ptr);

		return 0;
	}

	// btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool()
	static int _bind_base_getInternalManifoldPool_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getInternalManifoldPool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool() function, expected prototype:\nbtPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool()\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool(). Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->btCollisionDispatcher::getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// const btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool() const
	static int _bind_base_getInternalManifoldPool_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getInternalManifoldPool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool() const function, expected prototype:\nconst btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool() const\nClass arguments details:\n");
		}


		btCollisionDispatcher* self=Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPoolAllocator * btCollisionDispatcher::base_getInternalManifoldPool() const. Got : '%s'",typeid(Luna< btDispatcher >::check(L,1)).name());
		}
		const btPoolAllocator * lret = self->btCollisionDispatcher::getInternalManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionDispatcher::base_getInternalManifoldPool
	static int _bind_base_getInternalManifoldPool(lua_State *L) {
		if (_lg_typecheck_base_getInternalManifoldPool_overload_1(L)) return _bind_base_getInternalManifoldPool_overload_1(L);
		if (_lg_typecheck_base_getInternalManifoldPool_overload_2(L)) return _bind_base_getInternalManifoldPool_overload_2(L);

		luaL_error(L, "error in function base_getInternalManifoldPool, cannot match any of the overloads for function base_getInternalManifoldPool:\n  base_getInternalManifoldPool()\n  base_getInternalManifoldPool()\n");
		return 0;
	}


	// Operator binds:

};

btCollisionDispatcher* LunaTraits< btCollisionDispatcher >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionDispatcher::_bind_ctor(L);
}

void LunaTraits< btCollisionDispatcher >::_bind_dtor(btCollisionDispatcher* obj) {
	delete obj;
}

const char LunaTraits< btCollisionDispatcher >::className[] = "btCollisionDispatcher";
const char LunaTraits< btCollisionDispatcher >::fullName[] = "btCollisionDispatcher";
const char LunaTraits< btCollisionDispatcher >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionDispatcher >::parents[] = {"bullet.btDispatcher", 0};
const int LunaTraits< btCollisionDispatcher >::hash = 96866449;
const int LunaTraits< btCollisionDispatcher >::uniqueIDs[] = {71097681,0};

luna_RegType LunaTraits< btCollisionDispatcher >::methods[] = {
	{"getDispatcherFlags", &luna_wrapper_btCollisionDispatcher::_bind_getDispatcherFlags},
	{"setDispatcherFlags", &luna_wrapper_btCollisionDispatcher::_bind_setDispatcherFlags},
	{"registerCollisionCreateFunc", &luna_wrapper_btCollisionDispatcher::_bind_registerCollisionCreateFunc},
	{"getNumManifolds", &luna_wrapper_btCollisionDispatcher::_bind_getNumManifolds},
	{"getManifoldByIndexInternal", &luna_wrapper_btCollisionDispatcher::_bind_getManifoldByIndexInternal},
	{"getNewManifold", &luna_wrapper_btCollisionDispatcher::_bind_getNewManifold},
	{"releaseManifold", &luna_wrapper_btCollisionDispatcher::_bind_releaseManifold},
	{"clearManifold", &luna_wrapper_btCollisionDispatcher::_bind_clearManifold},
	{"findAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_findAlgorithm},
	{"needsCollision", &luna_wrapper_btCollisionDispatcher::_bind_needsCollision},
	{"needsResponse", &luna_wrapper_btCollisionDispatcher::_bind_needsResponse},
	{"dispatchAllCollisionPairs", &luna_wrapper_btCollisionDispatcher::_bind_dispatchAllCollisionPairs},
	{"allocateCollisionAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_allocateCollisionAlgorithm},
	{"freeCollisionAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_freeCollisionAlgorithm},
	{"getCollisionConfiguration", &luna_wrapper_btCollisionDispatcher::_bind_getCollisionConfiguration},
	{"setCollisionConfiguration", &luna_wrapper_btCollisionDispatcher::_bind_setCollisionConfiguration},
	{"getInternalManifoldPool", &luna_wrapper_btCollisionDispatcher::_bind_getInternalManifoldPool},
	{"defaultNearCallback", &luna_wrapper_btCollisionDispatcher::_bind_defaultNearCallback},
	{"base_getNumManifolds", &luna_wrapper_btCollisionDispatcher::_bind_base_getNumManifolds},
	{"base_getManifoldByIndexInternal", &luna_wrapper_btCollisionDispatcher::_bind_base_getManifoldByIndexInternal},
	{"base_getNewManifold", &luna_wrapper_btCollisionDispatcher::_bind_base_getNewManifold},
	{"base_releaseManifold", &luna_wrapper_btCollisionDispatcher::_bind_base_releaseManifold},
	{"base_clearManifold", &luna_wrapper_btCollisionDispatcher::_bind_base_clearManifold},
	{"base_findAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_base_findAlgorithm},
	{"base_needsCollision", &luna_wrapper_btCollisionDispatcher::_bind_base_needsCollision},
	{"base_needsResponse", &luna_wrapper_btCollisionDispatcher::_bind_base_needsResponse},
	{"base_dispatchAllCollisionPairs", &luna_wrapper_btCollisionDispatcher::_bind_base_dispatchAllCollisionPairs},
	{"base_allocateCollisionAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_base_allocateCollisionAlgorithm},
	{"base_freeCollisionAlgorithm", &luna_wrapper_btCollisionDispatcher::_bind_base_freeCollisionAlgorithm},
	{"base_getInternalManifoldPool", &luna_wrapper_btCollisionDispatcher::_bind_base_getInternalManifoldPool},
	{"__eq", &luna_wrapper_btCollisionDispatcher::_bind___eq},
	{"getTable", &luna_wrapper_btCollisionDispatcher::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionDispatcher >::converters[] = {
	{"btDispatcher", &luna_wrapper_btCollisionDispatcher::_cast_from_btDispatcher},
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionDispatcher >::enumValues[] = {
	{"CD_STATIC_STATIC_REPORTED", btCollisionDispatcher::CD_STATIC_STATIC_REPORTED},
	{"CD_USE_RELATIVE_CONTACT_BREAKING_THRESHOLD", btCollisionDispatcher::CD_USE_RELATIVE_CONTACT_BREAKING_THRESHOLD},
	{"CD_DISABLE_CONTACTPOOL_DYNAMIC_ALLOCATION", btCollisionDispatcher::CD_DISABLE_CONTACTPOOL_DYNAMIC_ALLOCATION},
	{0,0}
};


