#ifndef _WRAPPERS_WRAPPER_SGT_LOGMANAGER_H_
#define _WRAPPERS_WRAPPER_SGT_LOGMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/LogManager.h>

class wrapper_sgt_LogManager : public sgt::LogManager, public luna_wrapper_base {

public:
		

	~wrapper_sgt_LogManager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_LogManager(lua_State* L, lua_Table* dum) : sgt::LogManager(), luna_wrapper_base(L) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return LogManager::setThreadSafeRefUnref(threadSafe);
	};




};




#endif

