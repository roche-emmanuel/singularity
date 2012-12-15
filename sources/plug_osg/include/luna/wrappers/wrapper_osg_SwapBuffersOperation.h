#ifndef _WRAPPERS_WRAPPER_OSG_SWAPBUFFERSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_SWAPBUFFERSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_SwapBuffersOperation : public osg::SwapBuffersOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_SwapBuffersOperation(lua_State* L, lua_Table* dum) : osg::SwapBuffersOperation(), _obj(L,-1) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return SwapBuffersOperation::release();
	};

	// void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return SwapBuffersOperation::operator()(context);
	};




};




#endif

