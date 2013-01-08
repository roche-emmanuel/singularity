#ifndef _WRAPPERS_WRAPPER_DIRCALLBACK_H_
#define _WRAPPERS_WRAPPER_DIRCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_DirCallback : public DirCallback, public luna_wrapper_base {

public:
		

	~wrapper_DirCallback() {
		logDEBUG3("Calling delete function for wrapper DirCallback");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_DirCallback(lua_State* L, lua_Table* dum) : DirCallback(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void DirCallback::setValue(osg::Vec3d val)
	void setValue(osg::Vec3d val) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function DirCallback::setValue");
		_obj.pushArg(val);
		return (_obj.callFunction<void>());
	};

	// osg::Vec3d DirCallback::getValue()
	osg::Vec3d getValue() {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function DirCallback::getValue");
		return (_obj.callFunction<osg::Vec3d>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

