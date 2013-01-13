#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_LogSink.h>

class luna_wrapper_sgt_LogSink {
public:
	typedef Luna< sgt::LogSink > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::LogSink* ptr= dynamic_cast< sgt::LogSink* >(Luna< osg::Referenced >::check(L,1));
		sgt::LogSink* ptr= luna_caster< osg::Referenced, sgt::LogSink >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::LogSink >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_output(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevelRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTrace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTrace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLogTraceList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_process(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_process(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::LogSink::LogSink(lua_Table * data, const std::string & name = "")
	static sgt::LogSink* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::LogSink::LogSink(lua_Table * data, const std::string & name = \"\") function, expected prototype:\nsgt::LogSink::LogSink(lua_Table * data, const std::string & name = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_sgt_LogSink(L,NULL, name);
	}


	// Function binds:
	// void sgt::LogSink::setEnabled(bool enabled)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::setEnabled(bool enabled) function, expected prototype:\nvoid sgt::LogSink::setEnabled(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setEnabled(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setEnabled(enabled);

		return 0;
	}

	// void sgt::LogSink::output(int level, std::string trace, std::string msg)
	static int _bind_output(lua_State *L) {
		if (!_lg_typecheck_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::LogSink::output(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::output(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->output(level, trace, msg);

		return 0;
	}

	// void sgt::LogSink::setLevelRange(int mini, int maxi)
	static int _bind_setLevelRange(lua_State *L) {
		if (!_lg_typecheck_setLevelRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::setLevelRange(int mini, int maxi) function, expected prototype:\nvoid sgt::LogSink::setLevelRange(int mini, int maxi)\nClass arguments details:\n");
		}

		int mini=(int)lua_tointeger(L,2);
		int maxi=(int)lua_tointeger(L,3);

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setLevelRange(int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setLevelRange(mini, maxi);

		return 0;
	}

	// void sgt::LogSink::addTrace(std::string trace)
	static int _bind_addTrace(lua_State *L) {
		if (!_lg_typecheck_addTrace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::addTrace(std::string trace) function, expected prototype:\nvoid sgt::LogSink::addTrace(std::string trace)\nClass arguments details:\n");
		}

		std::string trace(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::addTrace(std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addTrace(trace);

		return 0;
	}

	// void sgt::LogSink::removeTrace(std::string trace)
	static int _bind_removeTrace(lua_State *L) {
		if (!_lg_typecheck_removeTrace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::removeTrace(std::string trace) function, expected prototype:\nvoid sgt::LogSink::removeTrace(std::string trace)\nClass arguments details:\n");
		}

		std::string trace(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::removeTrace(std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeTrace(trace);

		return 0;
	}

	// void sgt::LogSink::setLogTraceList(bool enabled)
	static int _bind_setLogTraceList(lua_State *L) {
		if (!_lg_typecheck_setLogTraceList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::setLogTraceList(bool enabled) function, expected prototype:\nvoid sgt::LogSink::setLogTraceList(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setLogTraceList(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setLogTraceList(enabled);

		return 0;
	}

	// void sgt::LogSink::process(int level, std::string trace, std::string msg)
	static int _bind_process(lua_State *L) {
		if (!_lg_typecheck_process(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::process(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::LogSink::process(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::process(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->process(level, trace, msg);

		return 0;
	}

	// void sgt::LogSink::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::LogSink::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->LogSink::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::LogSink::base_process(int level, std::string trace, std::string msg)
	static int _bind_base_process(lua_State *L) {
		if (!_lg_typecheck_base_process(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::base_process(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::LogSink::base_process(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::LogSink* self=Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::base_process(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->LogSink::process(level, trace, msg);

		return 0;
	}


	// Operator binds:

};

sgt::LogSink* LunaTraits< sgt::LogSink >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_LogSink::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void sgt::LogSink::output(int level, std::string trace, std::string msg)
}

void LunaTraits< sgt::LogSink >::_bind_dtor(sgt::LogSink* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::LogSink >::className[] = "LogSink";
const char LunaTraits< sgt::LogSink >::fullName[] = "sgt::LogSink";
const char LunaTraits< sgt::LogSink >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogSink >::parents[] = {"sgt.Referenced", 0};
const int LunaTraits< sgt::LogSink >::hash = 81755923;
const int LunaTraits< sgt::LogSink >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::LogSink >::methods[] = {
	{"setEnabled", &luna_wrapper_sgt_LogSink::_bind_setEnabled},
	{"output", &luna_wrapper_sgt_LogSink::_bind_output},
	{"setLevelRange", &luna_wrapper_sgt_LogSink::_bind_setLevelRange},
	{"addTrace", &luna_wrapper_sgt_LogSink::_bind_addTrace},
	{"removeTrace", &luna_wrapper_sgt_LogSink::_bind_removeTrace},
	{"setLogTraceList", &luna_wrapper_sgt_LogSink::_bind_setLogTraceList},
	{"process", &luna_wrapper_sgt_LogSink::_bind_process},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_LogSink::_bind_base_setThreadSafeRefUnref},
	{"base_process", &luna_wrapper_sgt_LogSink::_bind_base_process},
	{"__eq", &luna_wrapper_sgt_LogSink::_bind___eq},
	{"getTable", &luna_wrapper_sgt_LogSink::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogSink >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_LogSink::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogSink >::enumValues[] = {
	{0,0}
};


