#ifndef _WRAPPERS_WRAPPER_SPARKDRAWABLE_BASESYSTEMCREATOR_H_
#define _WRAPPERS_WRAPPER_SPARKDRAWABLE_BASESYSTEMCREATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_SparkDrawable_BaseSystemCreator : public SparkDrawable::BaseSystemCreator, public luna_wrapper_base {

public:
		

	~wrapper_SparkDrawable_BaseSystemCreator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// unsigned long SparkDrawable::BaseSystemCreator::operator()(const SparkDrawable::TextureIDMap & arg1, int width, int height)
	unsigned long operator()(const SparkDrawable::TextureIDMap & arg1, int width, int height) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function SparkDrawable::BaseSystemCreator::operator()");
		_obj.pushArg(&arg1);
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<unsigned long>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

