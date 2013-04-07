#ifndef _WRAPPERS_WRAPPER_B_RAYCASTCALLBACK_H_
#define _WRAPPERS_WRAPPER_B_RAYCASTCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Box2D/Dynamics/b2WorldCallbacks.h>

class wrapper_b2RayCastCallback : public b2RayCastCallback, public luna_wrapper_base {

public:
		

	~wrapper_b2RayCastCallback() {
		logDEBUG3("Calling delete function for wrapper b2RayCastCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2RayCastCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2RayCastCallback(lua_State* L, lua_Table* dum) 
		: b2RayCastCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2RayCastCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// float b2RayCastCallback::ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction)
	float ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction) {
		THROW_IF(!_obj.pushFunction("ReportFixture"),"No implementation for abstract function b2RayCastCallback::ReportFixture");
		_obj.pushArg((b2RayCastCallback*)this);
		_obj.pushArg(fixture);
		_obj.pushArg(&point);
		_obj.pushArg(&normal);
		_obj.pushArg(fraction);
		return (_obj.callFunction<float>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

