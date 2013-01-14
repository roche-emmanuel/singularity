#ifndef _WRAPPERS_WRAPPER_B_QUERYCALLBACK_H_
#define _WRAPPERS_WRAPPER_B_QUERYCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Dynamics/b2WorldCallbacks.h>

class wrapper_b2QueryCallback : public b2QueryCallback, public luna_wrapper_base {

public:
		

	~wrapper_b2QueryCallback() {
		logDEBUG3("Calling delete function for wrapper b2QueryCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2QueryCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2QueryCallback(lua_State* L, lua_Table* dum) 
		: b2QueryCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2QueryCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool b2QueryCallback::ReportFixture(b2Fixture * fixture)
	bool ReportFixture(b2Fixture * fixture) {
		THROW_IF(!_obj.pushFunction("ReportFixture"),"No implementation for abstract function b2QueryCallback::ReportFixture");
		_obj.pushArg((b2QueryCallback*)this);
		_obj.pushArg(fixture);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

