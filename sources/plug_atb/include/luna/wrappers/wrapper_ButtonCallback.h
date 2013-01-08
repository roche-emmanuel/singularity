#ifndef _WRAPPERS_WRAPPER_BUTTONCALLBACK_H_
#define _WRAPPERS_WRAPPER_BUTTONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_ButtonCallback : public ButtonCallback, public luna_wrapper_base {

public:
		

	~wrapper_ButtonCallback() {
		logDEBUG3("Calling delete function for wrapper ButtonCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ButtonCallback(lua_State* L, lua_Table* dum) : ButtonCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void ButtonCallback::execute()
	void execute() {
		THROW_IF(!_obj.pushFunction("execute"),"No implementation for abstract function ButtonCallback::execute");
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

