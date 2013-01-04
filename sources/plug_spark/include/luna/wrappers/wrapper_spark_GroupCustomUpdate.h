#ifndef _WRAPPERS_WRAPPER_SPARK_GROUPCUSTOMUPDATE_H_
#define _WRAPPERS_WRAPPER_SPARK_GROUPCUSTOMUPDATE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_spark_GroupCustomUpdate : public spark::GroupCustomUpdate, public luna_wrapper_base {

public:
		

	~wrapper_spark_GroupCustomUpdate() {
		logDEBUG3("Calling delete function for wrapper spark_GroupCustomUpdate");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_spark_GroupCustomUpdate(lua_State* L, lua_Table* dum) : spark::GroupCustomUpdate(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool spark::GroupCustomUpdate::operator()(SPK::Particle & particle, float deltaTime) const
	bool operator()(SPK::Particle & particle, float deltaTime) const {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(&particle);
			_obj.pushArg(deltaTime);
			return (_obj.callFunction<bool>());
		}

		return GroupCustomUpdate::operator()(particle, deltaTime);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

