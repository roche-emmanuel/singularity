#ifndef _WRAPPERS_WRAPPER_OSG_NOTIFYHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_NOTIFYHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Notify>

class wrapper_osg_NotifyHandler : public osg::NotifyHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osg::NotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	void notify(osg::NotifySeverity severity, const char * message) {
		THROW_IF(!_obj.pushFunction("notify"),"No implementation for abstract function osg::NotifyHandler::notify");
		_obj.pushArg(severity);
		_obj.pushArg(message);
		return (_obj.callFunction<void>());
	};




};




#endif

