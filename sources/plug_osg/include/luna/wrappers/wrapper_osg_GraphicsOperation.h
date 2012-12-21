#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_GraphicsOperation : public osg::GraphicsOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsOperation(lua_State* L, lua_Table* dum, const std::string & name, bool keep) : osg::GraphicsOperation(name, keep), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsOperation::release();
	};

	// void osg::GraphicsOperation::operator()(osg::Object * object)
	void operator()(osg::Object * object) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(object);
			return (_obj.callFunction<void>());
		}

		return GraphicsOperation::operator()(object);
	};

	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function osg::GraphicsOperation::operator()");
		_obj.pushArg(context);
		return (_obj.callFunction<void>());
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

