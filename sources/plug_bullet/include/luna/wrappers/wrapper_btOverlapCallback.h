#ifndef _WRAPPERS_WRAPPER_BTOVERLAPCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTOVERLAPCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btOverlapCallback : public btOverlapCallback, public luna_wrapper_base {

public:
		

	~wrapper_btOverlapCallback() {
		logDEBUG3("Calling delete function for wrapper btOverlapCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btOverlapCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btOverlapCallback(lua_State* L, lua_Table* dum) 
		: btOverlapCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btOverlapCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btOverlapCallback::processOverlap(btBroadphasePair & pair)
	bool processOverlap(btBroadphasePair & pair) {
		THROW_IF(!_obj.pushFunction("processOverlap"),"No implementation for abstract function btOverlapCallback::processOverlap");
		_obj.pushArg((btOverlapCallback*)this);
		_obj.pushArg(&pair);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

