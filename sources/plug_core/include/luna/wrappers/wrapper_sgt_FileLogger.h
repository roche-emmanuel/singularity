#ifndef _WRAPPERS_WRAPPER_SGT_FILELOGGER_H_
#define _WRAPPERS_WRAPPER_SGT_FILELOGGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/FileLogger.h>

class wrapper_sgt_FileLogger : public sgt::FileLogger {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_sgt_FileLogger(lua_State* L, lua_Table* dum) : sgt::FileLogger(), _obj(L,-1) {};
	wrapper_sgt_FileLogger(lua_State* L, lua_Table* dum, const std::string & filename, bool append = false, const std::string & name = "") : sgt::FileLogger(filename, append, name), _obj(L,-1) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return osg::Referenced::setThreadSafeRefUnref(threadSafe);
	};

	// void sgt::LogSink::process(int level, std::string trace, std::string msg)
	void process(int level, std::string trace, std::string msg) {
		if(_obj.pushFunction("process")) {
			_obj.pushArg(level);
			_obj.pushArg(trace);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return sgt::LogSink::process(level, trace, msg);
	};

	// void sgt::FileLogger::output(int level, std::string trace, std::string msg)
	void output(int level, std::string trace, std::string msg) {
		if(_obj.pushFunction("output")) {
			_obj.pushArg(level);
			_obj.pushArg(trace);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return sgt::FileLogger::output(level, trace, msg);
	};




};




#endif

