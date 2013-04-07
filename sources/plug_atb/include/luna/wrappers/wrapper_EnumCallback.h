#ifndef _WRAPPERS_WRAPPER_ENUMCALLBACK_H_
#define _WRAPPERS_WRAPPER_ENUMCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_EnumCallback : public EnumCallback, public luna_wrapper_base {

public:
		

	~wrapper_EnumCallback() {
		logDEBUG3("Calling delete function for wrapper EnumCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((EnumCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_EnumCallback(lua_State* L, lua_Table* dum) 
		: EnumCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((EnumCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void EnumCallback::setValue(int val)
	void setValue(int val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function EnumCallback::setValue");
		_obj.pushArg((EnumCallback*)this);
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// int EnumCallback::getValue()
	int getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function EnumCallback::getValue");
		_obj.pushArg((EnumCallback*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

