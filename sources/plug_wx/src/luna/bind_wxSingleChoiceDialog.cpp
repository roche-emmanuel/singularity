#include <plug_common.h>

class luna_wrapper_wxSingleChoiceDialog {
public:
	typedef Luna< wxSingleChoiceDialog > luna_t;

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
		wxSingleChoiceDialog* ptr= dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSingleChoiceDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSingleChoiceDialog* ptr= static_cast< wxSingleChoiceDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSingleChoiceDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxSingleChoiceDialog::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::GetSelection() const function, expected prototype:\nint wxSingleChoiceDialog::GetSelection() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char * wxSingleChoiceDialog::GetSelectionClientData() const
	static int _bind_GetSelectionClientData(lua_State *L) {
		if (!_lg_typecheck_GetSelectionClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * wxSingleChoiceDialog::GetSelectionClientData() const function, expected prototype:\nchar * wxSingleChoiceDialog::GetSelectionClientData() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * wxSingleChoiceDialog::GetSelectionClientData() const");
		}
		char * lret = self->GetSelectionClientData();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// wxString wxSingleChoiceDialog::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::GetStringSelection() const function, expected prototype:\nwxString wxSingleChoiceDialog::GetStringSelection() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::GetStringSelection() const");
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSingleChoiceDialog::SetSelection(int selection)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::SetSelection(int selection) function, expected prototype:\nvoid wxSingleChoiceDialog::SetSelection(int selection)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::SetSelection(int)");
		}
		self->SetSelection(selection);

		return 0;
	}

	// int wxSingleChoiceDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::ShowModal() function, expected prototype:\nint wxSingleChoiceDialog::ShowModal()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSingleChoiceDialog* LunaTraits< wxSingleChoiceDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSingleChoiceDialog >::_bind_dtor(wxSingleChoiceDialog* obj) {
	delete obj;
}

const char LunaTraits< wxSingleChoiceDialog >::className[] = "wxSingleChoiceDialog";
const char LunaTraits< wxSingleChoiceDialog >::fullName[] = "wxSingleChoiceDialog";
const char LunaTraits< wxSingleChoiceDialog >::moduleName[] = "wx";
const char* LunaTraits< wxSingleChoiceDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxSingleChoiceDialog >::hash = 80919152;
const int LunaTraits< wxSingleChoiceDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSingleChoiceDialog >::methods[] = {
	{"GetSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_GetSelection},
	{"GetSelectionClientData", &luna_wrapper_wxSingleChoiceDialog::_bind_GetSelectionClientData},
	{"GetStringSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_GetStringSelection},
	{"SetSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_SetSelection},
	{"ShowModal", &luna_wrapper_wxSingleChoiceDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxSingleChoiceDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSingleChoiceDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxSingleChoiceDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxSingleChoiceDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSingleChoiceDialog >::enumValues[] = {
	{0,0}
};


