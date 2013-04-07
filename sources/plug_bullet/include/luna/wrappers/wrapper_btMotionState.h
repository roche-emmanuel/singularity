#ifndef _WRAPPERS_WRAPPER_BTMOTIONSTATE_H_
#define _WRAPPERS_WRAPPER_BTMOTIONSTATE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <LinearMath/btMotionState.h>

class wrapper_btMotionState : public btMotionState, public luna_wrapper_base {

public:
		

	~wrapper_btMotionState() {
		logDEBUG3("Calling delete function for wrapper btMotionState");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btMotionState*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btMotionState(lua_State* L, lua_Table* dum) 
		: btMotionState(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMotionState*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btMotionState::getWorldTransform(btTransform & worldTrans) const
	void getWorldTransform(btTransform & worldTrans) const {
		THROW_IF(!_obj.pushFunction("getWorldTransform"),"No implementation for abstract function btMotionState::getWorldTransform");
		_obj.pushArg((btMotionState*)this);
		_obj.pushArg(&worldTrans);
		return (_obj.callFunction<void>());
	};

	// void btMotionState::setWorldTransform(const btTransform & worldTrans)
	void setWorldTransform(const btTransform & worldTrans) {
		THROW_IF(!_obj.pushFunction("setWorldTransform"),"No implementation for abstract function btMotionState::setWorldTransform");
		_obj.pushArg((btMotionState*)this);
		_obj.pushArg(&worldTrans);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

