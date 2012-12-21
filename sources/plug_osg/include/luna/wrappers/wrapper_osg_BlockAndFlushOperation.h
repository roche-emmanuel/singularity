#ifndef _WRAPPERS_WRAPPER_OSG_BLOCKANDFLUSHOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_BLOCKANDFLUSHOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_BlockAndFlushOperation : public osg::BlockAndFlushOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_BlockAndFlushOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_BlockAndFlushOperation(lua_State* L, lua_Table* dum) : osg::BlockAndFlushOperation(), luna_wrapper_base(L) {};

	// void osg::BlockAndFlushOperation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return BlockAndFlushOperation::release();
	};

	// void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * arg1)
	void operator()(osg::GraphicsContext * arg1) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return BlockAndFlushOperation::operator()(arg1);
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

