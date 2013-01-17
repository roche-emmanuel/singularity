#ifndef _WRAPPERS_WRAPPER_BTOVERLAPPINGPAIRCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTOVERLAPPINGPAIRCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h>

class wrapper_btOverlappingPairCallback : public btOverlappingPairCallback, public luna_wrapper_base {

public:
		

	~wrapper_btOverlappingPairCallback() {
		logDEBUG3("Calling delete function for wrapper btOverlappingPairCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btOverlappingPairCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btOverlappingPairCallback(lua_State* L, lua_Table* dum) 
		: btOverlappingPairCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btOverlappingPairCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		THROW_IF(!_obj.pushFunction("addOverlappingPair"),"No implementation for abstract function btOverlappingPairCallback::addOverlappingPair");
		_obj.pushArg((btOverlappingPairCallback*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		return (_obj.callFunction<btBroadphasePair*>());
	};

	// void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	void * removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("removeOverlappingPair"),"No implementation for abstract function btOverlappingPairCallback::removeOverlappingPair");
		_obj.pushArg((btOverlappingPairCallback*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void*>());
	};

	// void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("removeOverlappingPairsContainingProxy"),"No implementation for abstract function btOverlappingPairCallback::removeOverlappingPairsContainingProxy");
		_obj.pushArg((btOverlappingPairCallback*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

