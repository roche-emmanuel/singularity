#ifndef _WRAPPERS_WRAPPER_BTOVERLAPFILTERCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTOVERLAPFILTERCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btOverlapFilterCallback : public btOverlapFilterCallback, public luna_wrapper_base {

public:
		

	~wrapper_btOverlapFilterCallback() {
		logDEBUG3("Calling delete function for wrapper btOverlapFilterCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btOverlapFilterCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btOverlapFilterCallback(lua_State* L, lua_Table* dum) 
		: btOverlapFilterCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btOverlapFilterCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const
	bool needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const {
		THROW_IF(!_obj.pushFunction("needBroadphaseCollision"),"No implementation for abstract function btOverlapFilterCallback::needBroadphaseCollision");
		_obj.pushArg((btOverlapFilterCallback*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

