#include <plug_common.h>

class luna_wrapper_wxDirDialog {
public:
	typedef Luna< wxDirDialog > luna_t;

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
		wxDirDialog* ptr= dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDirDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDirDialog* ptr= static_cast< wxDirDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDirDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
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
	// wxDirDialog::wxDirDialog(wxWindow * parent, const wxString & message = wxDirSelectorPromptStr, const wxString & defaultPath = wxEmptyString, long style = wxDD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxDirDialogNameStr)
	static wxDirDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirDialog::wxDirDialog(wxWindow * parent, const wxString & message = wxDirSelectorPromptStr, const wxString & defaultPath = wxEmptyString, long style = wxDD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxDirDialogNameStr) function, expected prototype:\nwxDirDialog::wxDirDialog(wxWindow * parent, const wxString & message = wxDirSelectorPromptStr, const wxString & defaultPath = wxEmptyString, long style = wxDD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxDirDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultPath(lua_tostring(L,3),lua_objlen(L,3));
		long style=luatop>3 ? (long)lua_tointeger(L,4) : wxDD_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDirDialog::wxDirDialog function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDirDialog::wxDirDialog function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxDirDialog(parent, message, defaultPath, style, pos, size, name);
	}


	// Function binds:
	// wxString wxDirDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDirDialog::GetMessage() const function, expected prototype:\nwxString wxDirDialog::GetMessage() const\nClass arguments details:\n");
		}


		wxDirDialog* self=dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDirDialog::GetMessage() const");
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDirDialog::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDirDialog::GetPath() const function, expected prototype:\nwxString wxDirDialog::GetPath() const\nClass arguments details:\n");
		}


		wxDirDialog* self=dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDirDialog::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDirDialog::SetMessage(const wxString & message)
	static int _bind_SetMessage(lua_State *L) {
		if (!_lg_typecheck_SetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDirDialog::SetMessage(const wxString & message) function, expected prototype:\nvoid wxDirDialog::SetMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxDirDialog* self=dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDirDialog::SetMessage(const wxString &)");
		}
		self->SetMessage(message);

		return 0;
	}

	// void wxDirDialog::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDirDialog::SetPath(const wxString & path) function, expected prototype:\nvoid wxDirDialog::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDirDialog* self=dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDirDialog::SetPath(const wxString &)");
		}
		self->SetPath(path);

		return 0;
	}

	// int wxDirDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDirDialog::ShowModal() function, expected prototype:\nint wxDirDialog::ShowModal()\nClass arguments details:\n");
		}


		wxDirDialog* self=dynamic_cast< wxDirDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDirDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDirDialog* LunaTraits< wxDirDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDirDialog::_bind_ctor(L);
}

void LunaTraits< wxDirDialog >::_bind_dtor(wxDirDialog* obj) {
	delete obj;
}

const char LunaTraits< wxDirDialog >::className[] = "wxDirDialog";
const char LunaTraits< wxDirDialog >::fullName[] = "wxDirDialog";
const char LunaTraits< wxDirDialog >::moduleName[] = "wx";
const char* LunaTraits< wxDirDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxDirDialog >::hash = 82702649;
const int LunaTraits< wxDirDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDirDialog >::methods[] = {
	{"GetMessage", &luna_wrapper_wxDirDialog::_bind_GetMessage},
	{"GetPath", &luna_wrapper_wxDirDialog::_bind_GetPath},
	{"SetMessage", &luna_wrapper_wxDirDialog::_bind_SetMessage},
	{"SetPath", &luna_wrapper_wxDirDialog::_bind_SetPath},
	{"ShowModal", &luna_wrapper_wxDirDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxDirDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDirDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxDirDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxDirDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDirDialog >::enumValues[] = {
	{0,0}
};


