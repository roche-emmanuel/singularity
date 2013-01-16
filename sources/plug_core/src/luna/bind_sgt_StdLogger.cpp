#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_StdLogger.h>

class luna_wrapper_sgt_StdLogger {
public:
	typedef Luna< sgt::StdLogger > luna_t;

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
		//sgt::StdLogger* ptr= dynamic_cast< sgt::StdLogger* >(Luna< osg::Referenced >::check(L,1));
		sgt::StdLogger* ptr= luna_caster< osg::Referenced, sgt::StdLogger >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::StdLogger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_output(lua_State *L) {
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

	inline static bool _lg_typecheck_base_output(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::StdLogger::StdLogger(const std::string & name = "")
	static sgt::StdLogger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::StdLogger::StdLogger(const std::string & name = \"\") function, expected prototype:\nsgt::StdLogger::StdLogger(const std::string & name = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		return new sgt::StdLogger(name);
	}

	// sgt::StdLogger::StdLogger(lua_Table * data, const std::string & name = "")
	static sgt::StdLogger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::StdLogger::StdLogger(lua_Table * data, const std::string & name = \"\") function, expected prototype:\nsgt::StdLogger::StdLogger(lua_Table * data, const std::string & name = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_sgt_StdLogger(L,NULL, name);
	}

	// Overload binder for sgt::StdLogger::StdLogger
	static sgt::StdLogger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StdLogger, cannot match any of the overloads for function StdLogger:\n  StdLogger(const std::string &)\n  StdLogger(lua_Table *, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::StdLogger::output(int level, std::string trace, std::string msg)
	static int _bind_output(lua_State *L) {
		if (!_lg_typecheck_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::StdLogger::output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::StdLogger::output(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::StdLogger* self=Luna< osg::Referenced >::checkSubType< sgt::StdLogger >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::StdLogger::output(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->output(level, trace, msg);

		return 0;
	}

	// void sgt::StdLogger::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::StdLogger::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::StdLogger::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::StdLogger* self=Luna< osg::Referenced >::checkSubType< sgt::StdLogger >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::StdLogger::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StdLogger::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::StdLogger::base_process(int level, std::string trace, std::string msg)
	static int _bind_base_process(lua_State *L) {
		if (!_lg_typecheck_base_process(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::StdLogger::base_process(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::StdLogger::base_process(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::StdLogger* self=Luna< osg::Referenced >::checkSubType< sgt::StdLogger >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::StdLogger::base_process(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StdLogger::process(level, trace, msg);

		return 0;
	}

	// void sgt::StdLogger::base_output(int level, std::string trace, std::string msg)
	static int _bind_base_output(lua_State *L) {
		if (!_lg_typecheck_base_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::StdLogger::base_output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::StdLogger::base_output(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::StdLogger* self=Luna< osg::Referenced >::checkSubType< sgt::StdLogger >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::StdLogger::base_output(int, std::string, std::string). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StdLogger::output(level, trace, msg);

		return 0;
	}


	// Operator binds:

};

sgt::StdLogger* LunaTraits< sgt::StdLogger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_StdLogger::_bind_ctor(L);
}

void LunaTraits< sgt::StdLogger >::_bind_dtor(sgt::StdLogger* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::StdLogger >::className[] = "StdLogger";
const char LunaTraits< sgt::StdLogger >::fullName[] = "sgt::StdLogger";
const char LunaTraits< sgt::StdLogger >::moduleName[] = "sgt";
const char* LunaTraits< sgt::StdLogger >::parents[] = {"sgt.LogSink", 0};
const int LunaTraits< sgt::StdLogger >::hash = 9508745;
const int LunaTraits< sgt::StdLogger >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::StdLogger >::methods[] = {
	{"output", &luna_wrapper_sgt_StdLogger::_bind_output},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_StdLogger::_bind_base_setThreadSafeRefUnref},
	{"base_process", &luna_wrapper_sgt_StdLogger::_bind_base_process},
	{"base_output", &luna_wrapper_sgt_StdLogger::_bind_base_output},
	{"__eq", &luna_wrapper_sgt_StdLogger::_bind___eq},
	{"getTable", &luna_wrapper_sgt_StdLogger::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::StdLogger >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_StdLogger::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::StdLogger >::enumValues[] = {
	{0,0}
};


