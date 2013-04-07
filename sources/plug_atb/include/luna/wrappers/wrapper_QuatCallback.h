#ifndef _WRAPPERS_WRAPPER_QUATCALLBACK_H_
#define _WRAPPERS_WRAPPER_QUATCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_QuatCallback : public QuatCallback, public luna_wrapper_base {

public:
		

	~wrapper_QuatCallback() {
		logDEBUG3("Calling delete function for wrapper QuatCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((QuatCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_QuatCallback(lua_State* L, lua_Table* dum) 
		: QuatCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((QuatCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void QuatCallback::setValue(osg::Quat val)
	void setValue(osg::Quat val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function QuatCallback::setValue");
		_obj.pushArg((QuatCallback*)this);
		_obj.pushArg(&val);
		return (_obj.callFunction<void>());
	};

	// osg::Quat QuatCallback::getValue()
	osg::Quat getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function QuatCallback::getValue");
		_obj.pushArg((QuatCallback*)this);
		return (_obj.callFunction<osg::Quat>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

