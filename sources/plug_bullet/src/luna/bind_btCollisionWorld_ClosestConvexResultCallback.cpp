#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_ClosestConvexResultCallback.h>

class luna_wrapper_btCollisionWorld_ClosestConvexResultCallback {
public:
	typedef Luna< btCollisionWorld::ClosestConvexResultCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld::ConvexResultCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18279310) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::ConvexResultCallback*)");
		}

		btCollisionWorld::ConvexResultCallback* rhs =(Luna< btCollisionWorld::ConvexResultCallback >::check(L,2));
		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_ConvexResultCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCollisionWorld::ClosestConvexResultCallback* ptr= dynamic_cast< btCollisionWorld::ClosestConvexResultCallback* >(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		btCollisionWorld::ClosestConvexResultCallback* ptr= luna_caster< btCollisionWorld::ConvexResultCallback, btCollisionWorld::ClosestConvexResultCallback >::cast(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCollisionWorld::ClosestConvexResultCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addSingleResult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,34210430) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_convexFromWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_convexToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitNormalWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitPointWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_convexFromWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_convexToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitNormalWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitPointWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addSingleResult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,34210430) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(const btVector3 & convexFromWorld, const btVector3 & convexToWorld)
	static btCollisionWorld::ClosestConvexResultCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(const btVector3 & convexFromWorld, const btVector3 & convexToWorld) function, expected prototype:\nbtCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(const btVector3 & convexFromWorld, const btVector3 & convexToWorld)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* convexFromWorld_ptr=(Luna< btVector3 >::check(L,1));
		if( !convexFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexFromWorld in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback function");
		}
		const btVector3 & convexFromWorld=*convexFromWorld_ptr;
		const btVector3* convexToWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !convexToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexToWorld in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback function");
		}
		const btVector3 & convexToWorld=*convexToWorld_ptr;

		return new btCollisionWorld::ClosestConvexResultCallback(convexFromWorld, convexToWorld);
	}

	// btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(lua_Table * data, const btVector3 & convexFromWorld, const btVector3 & convexToWorld)
	static btCollisionWorld::ClosestConvexResultCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(lua_Table * data, const btVector3 & convexFromWorld, const btVector3 & convexToWorld) function, expected prototype:\nbtCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback(lua_Table * data, const btVector3 & convexFromWorld, const btVector3 & convexToWorld)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* convexFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !convexFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexFromWorld in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback function");
		}
		const btVector3 & convexFromWorld=*convexFromWorld_ptr;
		const btVector3* convexToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !convexToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexToWorld in btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback function");
		}
		const btVector3 & convexToWorld=*convexToWorld_ptr;

		return new wrapper_btCollisionWorld_ClosestConvexResultCallback(L,NULL, convexFromWorld, convexToWorld);
	}

	// Overload binder for btCollisionWorld::ClosestConvexResultCallback::ClosestConvexResultCallback
	static btCollisionWorld::ClosestConvexResultCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ClosestConvexResultCallback, cannot match any of the overloads for function ClosestConvexResultCallback:\n  ClosestConvexResultCallback(const btVector3 &, const btVector3 &)\n  ClosestConvexResultCallback(lua_Table *, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// float btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 34210430\n");
		}

		btCollisionWorld::LocalConvexResult* convexResult_ptr=(Luna< btCollisionWorld::LocalConvexResult >::check(L,2));
		if( !convexResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexResult in btCollisionWorld::ClosestConvexResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalConvexResult & convexResult=*convexResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(convexResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld()
	static int _bind_getM_convexFromWorld(lua_State *L) {
		if (!_lg_typecheck_getM_convexFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_convexFromWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld()
	static int _bind_getM_convexToWorld(lua_State *L) {
		if (!_lg_typecheck_getM_convexToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_convexToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld()
	static int _bind_getM_hitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitNormalWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld()
	static int _bind_getM_hitPointWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitPointWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObject * btCollisionWorld::ClosestConvexResultCallback::m_hitCollisionObject()
	static int _bind_getM_hitCollisionObject(lua_State *L) {
		if (!_lg_typecheck_getM_hitCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btCollisionWorld::ClosestConvexResultCallback::m_hitCollisionObject() function, expected prototype:\nconst btCollisionObject * btCollisionWorld::ClosestConvexResultCallback::m_hitCollisionObject()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btCollisionWorld::ClosestConvexResultCallback::m_hitCollisionObject(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->m_hitCollisionObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// void btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld(btVector3 value)
	static int _bind_setM_convexFromWorld(lua_State *L) {
		if (!_lg_typecheck_setM_convexFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestConvexResultCallback::m_convexFromWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_convexFromWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld(btVector3 value)
	static int _bind_setM_convexToWorld(lua_State *L) {
		if (!_lg_typecheck_setM_convexToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestConvexResultCallback::m_convexToWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_convexToWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld(btVector3 value)
	static int _bind_setM_hitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestConvexResultCallback::m_hitNormalWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_hitNormalWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld(btVector3 value)
	static int _bind_setM_hitPointWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestConvexResultCallback::m_hitPointWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_hitPointWorld = value;

		return 0;
	}

	// bool btCollisionWorld::ClosestConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ClosestConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ClosestConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ClosestConvexResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		bool lret = self->ClosestConvexResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::ClosestConvexResultCallback::base_addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
	static int _bind_base_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_base_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ClosestConvexResultCallback::base_addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::ClosestConvexResultCallback::base_addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 34210430\n");
		}

		btCollisionWorld::LocalConvexResult* convexResult_ptr=(Luna< btCollisionWorld::LocalConvexResult >::check(L,2));
		if( !convexResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexResult in btCollisionWorld::ClosestConvexResultCallback::base_addSingleResult function");
		}
		btCollisionWorld::LocalConvexResult & convexResult=*convexResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::ClosestConvexResultCallback* self=Luna< btCollisionWorld::ConvexResultCallback >::checkSubType< btCollisionWorld::ClosestConvexResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ClosestConvexResultCallback::base_addSingleResult(btCollisionWorld::LocalConvexResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		float lret = self->ClosestConvexResultCallback::addSingleResult(convexResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::ClosestConvexResultCallback* LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_ctor(L);
}

void LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::_bind_dtor(btCollisionWorld::ClosestConvexResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::className[] = "btCollisionWorld_ClosestConvexResultCallback";
const char LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::fullName[] = "btCollisionWorld::ClosestConvexResultCallback";
const char LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::moduleName[] = "btCollisionWorld";
const char* LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::parents[] = {"btCollisionWorld.btCollisionWorld_ConvexResultCallback", 0};
const int LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::hash = 98235920;
const int LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::uniqueIDs[] = {18279310,0};

luna_RegType LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::methods[] = {
	{"addSingleResult", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_addSingleResult},
	{"getM_convexFromWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getM_convexFromWorld},
	{"getM_convexToWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getM_convexToWorld},
	{"getM_hitNormalWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getM_hitNormalWorld},
	{"getM_hitPointWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getM_hitPointWorld},
	{"getM_hitCollisionObject", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getM_hitCollisionObject},
	{"setM_convexFromWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_setM_convexFromWorld},
	{"setM_convexToWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_setM_convexToWorld},
	{"setM_hitNormalWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_setM_hitNormalWorld},
	{"setM_hitPointWorld", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_setM_hitPointWorld},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_base_needsCollision},
	{"base_addSingleResult", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_base_addSingleResult},
	{"__eq", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind___eq},
	{"getTable", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::converters[] = {
	{"btCollisionWorld::ConvexResultCallback", &luna_wrapper_btCollisionWorld_ClosestConvexResultCallback::_cast_from_ConvexResultCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::ClosestConvexResultCallback >::enumValues[] = {
	{0,0}
};


