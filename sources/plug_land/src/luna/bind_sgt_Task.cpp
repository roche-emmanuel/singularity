#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Task.h>

class luna_wrapper_sgt_Task {
public:
	typedef Luna< sgt::Task > luna_t;

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

		sgt::Task* self= (sgt::Task*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Task >::push(L,self,false);
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
		//sgt::Task* ptr= dynamic_cast< sgt::Task* >(Luna< osg::Referenced >::check(L,1));
		sgt::Task* ptr= luna_caster< osg::Referenced, sgt::Task >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Task >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isGpuTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeadline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeadline(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComplexity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42469568) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsDone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExpectedDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActualDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_logStatistics(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getComplexity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42469568) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setIsDone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Task::Task(const char * type, bool gpuTask, unsigned int deadline)
	static sgt::Task* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Task::Task(const char * type, bool gpuTask, unsigned int deadline) function, expected prototype:\nsgt::Task::Task(const char * type, bool gpuTask, unsigned int deadline)\nClass arguments details:\n");
		}

		const char * type=(const char *)lua_tostring(L,1);
		bool gpuTask=(bool)(lua_toboolean(L,2)==1);
		unsigned int deadline=(unsigned int)lua_tointeger(L,3);

		return new sgt::Task(type, gpuTask, deadline);
	}

	// sgt::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline)
	static sgt::Task* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline) function, expected prototype:\nsgt::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline)\nClass arguments details:\n");
		}

		const char * type=(const char *)lua_tostring(L,2);
		bool gpuTask=(bool)(lua_toboolean(L,3)==1);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		return new wrapper_sgt_Task(L,NULL, type, gpuTask, deadline);
	}

	// Overload binder for sgt::Task::Task
	static sgt::Task* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Task, cannot match any of the overloads for function Task:\n  Task(const char *, bool, unsigned int)\n  Task(lua_Table *, const char *, bool, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void * sgt::Task::getContext() const
	static int _bind_getContext(lua_State *L) {
		if (!_lg_typecheck_getContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * sgt::Task::getContext() const function, expected prototype:\nvoid * sgt::Task::getContext() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * sgt::Task::getContext() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		void * lret = self->getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool sgt::Task::isGpuTask() const
	static int _bind_isGpuTask(lua_State *L) {
		if (!_lg_typecheck_isGpuTask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Task::isGpuTask() const function, expected prototype:\nbool sgt::Task::isGpuTask() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Task::isGpuTask() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isGpuTask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int sgt::Task::getDeadline() const
	static int _bind_getDeadline(lua_State *L) {
		if (!_lg_typecheck_getDeadline(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int sgt::Task::getDeadline() const function, expected prototype:\nunsigned int sgt::Task::getDeadline() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int sgt::Task::getDeadline() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getDeadline();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Task::setDeadline(unsigned int deadline)
	static int _bind_setDeadline(lua_State *L) {
		if (!_lg_typecheck_setDeadline(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::setDeadline(unsigned int deadline) function, expected prototype:\nvoid sgt::Task::setDeadline(unsigned int deadline)\nClass arguments details:\n");
		}

		unsigned int deadline=(unsigned int)lua_tointeger(L,2);

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::setDeadline(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDeadline(deadline);

		return 0;
	}

	// int sgt::Task::getComplexity() const
	static int _bind_getComplexity(lua_State *L) {
		if (!_lg_typecheck_getComplexity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::Task::getComplexity() const function, expected prototype:\nint sgt::Task::getComplexity() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::Task::getComplexity() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Task::init(std::set< sgt::Task * > & initialized)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::init(std::set< sgt::Task * > & initialized) function, expected prototype:\nvoid sgt::Task::init(std::set< sgt::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::set< sgt::Task * >* initialized_ptr=(Luna< std::set< sgt::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in sgt::Task::init function");
		}
		std::set< sgt::Task * > & initialized=*initialized_ptr;

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::init(std::set< sgt::Task * > &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->init(initialized);

		return 0;
	}

	// void sgt::Task::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::begin() function, expected prototype:\nvoid sgt::Task::begin()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::begin(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->begin();

		return 0;
	}

	// bool sgt::Task::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Task::run() function, expected prototype:\nbool sgt::Task::run()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Task::run(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::Task::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::end() function, expected prototype:\nvoid sgt::Task::end()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::end(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->end();

		return 0;
	}

	// bool sgt::Task::isDone()
	static int _bind_isDone(lua_State *L) {
		if (!_lg_typecheck_isDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Task::isDone() function, expected prototype:\nbool sgt::Task::isDone()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Task::isDone(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::Task::setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED)
	static int _bind_setIsDone(lua_State *L) {
		if (!_lg_typecheck_setIsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED) function, expected prototype:\nvoid sgt::Task::setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		sgt::Task::reason r=luatop>3 ? (sgt::Task::reason)lua_tointeger(L,4) : (sgt::Task::reason)sgt::Task::DATA_NEEDED;

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::setIsDone(bool, unsigned int, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setIsDone(done, t, r);

		return 0;
	}

	// unsigned int sgt::Task::getCompletionDate()
	static int _bind_getCompletionDate(lua_State *L) {
		if (!_lg_typecheck_getCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int sgt::Task::getCompletionDate() function, expected prototype:\nunsigned int sgt::Task::getCompletionDate()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int sgt::Task::getCompletionDate(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getCompletionDate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int sgt::Task::getPredecessorsCompletionDate()
	static int _bind_getPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_getPredecessorsCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int sgt::Task::getPredecessorsCompletionDate() function, expected prototype:\nunsigned int sgt::Task::getPredecessorsCompletionDate()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int sgt::Task::getPredecessorsCompletionDate(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getPredecessorsCompletionDate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Task::setPredecessorsCompletionDate(unsigned int t)
	static int _bind_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_setPredecessorsCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid sgt::Task::setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n");
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::setPredecessorsCompletionDate(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setPredecessorsCompletionDate(t);

		return 0;
	}

	// float sgt::Task::getExpectedDuration()
	static int _bind_getExpectedDuration(lua_State *L) {
		if (!_lg_typecheck_getExpectedDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::Task::getExpectedDuration() function, expected prototype:\nfloat sgt::Task::getExpectedDuration()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::Task::getExpectedDuration(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getExpectedDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Task::setActualDuration(float duration)
	static int _bind_setActualDuration(lua_State *L) {
		if (!_lg_typecheck_setActualDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::setActualDuration(float duration) function, expected prototype:\nvoid sgt::Task::setActualDuration(float duration)\nClass arguments details:\n");
		}

		float duration=(float)lua_tonumber(L,2);

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::setActualDuration(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setActualDuration(duration);

		return 0;
	}

	// void sgt::Task::addListener(sgt::TaskListener * l)
	static int _bind_addListener(lua_State *L) {
		if (!_lg_typecheck_addListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::addListener(sgt::TaskListener * l) function, expected prototype:\nvoid sgt::Task::addListener(sgt::TaskListener * l)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::TaskListener* l=(Luna< osg::Referenced >::checkSubType< sgt::TaskListener >(L,2));

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::addListener(sgt::TaskListener *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addListener(l);

		return 0;
	}

	// void sgt::Task::removeListener(sgt::TaskListener * l)
	static int _bind_removeListener(lua_State *L) {
		if (!_lg_typecheck_removeListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::removeListener(sgt::TaskListener * l) function, expected prototype:\nvoid sgt::Task::removeListener(sgt::TaskListener * l)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::TaskListener* l=(Luna< osg::Referenced >::checkSubType< sgt::TaskListener >(L,2));

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::removeListener(sgt::TaskListener *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeListener(l);

		return 0;
	}

	// static void sgt::Task::logStatistics()
	static int _bind_logStatistics(lua_State *L) {
		if (!_lg_typecheck_logStatistics(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void sgt::Task::logStatistics() function, expected prototype:\nstatic void sgt::Task::logStatistics()\nClass arguments details:\n");
		}


		sgt::Task::logStatistics();

		return 0;
	}

	// void * sgt::Task::base_getContext() const
	static int _bind_base_getContext(lua_State *L) {
		if (!_lg_typecheck_base_getContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * sgt::Task::base_getContext() const function, expected prototype:\nvoid * sgt::Task::base_getContext() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * sgt::Task::base_getContext() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		void * lret = self->Task::getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int sgt::Task::base_getComplexity() const
	static int _bind_base_getComplexity(lua_State *L) {
		if (!_lg_typecheck_base_getComplexity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::Task::base_getComplexity() const function, expected prototype:\nint sgt::Task::base_getComplexity() const\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::Task::base_getComplexity() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->Task::getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Task::base_init(std::set< sgt::Task * > & initialized)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::base_init(std::set< sgt::Task * > & initialized) function, expected prototype:\nvoid sgt::Task::base_init(std::set< sgt::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::set< sgt::Task * >* initialized_ptr=(Luna< std::set< sgt::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in sgt::Task::base_init function");
		}
		std::set< sgt::Task * > & initialized=*initialized_ptr;

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::base_init(std::set< sgt::Task * > &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Task::init(initialized);

		return 0;
	}

	// void sgt::Task::base_begin()
	static int _bind_base_begin(lua_State *L) {
		if (!_lg_typecheck_base_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::base_begin() function, expected prototype:\nvoid sgt::Task::base_begin()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::base_begin(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Task::begin();

		return 0;
	}

	// bool sgt::Task::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Task::base_run() function, expected prototype:\nbool sgt::Task::base_run()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Task::base_run(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Task::run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::Task::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::base_end() function, expected prototype:\nvoid sgt::Task::base_end()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::base_end(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Task::end();

		return 0;
	}

	// bool sgt::Task::base_isDone()
	static int _bind_base_isDone(lua_State *L) {
		if (!_lg_typecheck_base_isDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Task::base_isDone() function, expected prototype:\nbool sgt::Task::base_isDone()\nClass arguments details:\n");
		}


		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Task::base_isDone(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Task::isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::Task::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED)
	static int _bind_base_setIsDone(lua_State *L) {
		if (!_lg_typecheck_base_setIsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED) function, expected prototype:\nvoid sgt::Task::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r = sgt::Task::DATA_NEEDED)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		sgt::Task::reason r=luatop>3 ? (sgt::Task::reason)lua_tointeger(L,4) : (sgt::Task::reason)sgt::Task::DATA_NEEDED;

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::base_setIsDone(bool, unsigned int, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Task::setIsDone(done, t, r);

		return 0;
	}

	// void sgt::Task::base_setPredecessorsCompletionDate(unsigned int t)
	static int _bind_base_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_base_setPredecessorsCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Task::base_setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid sgt::Task::base_setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n");
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		sgt::Task* self=Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Task::base_setPredecessorsCompletionDate(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Task::setPredecessorsCompletionDate(t);

		return 0;
	}


	// Operator binds:

};

sgt::Task* LunaTraits< sgt::Task >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Task::_bind_ctor(L);
}

void LunaTraits< sgt::Task >::_bind_dtor(sgt::Task* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Task >::className[] = "Task";
const char LunaTraits< sgt::Task >::fullName[] = "sgt::Task";
const char LunaTraits< sgt::Task >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Task >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::Task >::hash = 30475404;
const int LunaTraits< sgt::Task >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Task >::methods[] = {
	{"getContext", &luna_wrapper_sgt_Task::_bind_getContext},
	{"isGpuTask", &luna_wrapper_sgt_Task::_bind_isGpuTask},
	{"getDeadline", &luna_wrapper_sgt_Task::_bind_getDeadline},
	{"setDeadline", &luna_wrapper_sgt_Task::_bind_setDeadline},
	{"getComplexity", &luna_wrapper_sgt_Task::_bind_getComplexity},
	{"init", &luna_wrapper_sgt_Task::_bind_init},
	{"begin", &luna_wrapper_sgt_Task::_bind_begin},
	{"run", &luna_wrapper_sgt_Task::_bind_run},
	{"end", &luna_wrapper_sgt_Task::_bind_end},
	{"isDone", &luna_wrapper_sgt_Task::_bind_isDone},
	{"setIsDone", &luna_wrapper_sgt_Task::_bind_setIsDone},
	{"getCompletionDate", &luna_wrapper_sgt_Task::_bind_getCompletionDate},
	{"getPredecessorsCompletionDate", &luna_wrapper_sgt_Task::_bind_getPredecessorsCompletionDate},
	{"setPredecessorsCompletionDate", &luna_wrapper_sgt_Task::_bind_setPredecessorsCompletionDate},
	{"getExpectedDuration", &luna_wrapper_sgt_Task::_bind_getExpectedDuration},
	{"setActualDuration", &luna_wrapper_sgt_Task::_bind_setActualDuration},
	{"addListener", &luna_wrapper_sgt_Task::_bind_addListener},
	{"removeListener", &luna_wrapper_sgt_Task::_bind_removeListener},
	{"logStatistics", &luna_wrapper_sgt_Task::_bind_logStatistics},
	{"base_getContext", &luna_wrapper_sgt_Task::_bind_base_getContext},
	{"base_getComplexity", &luna_wrapper_sgt_Task::_bind_base_getComplexity},
	{"base_init", &luna_wrapper_sgt_Task::_bind_base_init},
	{"base_begin", &luna_wrapper_sgt_Task::_bind_base_begin},
	{"base_run", &luna_wrapper_sgt_Task::_bind_base_run},
	{"base_end", &luna_wrapper_sgt_Task::_bind_base_end},
	{"base_isDone", &luna_wrapper_sgt_Task::_bind_base_isDone},
	{"base_setIsDone", &luna_wrapper_sgt_Task::_bind_base_setIsDone},
	{"base_setPredecessorsCompletionDate", &luna_wrapper_sgt_Task::_bind_base_setPredecessorsCompletionDate},
	{"fromVoid", &luna_wrapper_sgt_Task::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Task::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Task::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Task >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_Task::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Task >::enumValues[] = {
	{"DEPENDENCY_CHANGED", sgt::Task::DEPENDENCY_CHANGED},
	{"DATA_CHANGED", sgt::Task::DATA_CHANGED},
	{"DATA_NEEDED", sgt::Task::DATA_NEEDED},
	{0,0}
};


