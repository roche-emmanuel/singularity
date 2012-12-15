#ifndef _WRAPPERS_WRAPPER_OSG_BARRIEROPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_BARRIEROPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_BarrierOperation : public osg::BarrierOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osg::BarrierOperation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return BarrierOperation::release();
	};

	// void osg::BarrierOperation::operator()(osg::Object * arg1)
	void operator()(osg::Object * arg1) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return BarrierOperation::operator()(arg1);
	};




};




#endif

