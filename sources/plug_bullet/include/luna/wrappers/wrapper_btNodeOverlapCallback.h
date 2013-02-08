#ifndef _WRAPPERS_WRAPPER_BTNODEOVERLAPCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTNODEOVERLAPCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btQuantizedBvh.h>

class wrapper_btNodeOverlapCallback : public btNodeOverlapCallback, public luna_wrapper_base {

public:
		

	~wrapper_btNodeOverlapCallback() {
		logDEBUG3("Calling delete function for wrapper btNodeOverlapCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btNodeOverlapCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btNodeOverlapCallback(lua_State* L, lua_Table* dum) 
		: btNodeOverlapCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btNodeOverlapCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btNodeOverlapCallback::processNode(int subPart, int triangleIndex)
	void processNode(int subPart, int triangleIndex) {
		THROW_IF(!_obj.pushFunction("processNode"),"No implementation for abstract function btNodeOverlapCallback::processNode");
		_obj.pushArg((btNodeOverlapCallback*)this);
		_obj.pushArg(subPart);
		_obj.pushArg(triangleIndex);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

