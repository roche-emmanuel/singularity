#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Scheduler.h>

class luna_wrapper_sgt_Scheduler {
public:
	typedef Luna< sgt::Scheduler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Scheduler* self= (sgt::Scheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Scheduler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//sgt::Scheduler* ptr= dynamic_cast< sgt::Scheduler* >(Luna< osg::Referenced >::check(L,1));
		sgt::Scheduler* ptr= luna_caster< osg::Referenced, sgt::Scheduler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Scheduler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Scheduler::Scheduler(lua_Table * data, const char * type)
	static sgt::Scheduler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Scheduler::Scheduler(lua_Table * data, const char * type) function, expected prototype:\nsgt::Scheduler::Scheduler(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_sgt_Scheduler(L,NULL, type);
	}


	// Function binds:
	// bool sgt::Scheduler::supportsPrefetch(bool gpuTasks)
	static int _bind_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_supportsPrefetch(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::Scheduler::supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool sgt::Scheduler::supportsPrefetch(bool gpuTasks)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		sgt::Scheduler* self=Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::Scheduler::supportsPrefetch(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::Scheduler::schedule(sgt::Task * task)
	static int _bind_schedule(lua_State *L) {
		if (!_lg_typecheck_schedule(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Scheduler::schedule(sgt::Task * task) function, expected prototype:\nvoid sgt::Scheduler::schedule(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::Scheduler* self=Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Scheduler::schedule(sgt::Task *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->schedule(task);

		return 0;
	}

	// void sgt::Scheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	static int _bind_reschedule(lua_State *L) {
		if (!_lg_typecheck_reschedule(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Scheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid sgt::Scheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		sgt::Scheduler* self=Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Scheduler::reschedule(sgt::Task *, sgt::Task::reason, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reschedule(task, r, deadline);

		return 0;
	}

	// void sgt::Scheduler::run(sgt::Task * task)
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Scheduler::run(sgt::Task * task) function, expected prototype:\nvoid sgt::Scheduler::run(sgt::Task * task)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::Scheduler* self=Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Scheduler::run(sgt::Task *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run(task);

		return 0;
	}


	// Operator binds:

};

sgt::Scheduler* LunaTraits< sgt::Scheduler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Scheduler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool sgt::Scheduler::supportsPrefetch(bool gpuTasks)
	// void sgt::Scheduler::schedule(sgt::Task * task)
	// void sgt::Scheduler::reschedule(sgt::Task * task, sgt::Task::reason r, unsigned int deadline)
	// void sgt::Scheduler::run(sgt::Task * task)
}

void LunaTraits< sgt::Scheduler >::_bind_dtor(sgt::Scheduler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Scheduler >::className[] = "Scheduler";
const char LunaTraits< sgt::Scheduler >::fullName[] = "sgt::Scheduler";
const char LunaTraits< sgt::Scheduler >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Scheduler >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::Scheduler >::hash = 51130971;
const int LunaTraits< sgt::Scheduler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Scheduler >::methods[] = {
	{"supportsPrefetch", &luna_wrapper_sgt_Scheduler::_bind_supportsPrefetch},
	{"schedule", &luna_wrapper_sgt_Scheduler::_bind_schedule},
	{"reschedule", &luna_wrapper_sgt_Scheduler::_bind_reschedule},
	{"run", &luna_wrapper_sgt_Scheduler::_bind_run},
	{"fromVoid", &luna_wrapper_sgt_Scheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Scheduler::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Scheduler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Scheduler >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_Scheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Scheduler >::enumValues[] = {
	{0,0}
};


