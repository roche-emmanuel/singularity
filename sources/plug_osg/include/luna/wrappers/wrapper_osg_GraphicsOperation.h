#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_GraphicsOperation : public osg::GraphicsOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsOperation(lua_State* L, lua_Table* dum, const std::string & name, bool keep) : osg::GraphicsOperation(name, keep), _obj(L,-1) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return osg::Operation::release();
	};

	// void osg::GraphicsOperation::operator()(osg::Object * object)
	void operator()(osg::Object * object) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(object);
			return (_obj.callFunction<void>());
		}

		return osg::GraphicsOperation::operator()(object);
	};

	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		THROW_IF(!_obj.pushFunction("operator()"),"No implementation for abstract function osg::GraphicsOperation::operator()");
		_obj.pushArg(context);
		return (_obj.callFunction<void>());
	};




};




#endif

