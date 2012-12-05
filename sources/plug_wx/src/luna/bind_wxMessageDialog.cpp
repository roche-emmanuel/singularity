#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageDialog.h>

class luna_wrapper_wxMessageDialog {
public:
	typedef Luna< wxMessageDialog > luna_t;

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
		wxMessageDialog* ptr= dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetExtendedMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtendedMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessageDialogStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCustomLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetYesLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNoLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOKLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCancelLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHelpLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMessageDialog::wxMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition)
	static wxMessageDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMessageDialog::wxMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxMessageDialog::wxMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 5 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		long style=luatop>3 ? (long)lua_tointeger(L,4) : wxOK | ::wxCENTRE;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMessageDialog::wxMessageDialog function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;

		return new wxMessageDialog(parent, message, caption, style, pos);
	}

	// wxMessageDialog::wxMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition)
	static wxMessageDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMessageDialog::wxMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxMessageDialog::wxMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxOK | ::wxCENTRE;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMessageDialog::wxMessageDialog function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;

		return new wrapper_wxMessageDialog(L,NULL, parent, message, caption, style, pos);
	}

	// Overload binder for wxMessageDialog::wxMessageDialog
	static wxMessageDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMessageDialog, cannot match any of the overloads for function wxMessageDialog:\n  wxMessageDialog(wxWindow *, const wxString &, const wxString &, long, const wxPoint &)\n  wxMessageDialog(lua_Table *, wxWindow *, const wxString &, const wxString &, long, const wxPoint &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMessageDialog::SetExtendedMessage(const wxString & extendedMessage)
	static int _bind_SetExtendedMessage(lua_State *L) {
		if (!_lg_typecheck_SetExtendedMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMessageDialog::SetExtendedMessage(const wxString & extendedMessage) function, expected prototype:\nvoid wxMessageDialog::SetExtendedMessage(const wxString & extendedMessage)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString extendedMessage(lua_tostring(L,2),lua_objlen(L,2));

		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMessageDialog::SetExtendedMessage(const wxString &)");
		}
		self->SetExtendedMessage(extendedMessage);

		return 0;
	}

	// void wxMessageDialog::SetMessage(const wxString & message)
	static int _bind_SetMessage(lua_State *L) {
		if (!_lg_typecheck_SetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMessageDialog::SetMessage(const wxString & message) function, expected prototype:\nvoid wxMessageDialog::SetMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMessageDialog::SetMessage(const wxString &)");
		}
		self->SetMessage(message);

		return 0;
	}

	// int wxMessageDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMessageDialog::ShowModal() function, expected prototype:\nint wxMessageDialog::ShowModal()\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMessageDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMessageDialog::GetCaption() const
	static int _bind_GetCaption(lua_State *L) {
		if (!_lg_typecheck_GetCaption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetCaption() const function, expected prototype:\nwxString wxMessageDialog::GetCaption() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetCaption() const");
		}
		wxString lret = self->GetCaption();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetMessage() const function, expected prototype:\nwxString wxMessageDialog::GetMessage() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetMessage() const");
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetExtendedMessage() const
	static int _bind_GetExtendedMessage(lua_State *L) {
		if (!_lg_typecheck_GetExtendedMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetExtendedMessage() const function, expected prototype:\nwxString wxMessageDialog::GetExtendedMessage() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetExtendedMessage() const");
		}
		wxString lret = self->GetExtendedMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxMessageDialog::GetMessageDialogStyle() const
	static int _bind_GetMessageDialogStyle(lua_State *L) {
		if (!_lg_typecheck_GetMessageDialogStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMessageDialog::GetMessageDialogStyle() const function, expected prototype:\nlong wxMessageDialog::GetMessageDialogStyle() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMessageDialog::GetMessageDialogStyle() const");
		}
		long lret = self->GetMessageDialogStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMessageDialog::HasCustomLabels() const
	static int _bind_HasCustomLabels(lua_State *L) {
		if (!_lg_typecheck_HasCustomLabels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMessageDialog::HasCustomLabels() const function, expected prototype:\nbool wxMessageDialog::HasCustomLabels() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMessageDialog::HasCustomLabels() const");
		}
		bool lret = self->HasCustomLabels();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMessageDialog::GetYesLabel() const
	static int _bind_GetYesLabel(lua_State *L) {
		if (!_lg_typecheck_GetYesLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetYesLabel() const function, expected prototype:\nwxString wxMessageDialog::GetYesLabel() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetYesLabel() const");
		}
		wxString lret = self->GetYesLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetNoLabel() const
	static int _bind_GetNoLabel(lua_State *L) {
		if (!_lg_typecheck_GetNoLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetNoLabel() const function, expected prototype:\nwxString wxMessageDialog::GetNoLabel() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetNoLabel() const");
		}
		wxString lret = self->GetNoLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetOKLabel() const
	static int _bind_GetOKLabel(lua_State *L) {
		if (!_lg_typecheck_GetOKLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetOKLabel() const function, expected prototype:\nwxString wxMessageDialog::GetOKLabel() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetOKLabel() const");
		}
		wxString lret = self->GetOKLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetCancelLabel() const
	static int _bind_GetCancelLabel(lua_State *L) {
		if (!_lg_typecheck_GetCancelLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetCancelLabel() const function, expected prototype:\nwxString wxMessageDialog::GetCancelLabel() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetCancelLabel() const");
		}
		wxString lret = self->GetCancelLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMessageDialog::GetHelpLabel() const
	static int _bind_GetHelpLabel(lua_State *L) {
		if (!_lg_typecheck_GetHelpLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMessageDialog::GetHelpLabel() const function, expected prototype:\nwxString wxMessageDialog::GetHelpLabel() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMessageDialog::GetHelpLabel() const");
		}
		wxString lret = self->GetHelpLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxMessageDialog::GetEffectiveIcon() const
	static int _bind_GetEffectiveIcon(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMessageDialog::GetEffectiveIcon() const function, expected prototype:\nlong wxMessageDialog::GetEffectiveIcon() const\nClass arguments details:\n");
		}


		wxMessageDialog* self=dynamic_cast< wxMessageDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMessageDialog::GetEffectiveIcon() const");
		}
		long lret = self->GetEffectiveIcon();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMessageDialog* LunaTraits< wxMessageDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMessageDialog::_bind_ctor(L);
}

void LunaTraits< wxMessageDialog >::_bind_dtor(wxMessageDialog* obj) {
	delete obj;
}

const char LunaTraits< wxMessageDialog >::className[] = "wxMessageDialog";
const char LunaTraits< wxMessageDialog >::fullName[] = "wxMessageDialog";
const char LunaTraits< wxMessageDialog >::moduleName[] = "wx";
const char* LunaTraits< wxMessageDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxMessageDialog >::hash = 15513246;
const int LunaTraits< wxMessageDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMessageDialog >::methods[] = {
	{"SetExtendedMessage", &luna_wrapper_wxMessageDialog::_bind_SetExtendedMessage},
	{"SetMessage", &luna_wrapper_wxMessageDialog::_bind_SetMessage},
	{"ShowModal", &luna_wrapper_wxMessageDialog::_bind_ShowModal},
	{"GetCaption", &luna_wrapper_wxMessageDialog::_bind_GetCaption},
	{"GetMessage", &luna_wrapper_wxMessageDialog::_bind_GetMessage},
	{"GetExtendedMessage", &luna_wrapper_wxMessageDialog::_bind_GetExtendedMessage},
	{"GetMessageDialogStyle", &luna_wrapper_wxMessageDialog::_bind_GetMessageDialogStyle},
	{"HasCustomLabels", &luna_wrapper_wxMessageDialog::_bind_HasCustomLabels},
	{"GetYesLabel", &luna_wrapper_wxMessageDialog::_bind_GetYesLabel},
	{"GetNoLabel", &luna_wrapper_wxMessageDialog::_bind_GetNoLabel},
	{"GetOKLabel", &luna_wrapper_wxMessageDialog::_bind_GetOKLabel},
	{"GetCancelLabel", &luna_wrapper_wxMessageDialog::_bind_GetCancelLabel},
	{"GetHelpLabel", &luna_wrapper_wxMessageDialog::_bind_GetHelpLabel},
	{"GetEffectiveIcon", &luna_wrapper_wxMessageDialog::_bind_GetEffectiveIcon},
	{"__eq", &luna_wrapper_wxMessageDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxMessageDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageDialog >::enumValues[] = {
	{0,0}
};


