#ifndef _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_FlushDeletedGLObjectsOperation : public osg::FlushDeletedGLObjectsOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_FlushDeletedGLObjectsOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_FlushDeletedGLObjectsOperation(lua_State* L, lua_Table* dum, double availableTime, bool keep = false) : osg::FlushDeletedGLObjectsOperation(availableTime, keep), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return FlushDeletedGLObjectsOperation::release();
	};

	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)
	void operator()(osg::GraphicsContext * arg1) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return FlushDeletedGLObjectsOperation::operator()(arg1);
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

