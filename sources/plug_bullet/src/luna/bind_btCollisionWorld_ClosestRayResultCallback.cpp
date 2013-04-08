#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_ClosestRayResultCallback.h>

class luna_wrapper_btCollisionWorld_ClosestRayResultCallback {
public:
	typedef Luna< btCollisionWorld::ClosestRayResultCallback > luna_t;

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

		btCollisionWorld::ClosestRayResultCallback* self= (btCollisionWorld::ClosestRayResultCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld::ClosestRayResultCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44790882) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_RayResultCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCollisionWorld::ClosestRayResultCallback* ptr= dynamic_cast< btCollisionWorld::ClosestRayResultCallback* >(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		btCollisionWorld::ClosestRayResultCallback* ptr= luna_caster< btCollisionWorld::RayResultCallback, btCollisionWorld::ClosestRayResultCallback >::cast(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCollisionWorld::ClosestRayResultCallback >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getRayFromWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRayToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHitNormalWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHitPointWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRayFromWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRayToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHitNormalWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHitPointWorld(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,32139575) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld)
	static btCollisionWorld::ClosestRayResultCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld) function, expected prototype:\nbtCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(const btVector3 & rayFromWorld, const btVector3 & rayToWorld)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,1));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;

		return new btCollisionWorld::ClosestRayResultCallback(rayFromWorld, rayToWorld);
	}

	// btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld)
	static btCollisionWorld::ClosestRayResultCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld) function, expected prototype:\nbtCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback(lua_Table * data, const btVector3 & rayFromWorld, const btVector3 & rayToWorld)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;

		return new wrapper_btCollisionWorld_ClosestRayResultCallback(L,NULL, rayFromWorld, rayToWorld);
	}

	// Overload binder for btCollisionWorld::ClosestRayResultCallback::ClosestRayResultCallback
	static btCollisionWorld::ClosestRayResultCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ClosestRayResultCallback, cannot match any of the overloads for function ClosestRayResultCallback:\n  ClosestRayResultCallback(const btVector3 &, const btVector3 &)\n  ClosestRayResultCallback(lua_Table *, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// float btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n");
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::ClosestRayResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld()
	static int _bind_getRayFromWorld(lua_State *L) {
		if (!_lg_typecheck_getRayFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_rayFromWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayToWorld()
	static int _bind_getRayToWorld(lua_State *L) {
		if (!_lg_typecheck_getRayToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayToWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestRayResultCallback::m_rayToWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestRayResultCallback::m_rayToWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_rayToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld()
	static int _bind_getHitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_getHitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitNormalWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld()
	static int _bind_getHitPointWorld(lua_State *L) {
		if (!_lg_typecheck_getHitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld() function, expected prototype:\nbtVector3 btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld()\nClass arguments details:\n");
		}


		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitPointWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld(btVector3 value)
	static int _bind_setRayFromWorld(lua_State *L) {
		if (!_lg_typecheck_setRayFromWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestRayResultCallback::m_rayFromWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_rayFromWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestRayResultCallback::m_rayToWorld(btVector3 value)
	static int _bind_setRayToWorld(lua_State *L) {
		if (!_lg_typecheck_setRayToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestRayResultCallback::m_rayToWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestRayResultCallback::m_rayToWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestRayResultCallback::m_rayToWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestRayResultCallback::m_rayToWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_rayToWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld(btVector3 value)
	static int _bind_setHitNormalWorld(lua_State *L) {
		if (!_lg_typecheck_setHitNormalWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestRayResultCallback::m_hitNormalWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_hitNormalWorld = value;

		return 0;
	}

	// void btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld(btVector3 value)
	static int _bind_setHitPointWorld(lua_State *L) {
		if (!_lg_typecheck_setHitPointWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ClosestRayResultCallback::m_hitPointWorld(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_hitPointWorld = value;

		return 0;
	}

	// bool btCollisionWorld::ClosestRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ClosestRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ClosestRayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ClosestRayResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		bool lret = self->ClosestRayResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::ClosestRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_base_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_base_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ClosestRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::ClosestRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n");
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::ClosestRayResultCallback::base_addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::ClosestRayResultCallback* self=Luna< btCollisionWorld::RayResultCallback >::checkSubType< btCollisionWorld::ClosestRayResultCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ClosestRayResultCallback::base_addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->ClosestRayResultCallback::addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::ClosestRayResultCallback* LunaTraits< btCollisionWorld::ClosestRayResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_ctor(L);
}

void LunaTraits< btCollisionWorld::ClosestRayResultCallback >::_bind_dtor(btCollisionWorld::ClosestRayResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::ClosestRayResultCallback >::className[] = "btCollisionWorld_ClosestRayResultCallback";
const char LunaTraits< btCollisionWorld::ClosestRayResultCallback >::fullName[] = "btCollisionWorld::ClosestRayResultCallback";
const char LunaTraits< btCollisionWorld::ClosestRayResultCallback >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::ClosestRayResultCallback >::parents[] = {"bullet.btCollisionWorld_RayResultCallback", 0};
const int LunaTraits< btCollisionWorld::ClosestRayResultCallback >::hash = 12976319;
const int LunaTraits< btCollisionWorld::ClosestRayResultCallback >::uniqueIDs[] = {44790882,0};

luna_RegType LunaTraits< btCollisionWorld::ClosestRayResultCallback >::methods[] = {
	{"addSingleResult", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_addSingleResult},
	{"getRayFromWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_getRayFromWorld},
	{"getRayToWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_getRayToWorld},
	{"getHitNormalWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_getHitNormalWorld},
	{"getHitPointWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_getHitPointWorld},
	{"setRayFromWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_setRayFromWorld},
	{"setRayToWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_setRayToWorld},
	{"setHitNormalWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_setHitNormalWorld},
	{"setHitPointWorld", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_setHitPointWorld},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_base_needsCollision},
	{"base_addSingleResult", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_base_addSingleResult},
	{"fromVoid", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::ClosestRayResultCallback >::converters[] = {
	{"btCollisionWorld::RayResultCallback", &luna_wrapper_btCollisionWorld_ClosestRayResultCallback::_cast_from_RayResultCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::ClosestRayResultCallback >::enumValues[] = {
	{0,0}
};


