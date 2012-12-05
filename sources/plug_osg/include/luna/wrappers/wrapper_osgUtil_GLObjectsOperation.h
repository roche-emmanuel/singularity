#ifndef _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/GLObjectsVisitor>

class wrapper_osgUtil_GLObjectsOperation : public osgUtil::GLObjectsOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_GLObjectsOperation(lua_State* L, lua_Table* dum, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) : osgUtil::GLObjectsOperation(mode), _obj(L,-1) {};
	wrapper_osgUtil_GLObjectsOperation(lua_State* L, lua_Table* dum, osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) : osgUtil::GLObjectsOperation(subgraph, mode), _obj(L,-1) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return osg::Operation::release();
	};

	// void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return osgUtil::GLObjectsOperation::operator()(context);
	};




};




#endif

