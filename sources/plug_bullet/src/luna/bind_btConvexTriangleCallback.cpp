#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexTriangleCallback.h>

class luna_wrapper_btConvexTriangleCallback {
public:
	typedef Luna< btConvexTriangleCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTriangleCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleCallback*)");
		}

		btTriangleCallback* rhs =(Luna< btTriangleCallback >::check(L,2));
		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btTriangleCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexTriangleCallback* ptr= dynamic_cast< btConvexTriangleCallback* >(Luna< btTriangleCallback >::check(L,1));
		btConvexTriangleCallback* ptr= luna_caster< btTriangleCallback, btConvexTriangleCallback >::cast(Luna< btTriangleCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexTriangleCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71097681)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDispatcher >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObjectWrapper >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDispatcher >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTimeStepAndCounters(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,95201256) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,32391296)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,25324514)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearWrapperData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_triangleCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_manifoldPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_triangleCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_manifoldPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexTriangleCallback::btConvexTriangleCallback(btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btConvexTriangleCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexTriangleCallback::btConvexTriangleCallback(btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtConvexTriangleCallback::btConvexTriangleCallback(btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,1));
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		bool isSwapped=(bool)(lua_toboolean(L,4)==1);

		return new btConvexTriangleCallback(dispatcher, body0Wrap, body1Wrap, isSwapped);
	}

	// btConvexTriangleCallback::btConvexTriangleCallback(lua_Table * data, btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btConvexTriangleCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexTriangleCallback::btConvexTriangleCallback(lua_Table * data, btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtConvexTriangleCallback::btConvexTriangleCallback(lua_Table * data, btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 2 ID = 71097681\narg 3 ID = 32391296\narg 4 ID = 32391296\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		bool isSwapped=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_btConvexTriangleCallback(L,NULL, dispatcher, body0Wrap, body1Wrap, isSwapped);
	}

	// Overload binder for btConvexTriangleCallback::btConvexTriangleCallback
	static btConvexTriangleCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexTriangleCallback, cannot match any of the overloads for function btConvexTriangleCallback:\n  btConvexTriangleCallback(btDispatcher *, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n  btConvexTriangleCallback(lua_Table *, btDispatcher *, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexTriangleCallback::setTimeStepAndCounters(float collisionMarginTriangle, const btDispatcherInfo & dispatchInfo, const btCollisionObjectWrapper * convexBodyWrap, const btCollisionObjectWrapper * triBodyWrap, btManifoldResult * resultOut)
	static int _bind_setTimeStepAndCounters(lua_State *L) {
		if (!_lg_typecheck_setTimeStepAndCounters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::setTimeStepAndCounters(float collisionMarginTriangle, const btDispatcherInfo & dispatchInfo, const btCollisionObjectWrapper * convexBodyWrap, const btCollisionObjectWrapper * triBodyWrap, btManifoldResult * resultOut) function, expected prototype:\nvoid btConvexTriangleCallback::setTimeStepAndCounters(float collisionMarginTriangle, const btDispatcherInfo & dispatchInfo, const btCollisionObjectWrapper * convexBodyWrap, const btCollisionObjectWrapper * triBodyWrap, btManifoldResult * resultOut)\nClass arguments details:\narg 2 ID = 95201256\narg 3 ID = 32391296\narg 4 ID = 32391296\narg 5 ID = 25324514\n");
		}

		float collisionMarginTriangle=(float)lua_tonumber(L,2);
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,3));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexTriangleCallback::setTimeStepAndCounters function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		const btCollisionObjectWrapper* convexBodyWrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* triBodyWrap=(Luna< btCollisionObjectWrapper >::check(L,5));
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,6));

		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::setTimeStepAndCounters(float, const btDispatcherInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btManifoldResult *). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->setTimeStepAndCounters(collisionMarginTriangle, dispatchInfo, convexBodyWrap, triBodyWrap, resultOut);

		return 0;
	}

	// void btConvexTriangleCallback::clearWrapperData()
	static int _bind_clearWrapperData(lua_State *L) {
		if (!_lg_typecheck_clearWrapperData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::clearWrapperData() function, expected prototype:\nvoid btConvexTriangleCallback::clearWrapperData()\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::clearWrapperData(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->clearWrapperData();

		return 0;
	}

	// void btConvexTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btConvexTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->processTriangle(triangle, partId, triangleIndex);

		return 0;
	}

	// void btConvexTriangleCallback::clearCache()
	static int _bind_clearCache(lua_State *L) {
		if (!_lg_typecheck_clearCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::clearCache() function, expected prototype:\nvoid btConvexTriangleCallback::clearCache()\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::clearCache(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->clearCache();

		return 0;
	}

	// const btVector3 & btConvexTriangleCallback::getAabbMin() const
	static int _bind_getAabbMin(lua_State *L) {
		if (!_lg_typecheck_getAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexTriangleCallback::getAabbMin() const function, expected prototype:\nconst btVector3 & btConvexTriangleCallback::getAabbMin() const\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexTriangleCallback::getAabbMin() const. Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAabbMin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btConvexTriangleCallback::getAabbMax() const
	static int _bind_getAabbMax(lua_State *L) {
		if (!_lg_typecheck_getAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexTriangleCallback::getAabbMax() const function, expected prototype:\nconst btVector3 & btConvexTriangleCallback::getAabbMax() const\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexTriangleCallback::getAabbMax() const. Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAabbMax();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btConvexTriangleCallback::m_triangleCount()
	static int _bind_getM_triangleCount(lua_State *L) {
		if (!_lg_typecheck_getM_triangleCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleCallback::m_triangleCount() function, expected prototype:\nint btConvexTriangleCallback::m_triangleCount()\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleCallback::m_triangleCount(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		int lret = self->m_triangleCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btPersistentManifold * btConvexTriangleCallback::m_manifoldPtr()
	static int _bind_getM_manifoldPtr(lua_State *L) {
		if (!_lg_typecheck_getM_manifoldPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btConvexTriangleCallback::m_manifoldPtr() function, expected prototype:\nbtPersistentManifold * btConvexTriangleCallback::m_manifoldPtr()\nClass arguments details:\n");
		}


		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btConvexTriangleCallback::m_manifoldPtr(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->m_manifoldPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btConvexTriangleCallback::m_triangleCount(int value)
	static int _bind_setM_triangleCount(lua_State *L) {
		if (!_lg_typecheck_setM_triangleCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::m_triangleCount(int value) function, expected prototype:\nvoid btConvexTriangleCallback::m_triangleCount(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::m_triangleCount(int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_triangleCount = value;

		return 0;
	}

	// void btConvexTriangleCallback::m_manifoldPtr(btPersistentManifold * value)
	static int _bind_setM_manifoldPtr(lua_State *L) {
		if (!_lg_typecheck_setM_manifoldPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::m_manifoldPtr(btPersistentManifold * value) function, expected prototype:\nvoid btConvexTriangleCallback::m_manifoldPtr(btPersistentManifold * value)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* value=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::m_manifoldPtr(btPersistentManifold *). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_manifoldPtr = value;

		return 0;
	}

	// void btConvexTriangleCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_base_processTriangle(lua_State *L) {
		if (!_lg_typecheck_base_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btConvexTriangleCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btConvexTriangleCallback* self=Luna< btTriangleCallback >::checkSubType< btConvexTriangleCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleCallback::base_processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->btConvexTriangleCallback::processTriangle(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btConvexTriangleCallback* LunaTraits< btConvexTriangleCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexTriangleCallback::_bind_ctor(L);
}

void LunaTraits< btConvexTriangleCallback >::_bind_dtor(btConvexTriangleCallback* obj) {
	delete obj;
}

const char LunaTraits< btConvexTriangleCallback >::className[] = "btConvexTriangleCallback";
const char LunaTraits< btConvexTriangleCallback >::fullName[] = "btConvexTriangleCallback";
const char LunaTraits< btConvexTriangleCallback >::moduleName[] = "bullet";
const char* LunaTraits< btConvexTriangleCallback >::parents[] = {"bullet.btTriangleCallback", 0};
const int LunaTraits< btConvexTriangleCallback >::hash = 20434947;
const int LunaTraits< btConvexTriangleCallback >::uniqueIDs[] = {46793426,0};

luna_RegType LunaTraits< btConvexTriangleCallback >::methods[] = {
	{"setTimeStepAndCounters", &luna_wrapper_btConvexTriangleCallback::_bind_setTimeStepAndCounters},
	{"clearWrapperData", &luna_wrapper_btConvexTriangleCallback::_bind_clearWrapperData},
	{"processTriangle", &luna_wrapper_btConvexTriangleCallback::_bind_processTriangle},
	{"clearCache", &luna_wrapper_btConvexTriangleCallback::_bind_clearCache},
	{"getAabbMin", &luna_wrapper_btConvexTriangleCallback::_bind_getAabbMin},
	{"getAabbMax", &luna_wrapper_btConvexTriangleCallback::_bind_getAabbMax},
	{"getM_triangleCount", &luna_wrapper_btConvexTriangleCallback::_bind_getM_triangleCount},
	{"getM_manifoldPtr", &luna_wrapper_btConvexTriangleCallback::_bind_getM_manifoldPtr},
	{"setM_triangleCount", &luna_wrapper_btConvexTriangleCallback::_bind_setM_triangleCount},
	{"setM_manifoldPtr", &luna_wrapper_btConvexTriangleCallback::_bind_setM_manifoldPtr},
	{"base_processTriangle", &luna_wrapper_btConvexTriangleCallback::_bind_base_processTriangle},
	{"__eq", &luna_wrapper_btConvexTriangleCallback::_bind___eq},
	{"getTable", &luna_wrapper_btConvexTriangleCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexTriangleCallback >::converters[] = {
	{"btTriangleCallback", &luna_wrapper_btConvexTriangleCallback::_cast_from_btTriangleCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexTriangleCallback >::enumValues[] = {
	{0,0}
};


