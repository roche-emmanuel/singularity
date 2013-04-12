#ifndef _WRAPPERS_WRAPPER_ORK_MULTITHREADSCHEDULER_H_
#define _WRAPPERS_WRAPPER_ORK_MULTITHREADSCHEDULER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/MultithreadScheduler.h>

class wrapper_ork_MultithreadScheduler : public ork::MultithreadScheduler, public luna_wrapper_base {

public:
		

	~wrapper_ork_MultithreadScheduler() {
		logDEBUG3("Calling delete function for wrapper ork_MultithreadScheduler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::MultithreadScheduler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_MultithreadScheduler(lua_State* L, lua_Table* dum, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) 
		: ork::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool ork::MultithreadScheduler::supportsPrefetch(bool gpuTasks)
	bool supportsPrefetch(bool gpuTasks) {
		if(_obj.pushFunction("supportsPrefetch")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg(gpuTasks);
			return (_obj.callFunction<bool>());
		}

		return MultithreadScheduler::supportsPrefetch(gpuTasks);
	};

	// void ork::MultithreadScheduler::schedule(ptr< Task > task)
	void schedule(ptr< Task > task) {
		if(_obj.pushFunction("schedule")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg(&task);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::schedule(task);
	};

	// void ork::MultithreadScheduler::reschedule(ptr< Task > task, Task::reason r, unsigned int deadline)
	void reschedule(ptr< Task > task, Task::reason r, unsigned int deadline) {
		if(_obj.pushFunction("reschedule")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg(&task);
			_obj.pushArg(r);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::reschedule(task, r, deadline);
	};

	// void ork::MultithreadScheduler::run(ptr< Task > task)
	void run(ptr< Task > task) {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg(&task);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::run(task);
	};


	// Protected non-virtual methods:
	// void ork::MultithreadScheduler::init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	void public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) {
		return ork::MultithreadScheduler::init(prefetchRate, prefetchQueue, frameRate, nThreads);
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


	// Protected non-virtual function binds:
	// void ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) function, expected prototype:\nvoid ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)\nClass arguments details:\n");
		}

		int prefetchRate=(int)lua_tointeger(L,2);
		int prefetchQueue=(int)lua_tointeger(L,3);
		float frameRate=(float)lua_tonumber(L,4);
		int nThreads=(int)lua_tointeger(L,5);

		wrapper_ork_MultithreadScheduler* self=Luna< ork::MultithreadScheduler >::checkSubType< wrapper_ork_MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::public_init(int, int, float, int). Got : '%s'",typeid(Luna< ork::MultithreadScheduler >::check(L,1)).name());
		}
		self->public_init(prefetchRate, prefetchQueue, frameRate, nThreads);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

