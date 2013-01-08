#ifndef _WRAPPERS_WRAPPER_INTCALLBACK_H_
#define _WRAPPERS_WRAPPER_INTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_IntCallback : public IntCallback, public luna_wrapper_base {

public:
		

	~wrapper_IntCallback() {
		logDEBUG3("Calling delete function for wrapper IntCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IntCallback(lua_State* L, lua_Table* dum) : IntCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void IntCallback::setValue(int val)
	void setValue(int val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function IntCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// int IntCallback::getValue()
	int getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function IntCallback::getValue");
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

