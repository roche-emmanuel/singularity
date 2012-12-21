#ifndef _WRAPPERS_WRAPPER_SGT_STDLOGGER_H_
#define _WRAPPERS_WRAPPER_SGT_STDLOGGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/StdLogger.h>

class wrapper_sgt_StdLogger : public sgt::StdLogger, public luna_wrapper_base {

public:
		

	~wrapper_sgt_StdLogger() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_StdLogger(lua_State* L, lua_Table* dum, const std::string & name = "") : sgt::StdLogger(name), luna_wrapper_base(L) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return StdLogger::setThreadSafeRefUnref(threadSafe);
	};

	// void sgt::LogSink::process(int level, std::string trace, std::string msg)
	void process(int level, std::string trace, std::string msg) {
		if(_obj.pushFunction("process")) {
			_obj.pushArg(level);
			_obj.pushArg(trace);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return StdLogger::process(level, trace, msg);
	};

	// void sgt::StdLogger::output(int level, std::string trace, std::string msg)
	void output(int level, std::string trace, std::string msg) {
		if(_obj.pushFunction("output")) {
			_obj.pushArg(level);
			_obj.pushArg(trace);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return StdLogger::output(level, trace, msg);
	};




};




#endif

