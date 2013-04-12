#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TaskListener.h>

class luna_wrapper_sgt_TaskListener {
public:
	typedef Luna< sgt::TaskListener > luna_t;

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

		sgt::TaskListener* self= (sgt::TaskListener*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TaskListener >::push(L,self,false);
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
		//sgt::TaskListener* ptr= dynamic_cast< sgt::TaskListener* >(Luna< osg::Referenced >::check(L,1));
		sgt::TaskListener* ptr= luna_caster< osg::Referenced, sgt::TaskListener >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TaskListener >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TaskListener::TaskListener(lua_Table * data)
	static sgt::TaskListener* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TaskListener::TaskListener(lua_Table * data) function, expected prototype:\nsgt::TaskListener::TaskListener(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_TaskListener(L,NULL);
	}


	// Function binds:
	// void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	static int _bind_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_taskStateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		bool done=(bool)(lua_toboolean(L,3)==1);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskListener* self=Luna< osg::Referenced >::checkSubType< sgt::TaskListener >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskListener::taskStateChanged(sgt::Task *, bool, sgt::Task::reason). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->taskStateChanged(t, done, r);

		return 0;
	}

	// void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)
	static int _bind_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_completionDateChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date) function, expected prototype:\nvoid sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)\nClass arguments details:\narg 1 ID = 44367388\n");
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		sgt::TaskListener* self=Luna< osg::Referenced >::checkSubType< sgt::TaskListener >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TaskListener::completionDateChanged(sgt::Task *, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->completionDateChanged(t, date);

		return 0;
	}


	// Operator binds:

};

sgt::TaskListener* LunaTraits< sgt::TaskListener >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TaskListener::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	// void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)
}

void LunaTraits< sgt::TaskListener >::_bind_dtor(sgt::TaskListener* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TaskListener >::className[] = "TaskListener";
const char LunaTraits< sgt::TaskListener >::fullName[] = "sgt::TaskListener";
const char LunaTraits< sgt::TaskListener >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TaskListener >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TaskListener >::hash = 16284073;
const int LunaTraits< sgt::TaskListener >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TaskListener >::methods[] = {
	{"taskStateChanged", &luna_wrapper_sgt_TaskListener::_bind_taskStateChanged},
	{"completionDateChanged", &luna_wrapper_sgt_TaskListener::_bind_completionDateChanged},
	{"fromVoid", &luna_wrapper_sgt_TaskListener::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TaskListener::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TaskListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TaskListener >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TaskListener::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TaskListener >::enumValues[] = {
	{0,0}
};


