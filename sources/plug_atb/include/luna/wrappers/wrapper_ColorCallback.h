#ifndef _WRAPPERS_WRAPPER_COLORCALLBACK_H_
#define _WRAPPERS_WRAPPER_COLORCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_ColorCallback : public ColorCallback, public luna_wrapper_base {

public:
		

	~wrapper_ColorCallback() {
		logDEBUG3("Calling delete function for wrapper ColorCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ColorCallback(lua_State* L, lua_Table* dum) : ColorCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void ColorCallback::setValue(osg::Vec4f val)
	void setValue(osg::Vec4f val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function ColorCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// osg::Vec4f ColorCallback::getValue()
	osg::Vec4f getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function ColorCallback::getValue");
		return (_obj.callFunction<osg::Vec4f>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

