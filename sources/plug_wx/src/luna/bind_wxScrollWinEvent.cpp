#include <plug_common.h>

#include <luna/wrappers/wrapper_wxScrollWinEvent.h>

class luna_wrapper_wxScrollWinEvent {
public:
	typedef Luna< wxScrollWinEvent > luna_t;

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
		wxScrollWinEvent* ptr= dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScrollWinEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxScrollWinEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollWinEvent::GetOrientation() const function, expected prototype:\nint wxScrollWinEvent::GetOrientation() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollWinEvent::GetOrientation() const");
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollWinEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollWinEvent::GetPosition() const function, expected prototype:\nint wxScrollWinEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollWinEvent::GetPosition() const");
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxScrollWinEvent::SetOrientation(int orient)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollWinEvent::SetOrientation(int orient) function, expected prototype:\nvoid wxScrollWinEvent::SetOrientation(int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxScrollWinEvent* self=dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollWinEvent::SetOrientation(int)");
		}
		self->SetOrientation(orient);

		return 0;
	}

	// void wxScrollWinEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollWinEvent::SetPosition(int pos) function, expected prototype:\nvoid wxScrollWinEvent::SetPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxScrollWinEvent* self=dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollWinEvent::SetPosition(int)");
		}
		self->SetPosition(pos);

		return 0;
	}


	// Operator binds:

};

wxScrollWinEvent* LunaTraits< wxScrollWinEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxScrollWinEvent >::_bind_dtor(wxScrollWinEvent* obj) {
	delete obj;
}

const char LunaTraits< wxScrollWinEvent >::className[] = "wxScrollWinEvent";
const char LunaTraits< wxScrollWinEvent >::fullName[] = "wxScrollWinEvent";
const char LunaTraits< wxScrollWinEvent >::moduleName[] = "wx";
const char* LunaTraits< wxScrollWinEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxScrollWinEvent >::hash = 23060981;
const int LunaTraits< wxScrollWinEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxScrollWinEvent >::methods[] = {
	{"GetOrientation", &luna_wrapper_wxScrollWinEvent::_bind_GetOrientation},
	{"GetPosition", &luna_wrapper_wxScrollWinEvent::_bind_GetPosition},
	{"SetOrientation", &luna_wrapper_wxScrollWinEvent::_bind_SetOrientation},
	{"SetPosition", &luna_wrapper_wxScrollWinEvent::_bind_SetPosition},
	{"__eq", &luna_wrapper_wxScrollWinEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrollWinEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxScrollWinEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrollWinEvent >::enumValues[] = {
	{0,0}
};


