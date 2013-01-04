#ifndef _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_DEFERREDSYSTEMHANDLER_H_
#define _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_DEFERREDSYSTEMHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_spark_SparkDrawable_DeferredSystemHandler : public spark::SparkDrawable::DeferredSystemHandler, public luna_wrapper_base {

public:
		

	~wrapper_spark_SparkDrawable_DeferredSystemHandler() {
		logDEBUG3("Calling delete function for wrapper spark_SparkDrawable_DeferredSystemHandler");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_spark_SparkDrawable_DeferredSystemHandler(lua_State* L, lua_Table* dum) : spark::SparkDrawable::DeferredSystemHandler(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void spark::SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void update(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return DeferredSystemHandler::update(nv, drawable);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

