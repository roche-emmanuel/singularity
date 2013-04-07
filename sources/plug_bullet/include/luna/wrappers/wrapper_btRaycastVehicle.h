#ifndef _WRAPPERS_WRAPPER_BTRAYCASTVEHICLE_H_
#define _WRAPPERS_WRAPPER_BTRAYCASTVEHICLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Vehicle/btRaycastVehicle.h>

class wrapper_btRaycastVehicle : public btRaycastVehicle, public luna_wrapper_base {

public:
		

	~wrapper_btRaycastVehicle() {
		logDEBUG3("Calling delete function for wrapper btRaycastVehicle");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btRaycastVehicle*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btRaycastVehicle(lua_State* L, lua_Table* dum, const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster) 
		: btRaycastVehicle(tuning, chassis, raycaster), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btRaycastVehicle::updateAction(btCollisionWorld * collisionWorld, float step)
	void updateAction(btCollisionWorld * collisionWorld, float step) {
		if(_obj.pushFunction("updateAction")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.pushArg(collisionWorld);
			_obj.pushArg(step);
			return (_obj.callFunction<void>());
		}

		return btRaycastVehicle::updateAction(collisionWorld, step);
	};

	// void btRaycastVehicle::debugDraw(btIDebugDraw * debugDrawer)
	void debugDraw(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("debugDraw")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btRaycastVehicle::debugDraw(debugDrawer);
	};

	// void btRaycastVehicle::updateVehicle(float step)
	void updateVehicle(float step) {
		if(_obj.pushFunction("updateVehicle")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.pushArg(step);
			return (_obj.callFunction<void>());
		}

		return btRaycastVehicle::updateVehicle(step);
	};

	// void btRaycastVehicle::updateFriction(float timeStep)
	void updateFriction(float timeStep) {
		if(_obj.pushFunction("updateFriction")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btRaycastVehicle::updateFriction(timeStep);
	};

	// void btRaycastVehicle::setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex)
	void setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex) {
		if(_obj.pushFunction("setCoordinateSystem")) {
			_obj.pushArg((btRaycastVehicle*)this);
			_obj.pushArg(rightIndex);
			_obj.pushArg(upIndex);
			_obj.pushArg(forwardIndex);
			return (_obj.callFunction<void>());
		}

		return btRaycastVehicle::setCoordinateSystem(rightIndex, upIndex, forwardIndex);
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


		wrapper_btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< wrapper_btRaycastVehicle >(L,1);
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

