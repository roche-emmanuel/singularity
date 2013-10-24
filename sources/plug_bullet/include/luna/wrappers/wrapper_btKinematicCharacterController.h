#ifndef _WRAPPERS_WRAPPER_BTKINEMATICCHARACTERCONTROLLER_H_
#define _WRAPPERS_WRAPPER_BTKINEMATICCHARACTERCONTROLLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Character/btKinematicCharacterController.h>

class wrapper_btKinematicCharacterController : public btKinematicCharacterController, public luna_wrapper_base {

public:
		

	~wrapper_btKinematicCharacterController() {
		logDEBUG3("Calling delete function for wrapper btKinematicCharacterController");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btKinematicCharacterController*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btKinematicCharacterController(lua_State* L, lua_Table* dum, btPairCachingGhostObject * ghostObject, btConvexShape * convexShape, float stepHeight, int upAxis = 1) 
		: btKinematicCharacterController(ghostObject, convexShape, stepHeight, upAxis), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btKinematicCharacterController::updateAction(btCollisionWorld * collisionWorld, float deltaTime)
	void updateAction(btCollisionWorld * collisionWorld, float deltaTime) {
		if(_obj.pushFunction("updateAction")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(collisionWorld);
			_obj.pushArg(deltaTime);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::updateAction(collisionWorld, deltaTime);
	};

	// void btKinematicCharacterController::debugDraw(btIDebugDraw * debugDrawer)
	void debugDraw(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("debugDraw")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::debugDraw(debugDrawer);
	};

	// void btKinematicCharacterController::setWalkDirection(const btVector3 & walkDirection)
	void setWalkDirection(const btVector3 & walkDirection) {
		if(_obj.pushFunction("setWalkDirection")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(&walkDirection);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::setWalkDirection(walkDirection);
	};

	// void btKinematicCharacterController::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	void setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval) {
		if(_obj.pushFunction("setVelocityForTimeInterval")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(&velocity);
			_obj.pushArg(timeInterval);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::setVelocityForTimeInterval(velocity, timeInterval);
	};

	// void btKinematicCharacterController::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::reset();
	};

	// void btKinematicCharacterController::warp(const btVector3 & origin)
	void warp(const btVector3 & origin) {
		if(_obj.pushFunction("warp")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(&origin);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::warp(origin);
	};

	// void btKinematicCharacterController::preStep(btCollisionWorld * collisionWorld)
	void preStep(btCollisionWorld * collisionWorld) {
		if(_obj.pushFunction("preStep")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(collisionWorld);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::preStep(collisionWorld);
	};

	// void btKinematicCharacterController::playerStep(btCollisionWorld * collisionWorld, float dt)
	void playerStep(btCollisionWorld * collisionWorld, float dt) {
		if(_obj.pushFunction("playerStep")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			_obj.pushArg(collisionWorld);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::playerStep(collisionWorld, dt);
	};

	// bool btKinematicCharacterController::canJump() const
	bool canJump() const {
		if(_obj.pushFunction("canJump")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			return (_obj.callFunction<bool>());
		}

		return btKinematicCharacterController::canJump();
	};

	// void btKinematicCharacterController::jump()
	void jump() {
		if(_obj.pushFunction("jump")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			return (_obj.callFunction<void>());
		}

		return btKinematicCharacterController::jump();
	};

	// bool btKinematicCharacterController::onGround() const
	bool onGround() const {
		if(_obj.pushFunction("onGround")) {
			_obj.pushArg((btKinematicCharacterController*)this);
			return (_obj.callFunction<bool>());
		}

		return btKinematicCharacterController::onGround();
	};


	// Protected non-virtual methods:
	// static btVector3 * btKinematicCharacterController::getUpAxisDirections()
	static btVector3 * public_getUpAxisDirections() {
		return btKinematicCharacterController::getUpAxisDirections();
	};

	// btVector3 btKinematicCharacterController::computeReflectionDirection(const btVector3 & direction, const btVector3 & normal)
	btVector3 public_computeReflectionDirection(const btVector3 & direction, const btVector3 & normal) {
		return btKinematicCharacterController::computeReflectionDirection(direction, normal);
	};

	// btVector3 btKinematicCharacterController::parallelComponent(const btVector3 & direction, const btVector3 & normal)
	btVector3 public_parallelComponent(const btVector3 & direction, const btVector3 & normal) {
		return btKinematicCharacterController::parallelComponent(direction, normal);
	};

	// btVector3 btKinematicCharacterController::perpindicularComponent(const btVector3 & direction, const btVector3 & normal)
	btVector3 public_perpindicularComponent(const btVector3 & direction, const btVector3 & normal) {
		return btKinematicCharacterController::perpindicularComponent(direction, normal);
	};

	// bool btKinematicCharacterController::recoverFromPenetration(btCollisionWorld * collisionWorld)
	bool public_recoverFromPenetration(btCollisionWorld * collisionWorld) {
		return btKinematicCharacterController::recoverFromPenetration(collisionWorld);
	};

	// void btKinematicCharacterController::stepUp(btCollisionWorld * collisionWorld)
	void public_stepUp(btCollisionWorld * collisionWorld) {
		return btKinematicCharacterController::stepUp(collisionWorld);
	};

	// void btKinematicCharacterController::updateTargetPositionBasedOnCollision(const btVector3 & hit_normal, float tangentMag = float (0.0), float normalMag = float (1.0))
	void public_updateTargetPositionBasedOnCollision(const btVector3 & hit_normal, float tangentMag = float (0.0), float normalMag = float (1.0)) {
		return btKinematicCharacterController::updateTargetPositionBasedOnCollision(hit_normal, tangentMag, normalMag);
	};

	// void btKinematicCharacterController::stepForwardAndStrafe(btCollisionWorld * collisionWorld, const btVector3 & walkMove)
	void public_stepForwardAndStrafe(btCollisionWorld * collisionWorld, const btVector3 & walkMove) {
		return btKinematicCharacterController::stepForwardAndStrafe(collisionWorld, walkMove);
	};

	// void btKinematicCharacterController::stepDown(btCollisionWorld * collisionWorld, float dt)
	void public_stepDown(btCollisionWorld * collisionWorld, float dt) {
		return btKinematicCharacterController::stepDown(collisionWorld, dt);
	};

	// static btRigidBody & btActionInterface::getFixedBody()
	static btRigidBody & public_getFixedBody() {
		return btActionInterface::getFixedBody();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getUpAxisDirections(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeReflectionDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_parallelComponent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_perpindicularComponent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_recoverFromPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_stepUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_updateTargetPositionBasedOnCollision(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_stepForwardAndStrafe(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_stepDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getFixedBody(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// static btVector3 * btKinematicCharacterController::public_getUpAxisDirections()
	static int _bind_public_getUpAxisDirections(lua_State *L) {
		if (!_lg_typecheck_public_getUpAxisDirections(L)) {
			luaL_error(L, "luna typecheck failed in static btVector3 * btKinematicCharacterController::public_getUpAxisDirections() function, expected prototype:\nstatic btVector3 * btKinematicCharacterController::public_getUpAxisDirections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static btVector3 * btKinematicCharacterController::public_getUpAxisDirections(). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 * lret = self->public_getUpAxisDirections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btKinematicCharacterController::public_computeReflectionDirection(const btVector3 & direction, const btVector3 & normal)
	static int _bind_public_computeReflectionDirection(lua_State *L) {
		if (!_lg_typecheck_public_computeReflectionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btKinematicCharacterController::public_computeReflectionDirection(const btVector3 & direction, const btVector3 & normal) function, expected prototype:\nbtVector3 btKinematicCharacterController::public_computeReflectionDirection(const btVector3 & direction, const btVector3 & normal)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* direction_ptr=(Luna< btVector3 >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in btKinematicCharacterController::public_computeReflectionDirection function");
		}
		const btVector3 & direction=*direction_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btKinematicCharacterController::public_computeReflectionDirection function");
		}
		const btVector3 & normal=*normal_ptr;

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btKinematicCharacterController::public_computeReflectionDirection(const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->public_computeReflectionDirection(direction, normal);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btKinematicCharacterController::public_parallelComponent(const btVector3 & direction, const btVector3 & normal)
	static int _bind_public_parallelComponent(lua_State *L) {
		if (!_lg_typecheck_public_parallelComponent(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btKinematicCharacterController::public_parallelComponent(const btVector3 & direction, const btVector3 & normal) function, expected prototype:\nbtVector3 btKinematicCharacterController::public_parallelComponent(const btVector3 & direction, const btVector3 & normal)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* direction_ptr=(Luna< btVector3 >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in btKinematicCharacterController::public_parallelComponent function");
		}
		const btVector3 & direction=*direction_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btKinematicCharacterController::public_parallelComponent function");
		}
		const btVector3 & normal=*normal_ptr;

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btKinematicCharacterController::public_parallelComponent(const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->public_parallelComponent(direction, normal);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btKinematicCharacterController::public_perpindicularComponent(const btVector3 & direction, const btVector3 & normal)
	static int _bind_public_perpindicularComponent(lua_State *L) {
		if (!_lg_typecheck_public_perpindicularComponent(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btKinematicCharacterController::public_perpindicularComponent(const btVector3 & direction, const btVector3 & normal) function, expected prototype:\nbtVector3 btKinematicCharacterController::public_perpindicularComponent(const btVector3 & direction, const btVector3 & normal)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* direction_ptr=(Luna< btVector3 >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in btKinematicCharacterController::public_perpindicularComponent function");
		}
		const btVector3 & direction=*direction_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btKinematicCharacterController::public_perpindicularComponent function");
		}
		const btVector3 & normal=*normal_ptr;

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btKinematicCharacterController::public_perpindicularComponent(const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->public_perpindicularComponent(direction, normal);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// bool btKinematicCharacterController::public_recoverFromPenetration(btCollisionWorld * collisionWorld)
	static int _bind_public_recoverFromPenetration(lua_State *L) {
		if (!_lg_typecheck_public_recoverFromPenetration(L)) {
			luaL_error(L, "luna typecheck failed in bool btKinematicCharacterController::public_recoverFromPenetration(btCollisionWorld * collisionWorld) function, expected prototype:\nbool btKinematicCharacterController::public_recoverFromPenetration(btCollisionWorld * collisionWorld)\nClass arguments details:\narg 1 ID = 62162664\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btKinematicCharacterController::public_recoverFromPenetration(btCollisionWorld *). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_recoverFromPenetration(collisionWorld);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btKinematicCharacterController::public_stepUp(btCollisionWorld * collisionWorld)
	static int _bind_public_stepUp(lua_State *L) {
		if (!_lg_typecheck_public_stepUp(L)) {
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::public_stepUp(btCollisionWorld * collisionWorld) function, expected prototype:\nvoid btKinematicCharacterController::public_stepUp(btCollisionWorld * collisionWorld)\nClass arguments details:\narg 1 ID = 62162664\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::public_stepUp(btCollisionWorld *). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_stepUp(collisionWorld);

		return 0;
	}

	// void btKinematicCharacterController::public_updateTargetPositionBasedOnCollision(const btVector3 & hit_normal, float tangentMag = float (0.0), float normalMag = float (1.0))
	static int _bind_public_updateTargetPositionBasedOnCollision(lua_State *L) {
		if (!_lg_typecheck_public_updateTargetPositionBasedOnCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::public_updateTargetPositionBasedOnCollision(const btVector3 & hit_normal, float tangentMag = float (0.0), float normalMag = float (1.0)) function, expected prototype:\nvoid btKinematicCharacterController::public_updateTargetPositionBasedOnCollision(const btVector3 & hit_normal, float tangentMag = float (0.0), float normalMag = float (1.0))\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const btVector3* hit_normal_ptr=(Luna< btVector3 >::check(L,2));
		if( !hit_normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hit_normal in btKinematicCharacterController::public_updateTargetPositionBasedOnCollision function");
		}
		const btVector3 & hit_normal=*hit_normal_ptr;
		float tangentMag=luatop>2 ? (float)lua_tonumber(L,3) : (float)float (0.0);
		float normalMag=luatop>3 ? (float)lua_tonumber(L,4) : (float)float (1.0);

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::public_updateTargetPositionBasedOnCollision(const btVector3 &, float, float). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_updateTargetPositionBasedOnCollision(hit_normal, tangentMag, normalMag);

		return 0;
	}

	// void btKinematicCharacterController::public_stepForwardAndStrafe(btCollisionWorld * collisionWorld, const btVector3 & walkMove)
	static int _bind_public_stepForwardAndStrafe(lua_State *L) {
		if (!_lg_typecheck_public_stepForwardAndStrafe(L)) {
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::public_stepForwardAndStrafe(btCollisionWorld * collisionWorld, const btVector3 & walkMove) function, expected prototype:\nvoid btKinematicCharacterController::public_stepForwardAndStrafe(btCollisionWorld * collisionWorld, const btVector3 & walkMove)\nClass arguments details:\narg 1 ID = 62162664\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		const btVector3* walkMove_ptr=(Luna< btVector3 >::check(L,3));
		if( !walkMove_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg walkMove in btKinematicCharacterController::public_stepForwardAndStrafe function");
		}
		const btVector3 & walkMove=*walkMove_ptr;

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::public_stepForwardAndStrafe(btCollisionWorld *, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_stepForwardAndStrafe(collisionWorld, walkMove);

		return 0;
	}

	// void btKinematicCharacterController::public_stepDown(btCollisionWorld * collisionWorld, float dt)
	static int _bind_public_stepDown(lua_State *L) {
		if (!_lg_typecheck_public_stepDown(L)) {
			luaL_error(L, "luna typecheck failed in void btKinematicCharacterController::public_stepDown(btCollisionWorld * collisionWorld, float dt) function, expected prototype:\nvoid btKinematicCharacterController::public_stepDown(btCollisionWorld * collisionWorld, float dt)\nClass arguments details:\narg 1 ID = 62162664\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float dt=(float)lua_tonumber(L,3);

		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btKinematicCharacterController::public_stepDown(btCollisionWorld *, float). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_stepDown(collisionWorld, dt);

		return 0;
	}

	// static btRigidBody & btActionInterface::public_getFixedBody()
	static int _bind_public_getFixedBody(lua_State *L) {
		if (!_lg_typecheck_public_getFixedBody(L)) {
			luaL_error(L, "luna typecheck failed in static btRigidBody & btActionInterface::public_getFixedBody() function, expected prototype:\nstatic btRigidBody & btActionInterface::public_getFixedBody()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btKinematicCharacterController* self=Luna< btActionInterface >::checkSubType< wrapper_btKinematicCharacterController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static btRigidBody & btActionInterface::public_getFixedBody(). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btRigidBody* lret = &self->public_getFixedBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getUpAxisDirections",_bind_public_getUpAxisDirections},
		{"computeReflectionDirection",_bind_public_computeReflectionDirection},
		{"parallelComponent",_bind_public_parallelComponent},
		{"perpindicularComponent",_bind_public_perpindicularComponent},
		{"recoverFromPenetration",_bind_public_recoverFromPenetration},
		{"stepUp",_bind_public_stepUp},
		{"updateTargetPositionBasedOnCollision",_bind_public_updateTargetPositionBasedOnCollision},
		{"stepForwardAndStrafe",_bind_public_stepForwardAndStrafe},
		{"stepDown",_bind_public_stepDown},
		{"getFixedBody",_bind_public_getFixedBody},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

