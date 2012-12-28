#ifndef _WRAPPERS_WRAPPER_SPARKDRAWABLE_DEFERREDSYSTEMHANDLER_H_
#define _WRAPPERS_WRAPPER_SPARKDRAWABLE_DEFERREDSYSTEMHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_SparkDrawable_DeferredSystemHandler : public SparkDrawable::DeferredSystemHandler, public luna_wrapper_base {

public:
		

	~wrapper_SparkDrawable_DeferredSystemHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)
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

