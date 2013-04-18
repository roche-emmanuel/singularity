#ifndef _WRAPPERS_WRAPPER_SGT_MULTITHREADSCHEDULER_H_
#define _WRAPPERS_WRAPPER_SGT_MULTITHREADSCHEDULER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/MultithreadScheduler.h>

class wrapper_sgt_MultithreadScheduler : public sgt::MultithreadScheduler, public luna_wrapper_base {

public:
		

	~wrapper_sgt_MultithreadScheduler() {
		logDEBUG3("Calling delete function for wrapper sgt_MultithreadScheduler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::MultithreadScheduler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_MultithreadScheduler(lua_State* L, lua_Table* dum, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) 
		: sgt::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::MultithreadScheduler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool sgt::MultithreadScheduler::supportsPrefetch(bool gpuTasks)
	bool supportsPrefetch(bool gpuTasks) {
		if(_obj.pushFunction("supportsPrefetch")) {
			_obj.pushArg((sgt::MultithreadScheduler*)this);
			_obj.pushArg(gpuTasks);
			return (_obj.callFunction<bool>());
		}

		return MultithreadScheduler::supportsPrefetch(gpuTasks);
	};

	// void sgt::MultithreadScheduler::schedule(sgt::Task * task)
	void schedule(sgt::Task * task) {
		if(_obj.pushFunction("schedule")) {
			_obj.pushArg((sgt::MultithreadScheduler*)this);
			_obj.pushArg(task);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::schedule(task);
	};

	// void sgt::MultithreadScheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	void reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline) {
		if(_obj.pushFunction("reschedule")) {
			_obj.pushArg((sgt::MultithreadScheduler*)this);
			_obj.pushArg(task);
			_obj.pushArg((int)r);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::reschedule(task, r, deadline);
	};

	// void sgt::MultithreadScheduler::run(sgt::Task * task)
	void run(sgt::Task * task) {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((sgt::MultithreadScheduler*)this);
			_obj.pushArg(task);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::run(task);
	};


	// Protected non-virtual methods:
	// void sgt::MultithreadScheduler::init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	void public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) {
		return sgt::MultithreadScheduler::init(prefetchRate, prefetchQueue, frameRate, nThreads);
	};

	// void sgt::Scheduler::swap(sgt::Scheduler * s)
	void public_swap(sgt::Scheduler * s) {
		return sgt::Scheduler::swap(s);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) function, expected prototype:\nvoid sgt::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int prefetchRate=(int)lua_tointeger(L,2);
		int prefetchQueue=(int)lua_tointeger(L,3);
		float frameRate=(float)lua_tonumber(L,4);
		int nThreads=(int)lua_tointeger(L,5);

		wrapper_sgt_MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::public_init(int, int, float, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(prefetchRate, prefetchQueue, frameRate, nThreads);

		return 0;
	}

	// void sgt::Scheduler::public_swap(sgt::Scheduler * s)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Scheduler::public_swap(sgt::Scheduler * s) function, expected prototype:\nvoid sgt::Scheduler::public_swap(sgt::Scheduler * s)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Scheduler* s=(Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,2));

		wrapper_sgt_MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Scheduler::public_swap(sgt::Scheduler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(s);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

