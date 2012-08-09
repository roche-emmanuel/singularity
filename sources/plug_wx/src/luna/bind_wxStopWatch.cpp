#include <plug_common.h>

class luna_wrapper_wxStopWatch {
public:
	typedef Luna< wxStopWatch > luna_t;

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

		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStopWatch");
		
		return luna_dynamicCast(L,converters,"wxStopWatch",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Start(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TimeInMicro(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStopWatch::wxStopWatch()
	static wxStopWatch* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStopWatch::wxStopWatch() function, expected prototype:\nwxStopWatch::wxStopWatch()\nClass arguments details:\n");
		}


		return new wxStopWatch();
	}


	// Function binds:
	// void wxStopWatch::Pause()
	static int _bind_Pause(lua_State *L) {
		if (!_lg_typecheck_Pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Pause() function, expected prototype:\nvoid wxStopWatch::Pause()\nClass arguments details:\n");
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStopWatch::Pause()");
		}
		self->Pause();

		return 0;
	}

	// void wxStopWatch::Resume()
	static int _bind_Resume(lua_State *L) {
		if (!_lg_typecheck_Resume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Resume() function, expected prototype:\nvoid wxStopWatch::Resume()\nClass arguments details:\n");
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStopWatch::Resume()");
		}
		self->Resume();

		return 0;
	}

	// void wxStopWatch::Start(long milliseconds = 0)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Start(long milliseconds = 0) function, expected prototype:\nvoid wxStopWatch::Start(long milliseconds = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long milliseconds=luatop>1 ? (long)lua_tointeger(L,2) : 0;

		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStopWatch::Start(long)");
		}
		self->Start(milliseconds);

		return 0;
	}

	// long wxStopWatch::Time() const
	static int _bind_Time(lua_State *L) {
		if (!_lg_typecheck_Time(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxStopWatch::Time() const function, expected prototype:\nlong wxStopWatch::Time() const\nClass arguments details:\n");
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxStopWatch::Time() const");
		}
		long lret = self->Time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLongLong wxStopWatch::TimeInMicro() const
	static int _bind_TimeInMicro(lua_State *L) {
		if (!_lg_typecheck_TimeInMicro(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxStopWatch::TimeInMicro() const function, expected prototype:\nwxLongLong wxStopWatch::TimeInMicro() const\nClass arguments details:\n");
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxStopWatch::TimeInMicro() const");
		}
		wxLongLong stack_lret = self->TimeInMicro();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxStopWatch* LunaTraits< wxStopWatch >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStopWatch::_bind_ctor(L);
}

void LunaTraits< wxStopWatch >::_bind_dtor(wxStopWatch* obj) {
	delete obj;
}

const char LunaTraits< wxStopWatch >::className[] = "wxStopWatch";
const char LunaTraits< wxStopWatch >::fullName[] = "wxStopWatch";
const char LunaTraits< wxStopWatch >::moduleName[] = "wx";
const char* LunaTraits< wxStopWatch >::parents[] = {0};
const int LunaTraits< wxStopWatch >::hash = 66515423;
const int LunaTraits< wxStopWatch >::uniqueIDs[] = {66515423,0};

luna_RegType LunaTraits< wxStopWatch >::methods[] = {
	{"Pause", &luna_wrapper_wxStopWatch::_bind_Pause},
	{"Resume", &luna_wrapper_wxStopWatch::_bind_Resume},
	{"Start", &luna_wrapper_wxStopWatch::_bind_Start},
	{"Time", &luna_wrapper_wxStopWatch::_bind_Time},
	{"TimeInMicro", &luna_wrapper_wxStopWatch::_bind_TimeInMicro},
	{"dynCast", &luna_wrapper_wxStopWatch::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxStopWatch >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStopWatch >::enumValues[] = {
	{0,0}
};

