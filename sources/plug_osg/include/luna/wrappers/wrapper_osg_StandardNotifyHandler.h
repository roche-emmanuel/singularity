#ifndef _WRAPPERS_WRAPPER_OSG_STANDARDNOTIFYHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_STANDARDNOTIFYHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Notify>

class wrapper_osg_StandardNotifyHandler : public osg::StandardNotifyHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_StandardNotifyHandler(lua_State* L, lua_Table* dum) : osg::StandardNotifyHandler(), _obj(L,-1) {};

	// void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	void notify(osg::NotifySeverity severity, const char * message) {
		if(_obj.pushFunction("notify")) {
			_obj.pushArg(severity);
			_obj.pushArg(message);
			return (_obj.callFunction<void>());
		}

		return osg::StandardNotifyHandler::notify(severity, message);
	};




};




#endif

