#include <plug_common.h>

class luna_wrapper_wxSymbolPickerDialog {
public:
	typedef Luna< wxSymbolPickerDialog > luna_t;

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
		wxSymbolPickerDialog* ptr= dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSymbolPickerDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSymbolPickerDialog* ptr= static_cast< wxSymbolPickerDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSymbolPickerDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4)) ) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>6 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,7))) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>7 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,8))) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>10 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,25723480) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,20268751) ) return false;
		if( luatop>9 && (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFromUnicode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNormalTextFontName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSymbol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSymbolChar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFontName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFromUnicode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalTextFontName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSymbol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUnicodeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseNormalFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSymbolPickerDialog::wxSymbolPickerDialog()
	static wxSymbolPickerDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSymbolPickerDialog::wxSymbolPickerDialog() function, expected prototype:\nwxSymbolPickerDialog::wxSymbolPickerDialog()\nClass arguments details:\n");
		}


		return new wxSymbolPickerDialog();
	}

	// wxSymbolPickerDialog::wxSymbolPickerDialog(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & title = _ ("Symbols"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX)
	static wxSymbolPickerDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSymbolPickerDialog::wxSymbolPickerDialog(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & title = _ (\"Symbols\"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX) function, expected prototype:\nwxSymbolPickerDialog::wxSymbolPickerDialog(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & title = _ (\"Symbols\"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxString symbol(lua_tostring(L,1),lua_objlen(L,1));
		wxString initialFont(lua_tostring(L,2),lua_objlen(L,2));
		wxString normalTextFont(lua_tostring(L,3),lua_objlen(L,3));
		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4));
		int id=luatop>4 ? (int)lua_tointeger(L,5) : wxID_ANY;
		wxString title(lua_tostring(L,6),lua_objlen(L,6));
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSymbolPickerDialog::wxSymbolPickerDialog function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSymbolPickerDialog::wxSymbolPickerDialog function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : wxDefaultSize;
		long style=luatop>8 ? (long)lua_tointeger(L,9) : wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX;

		return new wxSymbolPickerDialog(symbol, initialFont, normalTextFont, parent, id, title, pos, size, style);
	}

	// Overload binder for wxSymbolPickerDialog::wxSymbolPickerDialog
	static wxSymbolPickerDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSymbolPickerDialog, cannot match any of the overloads for function wxSymbolPickerDialog:\n  wxSymbolPickerDialog()\n  wxSymbolPickerDialog(const wxString &, const wxString &, const wxString &, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSymbolPickerDialog::Create(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & caption = wxGetTranslation ("Symbols"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxSize (400, 300), long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSymbolPickerDialog::Create(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & caption = wxGetTranslation (\"Symbols\"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxSize (400, 300), long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX) function, expected prototype:\nbool wxSymbolPickerDialog::Create(const wxString & symbol, const wxString & initialFont, const wxString & normalTextFont, wxWindow * parent, int id = wxID_ANY, const wxString & caption = wxGetTranslation (\"Symbols\"), const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxSize (400, 300), long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxString symbol(lua_tostring(L,2),lua_objlen(L,2));
		wxString initialFont(lua_tostring(L,3),lua_objlen(L,3));
		wxString normalTextFont(lua_tostring(L,4),lua_objlen(L,4));
		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,5));
		int id=luatop>5 ? (int)lua_tointeger(L,6) : wxID_ANY;
		wxString caption(lua_tostring(L,7),lua_objlen(L,7));
		const wxPoint* pos_ptr=luatop>7 ? (Luna< wxPoint >::check(L,8)) : NULL;
		if( luatop>7 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSymbolPickerDialog::Create function");
		}
		const wxPoint & pos=luatop>7 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>8 ? (Luna< wxSize >::check(L,9)) : NULL;
		if( luatop>8 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSymbolPickerDialog::Create function");
		}
		const wxSize & size=luatop>8 ? *size_ptr : wxSize (400, 300);
		long style=luatop>9 ? (long)lua_tointeger(L,10) : wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER | wxCLOSE_BOX;

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSymbolPickerDialog::Create(const wxString &, const wxString &, const wxString &, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(symbol, initialFont, normalTextFont, parent, id, caption, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSymbolPickerDialog::GetFontName() const
	static int _bind_GetFontName(lua_State *L) {
		if (!_lg_typecheck_GetFontName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSymbolPickerDialog::GetFontName() const function, expected prototype:\nwxString wxSymbolPickerDialog::GetFontName() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSymbolPickerDialog::GetFontName() const");
		}
		wxString lret = self->GetFontName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxSymbolPickerDialog::GetFromUnicode() const
	static int _bind_GetFromUnicode(lua_State *L) {
		if (!_lg_typecheck_GetFromUnicode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSymbolPickerDialog::GetFromUnicode() const function, expected prototype:\nbool wxSymbolPickerDialog::GetFromUnicode() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSymbolPickerDialog::GetFromUnicode() const");
		}
		bool lret = self->GetFromUnicode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSymbolPickerDialog::GetNormalTextFontName() const
	static int _bind_GetNormalTextFontName(lua_State *L) {
		if (!_lg_typecheck_GetNormalTextFontName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSymbolPickerDialog::GetNormalTextFontName() const function, expected prototype:\nwxString wxSymbolPickerDialog::GetNormalTextFontName() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSymbolPickerDialog::GetNormalTextFontName() const");
		}
		wxString lret = self->GetNormalTextFontName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxSymbolPickerDialog::GetSymbol() const
	static int _bind_GetSymbol(lua_State *L) {
		if (!_lg_typecheck_GetSymbol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSymbolPickerDialog::GetSymbol() const function, expected prototype:\nwxString wxSymbolPickerDialog::GetSymbol() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSymbolPickerDialog::GetSymbol() const");
		}
		wxString lret = self->GetSymbol();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxSymbolPickerDialog::GetSymbolChar() const
	static int _bind_GetSymbolChar(lua_State *L) {
		if (!_lg_typecheck_GetSymbolChar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSymbolPickerDialog::GetSymbolChar() const function, expected prototype:\nint wxSymbolPickerDialog::GetSymbolChar() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSymbolPickerDialog::GetSymbolChar() const");
		}
		int lret = self->GetSymbolChar();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSymbolPickerDialog::HasSelection() const
	static int _bind_HasSelection(lua_State *L) {
		if (!_lg_typecheck_HasSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSymbolPickerDialog::HasSelection() const function, expected prototype:\nbool wxSymbolPickerDialog::HasSelection() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSymbolPickerDialog::HasSelection() const");
		}
		bool lret = self->HasSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSymbolPickerDialog::SetFontName(wxString value)
	static int _bind_SetFontName(lua_State *L) {
		if (!_lg_typecheck_SetFontName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSymbolPickerDialog::SetFontName(wxString value) function, expected prototype:\nvoid wxSymbolPickerDialog::SetFontName(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSymbolPickerDialog::SetFontName(wxString)");
		}
		self->SetFontName(value);

		return 0;
	}

	// void wxSymbolPickerDialog::SetFromUnicode(bool value)
	static int _bind_SetFromUnicode(lua_State *L) {
		if (!_lg_typecheck_SetFromUnicode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSymbolPickerDialog::SetFromUnicode(bool value) function, expected prototype:\nvoid wxSymbolPickerDialog::SetFromUnicode(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSymbolPickerDialog::SetFromUnicode(bool)");
		}
		self->SetFromUnicode(value);

		return 0;
	}

	// void wxSymbolPickerDialog::SetNormalTextFontName(wxString value)
	static int _bind_SetNormalTextFontName(lua_State *L) {
		if (!_lg_typecheck_SetNormalTextFontName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSymbolPickerDialog::SetNormalTextFontName(wxString value) function, expected prototype:\nvoid wxSymbolPickerDialog::SetNormalTextFontName(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSymbolPickerDialog::SetNormalTextFontName(wxString)");
		}
		self->SetNormalTextFontName(value);

		return 0;
	}

	// void wxSymbolPickerDialog::SetSymbol(wxString value)
	static int _bind_SetSymbol(lua_State *L) {
		if (!_lg_typecheck_SetSymbol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSymbolPickerDialog::SetSymbol(wxString value) function, expected prototype:\nvoid wxSymbolPickerDialog::SetSymbol(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSymbolPickerDialog::SetSymbol(wxString)");
		}
		self->SetSymbol(value);

		return 0;
	}

	// void wxSymbolPickerDialog::SetUnicodeMode(bool unicodeMode)
	static int _bind_SetUnicodeMode(lua_State *L) {
		if (!_lg_typecheck_SetUnicodeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSymbolPickerDialog::SetUnicodeMode(bool unicodeMode) function, expected prototype:\nvoid wxSymbolPickerDialog::SetUnicodeMode(bool unicodeMode)\nClass arguments details:\n");
		}

		bool unicodeMode=(bool)(lua_toboolean(L,2)==1);

		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSymbolPickerDialog::SetUnicodeMode(bool)");
		}
		self->SetUnicodeMode(unicodeMode);

		return 0;
	}

	// bool wxSymbolPickerDialog::UseNormalFont() const
	static int _bind_UseNormalFont(lua_State *L) {
		if (!_lg_typecheck_UseNormalFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSymbolPickerDialog::UseNormalFont() const function, expected prototype:\nbool wxSymbolPickerDialog::UseNormalFont() const\nClass arguments details:\n");
		}


		wxSymbolPickerDialog* self=dynamic_cast< wxSymbolPickerDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSymbolPickerDialog::UseNormalFont() const");
		}
		bool lret = self->UseNormalFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSymbolPickerDialog* LunaTraits< wxSymbolPickerDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSymbolPickerDialog::_bind_ctor(L);
}

void LunaTraits< wxSymbolPickerDialog >::_bind_dtor(wxSymbolPickerDialog* obj) {
	delete obj;
}

const char LunaTraits< wxSymbolPickerDialog >::className[] = "wxSymbolPickerDialog";
const char LunaTraits< wxSymbolPickerDialog >::fullName[] = "wxSymbolPickerDialog";
const char LunaTraits< wxSymbolPickerDialog >::moduleName[] = "wx";
const char* LunaTraits< wxSymbolPickerDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxSymbolPickerDialog >::hash = 77289787;
const int LunaTraits< wxSymbolPickerDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSymbolPickerDialog >::methods[] = {
	{"Create", &luna_wrapper_wxSymbolPickerDialog::_bind_Create},
	{"GetFontName", &luna_wrapper_wxSymbolPickerDialog::_bind_GetFontName},
	{"GetFromUnicode", &luna_wrapper_wxSymbolPickerDialog::_bind_GetFromUnicode},
	{"GetNormalTextFontName", &luna_wrapper_wxSymbolPickerDialog::_bind_GetNormalTextFontName},
	{"GetSymbol", &luna_wrapper_wxSymbolPickerDialog::_bind_GetSymbol},
	{"GetSymbolChar", &luna_wrapper_wxSymbolPickerDialog::_bind_GetSymbolChar},
	{"HasSelection", &luna_wrapper_wxSymbolPickerDialog::_bind_HasSelection},
	{"SetFontName", &luna_wrapper_wxSymbolPickerDialog::_bind_SetFontName},
	{"SetFromUnicode", &luna_wrapper_wxSymbolPickerDialog::_bind_SetFromUnicode},
	{"SetNormalTextFontName", &luna_wrapper_wxSymbolPickerDialog::_bind_SetNormalTextFontName},
	{"SetSymbol", &luna_wrapper_wxSymbolPickerDialog::_bind_SetSymbol},
	{"SetUnicodeMode", &luna_wrapper_wxSymbolPickerDialog::_bind_SetUnicodeMode},
	{"UseNormalFont", &luna_wrapper_wxSymbolPickerDialog::_bind_UseNormalFont},
	{"__eq", &luna_wrapper_wxSymbolPickerDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSymbolPickerDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxSymbolPickerDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxSymbolPickerDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSymbolPickerDialog >::enumValues[] = {
	{0,0}
};


