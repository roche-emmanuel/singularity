#ifndef _WRAPPERS_WRAPPER_B_CONTACTFILTER_H_
#define _WRAPPERS_WRAPPER_B_CONTACTFILTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Dynamics/b2WorldCallbacks.h>

class wrapper_b2ContactFilter : public b2ContactFilter, public luna_wrapper_base {

public:
		

	~wrapper_b2ContactFilter() {
		logDEBUG3("Calling delete function for wrapper b2ContactFilter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2ContactFilter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2ContactFilter(lua_State* L, lua_Table* dum) 
		: b2ContactFilter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2ContactFilter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool b2ContactFilter::ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB)
	bool ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB) {
		if(_obj.pushFunction("ShouldCollide")) {
			_obj.pushArg((b2ContactFilter*)this);
			_obj.pushArg(fixtureA);
			_obj.pushArg(fixtureB);
			return (_obj.callFunction<bool>());
		}

		return b2ContactFilter::ShouldCollide(fixtureA, fixtureB);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

