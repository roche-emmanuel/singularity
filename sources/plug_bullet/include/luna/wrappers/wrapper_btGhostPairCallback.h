#ifndef _WRAPPERS_WRAPPER_BTGHOSTPAIRCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTGHOSTPAIRCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btGhostObject.h>

class wrapper_btGhostPairCallback : public btGhostPairCallback, public luna_wrapper_base {

public:
		

	~wrapper_btGhostPairCallback() {
		logDEBUG3("Calling delete function for wrapper btGhostPairCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGhostPairCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGhostPairCallback(lua_State* L, lua_Table* dum) 
		: btGhostPairCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGhostPairCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphasePair * btGhostPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		if(_obj.pushFunction("addOverlappingPair")) {
			_obj.pushArg((btGhostPairCallback*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btGhostPairCallback::addOverlappingPair(proxy0, proxy1);
	};

	// void * btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	void * removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) {
		if(_obj.pushFunction("removeOverlappingPair")) {
			_obj.pushArg((btGhostPairCallback*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void*>());
		}

		return btGhostPairCallback::removeOverlappingPair(proxy0, proxy1, dispatcher);
	};

	// void btGhostPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) {
		if(_obj.pushFunction("removeOverlappingPairsContainingProxy")) {
			_obj.pushArg((btGhostPairCallback*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btGhostPairCallback::removeOverlappingPairsContainingProxy(arg1, arg2);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

