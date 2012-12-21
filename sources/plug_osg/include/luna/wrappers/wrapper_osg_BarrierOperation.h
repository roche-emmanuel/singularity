#ifndef _WRAPPERS_WRAPPER_OSG_BARRIEROPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_BARRIEROPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_BarrierOperation : public osg::BarrierOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_BarrierOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osg::BarrierOperation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return BarrierOperation::release();
	};

	// void osg::BarrierOperation::operator()(osg::Object * arg1)
	void operator()(osg::Object * arg1) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return BarrierOperation::operator()(arg1);
	};




// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

