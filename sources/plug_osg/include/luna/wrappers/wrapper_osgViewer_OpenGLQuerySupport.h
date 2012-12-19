#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_OPENGLQUERYSUPPORT_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_OPENGLQUERYSUPPORT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Renderer>

class wrapper_osgViewer_OpenGLQuerySupport : public osgViewer::OpenGLQuerySupport, public luna_wrapper_base {

public:
	

	wrapper_osgViewer_OpenGLQuerySupport(lua_State* L, lua_Table* dum) : osgViewer::OpenGLQuerySupport(), luna_wrapper_base(L) {};

	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick)
	void checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick) {
		THROW_IF(!_obj.pushFunction("checkQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::checkQuery");
		_obj.pushArg(stats);
		_obj.pushArg(state);
		_obj.pushArg(startTick);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state)
	void beginQuery(unsigned int frameNumber, osg::State * state) {
		THROW_IF(!_obj.pushFunction("beginQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::beginQuery");
		_obj.pushArg(frameNumber);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::endQuery(osg::State * state)
	void endQuery(osg::State * state) {
		THROW_IF(!_obj.pushFunction("endQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::endQuery");
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, __int64 startTick)
	void initialize(osg::State * state, __int64 startTick) {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg(state);
			_obj.pushArg(startTick);
			return (_obj.callFunction<void>());
		}

		return OpenGLQuerySupport::initialize(state, startTick);
	};




};




#endif

