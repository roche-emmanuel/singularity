#ifndef _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_BASESYSTEMCREATOR_H_
#define _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_BASESYSTEMCREATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_spark_SparkDrawable_BaseSystemCreator : public spark::SparkDrawable::BaseSystemCreator, public luna_wrapper_base {

public:
		

	~wrapper_spark_SparkDrawable_BaseSystemCreator() {
		logDEBUG3("Calling delete function for wrapper spark_SparkDrawable_BaseSystemCreator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((spark::SparkDrawable::BaseSystemCreator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_spark_SparkDrawable_BaseSystemCreator(lua_State* L, lua_Table* dum) 
		: spark::SparkDrawable::BaseSystemCreator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((spark::SparkDrawable::BaseSystemCreator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// unsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height)
	unsigned long operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function spark::SparkDrawable::BaseSystemCreator::operator()");
		_obj.pushArg((spark::SparkDrawable::BaseSystemCreator*)this);
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

