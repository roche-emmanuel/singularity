#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TaskGraph.h>

class luna_wrapper_sgt_TaskGraph {
public:
	typedef Luna< sgt::TaskGraph > luna_t;

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

		sgt::TaskGraph* self= (sgt::TaskGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TaskGraph >::push(L,self,false);
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
		//sgt::TaskGraph* ptr= dynamic_cast< sgt::TaskGraph* >(Luna< osg::Referenced >::check(L,1));
		sgt::TaskGraph* ptr= luna_caster< osg::Referenced, sgt::TaskGraph >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TaskGraph >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_TaskListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::TaskGraph* ptr= dynamic_cast< sgt::TaskGraph* >(Luna< sgt::TaskListener >::check(L,1));
		sgt::TaskGraph* ptr= luna_caster< sgt::TaskListener, sgt::TaskGraph >::cast(Luna< sgt::TaskListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TaskGraph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24456226) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsDone(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDependencies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverseDependencies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDependency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDependency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAndGetDependencies(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24456226) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearDependencies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_taskStateChanged(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_completionDateChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24456226) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setIsDone(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_taskStateChanged(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_completionDateChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TaskGraph::TaskGraph()
	static sgt::TaskGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskGraph() function, expected prototype:\nsgt::TaskGraph::TaskGraph()\nClass arguments details:\n");
		}


		return new sgt::TaskGraph();
	}

	// sgt::TaskGraph::TaskGraph(sgt::Task * arg1)
	static sgt::TaskGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskGraph(sgt::Task * arg1) function, expected prototype:\nsgt::TaskGraph::TaskGraph(sgt::Task * arg1)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* _arg1=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,1));

		return new sgt::TaskGraph(_arg1);
	}

	// sgt::TaskGraph::TaskGraph(lua_Table * data)
	static sgt::TaskGraph* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskGraph(lua_Table * data) function, expected prototype:\nsgt::TaskGraph::TaskGraph(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_TaskGraph(L,NULL);
	}

	// sgt::TaskGraph::TaskGraph(lua_Table * data, sgt::Task * arg2)
	static sgt::TaskGraph* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskGraph(lua_Table * data, sgt::Task * arg2) function, expected prototype:\nsgt::TaskGraph::TaskGraph(lua_Table * data, sgt::Task * arg2)\nClass arguments details:\narg 2 ID = 44367388\n");
		}

		sgt::Task* _arg2=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		return new wrapper_sgt_TaskGraph(L,NULL, _arg2);
	}

	// Overload binder for sgt::TaskGraph::TaskGraph
	static sgt::TaskGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TaskGraph, cannot match any of the overloads for function TaskGraph:\n  TaskGraph()\n  TaskGraph(sgt::Task *)\n  TaskGraph(lua_Table *)\n  TaskGraph(lua_Table *, sgt::Task *)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::TaskGraph::init(sgt::Task::TaskSet & initialized)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::init(sgt::Task::TaskSet & initialized) function, expected prototype:\nvoid sgt::TaskGraph::init(sgt::Task::TaskSet & initialized)\nClass arguments details:\narg 1 ID = 32041632\n");
		}

		sgt::Task::TaskSet* initialized_ptr=(Luna< std::set< sgtPtr< sgt::Task > > >::checkSubType< sgt::Task::TaskSet >(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in sgt::TaskGraph::init function");
		}
		sgt::Task::TaskSet & initialized=*initialized_ptr;

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::init(sgt::Task::TaskSet &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->init(initialized);

		return 0;
	}

	// void sgt::TaskGraph::setIsDone(bool done, unsigned int t, sgt::Task::reason r)
	static int _bind_setIsDone(lua_State *L) {
		if (!_lg_typecheck_setIsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::setIsDone(bool done, unsigned int t, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskGraph::setIsDone(bool done, unsigned int t, sgt::Task::reason r)\nClass arguments details:\n");
		}

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::setIsDone(bool, unsigned int, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setIsDone(done, t, r);

		return 0;
	}

	// void sgt::TaskGraph::setPredecessorsCompletionDate(unsigned int t)
	static int _bind_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_setPredecessorsCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid sgt::TaskGraph::setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n");
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::setPredecessorsCompletionDate(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setPredecessorsCompletionDate(t);

		return 0;
	}

	// bool sgt::TaskGraph::isEmpty()
	static int _bind_isEmpty(lua_State *L) {
		if (!_lg_typecheck_isEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TaskGraph::isEmpty() function, expected prototype:\nbool sgt::TaskGraph::isEmpty()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TaskGraph::isEmpty(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::TaskGraph::TaskIterator sgt::TaskGraph::getAllTasks()
	static int _bind_getAllTasks(lua_State *L) {
		if (!_lg_typecheck_getAllTasks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskIterator sgt::TaskGraph::getAllTasks() function, expected prototype:\nsgt::TaskGraph::TaskIterator sgt::TaskGraph::getAllTasks()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::TaskGraph::TaskIterator sgt::TaskGraph::getAllTasks(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		sgt::TaskGraph::TaskIterator stack_lret = self->getAllTasks();
		sgt::TaskGraph::TaskIterator* lret = new sgt::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// sgt::TaskGraph::TaskIterator sgt::TaskGraph::getFirstTasks()
	static int _bind_getFirstTasks(lua_State *L) {
		if (!_lg_typecheck_getFirstTasks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskIterator sgt::TaskGraph::getFirstTasks() function, expected prototype:\nsgt::TaskGraph::TaskIterator sgt::TaskGraph::getFirstTasks()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::TaskGraph::TaskIterator sgt::TaskGraph::getFirstTasks(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		sgt::TaskGraph::TaskIterator stack_lret = self->getFirstTasks();
		sgt::TaskGraph::TaskIterator* lret = new sgt::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// sgt::TaskGraph::TaskIterator sgt::TaskGraph::getLastTasks()
	static int _bind_getLastTasks(lua_State *L) {
		if (!_lg_typecheck_getLastTasks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskIterator sgt::TaskGraph::getLastTasks() function, expected prototype:\nsgt::TaskGraph::TaskIterator sgt::TaskGraph::getLastTasks()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::TaskGraph::TaskIterator sgt::TaskGraph::getLastTasks(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		sgt::TaskGraph::TaskIterator stack_lret = self->getLastTasks();
		sgt::TaskGraph::TaskIterator* lret = new sgt::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// sgt::TaskGraph::TaskIterator sgt::TaskGraph::getDependencies(sgt::Task * t)
	static int _bind_getDependencies(lua_State *L) {
		if (!_lg_typecheck_getDependencies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskIterator sgt::TaskGraph::getDependencies(sgt::Task * t) function, expected prototype:\nsgt::TaskGraph::TaskIterator sgt::TaskGraph::getDependencies(sgt::Task * t)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::TaskGraph::TaskIterator sgt::TaskGraph::getDependencies(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		sgt::TaskGraph::TaskIterator stack_lret = self->getDependencies(t);
		sgt::TaskGraph::TaskIterator* lret = new sgt::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// sgt::TaskGraph::TaskIterator sgt::TaskGraph::getInverseDependencies(sgt::Task * t)
	static int _bind_getInverseDependencies(lua_State *L) {
		if (!_lg_typecheck_getInverseDependencies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskGraph::TaskIterator sgt::TaskGraph::getInverseDependencies(sgt::Task * t) function, expected prototype:\nsgt::TaskGraph::TaskIterator sgt::TaskGraph::getInverseDependencies(sgt::Task * t)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::TaskGraph::TaskIterator sgt::TaskGraph::getInverseDependencies(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		sgt::TaskGraph::TaskIterator stack_lret = self->getInverseDependencies(t);
		sgt::TaskGraph::TaskIterator* lret = new sgt::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// void sgt::TaskGraph::addTask(sgt::Task * t)
	static int _bind_addTask(lua_State *L) {
		if (!_lg_typecheck_addTask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::addTask(sgt::Task * t) function, expected prototype:\nvoid sgt::TaskGraph::addTask(sgt::Task * t)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::addTask(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addTask(t);

		return 0;
	}

	// void sgt::TaskGraph::removeTask(sgt::Task * t)
	static int _bind_removeTask(lua_State *L) {
		if (!_lg_typecheck_removeTask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::removeTask(sgt::Task * t) function, expected prototype:\nvoid sgt::TaskGraph::removeTask(sgt::Task * t)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::removeTask(sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeTask(t);

		return 0;
	}

	// void sgt::TaskGraph::addDependency(sgt::Task * src, sgt::Task * dst)
	static int _bind_addDependency(lua_State *L) {
		if (!_lg_typecheck_addDependency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::addDependency(sgt::Task * src, sgt::Task * dst) function, expected prototype:\nvoid sgt::TaskGraph::addDependency(sgt::Task * src, sgt::Task * dst)\nClass arguments details:\narg 1 ID = 44367388\narg 2 ID = 44367388\n");
		}

		sgt::Task* src=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task* dst=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,3));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::addDependency(sgt::Task *, sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addDependency(src, dst);

		return 0;
	}

	// void sgt::TaskGraph::removeDependency(sgt::Task * src, sgt::Task * dst)
	static int _bind_removeDependency(lua_State *L) {
		if (!_lg_typecheck_removeDependency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::removeDependency(sgt::Task * src, sgt::Task * dst) function, expected prototype:\nvoid sgt::TaskGraph::removeDependency(sgt::Task * src, sgt::Task * dst)\nClass arguments details:\narg 1 ID = 44367388\narg 2 ID = 44367388\n");
		}

		sgt::Task* src=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task* dst=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,3));

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::removeDependency(sgt::Task *, sgt::Task *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeDependency(src, dst);

		return 0;
	}

	// void sgt::TaskGraph::removeAndGetDependencies(sgt::Task * src, sgt::Task::TaskSet & deletedDependencies)
	static int _bind_removeAndGetDependencies(lua_State *L) {
		if (!_lg_typecheck_removeAndGetDependencies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::removeAndGetDependencies(sgt::Task * src, sgt::Task::TaskSet & deletedDependencies) function, expected prototype:\nvoid sgt::TaskGraph::removeAndGetDependencies(sgt::Task * src, sgt::Task::TaskSet & deletedDependencies)\nClass arguments details:\narg 1 ID = 44367388\narg 2 ID = 32041632\n");
		}

		sgt::Task* src=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		sgt::Task::TaskSet* deletedDependencies_ptr=(Luna< std::set< sgtPtr< sgt::Task > > >::checkSubType< sgt::Task::TaskSet >(L,3));
		if( !deletedDependencies_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deletedDependencies in sgt::TaskGraph::removeAndGetDependencies function");
		}
		sgt::Task::TaskSet & deletedDependencies=*deletedDependencies_ptr;

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::removeAndGetDependencies(sgt::Task *, sgt::Task::TaskSet &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeAndGetDependencies(src, deletedDependencies);

		return 0;
	}

	// void sgt::TaskGraph::clearDependencies()
	static int _bind_clearDependencies(lua_State *L) {
		if (!_lg_typecheck_clearDependencies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::clearDependencies() function, expected prototype:\nvoid sgt::TaskGraph::clearDependencies()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::clearDependencies(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->clearDependencies();

		return 0;
	}

	// void sgt::TaskGraph::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	static int _bind_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_taskStateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskGraph::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		bool done=(bool)(lua_toboolean(L,3)==1);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::taskStateChanged(sgt::Task *, bool, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->taskStateChanged(t, done, r);

		return 0;
	}

	// void sgt::TaskGraph::completionDateChanged(sgt::Task * t, unsigned int date)
	static int _bind_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_completionDateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::completionDateChanged(sgt::Task * t, unsigned int date) function, expected prototype:\nvoid sgt::TaskGraph::completionDateChanged(sgt::Task * t, unsigned int date)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::completionDateChanged(sgt::Task *, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->completionDateChanged(t, date);

		return 0;
	}

	// void * sgt::TaskGraph::base_getContext() const
	static int _bind_base_getContext(lua_State *L) {
		if (!_lg_typecheck_base_getContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * sgt::TaskGraph::base_getContext() const function, expected prototype:\nvoid * sgt::TaskGraph::base_getContext() const\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * sgt::TaskGraph::base_getContext() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		void * lret = self->TaskGraph::getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int sgt::TaskGraph::base_getComplexity() const
	static int _bind_base_getComplexity(lua_State *L) {
		if (!_lg_typecheck_base_getComplexity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::TaskGraph::base_getComplexity() const function, expected prototype:\nint sgt::TaskGraph::base_getComplexity() const\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::TaskGraph::base_getComplexity() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->TaskGraph::getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TaskGraph::base_begin()
	static int _bind_base_begin(lua_State *L) {
		if (!_lg_typecheck_base_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_begin() function, expected prototype:\nvoid sgt::TaskGraph::base_begin()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_begin(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::begin();

		return 0;
	}

	// bool sgt::TaskGraph::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TaskGraph::base_run() function, expected prototype:\nbool sgt::TaskGraph::base_run()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TaskGraph::base_run(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->TaskGraph::run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TaskGraph::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_end() function, expected prototype:\nvoid sgt::TaskGraph::base_end()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_end(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::end();

		return 0;
	}

	// bool sgt::TaskGraph::base_isDone()
	static int _bind_base_isDone(lua_State *L) {
		if (!_lg_typecheck_base_isDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TaskGraph::base_isDone() function, expected prototype:\nbool sgt::TaskGraph::base_isDone()\nClass arguments details:\n");
		}


		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TaskGraph::base_isDone(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->TaskGraph::isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TaskGraph::base_init(sgt::Task::TaskSet & initialized)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_init(sgt::Task::TaskSet & initialized) function, expected prototype:\nvoid sgt::TaskGraph::base_init(sgt::Task::TaskSet & initialized)\nClass arguments details:\narg 1 ID = 32041632\n");
		}

		sgt::Task::TaskSet* initialized_ptr=(Luna< std::set< sgtPtr< sgt::Task > > >::checkSubType< sgt::Task::TaskSet >(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in sgt::TaskGraph::base_init function");
		}
		sgt::Task::TaskSet & initialized=*initialized_ptr;

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_init(sgt::Task::TaskSet &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::init(initialized);

		return 0;
	}

	// void sgt::TaskGraph::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r)
	static int _bind_base_setIsDone(lua_State *L) {
		if (!_lg_typecheck_base_setIsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskGraph::base_setIsDone(bool done, unsigned int t, sgt::Task::reason r)\nClass arguments details:\n");
		}

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_setIsDone(bool, unsigned int, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::setIsDone(done, t, r);

		return 0;
	}

	// void sgt::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t)
	static int _bind_base_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_base_setPredecessorsCompletionDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid sgt::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n");
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_setPredecessorsCompletionDate(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::setPredecessorsCompletionDate(t);

		return 0;
	}

	// void sgt::TaskGraph::base_taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	static int _bind_base_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_base_taskStateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskGraph::base_taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		bool done=(bool)(lua_toboolean(L,3)==1);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_taskStateChanged(sgt::Task *, bool, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::taskStateChanged(t, done, r);

		return 0;
	}

	// void sgt::TaskGraph::base_completionDateChanged(sgt::Task * t, unsigned int date)
	static int _bind_base_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_base_completionDateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskGraph::base_completionDateChanged(sgt::Task * t, unsigned int date) function, expected prototype:\nvoid sgt::TaskGraph::base_completionDateChanged(sgt::Task * t, unsigned int date)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		sgt::TaskGraph* self=Luna< osg::Referenced >::checkSubType< sgt::TaskGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskGraph::base_completionDateChanged(sgt::Task *, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TaskGraph::completionDateChanged(t, date);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_sgt_TaskListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_sgt_TaskListener(lua_State *L) {
		if (!_lg_typecheck_baseCast_sgt_TaskListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_sgt_TaskListener function, expected prototype:\nbaseCast()");
		}

		sgt::Object* self=(Luna< sgt::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		sgt::TaskListener* res = luna_caster<sgt::Object,sgt::TaskListener>::cast(self); // dynamic_cast<sgt::TaskListener*>(self);
		if(!res)
			return 0;
			
		Luna< sgt::TaskListener >::push(L,res,false);
		return 1;

	}

};

sgt::TaskGraph* LunaTraits< sgt::TaskGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TaskGraph::_bind_ctor(L);
}

void LunaTraits< sgt::TaskGraph >::_bind_dtor(sgt::TaskGraph* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TaskGraph >::className[] = "TaskGraph";
const char LunaTraits< sgt::TaskGraph >::fullName[] = "sgt::TaskGraph";
const char LunaTraits< sgt::TaskGraph >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TaskGraph >::parents[] = {"sgt.Task", "sgt.TaskListener", 0};
const int LunaTraits< sgt::TaskGraph >::hash = 24276521;
const int LunaTraits< sgt::TaskGraph >::uniqueIDs[] = {50169651, 16284073,0};

luna_RegType LunaTraits< sgt::TaskGraph >::methods[] = {
	{"init", &luna_wrapper_sgt_TaskGraph::_bind_init},
	{"setIsDone", &luna_wrapper_sgt_TaskGraph::_bind_setIsDone},
	{"setPredecessorsCompletionDate", &luna_wrapper_sgt_TaskGraph::_bind_setPredecessorsCompletionDate},
	{"isEmpty", &luna_wrapper_sgt_TaskGraph::_bind_isEmpty},
	{"getAllTasks", &luna_wrapper_sgt_TaskGraph::_bind_getAllTasks},
	{"getFirstTasks", &luna_wrapper_sgt_TaskGraph::_bind_getFirstTasks},
	{"getLastTasks", &luna_wrapper_sgt_TaskGraph::_bind_getLastTasks},
	{"getDependencies", &luna_wrapper_sgt_TaskGraph::_bind_getDependencies},
	{"getInverseDependencies", &luna_wrapper_sgt_TaskGraph::_bind_getInverseDependencies},
	{"addTask", &luna_wrapper_sgt_TaskGraph::_bind_addTask},
	{"removeTask", &luna_wrapper_sgt_TaskGraph::_bind_removeTask},
	{"addDependency", &luna_wrapper_sgt_TaskGraph::_bind_addDependency},
	{"removeDependency", &luna_wrapper_sgt_TaskGraph::_bind_removeDependency},
	{"removeAndGetDependencies", &luna_wrapper_sgt_TaskGraph::_bind_removeAndGetDependencies},
	{"clearDependencies", &luna_wrapper_sgt_TaskGraph::_bind_clearDependencies},
	{"taskStateChanged", &luna_wrapper_sgt_TaskGraph::_bind_taskStateChanged},
	{"completionDateChanged", &luna_wrapper_sgt_TaskGraph::_bind_completionDateChanged},
	{"base_getContext", &luna_wrapper_sgt_TaskGraph::_bind_base_getContext},
	{"base_getComplexity", &luna_wrapper_sgt_TaskGraph::_bind_base_getComplexity},
	{"base_begin", &luna_wrapper_sgt_TaskGraph::_bind_base_begin},
	{"base_run", &luna_wrapper_sgt_TaskGraph::_bind_base_run},
	{"base_end", &luna_wrapper_sgt_TaskGraph::_bind_base_end},
	{"base_isDone", &luna_wrapper_sgt_TaskGraph::_bind_base_isDone},
	{"base_init", &luna_wrapper_sgt_TaskGraph::_bind_base_init},
	{"base_setIsDone", &luna_wrapper_sgt_TaskGraph::_bind_base_setIsDone},
	{"base_setPredecessorsCompletionDate", &luna_wrapper_sgt_TaskGraph::_bind_base_setPredecessorsCompletionDate},
	{"base_taskStateChanged", &luna_wrapper_sgt_TaskGraph::_bind_base_taskStateChanged},
	{"base_completionDateChanged", &luna_wrapper_sgt_TaskGraph::_bind_base_completionDateChanged},
	{"fromVoid", &luna_wrapper_sgt_TaskGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TaskGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TaskGraph::_bind_getTable},
	{"asTaskListener", &luna_wrapper_sgt_TaskGraph::_bind_baseCast_sgt_TaskListener},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TaskGraph >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TaskGraph::_cast_from_Object},
	{"sgt::TaskListener", &luna_wrapper_sgt_TaskGraph::_cast_from_TaskListener},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TaskGraph >::enumValues[] = {
	{0,0}
};


