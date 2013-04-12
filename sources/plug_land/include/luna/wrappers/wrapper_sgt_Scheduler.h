#ifndef _WRAPPERS_WRAPPER_SGT_SCHEDULER_H_
#define _WRAPPERS_WRAPPER_SGT_SCHEDULER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/Scheduler.h>

class wrapper_sgt_Scheduler : public sgt::Scheduler, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Scheduler() {
		logDEBUG3("Calling delete function for wrapper sgt_Scheduler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::Scheduler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Scheduler(lua_State* L, lua_Table* dum, const char * type) 
		: sgt::Scheduler(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::Scheduler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool sgt::Scheduler::supportsPrefetch(bool gpuTasks)
	bool supportsPrefetch(bool gpuTasks) {
		THROW_IF(!_obj.pushFunction("supportsPrefetch"),"No implementation for abstract function sgt::Scheduler::supportsPrefetch");
		_obj.pushArg((sgt::Scheduler*)this);
		_obj.pushArg(gpuTasks);
		return (_obj.callFunction<bool>());
	};

	// void sgt::Scheduler::schedule(sgt::Task * task)
	void schedule(sgt::Task * task) {
		THROW_IF(!_obj.pushFunction("schedule"),"No implementation for abstract function sgt::Scheduler::schedule");
		_obj.pushArg((sgt::Scheduler*)this);
		_obj.pushArg(task);
		return (_obj.callFunction<void>());
	};

	// void sgt::Scheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	void reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline) {
		THROW_IF(!_obj.pushFunction("reschedule"),"No implementation for abstract function sgt::Scheduler::reschedule");
		_obj.pushArg((sgt::Scheduler*)this);
		_obj.pushArg(task);
		_obj.pushArg((int)r);
		_obj.pushArg(deadline);
		return (_obj.callFunction<void>());
	};

	// void sgt::Scheduler::run(sgt::Task * task)
	void run(sgt::Task * task) {
		THROW_IF(!_obj.pushFunction("run"),"No implementation for abstract function sgt::Scheduler::run");
		_obj.pushArg((sgt::Scheduler*)this);
		_obj.pushArg(task);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void sgt::Scheduler::swap(sgt::Scheduler * s)
	void public_swap(sgt::Scheduler * s) {
		return sgt::Scheduler::swap(s);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::Scheduler::public_swap(sgt::Scheduler * s)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Scheduler::public_swap(sgt::Scheduler * s) function, expected prototype:\nvoid sgt::Scheduler::public_swap(sgt::Scheduler * s)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Scheduler* s=(Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,2));

		wrapper_sgt_Scheduler* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_Scheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Scheduler::public_swap(sgt::Scheduler *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_swap(s);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

