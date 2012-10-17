#include <plug_common.h>

class luna_wrapper_wxTextEntryDialog {
public:
	typedef Luna< wxTextEntryDialog > luna_t;

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
		wxTextEntryDialog* ptr= dynamic_cast< wxTextEntryDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextEntryDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextEntryDialog::wxTextEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetTextFromUserPromptStr, const wxString & value = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition)
	static wxTextEntryDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextEntryDialog::wxTextEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetTextFromUserPromptStr, const wxString & value = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxTextEntryDialog::wxTextEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetTextFromUserPromptStr, const wxString & value = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxOK | wxCANCEL | wxCENTRE;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextEntryDialog::wxTextEntryDialog function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;

		return new wxTextEntryDialog(parent, message, caption, value, style, pos);
	}


	// Function binds:
	// wxString wxTextEntryDialog::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextEntryDialog::GetValue() const function, expected prototype:\nwxString wxTextEntryDialog::GetValue() const\nClass arguments details:\n");
		}


		wxTextEntryDialog* self=dynamic_cast< wxTextEntryDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextEntryDialog::GetValue() const");
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextEntryDialog::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntryDialog::SetValue(const wxString & value) function, expected prototype:\nvoid wxTextEntryDialog::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntryDialog* self=dynamic_cast< wxTextEntryDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntryDialog::SetValue(const wxString &)");
		}
		self->SetValue(value);

		return 0;
	}

	// int wxTextEntryDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextEntryDialog::ShowModal() function, expected prototype:\nint wxTextEntryDialog::ShowModal()\nClass arguments details:\n");
		}


		wxTextEntryDialog* self=dynamic_cast< wxTextEntryDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextEntryDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTextEntryDialog* LunaTraits< wxTextEntryDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextEntryDialog::_bind_ctor(L);
}

void LunaTraits< wxTextEntryDialog >::_bind_dtor(wxTextEntryDialog* obj) {
	delete obj;
}

const char LunaTraits< wxTextEntryDialog >::className[] = "wxTextEntryDialog";
const char LunaTraits< wxTextEntryDialog >::fullName[] = "wxTextEntryDialog";
const char LunaTraits< wxTextEntryDialog >::moduleName[] = "wx";
const char* LunaTraits< wxTextEntryDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxTextEntryDialog >::hash = 62171967;
const int LunaTraits< wxTextEntryDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTextEntryDialog >::methods[] = {
	{"GetValue", &luna_wrapper_wxTextEntryDialog::_bind_GetValue},
	{"SetValue", &luna_wrapper_wxTextEntryDialog::_bind_SetValue},
	{"ShowModal", &luna_wrapper_wxTextEntryDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxTextEntryDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextEntryDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxTextEntryDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextEntryDialog >::enumValues[] = {
	{0,0}
};


