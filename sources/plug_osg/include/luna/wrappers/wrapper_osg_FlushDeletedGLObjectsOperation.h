#ifndef _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_FlushDeletedGLObjectsOperation : public osg::FlushDeletedGLObjectsOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_FlushDeletedGLObjectsOperation(lua_State* L, lua_Table* dum, double availableTime, bool keep = false) : osg::FlushDeletedGLObjectsOperation(availableTime, keep), _obj(L,-1) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return osg::Operation::release();
	};

	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)
	void operator()(osg::GraphicsContext * arg1) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::FlushDeletedGLObjectsOperation::operator()(arg1);
	};




};




#endif

