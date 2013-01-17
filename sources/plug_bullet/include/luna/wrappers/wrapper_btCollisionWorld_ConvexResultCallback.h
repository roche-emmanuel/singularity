#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CONVEXRESULTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CONVEXRESULTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld_ConvexResultCallback : public btCollisionWorld::ConvexResultCallback, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld_ConvexResultCallback() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld_ConvexResultCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld::ConvexResultCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld_ConvexResultCallback(lua_State* L, lua_Table* dum) 
		: btCollisionWorld::ConvexResultCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld::ConvexResultCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	bool needsCollision(btBroadphaseProxy * proxy0) const {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionWorld::ConvexResultCallback*)this);
			_obj.pushArg(proxy0);
			return (_obj.callFunction<bool>());
		}

		return ConvexResultCallback::needsCollision(proxy0);
	};

	// float btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
	float addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace) {
		THROW_IF(!_obj.pushFunction("addSingleResult"),"No implementation for abstract function btCollisionWorld::ConvexResultCallback::addSingleResult");
		_obj.pushArg((btCollisionWorld::ConvexResultCallback*)this);
		_obj.pushArg(&convexResult);
		_obj.pushArg(normalInWorldSpace);
		return (_obj.callFunction<float>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

