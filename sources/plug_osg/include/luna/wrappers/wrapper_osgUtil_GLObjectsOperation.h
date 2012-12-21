#ifndef _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/GLObjectsVisitor>

class wrapper_osgUtil_GLObjectsOperation : public osgUtil::GLObjectsOperation, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_GLObjectsOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_GLObjectsOperation(lua_State* L, lua_Table* dum, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) : osgUtil::GLObjectsOperation(mode), luna_wrapper_base(L) {};
	wrapper_osgUtil_GLObjectsOperation(lua_State* L, lua_Table* dum, osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) : osgUtil::GLObjectsOperation(subgraph, mode), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return GLObjectsOperation::release();
	};

	// void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return GLObjectsOperation::operator()(context);
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

