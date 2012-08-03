#include <plug_common.h>

class luna_wrapper_sgt_LogSink {
public:
	typedef Luna< sgt::LogSink > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogSink");
		
		return luna_dynamicCast(L,converters,"sgt::LogSink",name);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void sgt::LogSink::setEnabled(bool enabled)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogSink::setEnabled(bool enabled) function, expected prototype:\nvoid sgt::LogSink::setEnabled(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setEnabled(bool)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::output(int, std::string, std::string)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setLevelRange(int, int)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::addTrace(std::string)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::removeTrace(std::string)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::setLogTraceList(bool)");
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

		sgt::LogSink* self=(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogSink::process(int, std::string, std::string)");
		}
		self->process(level, trace, msg);

		return 0;
	}


	// Operator binds:

};

sgt::LogSink* LunaTraits< sgt::LogSink >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void sgt::LogSink::output(int level, std::string trace, std::string msg)

	// Abstract operators:
}

void LunaTraits< sgt::LogSink >::_bind_dtor(sgt::LogSink* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogSink >::className[] = "LogSink";
const char LunaTraits< sgt::LogSink >::fullName[] = "sgt::LogSink";
const char LunaTraits< sgt::LogSink >::moduleName[] = "core";
const char* LunaTraits< sgt::LogSink >::parents[] = {0};
const int LunaTraits< sgt::LogSink >::hash = 81755923;
const int LunaTraits< sgt::LogSink >::uniqueIDs[] = {81755923,0};

luna_RegType LunaTraits< sgt::LogSink >::methods[] = {
	{"setEnabled", &luna_wrapper_sgt_LogSink::_bind_setEnabled},
	{"output", &luna_wrapper_sgt_LogSink::_bind_output},
	{"setLevelRange", &luna_wrapper_sgt_LogSink::_bind_setLevelRange},
	{"addTrace", &luna_wrapper_sgt_LogSink::_bind_addTrace},
	{"removeTrace", &luna_wrapper_sgt_LogSink::_bind_removeTrace},
	{"setLogTraceList", &luna_wrapper_sgt_LogSink::_bind_setLogTraceList},
	{"process", &luna_wrapper_sgt_LogSink::_bind_process},
	{"dynCast", &luna_wrapper_sgt_LogSink::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogSink >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogSink >::enumValues[] = {
	{0,0}
};


