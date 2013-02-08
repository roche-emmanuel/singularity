#ifndef _WRAPPERS_WRAPPER_BTBROADPHASERAYCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTBROADPHASERAYCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btBroadphaseInterface.h>

class wrapper_btBroadphaseRayCallback : public btBroadphaseRayCallback, public luna_wrapper_base {

public:
		

	~wrapper_btBroadphaseRayCallback() {
		logDEBUG3("Calling delete function for wrapper btBroadphaseRayCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBroadphaseRayCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBroadphaseRayCallback(lua_State* L, lua_Table* dum) 
		: btBroadphaseRayCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBroadphaseRayCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)
	bool process(const btBroadphaseProxy * proxy) {
		THROW_IF(!_obj.pushFunction("process"),"No implementation for abstract function btBroadphaseAabbCallback::process");
		_obj.pushArg((btBroadphaseRayCallback*)this);
		_obj.pushArg(proxy);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

