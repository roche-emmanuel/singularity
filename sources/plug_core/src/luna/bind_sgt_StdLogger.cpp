#include <plug_common.h>

class luna_wrapper_sgt_StdLogger {
public:
	typedef Luna< sgt::StdLogger > luna_t;

	// Derived class converters:
	static int _cast_from_LogSink(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgt::StdLogger* ptr= dynamic_cast< sgt::StdLogger* >(Luna< sgt::LogSink >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::StdLogger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::StdLogger::StdLogger(const std::string & name = "")
	static sgt::StdLogger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::StdLogger::StdLogger(const std::string & name = \"\") function, expected prototype:\nsgt::StdLogger::StdLogger(const std::string & name = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		return new sgt::StdLogger(name);
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

		sgt::StdLogger* self=dynamic_cast< sgt::StdLogger* >(Luna< sgt::LogSink >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::StdLogger::output(int, std::string, std::string)");
		}
		self->output(level, trace, msg);

		return 0;
	}


	// Operator binds:

};

sgt::StdLogger* LunaTraits< sgt::StdLogger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_StdLogger::_bind_ctor(L);
}

void LunaTraits< sgt::StdLogger >::_bind_dtor(sgt::StdLogger* obj) {
	delete obj;
}

const char LunaTraits< sgt::StdLogger >::className[] = "StdLogger";
const char LunaTraits< sgt::StdLogger >::fullName[] = "sgt::StdLogger";
const char LunaTraits< sgt::StdLogger >::moduleName[] = "core";
const char* LunaTraits< sgt::StdLogger >::parents[] = {"core.LogSink", 0};
const int LunaTraits< sgt::StdLogger >::hash = 9508745;
const int LunaTraits< sgt::StdLogger >::uniqueIDs[] = {81755923,0};

luna_RegType LunaTraits< sgt::StdLogger >::methods[] = {
	{"output", &luna_wrapper_sgt_StdLogger::_bind_output},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::StdLogger >::converters[] = {
	{"sgt::LogSink", &luna_wrapper_sgt_StdLogger::_cast_from_LogSink},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::StdLogger >::enumValues[] = {
	{0,0}
};


