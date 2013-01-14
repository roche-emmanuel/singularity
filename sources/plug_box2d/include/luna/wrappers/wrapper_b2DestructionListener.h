#ifndef _WRAPPERS_WRAPPER_B_DESTRUCTIONLISTENER_H_
#define _WRAPPERS_WRAPPER_B_DESTRUCTIONLISTENER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Dynamics/b2WorldCallbacks.h>

class wrapper_b2DestructionListener : public b2DestructionListener, public luna_wrapper_base {

public:
		

	~wrapper_b2DestructionListener() {
		logDEBUG3("Calling delete function for wrapper b2DestructionListener");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2DestructionListener*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2DestructionListener(lua_State* L, lua_Table* dum) 
		: b2DestructionListener(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2DestructionListener*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void b2DestructionListener::SayGoodbye(b2Joint * joint)
	void SayGoodbye(b2Joint * joint) {
		THROW_IF(!_obj.pushFunction("SayGoodbye"),"No implementation for abstract function b2DestructionListener::SayGoodbye");
		_obj.pushArg((b2DestructionListener*)this);
		_obj.pushArg(joint);
		return (_obj.callFunction<void>());
	};

	// void b2DestructionListener::SayGoodbye(b2Fixture * fixture)
	void SayGoodbye(b2Fixture * fixture) {
		THROW_IF(!_obj.pushFunction("SayGoodbye"),"No implementation for abstract function b2DestructionListener::SayGoodbye");
		_obj.pushArg((b2DestructionListener*)this);
		_obj.pushArg(fixture);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

