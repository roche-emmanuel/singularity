#ifndef _WRAPPERS_WRAPPER_OSG_STANDARDNOTIFYHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_STANDARDNOTIFYHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Notify>

class wrapper_osg_StandardNotifyHandler : public osg::StandardNotifyHandler, public luna_wrapper_base {

public:
		

	~wrapper_osg_StandardNotifyHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	void notify(osg::NotifySeverity severity, const char * message) {
		if(_obj.pushFunction("notify")) {
			_obj.pushArg(severity);
			_obj.pushArg(message);
			return (_obj.callFunction<void>());
		}

		return StandardNotifyHandler::notify(severity, message);
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

