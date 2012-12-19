#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichMessageDialog.h>

class luna_wrapper_wxRichMessageDialog {
public:
	typedef Luna< wxRichMessageDialog > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86910257) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichMessageDialog*)");
		}

		wxRichMessageDialog* rhs =(Luna< wxRichMessageDialog >::check(L,2));
		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
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

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichMessageDialog");
		
		return luna_dynamicCast(L,converters,"wxRichMessageDialog",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ShowCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckBoxText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowDetailedText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDetailedText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCheckBoxChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)
	static wxRichMessageDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE) function, expected prototype:\nwxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		long style=luatop>3 ? (long)lua_tointeger(L,4) : wxOK | ::wxCENTRE;

		return new wxRichMessageDialog(parent, message, caption, style);
	}

	// wxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)
	static wxRichMessageDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE) function, expected prototype:\nwxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxOK | ::wxCENTRE;

		return new wrapper_wxRichMessageDialog(L,NULL, parent, message, caption, style);
	}

	// Overload binder for wxRichMessageDialog::wxRichMessageDialog
	static wxRichMessageDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRichMessageDialog, cannot match any of the overloads for function wxRichMessageDialog:\n  wxRichMessageDialog(wxWindow *, const wxString &, const wxString &, long)\n  wxRichMessageDialog(lua_Table *, wxWindow *, const wxString &, const wxString &, long)\n");
		return NULL;
	}


	// Function binds:
	// void wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false)
	static int _bind_ShowCheckBox(lua_State *L) {
		if (!_lg_typecheck_ShowCheckBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false) function, expected prototype:\nvoid wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString checkBoxText(lua_tostring(L,2),lua_objlen(L,2));
		bool checked=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRichMessageDialog::ShowCheckBox(const wxString &, bool)");
		}
		self->ShowCheckBox(checkBoxText, checked);

		return 0;
	}

	// wxString wxRichMessageDialog::GetCheckBoxText() const
	static int _bind_GetCheckBoxText(lua_State *L) {
		if (!_lg_typecheck_GetCheckBoxText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRichMessageDialog::GetCheckBoxText() const function, expected prototype:\nwxString wxRichMessageDialog::GetCheckBoxText() const\nClass arguments details:\n");
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRichMessageDialog::GetCheckBoxText() const");
		}
		wxString lret = self->GetCheckBoxText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRichMessageDialog::ShowDetailedText(const wxString & detailedText)
	static int _bind_ShowDetailedText(lua_State *L) {
		if (!_lg_typecheck_ShowDetailedText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRichMessageDialog::ShowDetailedText(const wxString & detailedText) function, expected prototype:\nvoid wxRichMessageDialog::ShowDetailedText(const wxString & detailedText)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString detailedText(lua_tostring(L,2),lua_objlen(L,2));

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRichMessageDialog::ShowDetailedText(const wxString &)");
		}
		self->ShowDetailedText(detailedText);

		return 0;
	}

	// wxString wxRichMessageDialog::GetDetailedText() const
	static int _bind_GetDetailedText(lua_State *L) {
		if (!_lg_typecheck_GetDetailedText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRichMessageDialog::GetDetailedText() const function, expected prototype:\nwxString wxRichMessageDialog::GetDetailedText() const\nClass arguments details:\n");
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRichMessageDialog::GetDetailedText() const");
		}
		wxString lret = self->GetDetailedText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxRichMessageDialog::IsCheckBoxChecked() const
	static int _bind_IsCheckBoxChecked(lua_State *L) {
		if (!_lg_typecheck_IsCheckBoxChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRichMessageDialog::IsCheckBoxChecked() const function, expected prototype:\nbool wxRichMessageDialog::IsCheckBoxChecked() const\nClass arguments details:\n");
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRichMessageDialog::IsCheckBoxChecked() const");
		}
		bool lret = self->IsCheckBoxChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRichMessageDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRichMessageDialog::ShowModal() function, expected prototype:\nint wxRichMessageDialog::ShowModal()\nClass arguments details:\n");
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRichMessageDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRichMessageDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRichMessageDialog::base_ShowModal() function, expected prototype:\nint wxRichMessageDialog::base_ShowModal()\nClass arguments details:\n");
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRichMessageDialog::base_ShowModal()");
		}
		int lret = self->wxRichMessageDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRichMessageDialog* LunaTraits< wxRichMessageDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRichMessageDialog::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRichMessageDialog >::_bind_dtor(wxRichMessageDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichMessageDialog >::className[] = "wxRichMessageDialog";
const char LunaTraits< wxRichMessageDialog >::fullName[] = "wxRichMessageDialog";
const char LunaTraits< wxRichMessageDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichMessageDialog >::parents[] = {0};
const int LunaTraits< wxRichMessageDialog >::hash = 86910257;
const int LunaTraits< wxRichMessageDialog >::uniqueIDs[] = {86910257,0};

luna_RegType LunaTraits< wxRichMessageDialog >::methods[] = {
	{"ShowCheckBox", &luna_wrapper_wxRichMessageDialog::_bind_ShowCheckBox},
	{"GetCheckBoxText", &luna_wrapper_wxRichMessageDialog::_bind_GetCheckBoxText},
	{"ShowDetailedText", &luna_wrapper_wxRichMessageDialog::_bind_ShowDetailedText},
	{"GetDetailedText", &luna_wrapper_wxRichMessageDialog::_bind_GetDetailedText},
	{"IsCheckBoxChecked", &luna_wrapper_wxRichMessageDialog::_bind_IsCheckBoxChecked},
	{"ShowModal", &luna_wrapper_wxRichMessageDialog::_bind_ShowModal},
	{"base_ShowModal", &luna_wrapper_wxRichMessageDialog::_bind_base_ShowModal},
	{"dynCast", &luna_wrapper_wxRichMessageDialog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichMessageDialog::_bind___eq},
	{"getTable", &luna_wrapper_wxRichMessageDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichMessageDialog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichMessageDialog >::enumValues[] = {
	{0,0}
};


