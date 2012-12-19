#ifndef _WRAPPERS_WRAPPER_OSG_RUNOPERATIONS_H_
#define _WRAPPERS_WRAPPER_OSG_RUNOPERATIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_RunOperations : public osg::RunOperations, public luna_wrapper_base {

public:
	

	wrapper_osg_RunOperations(lua_State* L, lua_Table* dum) : osg::RunOperations(), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return RunOperations::release();
	};

	// void osg::RunOperations::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return RunOperations::operator()(context);
	};




};




#endif

