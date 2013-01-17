#include <plug_common.h>

#include <luna/wrappers/wrapper_btKinematicCharacterController.h>

class luna_wrapper_btKinematicCharacterController {
public:
	typedef Luna< btKinematicCharacterController > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btActionInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btActionInterface*)");
		}

		btActionInterface* rhs =(Luna< btActionInterface >::check(L,2));
		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btActionInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btKinematicCharacterController* ptr= dynamic_cast< btKinematicCharacterController* >(Luna< btActionInterface >::check(L,1));
		btKinematicCharacterController* ptr= luna_caster< btActionInterface, btKinematicCharacterController >::cast(Luna< btActionInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btKinematicCharacterController >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWalkDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityForTimeInterval(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_warp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_playerStep(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFallSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJumpSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxJumpHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_canJump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_jump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxSlope(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxSlope(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGhostObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseGhostSweepTest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_onGround(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWalkDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVelocityForTimeInterval(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_warp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_preStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_playerStep(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_canJump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_jump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_onGround(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btKinematicCharacterController::btKinematicCharacterController(btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1)
	static btKinematicCharacterController* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btKinematicCharacterController::btKinematicCharacterController(btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1) function, expected prototype:\nbtKinematicCharacterController::btKinematicCharacterController(btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 58243831\n");
		}

		int luatop = lua_gettop(L);

		btPairCachingGhostObject* ghostObject=(Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1));
		btConvexShape* convexShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		float stepHeight=(float)lua_tonumber(L,3);
		int upAxis=luatop>3 ? (int)lua_tointeger(L,4) : 1;

		return new btKinematicCharacterController(ghostObject, convexShape, stepHeight, upAxis);
	}

	// btKinematicCharacterController::btKinematicCharacterController(lua_Table * data, btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1)
	static btKinematicCharacterController* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btKinematicCharacterController::btKinematicCharacterController(lua_Table * data, btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1) function, expected prototype:\nbtKinematicCharacterController::btKinematicCharacterController(lua_Table * data, btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 58243831\n");
		}

		int luatop = lua_gettop(L);

		btPairCachingGhostObject* ghostObject=(Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,2));
		btConvexShape* convexShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		float stepHeight=(float)lua_tonumber(L,4);
		int upAxis=luatop>4 ? (int)lua_tointeger(L,5) : 1;

		return new wrapper_btKinematicCharacterController(L,NULL, ghostObject, convexShape, stepHeight, upAxis);
	}

	// Overload binder for btKinematicCharacterController::btKinematicCharacterController
	static btKinematicCharacterController* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btKinematicCharacterController, cannot match any of the overloads for function btKinematicCharacterController:\n  btKinematicCharacterController(btPairCachingGhostObject *, btConvexShape *, float, int)\n  btKinematicCharacterController(lua_Table *, btPairCachingGhostObject *, btConvexShape *, float, int)\n");
		return NULL;
	}


	// Function binds:
	// void btKinematicCharacterController::updateAction(btCollisionWorld * collisionWorld, float deltaTime)
	static int _bind_updateAction(lua_State *L) {
		if (!_lg_typecheck_updateAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::updateAction(btCollisionWorld * collisionWorld, float deltaTime) function, expected prototype:\nvoid btKinematicCharacterController::updateAction(btCollisionWorld * collisionWorld, float deltaTime)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float deltaTime=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::updateAction(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateAction(collisionWorld, deltaTime);

		return 0;
	}

	// void btKinematicCharacterController::debugDraw(btIDebugDraw * debugDrawer)
	static int _bind_debugDraw(lua_State *L) {
		if (!_lg_typecheck_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::debugDraw(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btKinematicCharacterController::debugDraw(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::debugDraw(btIDebugDraw *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->debugDraw(debugDrawer);

		return 0;
	}

	// void btKinematicCharacterController::setUpAxis(int axis)
	static int _bind_setUpAxis(lua_State *L) {
		if (!_lg_typecheck_setUpAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setUpAxis(int axis) function, expected prototype:\nvoid btKinematicCharacterController::setUpAxis(int axis)\nClass arguments details:\n");
		}

		int axis=(int)lua_tointeger(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setUpAxis(int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setUpAxis(axis);

		return 0;
	}

	// void btKinematicCharacterController::setWalkDirection(const btVector3 & walkDirection)
	static int _bind_setWalkDirection(lua_State *L) {
		if (!_lg_typecheck_setWalkDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setWalkDirection(const btVector3 & walkDirection) function, expected prototype:\nvoid btKinematicCharacterController::setWalkDirection(const btVector3 & walkDirection)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* walkDirection_ptr=(Luna< btVector3 >::check(L,2));
		if( !walkDirection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg walkDirection in btKinematicCharacterController::setWalkDirection function");
		}
		const btVector3 & walkDirection=*walkDirection_ptr;

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setWalkDirection(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setWalkDirection(walkDirection);

		return 0;
	}

	// void btKinematicCharacterController::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	static int _bind_setVelocityForTimeInterval(lua_State *L) {
		if (!_lg_typecheck_setVelocityForTimeInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval) function, expected prototype:\nvoid btKinematicCharacterController::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* velocity_ptr=(Luna< btVector3 >::check(L,2));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btKinematicCharacterController::setVelocityForTimeInterval function");
		}
		const btVector3 & velocity=*velocity_ptr;
		float timeInterval=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setVelocityForTimeInterval(const btVector3 &, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setVelocityForTimeInterval(velocity, timeInterval);

		return 0;
	}

	// void btKinematicCharacterController::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::reset() function, expected prototype:\nvoid btKinematicCharacterController::reset()\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::reset(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void btKinematicCharacterController::warp(const btVector3 & origin)
	static int _bind_warp(lua_State *L) {
		if (!_lg_typecheck_warp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::warp(const btVector3 & origin) function, expected prototype:\nvoid btKinematicCharacterController::warp(const btVector3 & origin)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* origin_ptr=(Luna< btVector3 >::check(L,2));
		if( !origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg origin in btKinematicCharacterController::warp function");
		}
		const btVector3 & origin=*origin_ptr;

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::warp(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->warp(origin);

		return 0;
	}

	// void btKinematicCharacterController::preStep(btCollisionWorld * collisionWorld)
	static int _bind_preStep(lua_State *L) {
		if (!_lg_typecheck_preStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::preStep(btCollisionWorld * collisionWorld) function, expected prototype:\nvoid btKinematicCharacterController::preStep(btCollisionWorld * collisionWorld)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::preStep(btCollisionWorld *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->preStep(collisionWorld);

		return 0;
	}

	// void btKinematicCharacterController::playerStep(btCollisionWorld * collisionWorld, float dt)
	static int _bind_playerStep(lua_State *L) {
		if (!_lg_typecheck_playerStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::playerStep(btCollisionWorld * collisionWorld, float dt) function, expected prototype:\nvoid btKinematicCharacterController::playerStep(btCollisionWorld * collisionWorld, float dt)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float dt=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::playerStep(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->playerStep(collisionWorld, dt);

		return 0;
	}

	// void btKinematicCharacterController::setFallSpeed(float fallSpeed)
	static int _bind_setFallSpeed(lua_State *L) {
		if (!_lg_typecheck_setFallSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setFallSpeed(float fallSpeed) function, expected prototype:\nvoid btKinematicCharacterController::setFallSpeed(float fallSpeed)\nClass arguments details:\n");
		}

		float fallSpeed=(float)lua_tonumber(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setFallSpeed(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setFallSpeed(fallSpeed);

		return 0;
	}

	// void btKinematicCharacterController::setJumpSpeed(float jumpSpeed)
	static int _bind_setJumpSpeed(lua_State *L) {
		if (!_lg_typecheck_setJumpSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setJumpSpeed(float jumpSpeed) function, expected prototype:\nvoid btKinematicCharacterController::setJumpSpeed(float jumpSpeed)\nClass arguments details:\n");
		}

		float jumpSpeed=(float)lua_tonumber(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setJumpSpeed(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setJumpSpeed(jumpSpeed);

		return 0;
	}

	// void btKinematicCharacterController::setMaxJumpHeight(float maxJumpHeight)
	static int _bind_setMaxJumpHeight(lua_State *L) {
		if (!_lg_typecheck_setMaxJumpHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setMaxJumpHeight(float maxJumpHeight) function, expected prototype:\nvoid btKinematicCharacterController::setMaxJumpHeight(float maxJumpHeight)\nClass arguments details:\n");
		}

		float maxJumpHeight=(float)lua_tonumber(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setMaxJumpHeight(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setMaxJumpHeight(maxJumpHeight);

		return 0;
	}

	// bool btKinematicCharacterController::canJump() const
	static int _bind_canJump(lua_State *L) {
		if (!_lg_typecheck_canJump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btKinematicCharacterController::canJump() const function, expected prototype:\nbool btKinematicCharacterController::canJump() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btKinematicCharacterController::canJump() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->canJump();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btKinematicCharacterController::jump()
	static int _bind_jump(lua_State *L) {
		if (!_lg_typecheck_jump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::jump() function, expected prototype:\nvoid btKinematicCharacterController::jump()\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::jump(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->jump();

		return 0;
	}

	// void btKinematicCharacterController::setGravity(float gravity)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setGravity(float gravity) function, expected prototype:\nvoid btKinematicCharacterController::setGravity(float gravity)\nClass arguments details:\n");
		}

		float gravity=(float)lua_tonumber(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setGravity(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setGravity(gravity);

		return 0;
	}

	// float btKinematicCharacterController::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btKinematicCharacterController::getGravity() const function, expected prototype:\nfloat btKinematicCharacterController::getGravity() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btKinematicCharacterController::getGravity() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		float lret = self->getGravity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btKinematicCharacterController::setMaxSlope(float slopeRadians)
	static int _bind_setMaxSlope(lua_State *L) {
		if (!_lg_typecheck_setMaxSlope(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setMaxSlope(float slopeRadians) function, expected prototype:\nvoid btKinematicCharacterController::setMaxSlope(float slopeRadians)\nClass arguments details:\n");
		}

		float slopeRadians=(float)lua_tonumber(L,2);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setMaxSlope(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setMaxSlope(slopeRadians);

		return 0;
	}

	// float btKinematicCharacterController::getMaxSlope() const
	static int _bind_getMaxSlope(lua_State *L) {
		if (!_lg_typecheck_getMaxSlope(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btKinematicCharacterController::getMaxSlope() const function, expected prototype:\nfloat btKinematicCharacterController::getMaxSlope() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btKinematicCharacterController::getMaxSlope() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		float lret = self->getMaxSlope();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btPairCachingGhostObject * btKinematicCharacterController::getGhostObject()
	static int _bind_getGhostObject(lua_State *L) {
		if (!_lg_typecheck_getGhostObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPairCachingGhostObject * btKinematicCharacterController::getGhostObject() function, expected prototype:\nbtPairCachingGhostObject * btKinematicCharacterController::getGhostObject()\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPairCachingGhostObject * btKinematicCharacterController::getGhostObject(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		btPairCachingGhostObject * lret = self->getGhostObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPairCachingGhostObject >::push(L,lret,false);

		return 1;
	}

	// void btKinematicCharacterController::setUseGhostSweepTest(bool useGhostObjectSweepTest)
	static int _bind_setUseGhostSweepTest(lua_State *L) {
		if (!_lg_typecheck_setUseGhostSweepTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::setUseGhostSweepTest(bool useGhostObjectSweepTest) function, expected prototype:\nvoid btKinematicCharacterController::setUseGhostSweepTest(bool useGhostObjectSweepTest)\nClass arguments details:\n");
		}

		bool useGhostObjectSweepTest=(bool)(lua_toboolean(L,2)==1);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::setUseGhostSweepTest(bool). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setUseGhostSweepTest(useGhostObjectSweepTest);

		return 0;
	}

	// bool btKinematicCharacterController::onGround() const
	static int _bind_onGround(lua_State *L) {
		if (!_lg_typecheck_onGround(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btKinematicCharacterController::onGround() const function, expected prototype:\nbool btKinematicCharacterController::onGround() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btKinematicCharacterController::onGround() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->onGround();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btKinematicCharacterController::base_updateAction(btCollisionWorld * collisionWorld, float deltaTime)
	static int _bind_base_updateAction(lua_State *L) {
		if (!_lg_typecheck_base_updateAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_updateAction(btCollisionWorld * collisionWorld, float deltaTime) function, expected prototype:\nvoid btKinematicCharacterController::base_updateAction(btCollisionWorld * collisionWorld, float deltaTime)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float deltaTime=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_updateAction(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::updateAction(collisionWorld, deltaTime);

		return 0;
	}

	// void btKinematicCharacterController::base_debugDraw(btIDebugDraw * debugDrawer)
	static int _bind_base_debugDraw(lua_State *L) {
		if (!_lg_typecheck_base_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_debugDraw(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btKinematicCharacterController::base_debugDraw(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_debugDraw(btIDebugDraw *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::debugDraw(debugDrawer);

		return 0;
	}

	// void btKinematicCharacterController::base_setWalkDirection(const btVector3 & walkDirection)
	static int _bind_base_setWalkDirection(lua_State *L) {
		if (!_lg_typecheck_base_setWalkDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_setWalkDirection(const btVector3 & walkDirection) function, expected prototype:\nvoid btKinematicCharacterController::base_setWalkDirection(const btVector3 & walkDirection)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* walkDirection_ptr=(Luna< btVector3 >::check(L,2));
		if( !walkDirection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg walkDirection in btKinematicCharacterController::base_setWalkDirection function");
		}
		const btVector3 & walkDirection=*walkDirection_ptr;

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_setWalkDirection(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::setWalkDirection(walkDirection);

		return 0;
	}

	// void btKinematicCharacterController::base_setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	static int _bind_base_setVelocityForTimeInterval(lua_State *L) {
		if (!_lg_typecheck_base_setVelocityForTimeInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval) function, expected prototype:\nvoid btKinematicCharacterController::base_setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* velocity_ptr=(Luna< btVector3 >::check(L,2));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btKinematicCharacterController::base_setVelocityForTimeInterval function");
		}
		const btVector3 & velocity=*velocity_ptr;
		float timeInterval=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_setVelocityForTimeInterval(const btVector3 &, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::setVelocityForTimeInterval(velocity, timeInterval);

		return 0;
	}

	// void btKinematicCharacterController::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_reset() function, expected prototype:\nvoid btKinematicCharacterController::base_reset()\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_reset(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::reset();

		return 0;
	}

	// void btKinematicCharacterController::base_warp(const btVector3 & origin)
	static int _bind_base_warp(lua_State *L) {
		if (!_lg_typecheck_base_warp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_warp(const btVector3 & origin) function, expected prototype:\nvoid btKinematicCharacterController::base_warp(const btVector3 & origin)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* origin_ptr=(Luna< btVector3 >::check(L,2));
		if( !origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg origin in btKinematicCharacterController::base_warp function");
		}
		const btVector3 & origin=*origin_ptr;

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_warp(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::warp(origin);

		return 0;
	}

	// void btKinematicCharacterController::base_preStep(btCollisionWorld * collisionWorld)
	static int _bind_base_preStep(lua_State *L) {
		if (!_lg_typecheck_base_preStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_preStep(btCollisionWorld * collisionWorld) function, expected prototype:\nvoid btKinematicCharacterController::base_preStep(btCollisionWorld * collisionWorld)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_preStep(btCollisionWorld *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::preStep(collisionWorld);

		return 0;
	}

	// void btKinematicCharacterController::base_playerStep(btCollisionWorld * collisionWorld, float dt)
	static int _bind_base_playerStep(lua_State *L) {
		if (!_lg_typecheck_base_playerStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_playerStep(btCollisionWorld * collisionWorld, float dt) function, expected prototype:\nvoid btKinematicCharacterController::base_playerStep(btCollisionWorld * collisionWorld, float dt)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float dt=(float)lua_tonumber(L,3);

		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_playerStep(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::playerStep(collisionWorld, dt);

		return 0;
	}

	// bool btKinematicCharacterController::base_canJump() const
	static int _bind_base_canJump(lua_State *L) {
		if (!_lg_typecheck_base_canJump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btKinematicCharacterController::base_canJump() const function, expected prototype:\nbool btKinematicCharacterController::base_canJump() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btKinematicCharacterController::base_canJump() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->btKinematicCharacterController::canJump();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btKinematicCharacterController::base_jump()
	static int _bind_base_jump(lua_State *L) {
		if (!_lg_typecheck_base_jump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::base_jump() function, expected prototype:\nvoid btKinematicCharacterController::base_jump()\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::base_jump(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btKinematicCharacterController::jump();

		return 0;
	}

	// bool btKinematicCharacterController::base_onGround() const
	static int _bind_base_onGround(lua_State *L) {
		if (!_lg_typecheck_base_onGround(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btKinematicCharacterController::base_onGround() const function, expected prototype:\nbool btKinematicCharacterController::base_onGround() const\nClass arguments details:\n");
		}


		btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< btKinematicCharacterController >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btKinematicCharacterController::base_onGround() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->btKinematicCharacterController::onGround();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btKinematicCharacterController* LunaTraits< btKinematicCharacterController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btKinematicCharacterController::_bind_ctor(L);
}

void LunaTraits< btKinematicCharacterController >::_bind_dtor(btKinematicCharacterController* obj) {
	delete obj;
}

const char LunaTraits< btKinematicCharacterController >::className[] = "btKinematicCharacterController";
const char LunaTraits< btKinematicCharacterController >::fullName[] = "btKinematicCharacterController";
const char LunaTraits< btKinematicCharacterController >::moduleName[] = "bullet";
const char* LunaTraits< btKinematicCharacterController >::parents[] = {"bullet.btCharacterControllerInterface", 0};
const int LunaTraits< btKinematicCharacterController >::hash = 94165975;
const int LunaTraits< btKinematicCharacterController >::uniqueIDs[] = {91159321,0};

luna_RegType LunaTraits< btKinematicCharacterController >::methods[] = {
	{"updateAction", &luna_wrapper_btKinematicCharacterController::_bind_updateAction},
	{"debugDraw", &luna_wrapper_btKinematicCharacterController::_bind_debugDraw},
	{"setUpAxis", &luna_wrapper_btKinematicCharacterController::_bind_setUpAxis},
	{"setWalkDirection", &luna_wrapper_btKinematicCharacterController::_bind_setWalkDirection},
	{"setVelocityForTimeInterval", &luna_wrapper_btKinematicCharacterController::_bind_setVelocityForTimeInterval},
	{"reset", &luna_wrapper_btKinematicCharacterController::_bind_reset},
	{"warp", &luna_wrapper_btKinematicCharacterController::_bind_warp},
	{"preStep", &luna_wrapper_btKinematicCharacterController::_bind_preStep},
	{"playerStep", &luna_wrapper_btKinematicCharacterController::_bind_playerStep},
	{"setFallSpeed", &luna_wrapper_btKinematicCharacterController::_bind_setFallSpeed},
	{"setJumpSpeed", &luna_wrapper_btKinematicCharacterController::_bind_setJumpSpeed},
	{"setMaxJumpHeight", &luna_wrapper_btKinematicCharacterController::_bind_setMaxJumpHeight},
	{"canJump", &luna_wrapper_btKinematicCharacterController::_bind_canJump},
	{"jump", &luna_wrapper_btKinematicCharacterController::_bind_jump},
	{"setGravity", &luna_wrapper_btKinematicCharacterController::_bind_setGravity},
	{"getGravity", &luna_wrapper_btKinematicCharacterController::_bind_getGravity},
	{"setMaxSlope", &luna_wrapper_btKinematicCharacterController::_bind_setMaxSlope},
	{"getMaxSlope", &luna_wrapper_btKinematicCharacterController::_bind_getMaxSlope},
	{"getGhostObject", &luna_wrapper_btKinematicCharacterController::_bind_getGhostObject},
	{"setUseGhostSweepTest", &luna_wrapper_btKinematicCharacterController::_bind_setUseGhostSweepTest},
	{"onGround", &luna_wrapper_btKinematicCharacterController::_bind_onGround},
	{"base_updateAction", &luna_wrapper_btKinematicCharacterController::_bind_base_updateAction},
	{"base_debugDraw", &luna_wrapper_btKinematicCharacterController::_bind_base_debugDraw},
	{"base_setWalkDirection", &luna_wrapper_btKinematicCharacterController::_bind_base_setWalkDirection},
	{"base_setVelocityForTimeInterval", &luna_wrapper_btKinematicCharacterController::_bind_base_setVelocityForTimeInterval},
	{"base_reset", &luna_wrapper_btKinematicCharacterController::_bind_base_reset},
	{"base_warp", &luna_wrapper_btKinematicCharacterController::_bind_base_warp},
	{"base_preStep", &luna_wrapper_btKinematicCharacterController::_bind_base_preStep},
	{"base_playerStep", &luna_wrapper_btKinematicCharacterController::_bind_base_playerStep},
	{"base_canJump", &luna_wrapper_btKinematicCharacterController::_bind_base_canJump},
	{"base_jump", &luna_wrapper_btKinematicCharacterController::_bind_base_jump},
	{"base_onGround", &luna_wrapper_btKinematicCharacterController::_bind_base_onGround},
	{"__eq", &luna_wrapper_btKinematicCharacterController::_bind___eq},
	{"getTable", &luna_wrapper_btKinematicCharacterController::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btKinematicCharacterController >::converters[] = {
	{"btActionInterface", &luna_wrapper_btKinematicCharacterController::_cast_from_btActionInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btKinematicCharacterController >::enumValues[] = {
	{0,0}
};


