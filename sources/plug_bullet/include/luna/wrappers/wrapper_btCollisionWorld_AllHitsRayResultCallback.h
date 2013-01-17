#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_ALLHITSRAYRESULTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_ALLHITSRAYRESULTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld_AllHitsRayResultCallback : public btCollisionWorld::AllHitsRayResultCallback, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld_AllHitsRayResultCallback() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld_AllHitsRayResultCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld::AllHitsRayResultCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld_AllHitsRayResultCallback(lua_State* L, lua_Table* dum, const btVector3 & rayFromWorld, const btVector3 & rayToWorld) 
		: btCollisionWorld::AllHitsRayResultCallback(rayFromWorld, rayToWorld), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld::AllHitsRayResultCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	bool needsCollision(btBroadphaseProxy * proxy0) const {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionWorld::AllHitsRayResultCallback*)this);
			_obj.pushArg(proxy0);
			return (_obj.callFunction<bool>());
		}

		return AllHitsRayResultCallback::needsCollision(proxy0);
	};

	// float btCollisionWorld::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	float addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) {
		if(_obj.pushFunction("addSingleResult")) {
			_obj.pushArg((btCollisionWorld::AllHitsRayResultCallback*)this);
			_obj.pushArg(&rayResult);
			_obj.pushArg(normalInWorldSpace);
			return (_obj.callFunction<float>());
		}

		return AllHitsRayResultCallback::addSingleResult(rayResult, normalInWorldSpace);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

