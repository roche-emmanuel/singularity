#ifndef _WRAPPERS_WRAPPER_SGT_LOGSINK_H_
#define _WRAPPERS_WRAPPER_SGT_LOGSINK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/LogSink.h>

namespace sgt {

class wrapper_sgt_LogSink : public sgt::LogSink {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_sgt_LogSink(lua_State* L, const std::string & name = "") : sgt::LogSink(name), _obj(L,-1) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return osg::Referenced::setThreadSafeRefUnref(threadSafe);
	};

	// void sgt::LogSink::output(int level, std::string trace, std::string msg)
	void output(int level, std::string trace, std::string msg) {
		THROW_IF(!_obj.pushFunction("output"),"No implementation for abstract function sgt::LogSink::output");
		_obj.pushArg(level);
		_obj.pushArg(trace);
		_obj.pushArg(msg);
		return (_obj.callFunction<void>());
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




};

};	



#endif

