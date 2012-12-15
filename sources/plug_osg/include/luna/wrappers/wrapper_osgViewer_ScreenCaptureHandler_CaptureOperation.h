#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_CAPTUREOPERATION_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_CAPTUREOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation : public osgViewer::ScreenCaptureHandler::CaptureOperation {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
	void operator()(const osg::Image & image, const unsigned int context_id) {
		THROW_IF(!_obj.pushFunction("operator()"),"No implementation for abstract function osgViewer::ScreenCaptureHandler::CaptureOperation::operator()");
		_obj.pushArg(&image);
		_obj.pushArg(context_id);
		return (_obj.callFunction<void>());
	};




};




#endif

