#include <plug_common.h>

class luna_wrapper_wxGridEditorCreatedEvent {
public:
	typedef Luna< wxGridEditorCreatedEvent > luna_t;

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
		wxGridEditorCreatedEvent* ptr= dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridEditorCreatedEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxGridEditorCreatedEvent::GetCol()
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEditorCreatedEvent::GetCol() function, expected prototype:\nint wxGridEditorCreatedEvent::GetCol()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEditorCreatedEvent::GetCol()");
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxControl * wxGridEditorCreatedEvent::GetControl()
	static int _bind_GetControl(lua_State *L) {
		if (!_lg_typecheck_GetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl * wxGridEditorCreatedEvent::GetControl() function, expected prototype:\nwxControl * wxGridEditorCreatedEvent::GetControl()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxControl * wxGridEditorCreatedEvent::GetControl()");
		}
		wxControl * lret = self->GetControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// int wxGridEditorCreatedEvent::GetRow()
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEditorCreatedEvent::GetRow() function, expected prototype:\nint wxGridEditorCreatedEvent::GetRow()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEditorCreatedEvent::GetRow()");
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridEditorCreatedEvent::SetCol(int col)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetCol(int col) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetCol(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetCol(int)");
		}
		self->SetCol(col);

		return 0;
	}

	// void wxGridEditorCreatedEvent::SetControl(wxControl * ctrl)
	static int _bind_SetControl(lua_State *L) {
		if (!_lg_typecheck_SetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetControl(wxControl * ctrl) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetControl(wxControl * ctrl)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxControl* ctrl=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,2));

		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetControl(wxControl *)");
		}
		self->SetControl(ctrl);

		return 0;
	}

	// void wxGridEditorCreatedEvent::SetRow(int row)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetRow(int row) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetRow(int row)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxGridEditorCreatedEvent* self=dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetRow(int)");
		}
		self->SetRow(row);

		return 0;
	}


	// Operator binds:

};

wxGridEditorCreatedEvent* LunaTraits< wxGridEditorCreatedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxGridEditorCreatedEvent >::_bind_dtor(wxGridEditorCreatedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridEditorCreatedEvent >::className[] = "wxGridEditorCreatedEvent";
const char LunaTraits< wxGridEditorCreatedEvent >::fullName[] = "wxGridEditorCreatedEvent";
const char LunaTraits< wxGridEditorCreatedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridEditorCreatedEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxGridEditorCreatedEvent >::hash = 47797244;
const int LunaTraits< wxGridEditorCreatedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridEditorCreatedEvent >::methods[] = {
	{"GetCol", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetCol},
	{"GetControl", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetControl},
	{"GetRow", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetRow},
	{"SetCol", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetCol},
	{"SetControl", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetControl},
	{"SetRow", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetRow},
	{"__eq", &luna_wrapper_wxGridEditorCreatedEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridEditorCreatedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridEditorCreatedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridEditorCreatedEvent >::enumValues[] = {
	{0,0}
};


