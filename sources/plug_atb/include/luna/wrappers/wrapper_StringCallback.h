#ifndef _WRAPPERS_WRAPPER_STRINGCALLBACK_H_
#define _WRAPPERS_WRAPPER_STRINGCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_StringCallback : public StringCallback, public luna_wrapper_base {

public:
		

	~wrapper_StringCallback() {
		logDEBUG3("Calling delete function for wrapper StringCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((StringCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_StringCallback(lua_State* L, lua_Table* dum) 
		: StringCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((StringCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void StringCallback::setValue(const std::string & val)
	void setValue(const std::string & val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function StringCallback::setValue");
		_obj.pushArg((StringCallback*)this);
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// std::string StringCallback::getValue()
	std::string getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function StringCallback::getValue");
		_obj.pushArg((StringCallback*)this);
		return (_obj.callFunction<std::string>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

