#ifndef _WRAPPERS_WRAPPER_SGT_TASK_H_
#define _WRAPPERS_WRAPPER_SGT_TASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/Task.h>

class wrapper_sgt_Task : public sgt::Task, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Task() {
		logDEBUG3("Calling delete function for wrapper sgt_Task");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::Task*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Task(lua_State* L, lua_Table* dum, const char * type, bool gpuTask, unsigned int deadline) 
		: sgt::Task(type, gpuTask, deadline), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::Task*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void * sgt::Task::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<void*>());
		}

		return Task::getContext();
	};

	// int sgt::Task::getComplexity() const
	int getComplexity() const {
		if(_obj.pushFunction("getComplexity")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<int>());
		}

		return Task::getComplexity();
	};

	// void sgt::Task::init(std::set< sgtPtr< sgt::Task > > & initialized)
	void init(std::set< sgtPtr< sgt::Task > > & initialized) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((sgt::Task*)this);
			_obj.pushArg(&initialized);
			return (_obj.callFunction<void>());
		}

		return Task::init(initialized);
	};

	// void sgt::Task::begin()
	void begin() {
		if(_obj.pushFunction("begin")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<void>());
		}

		return Task::begin();
	};

	// bool sgt::Task::run()
	bool run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<bool>());
		}

		return Task::run();
	};

	// void sgt::Task::end()
	void end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<void>());
		}

		return Task::end();
	};

	// bool sgt::Task::isDone()
	bool isDone() {
		if(_obj.pushFunction("isDone")) {
			_obj.pushArg((sgt::Task*)this);
			return (_obj.callFunction<bool>());
		}

		return Task::isDone();
	};

	// void sgt::Task::setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED)
	void setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED) {
		if(_obj.pushFunction("setIsDone")) {
			_obj.pushArg((sgt::Task*)this);
			_obj.pushArg(done);
			_obj.pushArg(t);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return Task::setIsDone(done, t, r);
	};

	// void sgt::Task::setPredecessorsCompletionDate(unsigned int t)
	void setPredecessorsCompletionDate(unsigned int t) {
		if(_obj.pushFunction("setPredecessorsCompletionDate")) {
			_obj.pushArg((sgt::Task*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return Task::setPredecessorsCompletionDate(t);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

