#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_MultithreadScheduler.h>

class luna_wrapper_sgt_MultithreadScheduler {
public:
	typedef Luna< sgt::MultithreadScheduler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		sgt::MultithreadScheduler* self= (sgt::MultithreadScheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::MultithreadScheduler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::MultithreadScheduler* ptr= dynamic_cast< sgt::MultithreadScheduler* >(Luna< osg::Referenced >::check(L,1));
		sgt::MultithreadScheduler* ptr= luna_caster< osg::Referenced, sgt::MultithreadScheduler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::MultithreadScheduler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_supportsPrefetch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_schedule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reschedule(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_monitorTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_schedulerThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportsPrefetch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_schedule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reschedule(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	static sgt::MultithreadScheduler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) function, expected prototype:\nsgt::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int prefetchRate=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int prefetchQueue=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		float frameRate=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		int nThreads=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new sgt::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads);
	}

	// sgt::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	static sgt::MultithreadScheduler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) function, expected prototype:\nsgt::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int prefetchRate=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int prefetchQueue=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		float frameRate=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		int nThreads=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_sgt_MultithreadScheduler(L,NULL, prefetchRate, prefetchQueue, frameRate, nThreads);
	}

	// Overload binder for sgt::MultithreadScheduler::MultithreadScheduler
	static sgt::MultithreadScheduler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MultithreadScheduler, cannot match any of the overloads for function MultithreadScheduler:\n  MultithreadScheduler(int, int, float, int)\n  MultithreadScheduler(lua_Table *, int, int, float, int)\n");
		return NULL;
	}


	// Function binds:
	// bool sgt::MultithreadScheduler::supportsPrefetch(bool gpuTasks)
	static int _bind_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_supportsPrefetch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::MultithreadScheduler::supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool sgt::MultithreadScheduler::supportsPrefetch(bool gpuTasks)\nClass arguments details:\n");
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::MultithreadScheduler::supportsPrefetch(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::MultithreadScheduler::schedule(sgt::Task * task)
	static int _bind_schedule(lua_State *L) {
		if (!_lg_typecheck_schedule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::schedule(sgt::Task * task) function, expected prototype:\nvoid sgt::MultithreadScheduler::schedule(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::schedule(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->schedule(task);

		return 0;
	}

	// void sgt::MultithreadScheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	static int _bind_reschedule(lua_State *L) {
		if (!_lg_typecheck_reschedule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid sgt::MultithreadScheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::reschedule(sgt::Task *, sgt::Task::reason, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->reschedule(task, r, deadline);

		return 0;
	}

	// void sgt::MultithreadScheduler::run(sgt::Task * task)
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::run(sgt::Task * task) function, expected prototype:\nvoid sgt::MultithreadScheduler::run(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::run(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->run(task);

		return 0;
	}

	// void sgt::MultithreadScheduler::monitorTask(const std::string & taskType)
	static int _bind_monitorTask(lua_State *L) {
		if (!_lg_typecheck_monitorTask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::monitorTask(const std::string & taskType) function, expected prototype:\nvoid sgt::MultithreadScheduler::monitorTask(const std::string & taskType)\nClass arguments details:\n");
		}

		std::string taskType(lua_tostring(L,2),lua_objlen(L,2));

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::monitorTask(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->monitorTask(taskType);

		return 0;
	}

	// void sgt::MultithreadScheduler::schedulerThread()
	static int _bind_schedulerThread(lua_State *L) {
		if (!_lg_typecheck_schedulerThread(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::schedulerThread() function, expected prototype:\nvoid sgt::MultithreadScheduler::schedulerThread()\nClass arguments details:\n");
		}


		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::schedulerThread(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->schedulerThread();

		return 0;
	}

	// bool sgt::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks)
	static int _bind_base_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_base_supportsPrefetch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool sgt::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks)\nClass arguments details:\n");
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::MultithreadScheduler::base_supportsPrefetch(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->MultithreadScheduler::supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::MultithreadScheduler::base_schedule(sgt::Task * task)
	static int _bind_base_schedule(lua_State *L) {
		if (!_lg_typecheck_base_schedule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::base_schedule(sgt::Task * task) function, expected prototype:\nvoid sgt::MultithreadScheduler::base_schedule(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::base_schedule(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->MultithreadScheduler::schedule(task);

		return 0;
	}

	// void sgt::MultithreadScheduler::base_reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	static int _bind_base_reschedule(lua_State *L) {
		if (!_lg_typecheck_base_reschedule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::base_reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid sgt::MultithreadScheduler::base_reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::base_reschedule(sgt::Task *, sgt::Task::reason, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->MultithreadScheduler::reschedule(task, r, deadline);

		return 0;
	}

	// void sgt::MultithreadScheduler::base_run(sgt::Task * task)
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::MultithreadScheduler::base_run(sgt::Task * task) function, expected prototype:\nvoid sgt::MultithreadScheduler::base_run(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::MultithreadScheduler* self=Luna< osg::Referenced >::checkSubType< sgt::MultithreadScheduler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::MultithreadScheduler::base_run(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->MultithreadScheduler::run(task);

		return 0;
	}


	// Operator binds:

};

sgt::MultithreadScheduler* LunaTraits< sgt::MultithreadScheduler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_MultithreadScheduler::_bind_ctor(L);
}

void LunaTraits< sgt::MultithreadScheduler >::_bind_dtor(sgt::MultithreadScheduler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::MultithreadScheduler >::className[] = "MultithreadScheduler";
const char LunaTraits< sgt::MultithreadScheduler >::fullName[] = "sgt::MultithreadScheduler";
const char LunaTraits< sgt::MultithreadScheduler >::moduleName[] = "sgt";
const char* LunaTraits< sgt::MultithreadScheduler >::parents[] = {"sgt.Scheduler", 0};
const int LunaTraits< sgt::MultithreadScheduler >::hash = 92126983;
const int LunaTraits< sgt::MultithreadScheduler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::MultithreadScheduler >::methods[] = {
	{"supportsPrefetch", &luna_wrapper_sgt_MultithreadScheduler::_bind_supportsPrefetch},
	{"schedule", &luna_wrapper_sgt_MultithreadScheduler::_bind_schedule},
	{"reschedule", &luna_wrapper_sgt_MultithreadScheduler::_bind_reschedule},
	{"run", &luna_wrapper_sgt_MultithreadScheduler::_bind_run},
	{"monitorTask", &luna_wrapper_sgt_MultithreadScheduler::_bind_monitorTask},
	{"schedulerThread", &luna_wrapper_sgt_MultithreadScheduler::_bind_schedulerThread},
	{"base_supportsPrefetch", &luna_wrapper_sgt_MultithreadScheduler::_bind_base_supportsPrefetch},
	{"base_schedule", &luna_wrapper_sgt_MultithreadScheduler::_bind_base_schedule},
	{"base_reschedule", &luna_wrapper_sgt_MultithreadScheduler::_bind_base_reschedule},
	{"base_run", &luna_wrapper_sgt_MultithreadScheduler::_bind_base_run},
	{"fromVoid", &luna_wrapper_sgt_MultithreadScheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_MultithreadScheduler::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_MultithreadScheduler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::MultithreadScheduler >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_MultithreadScheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::MultithreadScheduler >::enumValues[] = {
	{0,0}
};


