#include <plug_common.h>

class luna_wrapper_wxProcessEvent {
public:
	typedef Luna< wxProcessEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxProcessEvent* ptr= dynamic_cast< wxProcessEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProcessEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetExitCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxProcessEvent::GetExitCode()
	static int _bind_GetExitCode(lua_State *L) {
		if (!_lg_typecheck_GetExitCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxProcessEvent::GetExitCode() function, expected prototype:\nint wxProcessEvent::GetExitCode()\nClass arguments details:\n");
		}


		wxProcessEvent* self=dynamic_cast< wxProcessEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxProcessEvent::GetExitCode()");
		}
		int lret = self->GetExitCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProcessEvent::GetPid()
	static int _bind_GetPid(lua_State *L) {
		if (!_lg_typecheck_GetPid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxProcessEvent::GetPid() function, expected prototype:\nint wxProcessEvent::GetPid()\nClass arguments details:\n");
		}


		wxProcessEvent* self=dynamic_cast< wxProcessEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxProcessEvent::GetPid()");
		}
		int lret = self->GetPid();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxProcessEvent* LunaTraits< wxProcessEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxProcessEvent >::_bind_dtor(wxProcessEvent* obj) {
	delete obj;
}

const char LunaTraits< wxProcessEvent >::className[] = "wxProcessEvent";
const char LunaTraits< wxProcessEvent >::fullName[] = "wxProcessEvent";
const char LunaTraits< wxProcessEvent >::moduleName[] = "wx";
const char* LunaTraits< wxProcessEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxProcessEvent >::hash = 24704651;
const int LunaTraits< wxProcessEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxProcessEvent >::methods[] = {
	{"GetExitCode", &luna_wrapper_wxProcessEvent::_bind_GetExitCode},
	{"GetPid", &luna_wrapper_wxProcessEvent::_bind_GetPid},
	{"__eq", &luna_wrapper_wxProcessEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxProcessEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxProcessEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProcessEvent >::enumValues[] = {
	{0,0}
};


