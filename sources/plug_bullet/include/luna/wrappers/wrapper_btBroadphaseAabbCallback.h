#ifndef _WRAPPERS_WRAPPER_BTBROADPHASEAABBCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTBROADPHASEAABBCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btBroadphaseInterface.h>

class wrapper_btBroadphaseAabbCallback : public btBroadphaseAabbCallback, public luna_wrapper_base {

public:
		

	~wrapper_btBroadphaseAabbCallback() {
		logDEBUG3("Calling delete function for wrapper btBroadphaseAabbCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBroadphaseAabbCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBroadphaseAabbCallback(lua_State* L, lua_Table* dum) 
		: btBroadphaseAabbCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBroadphaseAabbCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)
	bool process(const btBroadphaseProxy * proxy) {
		THROW_IF(!_obj.pushFunction("process"),"No implementation for abstract function btBroadphaseAabbCallback::process");
		_obj.pushArg((btBroadphaseAabbCallback*)this);
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

