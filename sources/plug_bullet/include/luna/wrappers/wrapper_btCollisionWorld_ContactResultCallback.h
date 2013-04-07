#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CONTACTRESULTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_CONTACTRESULTCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld_ContactResultCallback : public btCollisionWorld::ContactResultCallback, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld_ContactResultCallback() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld_ContactResultCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld::ContactResultCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld_ContactResultCallback(lua_State* L, lua_Table* dum) 
		: btCollisionWorld::ContactResultCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld::ContactResultCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	bool needsCollision(btBroadphaseProxy * proxy0) const {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionWorld::ContactResultCallback*)this);
			_obj.pushArg(proxy0);
			return (_obj.callFunction<bool>());
		}

		return ContactResultCallback::needsCollision(proxy0);
	};

	// float btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1)
	float addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1) {
		THROW_IF(!_obj.pushFunction("addSingleResult"),"No implementation for abstract function btCollisionWorld::ContactResultCallback::addSingleResult");
		_obj.pushArg((btCollisionWorld::ContactResultCallback*)this);
		_obj.pushArg(&cp);
		_obj.pushArg(colObj0Wrap);
		_obj.pushArg(partId0);
		_obj.pushArg(index0);
		_obj.pushArg(colObj1Wrap);
		_obj.pushArg(partId1);
		_obj.pushArg(index1);
		return (_obj.callFunction<float>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

