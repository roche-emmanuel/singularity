#ifndef _WRAPPERS_WRAPPER_BTCHARACTERCONTROLLERINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTCHARACTERCONTROLLERINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/Character/btCharacterControllerInterface.h>

class wrapper_btCharacterControllerInterface : public btCharacterControllerInterface, public luna_wrapper_base {

public:
		

	~wrapper_btCharacterControllerInterface() {
		logDEBUG3("Calling delete function for wrapper btCharacterControllerInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCharacterControllerInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCharacterControllerInterface(lua_State* L, lua_Table* dum) 
		: btCharacterControllerInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCharacterControllerInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)
	void updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep) {
		THROW_IF(!_obj.pushFunction("updateAction"),"No implementation for abstract function btActionInterface::updateAction");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(collisionWorld);
		_obj.pushArg(deltaTimeStep);
		return (_obj.callFunction<void>());
	};

	// void btActionInterface::debugDraw(btIDebugDraw * debugDrawer)
	void debugDraw(btIDebugDraw * debugDrawer) {
		THROW_IF(!_obj.pushFunction("debugDraw"),"No implementation for abstract function btActionInterface::debugDraw");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(debugDrawer);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::setWalkDirection(const btVector3 & walkDirection)
	void setWalkDirection(const btVector3 & walkDirection) {
		THROW_IF(!_obj.pushFunction("setWalkDirection"),"No implementation for abstract function btCharacterControllerInterface::setWalkDirection");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(&walkDirection);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	void setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval) {
		THROW_IF(!_obj.pushFunction("setVelocityForTimeInterval"),"No implementation for abstract function btCharacterControllerInterface::setVelocityForTimeInterval");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(&velocity);
		_obj.pushArg(timeInterval);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::reset()
	void reset() {
		THROW_IF(!_obj.pushFunction("reset"),"No implementation for abstract function btCharacterControllerInterface::reset");
		_obj.pushArg((btCharacterControllerInterface*)this);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::warp(const btVector3 & origin)
	void warp(const btVector3 & origin) {
		THROW_IF(!_obj.pushFunction("warp"),"No implementation for abstract function btCharacterControllerInterface::warp");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(&origin);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::preStep(btCollisionWorld * collisionWorld)
	void preStep(btCollisionWorld * collisionWorld) {
		THROW_IF(!_obj.pushFunction("preStep"),"No implementation for abstract function btCharacterControllerInterface::preStep");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(collisionWorld);
		return (_obj.callFunction<void>());
	};

	// void btCharacterControllerInterface::playerStep(btCollisionWorld * collisionWorld, float dt)
	void playerStep(btCollisionWorld * collisionWorld, float dt) {
		THROW_IF(!_obj.pushFunction("playerStep"),"No implementation for abstract function btCharacterControllerInterface::playerStep");
		_obj.pushArg((btCharacterControllerInterface*)this);
		_obj.pushArg(collisionWorld);
		_obj.pushArg(dt);
		return (_obj.callFunction<void>());
	};

	// bool btCharacterControllerInterface::canJump() const
	bool canJump() const {
		THROW_IF(!_obj.pushFunction("canJump"),"No implementation for abstract function btCharacterControllerInterface::canJump");
		_obj.pushArg((btCharacterControllerInterface*)this);
		return (_obj.callFunction<bool>());
	};

	// void btCharacterControllerInterface::jump()
	void jump() {
		THROW_IF(!_obj.pushFunction("jump"),"No implementation for abstract function btCharacterControllerInterface::jump");
		_obj.pushArg((btCharacterControllerInterface*)this);
		return (_obj.callFunction<void>());
	};

	// bool btCharacterControllerInterface::onGround() const
	bool onGround() const {
		THROW_IF(!_obj.pushFunction("onGround"),"No implementation for abstract function btCharacterControllerInterface::onGround");
		_obj.pushArg((btCharacterControllerInterface*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:
	// static btRigidBody & btActionInterface::getFixedBody()
	static btRigidBody & public_getFixedBody() {
		return btActionInterface::getFixedBody();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getFixedBody(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// static btRigidBody & btActionInterface::public_getFixedBody()
	static int _bind_public_getFixedBody(lua_State *L) {
		if (!_lg_typecheck_public_getFixedBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static btRigidBody & btActionInterface::public_getFixedBody() function, expected prototype:\nstatic btRigidBody & btActionInterface::public_getFixedBody()\nClass arguments details:\n");
		}


		wrapper_btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< wrapper_btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static btRigidBody & btActionInterface::public_getFixedBody(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->public_getFixedBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getFixedBody",_bind_public_getFixedBody},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

