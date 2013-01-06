#ifndef _WRAPPERS_WRAPPER_ATB_TWBOOLCALLBACK_H_
#define _WRAPPERS_WRAPPER_ATB_TWBOOLCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_atb_TwBoolCallback : public atb::TwBoolCallback, public luna_wrapper_base {

public:
		

	~wrapper_atb_TwBoolCallback() {
		logDEBUG3("Calling delete function for wrapper atb_TwBoolCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_atb_TwBoolCallback(lua_State* L, lua_Table* dum) : atb::TwBoolCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void atb::TwBoolCallback::setValue(bool val)
	void setValue(bool val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function atb::TwBoolCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// bool atb::TwBoolCallback::getValue()
	bool getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function atb::TwBoolCallback::getValue");
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

