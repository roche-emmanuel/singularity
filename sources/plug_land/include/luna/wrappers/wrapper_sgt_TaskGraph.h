#ifndef _WRAPPERS_WRAPPER_SGT_TASKGRAPH_H_
#define _WRAPPERS_WRAPPER_SGT_TASKGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/TaskGraph.h>

class wrapper_sgt_TaskGraph : public sgt::TaskGraph, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TaskGraph() {
		logDEBUG3("Calling delete function for wrapper sgt_TaskGraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TaskGraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TaskGraph(lua_State* L, lua_Table* dum) 
		: sgt::TaskGraph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_TaskGraph(lua_State* L, lua_Table* dum, sgt::Task * arg1) 
		: sgt::TaskGraph(arg1), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void * sgt::Task::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<void*>());
		}

		return TaskGraph::getContext();
	};

	// int sgt::Task::getComplexity() const
	int getComplexity() const {
		if(_obj.pushFunction("getComplexity")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<int>());
		}

		return TaskGraph::getComplexity();
	};

	// void sgt::Task::begin()
	void begin() {
		if(_obj.pushFunction("begin")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::begin();
	};

	// bool sgt::Task::run()
	bool run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<bool>());
		}

		return TaskGraph::run();
	};

	// void sgt::Task::end()
	void end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::end();
	};

	// bool sgt::Task::isDone()
	bool isDone() {
		if(_obj.pushFunction("isDone")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			return (_obj.callFunction<bool>());
		}

		return TaskGraph::isDone();
	};

	// void sgt::TaskGraph::init(sgt::TaskSet & initialized)
	void init(sgt::TaskSet & initialized) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.pushArg(&initialized);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::init(initialized);
	};

	// void sgt::TaskGraph::setIsDone(bool done, unsigned int t, sgt::Task::reason r)
	void setIsDone(bool done, unsigned int t, sgt::Task::reason r) {
		if(_obj.pushFunction("setIsDone")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.pushArg(done);
			_obj.pushArg(t);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::setIsDone(done, t, r);
	};

	// void sgt::TaskGraph::setPredecessorsCompletionDate(unsigned int t)
	void setPredecessorsCompletionDate(unsigned int t) {
		if(_obj.pushFunction("setPredecessorsCompletionDate")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::setPredecessorsCompletionDate(t);
	};

	// void sgt::TaskGraph::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	void taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) {
		if(_obj.pushFunction("taskStateChanged")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.pushArg(t);
			_obj.pushArg(done);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::taskStateChanged(t, done, r);
	};

	// void sgt::TaskGraph::completionDateChanged(sgt::Task * t, unsigned int date)
	void completionDateChanged(sgt::Task * t, unsigned int date) {
		if(_obj.pushFunction("completionDateChanged")) {
			_obj.pushArg((sgt::TaskGraph*)this);
			_obj.pushArg(t);
			_obj.pushArg(date);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::completionDateChanged(t, date);
	};


	// Protected non-virtual methods:
	// void sgt::TaskGraph::cleanup()
	void public_cleanup() {
		return sgt::TaskGraph::cleanup();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_cleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::TaskGraph::public_cleanup()
	static int _bind_public_cleanup(lua_State *L) {
		if (!_lg_typecheck_public_cleanup(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::public_cleanup() function, expected prototype:\nvoid sgt::TaskGraph::public_cleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_sgt_TaskGraph* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::public_cleanup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_cleanup();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"cleanup",_bind_public_cleanup},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

