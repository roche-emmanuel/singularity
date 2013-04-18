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
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TaskListener* self=(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<sgt::TaskListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16284073) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::TaskListener*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TaskListener* rhs =(Luna< sgt::TaskListener >::check(L,2));
		sgt::TaskListener* self=(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		sgt::TaskListener* self= (sgt::TaskListener*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TaskListener >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16284073) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::TaskListener* self=(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::TaskListener");
		
		return luna_dynamicCast(L,converters,"sgt::TaskListener",name);
	}


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
			luaL_error(L, "luna typecheck failed in sgt::TaskListener::TaskListener(lua_Table * data) function, expected prototype:\nsgt::TaskListener::TaskListener(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_TaskListener(L,NULL);
	}


	// Function binds:
	// void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	static int _bind_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_taskStateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) function, expected prototype:\nvoid sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		bool done=(bool)(lua_toboolean(L,3)==1);
		sgt::Task::reason r=(sgt::Task::reason)lua_tointeger(L,4);

		sgt::TaskListener* self=(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TaskListener::taskStateChanged(sgt::Task *, bool, sgt::Task::reason). Got : '%s'\n%s",typeid(Luna< sgt::TaskListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->taskStateChanged(t, done, r);

		return 0;
	}

	// void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)
	static int _bind_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_completionDateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date) function, expected prototype:\nvoid sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		sgt::TaskListener* self=(Luna< sgt::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TaskListener::completionDateChanged(sgt::Task *, unsigned int). Got : '%s'\n%s",typeid(Luna< sgt::TaskListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	delete obj;
}

const char LunaTraits< sgt::TaskListener >::className[] = "TaskListener";
const char LunaTraits< sgt::TaskListener >::fullName[] = "sgt::TaskListener";
const char LunaTraits< sgt::TaskListener >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TaskListener >::parents[] = {0};
const int LunaTraits< sgt::TaskListener >::hash = 16284073;
const int LunaTraits< sgt::TaskListener >::uniqueIDs[] = {16284073,0};

luna_RegType LunaTraits< sgt::TaskListener >::methods[] = {
	{"taskStateChanged", &luna_wrapper_sgt_TaskListener::_bind_taskStateChanged},
	{"completionDateChanged", &luna_wrapper_sgt_TaskListener::_bind_completionDateChanged},
	{"dynCast", &luna_wrapper_sgt_TaskListener::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_TaskListener::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_TaskListener::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TaskListener::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TaskListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TaskListener >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TaskListener >::enumValues[] = {
	{0,0}
};


