#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CLOSESTRAYRESULTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CLOSESTRAYRESULTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld_ClosestRayResultCallback : public btCollisionWorld::ClosestRayResultCallback, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld_ClosestRayResultCallback() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld_ClosestRayResultCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld::ClosestRayResultCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld_ClosestRayResultCallback(lua_State* L, lua_Table* dum, const btVector3 & rayFromWorld, const btVector3 & rayToWorld) 
		: btCollisionWorld::ClosestRayResultCallback(rayFromWorld, rayToWorld), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld::ClosestRayResultCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	bool needsCollision(btBroadphaseProxy * proxy0) const {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionWorld::ClosestRayResultCallback*)this);
			_obj.pushArg(proxy0);
			return (_obj.callFunction<bool>());
		}

		return ClosestRayResultCallback::needsCollision(proxy0);
	};

	// float btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	float addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) {
		if(_obj.pushFunction("addSingleResult")) {
			_obj.pushArg((btCollisionWorld::ClosestRayResultCallback*)this);
			_obj.pushArg(&rayResult);
			_obj.pushArg(normalInWorldSpace);
			return (_obj.callFunction<float>());
		}

		return ClosestRayResultCallback::addSingleResult(rayResult, normalInWorldSpace);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

