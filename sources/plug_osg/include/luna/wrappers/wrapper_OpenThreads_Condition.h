#ifndef _WRAPPERS_WRAPPER_OPENTHREADS_CONDITION_H_
#define _WRAPPERS_WRAPPER_OPENTHREADS_CONDITION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <OpenThreads/Condition>

class wrapper_OpenThreads_Condition : public OpenThreads::Condition, public luna_wrapper_base {

public:
		

	~wrapper_OpenThreads_Condition() {
		logDEBUG3("Calling delete function for wrapper OpenThreads_Condition");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_OpenThreads_Condition(lua_State* L, lua_Table* dum) : OpenThreads::Condition(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int OpenThreads::Condition::signal()
	int signal() {
		if(_obj.pushFunction("signal")) {
			return (_obj.callFunction<int>());
		}

		return Condition::signal();
	};

	// int OpenThreads::Condition::broadcast()
	int broadcast() {
		if(_obj.pushFunction("broadcast")) {
			return (_obj.callFunction<int>());
		}

		return Condition::broadcast();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif
