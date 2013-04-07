#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CLOSESTCONVEXRESULTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CLOSESTCONVEXRESULTCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld_ClosestConvexResultCallback : public btCollisionWorld::ClosestConvexResultCallback, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld_ClosestConvexResultCallback() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld_ClosestConvexResultCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld::ClosestConvexResultCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld_ClosestConvexResultCallback(lua_State* L, lua_Table* dum, const btVector3 & convexFromWorld, const btVector3 & convexToWorld) 
		: btCollisionWorld::ClosestConvexResultCallback(convexFromWorld, convexToWorld), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld::ClosestConvexResultCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	bool needsCollision(btBroadphaseProxy * proxy0) const {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionWorld::ClosestConvexResultCallback*)this);
			_obj.pushArg(proxy0);
			return (_obj.callFunction<bool>());
		}

		return ClosestConvexResultCallback::needsCollision(proxy0);
	};

	// float btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
	float addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace) {
		if(_obj.pushFunction("addSingleResult")) {
			_obj.pushArg((btCollisionWorld::ClosestConvexResultCallback*)this);
			_obj.pushArg(&convexResult);
			_obj.pushArg(normalInWorldSpace);
			return (_obj.callFunction<float>());
		}

		return ClosestConvexResultCallback::addSingleResult(convexResult, normalInWorldSpace);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

