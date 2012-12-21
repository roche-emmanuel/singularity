#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_CAPTUREOPERATION_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_CAPTUREOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation : public osgViewer::ScreenCaptureHandler::CaptureOperation, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
	void operator()(const osg::Image & image, const unsigned int context_id) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function osgViewer::ScreenCaptureHandler::CaptureOperation::operator()");
		_obj.pushArg(&image);
		_obj.pushArg(context_id);
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

