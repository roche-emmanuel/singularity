#ifndef _WRAPPERS_WRAPPER_SGT_LOGSINK_H_
#define _WRAPPERS_WRAPPER_SGT_LOGSINK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <log/LogSink.h>

class wrapper_sgt_LogSink : public sgt::LogSink, public luna_wrapper_base {

public:
		

	~wrapper_sgt_LogSink() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_LogSink(lua_State* L, lua_Table* dum, const std::string & name = "") : sgt::LogSink(name), luna_wrapper_base(L) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return LogSink::setThreadSafeRefUnref(threadSafe);
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

		return LogSink::process(level, trace, msg);
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

