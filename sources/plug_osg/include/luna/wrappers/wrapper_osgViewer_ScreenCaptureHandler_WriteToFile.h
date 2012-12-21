#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler_WriteToFile : public osgViewer::ScreenCaptureHandler::WriteToFile, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_ScreenCaptureHandler_WriteToFile() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_ScreenCaptureHandler_WriteToFile(lua_State* L, lua_Table* dum, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) : osgViewer::ScreenCaptureHandler::WriteToFile(filename, extension, savePolicy), luna_wrapper_base(L) {};

	// void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)
	void operator()(const osg::Image & image, const unsigned int context_id) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(&image);
			_obj.pushArg(context_id);
			return (_obj.callFunction<void>());
		}

		return WriteToFile::operator()(image, context_id);
	};




// osgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::operator=(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1)
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

