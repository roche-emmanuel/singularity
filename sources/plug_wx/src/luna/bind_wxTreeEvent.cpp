#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeEvent.h>

class luna_wrapper_wxTreeEvent {
public:
	typedef Luna< wxTreeEvent > luna_t;

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
		wxTreeEvent* ptr= dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOldItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolTip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxTreeItemId wxTreeEvent::GetItem() const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeEvent::GetItem() const function, expected prototype:\nwxTreeItemId wxTreeEvent::GetItem() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeEvent::GetItem() const");
		}
		wxTreeItemId stack_lret = self->GetItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// int wxTreeEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeEvent::GetKeyCode() const function, expected prototype:\nint wxTreeEvent::GetKeyCode() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeEvent::GetKeyCode() const");
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxKeyEvent & wxTreeEvent::GetKeyEvent() const
	static int _bind_GetKeyEvent(lua_State *L) {
		if (!_lg_typecheck_GetKeyEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxKeyEvent & wxTreeEvent::GetKeyEvent() const function, expected prototype:\nconst wxKeyEvent & wxTreeEvent::GetKeyEvent() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxKeyEvent & wxTreeEvent::GetKeyEvent() const");
		}
		const wxKeyEvent* lret = &self->GetKeyEvent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxKeyEvent >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxTreeEvent::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTreeEvent::GetLabel() const function, expected prototype:\nconst wxString & wxTreeEvent::GetLabel() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTreeEvent::GetLabel() const");
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxTreeItemId wxTreeEvent::GetOldItem() const
	static int _bind_GetOldItem(lua_State *L) {
		if (!_lg_typecheck_GetOldItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeEvent::GetOldItem() const function, expected prototype:\nwxTreeItemId wxTreeEvent::GetOldItem() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeEvent::GetOldItem() const");
		}
		wxTreeItemId stack_lret = self->GetOldItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxTreeEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxTreeEvent::GetPoint() const function, expected prototype:\nwxPoint wxTreeEvent::GetPoint() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxTreeEvent::GetPoint() const");
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeEvent::IsEditCancelled() const function, expected prototype:\nbool wxTreeEvent::IsEditCancelled() const\nClass arguments details:\n");
		}


		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeEvent::IsEditCancelled() const");
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeEvent::SetToolTip(const wxString & tooltip)
	static int _bind_SetToolTip(lua_State *L) {
		if (!_lg_typecheck_SetToolTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeEvent::SetToolTip(const wxString & tooltip) function, expected prototype:\nvoid wxTreeEvent::SetToolTip(const wxString & tooltip)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString tooltip(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeEvent* self=dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeEvent::SetToolTip(const wxString &)");
		}
		self->SetToolTip(tooltip);

		return 0;
	}


	// Operator binds:

};

wxTreeEvent* LunaTraits< wxTreeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxTreeEvent >::_bind_dtor(wxTreeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTreeEvent >::className[] = "wxTreeEvent";
const char LunaTraits< wxTreeEvent >::fullName[] = "wxTreeEvent";
const char LunaTraits< wxTreeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTreeEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxTreeEvent >::hash = 26313969;
const int LunaTraits< wxTreeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTreeEvent >::methods[] = {
	{"GetItem", &luna_wrapper_wxTreeEvent::_bind_GetItem},
	{"GetKeyCode", &luna_wrapper_wxTreeEvent::_bind_GetKeyCode},
	{"GetKeyEvent", &luna_wrapper_wxTreeEvent::_bind_GetKeyEvent},
	{"GetLabel", &luna_wrapper_wxTreeEvent::_bind_GetLabel},
	{"GetOldItem", &luna_wrapper_wxTreeEvent::_bind_GetOldItem},
	{"GetPoint", &luna_wrapper_wxTreeEvent::_bind_GetPoint},
	{"IsEditCancelled", &luna_wrapper_wxTreeEvent::_bind_IsEditCancelled},
	{"SetToolTip", &luna_wrapper_wxTreeEvent::_bind_SetToolTip},
	{"__eq", &luna_wrapper_wxTreeEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeEvent >::enumValues[] = {
	{0,0}
};


