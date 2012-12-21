#ifndef _WRAPPERS_WRAPPER_OSG_SWAPBUFFERSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_SWAPBUFFERSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_SwapBuffersOperation : public osg::SwapBuffersOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_SwapBuffersOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_SwapBuffersOperation(lua_State* L, lua_Table* dum) : osg::SwapBuffersOperation(), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return SwapBuffersOperation::release();
	};

	// void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return SwapBuffersOperation::operator()(context);
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

