#include <plug_common.h>

class luna_wrapper_wxPasswordEntryDialog {
public:
	typedef Luna< wxPasswordEntryDialog > luna_t;

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
		wxPasswordEntryDialog* ptr= dynamic_cast< wxPasswordEntryDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPasswordEntryDialog >::push(L,ptr,false);
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

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPasswordEntryDialog::wxPasswordEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetPasswordFromUserPromptStr, const wxString & defaultValue = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition)
	static wxPasswordEntryDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPasswordEntryDialog::wxPasswordEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetPasswordFromUserPromptStr, const wxString & defaultValue = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxPasswordEntryDialog::wxPasswordEntryDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxGetPasswordFromUserPromptStr, const wxString & defaultValue = wxEmptyString, long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultValue(lua_tostring(L,4),lua_objlen(L,4));
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxOK | wxCANCEL | wxCENTRE;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPasswordEntryDialog::wxPasswordEntryDialog function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;

		return new wxPasswordEntryDialog(parent, message, caption, defaultValue, style, pos);
	}


	// Function binds:

	// Operator binds:

};

wxPasswordEntryDialog* LunaTraits< wxPasswordEntryDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPasswordEntryDialog::_bind_ctor(L);
}

void LunaTraits< wxPasswordEntryDialog >::_bind_dtor(wxPasswordEntryDialog* obj) {
	delete obj;
}

const char LunaTraits< wxPasswordEntryDialog >::className[] = "wxPasswordEntryDialog";
const char LunaTraits< wxPasswordEntryDialog >::fullName[] = "wxPasswordEntryDialog";
const char LunaTraits< wxPasswordEntryDialog >::moduleName[] = "wx";
const char* LunaTraits< wxPasswordEntryDialog >::parents[] = {"wx.wxTextEntryDialog", 0};
const int LunaTraits< wxPasswordEntryDialog >::hash = 73604746;
const int LunaTraits< wxPasswordEntryDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPasswordEntryDialog >::methods[] = {
	{"__eq", &luna_wrapper_wxPasswordEntryDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPasswordEntryDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxPasswordEntryDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPasswordEntryDialog >::enumValues[] = {
	{0,0}
};


