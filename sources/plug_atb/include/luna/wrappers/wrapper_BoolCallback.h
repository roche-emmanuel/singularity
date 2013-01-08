#ifndef _WRAPPERS_WRAPPER_BOOLCALLBACK_H_
#define _WRAPPERS_WRAPPER_BOOLCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_BoolCallback : public BoolCallback, public luna_wrapper_base {

public:
		

	~wrapper_BoolCallback() {
		logDEBUG3("Calling delete function for wrapper BoolCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_BoolCallback(lua_State* L, lua_Table* dum) : BoolCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void BoolCallback::setValue(bool val)
	void setValue(bool val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function BoolCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// bool BoolCallback::getValue()
	bool getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function BoolCallback::getValue");
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

