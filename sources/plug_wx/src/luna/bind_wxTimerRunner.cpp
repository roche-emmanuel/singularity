#include <plug_common.h>

class luna_wrapper_wxTimerRunner {
public:
	typedef Luna< wxTimerRunner > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59614077) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTimerRunner*)");
		}

		wxTimerRunner* rhs =(Luna< wxTimerRunner >::check(L,2));
		wxTimerRunner* self=(Luna< wxTimerRunner >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxTimerRunner* self=(Luna< wxTimerRunner >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTimerRunner");
		
		return luna_dynamicCast(L,converters,"wxTimerRunner",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTimer >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTimer >(L,1))) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Start(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTimerRunner::wxTimerRunner(wxTimer & timer)
	static wxTimerRunner* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimerRunner::wxTimerRunner(wxTimer & timer) function, expected prototype:\nwxTimerRunner::wxTimerRunner(wxTimer & timer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxTimer* timer_ptr=(Luna< wxObject >::checkSubType< wxTimer >(L,1));
		if( !timer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg timer in wxTimerRunner::wxTimerRunner function");
		}
		wxTimer & timer=*timer_ptr;

		return new wxTimerRunner(timer);
	}

	// wxTimerRunner::wxTimerRunner(wxTimer & timer, int milli, bool oneShot = false)
	static wxTimerRunner* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimerRunner::wxTimerRunner(wxTimer & timer, int milli, bool oneShot = false) function, expected prototype:\nwxTimerRunner::wxTimerRunner(wxTimer & timer, int milli, bool oneShot = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxTimer* timer_ptr=(Luna< wxObject >::checkSubType< wxTimer >(L,1));
		if( !timer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg timer in wxTimerRunner::wxTimerRunner function");
		}
		wxTimer & timer=*timer_ptr;
		int milli=(int)lua_tointeger(L,2);
		bool oneShot=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		return new wxTimerRunner(timer, milli, oneShot);
	}

	// Overload binder for wxTimerRunner::wxTimerRunner
	static wxTimerRunner* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTimerRunner, cannot match any of the overloads for function wxTimerRunner:\n  wxTimerRunner(wxTimer &)\n  wxTimerRunner(wxTimer &, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// void wxTimerRunner::Start(int milli, bool oneShot = false)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimerRunner::Start(int milli, bool oneShot = false) function, expected prototype:\nvoid wxTimerRunner::Start(int milli, bool oneShot = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int milli=(int)lua_tointeger(L,2);
		bool oneShot=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxTimerRunner* self=(Luna< wxTimerRunner >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimerRunner::Start(int, bool)");
		}
		self->Start(milli, oneShot);

		return 0;
	}


	// Operator binds:

};

wxTimerRunner* LunaTraits< wxTimerRunner >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTimerRunner::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxTimerRunner >::_bind_dtor(wxTimerRunner* obj) {
	delete obj;
}

const char LunaTraits< wxTimerRunner >::className[] = "wxTimerRunner";
const char LunaTraits< wxTimerRunner >::fullName[] = "wxTimerRunner";
const char LunaTraits< wxTimerRunner >::moduleName[] = "wx";
const char* LunaTraits< wxTimerRunner >::parents[] = {0};
const int LunaTraits< wxTimerRunner >::hash = 59614077;
const int LunaTraits< wxTimerRunner >::uniqueIDs[] = {59614077,0};

luna_RegType LunaTraits< wxTimerRunner >::methods[] = {
	{"Start", &luna_wrapper_wxTimerRunner::_bind_Start},
	{"dynCast", &luna_wrapper_wxTimerRunner::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTimerRunner::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTimerRunner >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimerRunner >::enumValues[] = {
	{0,0}
};


