#ifndef _WRAPPERS_WRAPPER_DOUBLECALLBACK_H_
#define _WRAPPERS_WRAPPER_DOUBLECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_DoubleCallback : public DoubleCallback, public luna_wrapper_base {

public:
		

	~wrapper_DoubleCallback() {
		logDEBUG3("Calling delete function for wrapper DoubleCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_DoubleCallback(lua_State* L, lua_Table* dum) : DoubleCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void DoubleCallback::setValue(double val)
	void setValue(double val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function DoubleCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// double DoubleCallback::getValue()
	double getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function DoubleCallback::getValue");
		return (_obj.callFunction<double>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

