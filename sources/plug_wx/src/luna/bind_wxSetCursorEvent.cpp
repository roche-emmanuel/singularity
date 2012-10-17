#include <plug_common.h>

class luna_wrapper_wxSetCursorEvent {
public:
	typedef Luna< wxSetCursorEvent > luna_t;

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
		wxSetCursorEvent* ptr= dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSetCursorEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const wxCursor & wxSetCursorEvent::GetCursor() const
	static int _bind_GetCursor(lua_State *L) {
		if (!_lg_typecheck_GetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxCursor & wxSetCursorEvent::GetCursor() const function, expected prototype:\nconst wxCursor & wxSetCursorEvent::GetCursor() const\nClass arguments details:\n");
		}


		wxSetCursorEvent* self=dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxCursor & wxSetCursorEvent::GetCursor() const");
		}
		const wxCursor* lret = &self->GetCursor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCursor >::push(L,lret,false);

		return 1;
	}

	// int wxSetCursorEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSetCursorEvent::GetX() const function, expected prototype:\nint wxSetCursorEvent::GetX() const\nClass arguments details:\n");
		}


		wxSetCursorEvent* self=dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSetCursorEvent::GetX() const");
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSetCursorEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSetCursorEvent::GetY() const function, expected prototype:\nint wxSetCursorEvent::GetY() const\nClass arguments details:\n");
		}


		wxSetCursorEvent* self=dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSetCursorEvent::GetY() const");
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSetCursorEvent::HasCursor() const
	static int _bind_HasCursor(lua_State *L) {
		if (!_lg_typecheck_HasCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSetCursorEvent::HasCursor() const function, expected prototype:\nbool wxSetCursorEvent::HasCursor() const\nClass arguments details:\n");
		}


		wxSetCursorEvent* self=dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSetCursorEvent::HasCursor() const");
		}
		bool lret = self->HasCursor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSetCursorEvent::SetCursor(const wxCursor & cursor)
	static int _bind_SetCursor(lua_State *L) {
		if (!_lg_typecheck_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSetCursorEvent::SetCursor(const wxCursor & cursor) function, expected prototype:\nvoid wxSetCursorEvent::SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSetCursorEvent::SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxSetCursorEvent* self=dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSetCursorEvent::SetCursor(const wxCursor &)");
		}
		self->SetCursor(cursor);

		return 0;
	}


	// Operator binds:

};

wxSetCursorEvent* LunaTraits< wxSetCursorEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSetCursorEvent >::_bind_dtor(wxSetCursorEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSetCursorEvent >::className[] = "wxSetCursorEvent";
const char LunaTraits< wxSetCursorEvent >::fullName[] = "wxSetCursorEvent";
const char LunaTraits< wxSetCursorEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSetCursorEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSetCursorEvent >::hash = 42186856;
const int LunaTraits< wxSetCursorEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSetCursorEvent >::methods[] = {
	{"GetCursor", &luna_wrapper_wxSetCursorEvent::_bind_GetCursor},
	{"GetX", &luna_wrapper_wxSetCursorEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxSetCursorEvent::_bind_GetY},
	{"HasCursor", &luna_wrapper_wxSetCursorEvent::_bind_HasCursor},
	{"SetCursor", &luna_wrapper_wxSetCursorEvent::_bind_SetCursor},
	{"__eq", &luna_wrapper_wxSetCursorEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSetCursorEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSetCursorEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSetCursorEvent >::enumValues[] = {
	{0,0}
};


