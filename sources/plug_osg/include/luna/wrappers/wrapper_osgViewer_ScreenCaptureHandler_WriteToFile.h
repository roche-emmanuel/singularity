#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler_WriteToFile : public osgViewer::ScreenCaptureHandler::WriteToFile {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_ScreenCaptureHandler_WriteToFile(lua_State* L, lua_Table* dum, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) : osgViewer::ScreenCaptureHandler::WriteToFile(filename, extension, savePolicy), _obj(L,-1) {};

	// void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)
	void operator()(const osg::Image & image, const unsigned int context_id) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(&image);
			_obj.pushArg(context_id);
			return (_obj.callFunction<void>());
		}

		return osgViewer::ScreenCaptureHandler::WriteToFile::operator()(image, context_id);
	};




};




#endif

