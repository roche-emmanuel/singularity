#ifndef _WRAPPERS_WRAPPER_SGT_LOGMANAGER_H_
#define _WRAPPERS_WRAPPER_SGT_LOGMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/LogManager.h>

namespace sgt {

class wrapper_sgt_LogManager : public sgt::LogManager {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_sgt_LogManager(lua_State* L) : sgt::LogManager(), _obj(L,-1) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return osg::Referenced::setThreadSafeRefUnref(threadSafe);
	};




};

};	



#endif

