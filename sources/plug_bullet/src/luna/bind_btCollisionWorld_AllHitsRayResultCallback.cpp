#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_AllHitsRayResultCallback.h>

class luna_wrapper_btCollisionWorld_AllHitsRayResultCallback {
public:
	typedef Luna< btCollisionWorld::AllHitsRayResultCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld::RayResultCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44790882) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::RayResultCallback*)");
		}

		btCollisionWorld::RayResultCallback* rhs =(Luna< btCollisionWorld::RayResultCallback >::check(L,2));
		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_RayResultCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCollisionWorld::AllHitsRayResultCallback* ptr= dynamic_cast< btCollisionWorld::AllHitsRayResultCallback* >(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		btCollisionWorld::AllHitsRayResultCallback* ptr= luna_caster< btCollisionWorld::RayResultCallback, btCollisionWorld::AllHitsRayResultCallback >::cast(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCollisionWorld::AllHitsRayResultCallback >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,2,32139575) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_collisionObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rayFromWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rayToWorld(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_hitFractions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_collisionObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48517590) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rayFromWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rayToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitNormalWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitPointWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitFractions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92010878) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addSingleResult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32139575) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld)
	static btCollisionWorld::AllHitsRayResultCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld) function, expected prototype:\nbtCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,1));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;

		return new btCollisionWorld::AllHitsRayResultCallback(rayFromWorld, rayToWorld);
	}

	// btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld)
	static btCollisionWorld::AllHitsRayResultCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld) function, expected prototype:\nbtCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;

		return new wrapper_btCollisionWorld_AllHitsRayResultCallback(L,NULL, rayFromWorld, rayToWorld);
	}

	// Overload binder for btCollisionWorld::AllHitsRayResultCallback::AllHitsRayResultCallback
	static btCollisionWorld::AllHitsRayResultCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AllHitsRayResultCallback, cannot match any of the overloads for function AllHitsRayResultCallback:\n  AllHitsRayResultCallback(const btVector3 &, const btVector3 &)\n  AllHitsRayResultCallback(lua_Table *, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// float btCollisionWorld::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n");
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::AllHitsRayResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btAlignedObjectArray< const btCollisionObject * > btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects()
	static int _bind_getM_collisionObjects(lua_State *L) {
		if (!_lg_typecheck_getM_collisionObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< const btCollisionObject * > btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects() function, expected prototype:\nbtAlignedObjectArray< const btCollisionObject * > btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< const btCollisionObject * > btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btAlignedObjectArray< const btCollisionObject * >* lret = &self->m_collisionObjects;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< const btCollisionObject * > >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld()
	static int _bind_getM_rayFromWorld(lua_State *L) {
		if (!_lg_typecheck_getM_rayFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld() function, expected prototype:\nbtVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_rayFromWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld()
	static int _bind_getM_rayToWorld(lua_State *L) {
		if (!_lg_typecheck_getM_rayToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld() function, expected prototype:\nbtVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_rayToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld()
	static int _bind_getM_hitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld() function, expected prototype:\nbtAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->m_hitNormalWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld()
	static int _bind_getM_hitPointWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld() function, expected prototype:\nbtAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->m_hitPointWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< float > btCollisionWorld::AllHitsRayResultCallback::m_hitFractions()
	static int _bind_getM_hitFractions(lua_State *L) {
		if (!_lg_typecheck_getM_hitFractions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< float > btCollisionWorld::AllHitsRayResultCallback::m_hitFractions() function, expected prototype:\nbtAlignedObjectArray< float > btCollisionWorld::AllHitsRayResultCallback::m_hitFractions()\nClass arguments details:\n");
		}


		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< float > btCollisionWorld::AllHitsRayResultCallback::m_hitFractions(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btAlignedObjectArray< float >* lret = &self->m_hitFractions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< float > >::push(L,lret,false);

		return 1;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects(btAlignedObjectArray< const btCollisionObject * > value)
	static int _bind_setM_collisionObjects(lua_State *L) {
		if (!_lg_typecheck_setM_collisionObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects(btAlignedObjectArray< const btCollisionObject * > value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects(btAlignedObjectArray< const btCollisionObject * > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< const btCollisionObject * >* value_ptr=(Luna< btAlignedObjectArray< const btCollisionObject * > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects function");
		}
		btAlignedObjectArray< const btCollisionObject * > value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_collisionObjects(btAlignedObjectArray< const btCollisionObject * >). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_collisionObjects = value;

		return 0;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld(btVector3 value)
	static int _bind_setM_rayFromWorld(lua_State *L) {
		if (!_lg_typecheck_setM_rayFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_rayFromWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_rayFromWorld = value;

		return 0;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld(btVector3 value)
	static int _bind_setM_rayToWorld(lua_State *L) {
		if (!_lg_typecheck_setM_rayToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_rayToWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_rayToWorld = value;

		return 0;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld(btAlignedObjectArray< btVector3 > value)
	static int _bind_setM_hitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_hitNormalWorld(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_hitNormalWorld = value;

		return 0;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld(btAlignedObjectArray< btVector3 > value)
	static int _bind_setM_hitPointWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_hitPointWorld(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_hitPointWorld = value;

		return 0;
	}

	// void btCollisionWorld::AllHitsRayResultCallback::m_hitFractions(btAlignedObjectArray< float > value)
	static int _bind_setM_hitFractions(lua_State *L) {
		if (!_lg_typecheck_setM_hitFractions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::AllHitsRayResultCallback::m_hitFractions(btAlignedObjectArray< float > value) function, expected prototype:\nvoid btCollisionWorld::AllHitsRayResultCallback::m_hitFractions(btAlignedObjectArray< float > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< float >* value_ptr=(Luna< btAlignedObjectArray< float > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::AllHitsRayResultCallback::m_hitFractions function");
		}
		btAlignedObjectArray< float > value=*value_ptr;

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::AllHitsRayResultCallback::m_hitFractions(btAlignedObjectArray< float >). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_hitFractions = value;

		return 0;
	}

	// bool btCollisionWorld::AllHitsRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::AllHitsRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::AllHitsRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::AllHitsRayResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		bool lret = self->AllHitsRayResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::AllHitsRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_base_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_base_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::AllHitsRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::AllHitsRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n");
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::AllHitsRayResultCallback::base_addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::AllHitsRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::AllHitsRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::AllHitsRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->AllHitsRayResultCallback::addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::AllHitsRayResultCallback* LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_ctor(L);
}

void LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::_bind_dtor(btCollisionWorld::AllHitsRayResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::className[] = "btCollisionWorld_AllHitsRayResultCallback";
const char LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::fullName[] = "btCollisionWorld::AllHitsRayResultCallback";
const char LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::parents[] = {"bullet.btCollisionWorld_RayResultCallback", 0};
const int LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::hash = 47971583;
const int LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::uniqueIDs[] = {44790882,0};

luna_RegType LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::methods[] = {
	{"addSingleResult", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_addSingleResult},
	{"getM_collisionObjects", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_collisionObjects},
	{"getM_rayFromWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_rayFromWorld},
	{"getM_rayToWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_rayToWorld},
	{"getM_hitNormalWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_hitNormalWorld},
	{"getM_hitPointWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_hitPointWorld},
	{"getM_hitFractions", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getM_hitFractions},
	{"setM_collisionObjects", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_collisionObjects},
	{"setM_rayFromWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_rayFromWorld},
	{"setM_rayToWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_rayToWorld},
	{"setM_hitNormalWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_hitNormalWorld},
	{"setM_hitPointWorld", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_hitPointWorld},
	{"setM_hitFractions", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_setM_hitFractions},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_base_needsCollision},
	{"base_addSingleResult", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_base_addSingleResult},
	{"__eq", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind___eq},
	{"getTable", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::converters[] = {
	{"btCollisionWorld::RayResultCallback", &luna_wrapper_btCollisionWorld_AllHitsRayResultCallback::_cast_from_RayResultCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::AllHitsRayResultCallback >::enumValues[] = {
	{0,0}
};


