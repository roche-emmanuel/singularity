#include <plug_common.h>

class luna_wrapper_wxEditableListBox {
public:
	typedef Luna< wxEditableListBox > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxEditableListBox* ptr= dynamic_cast< wxEditableListBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEditableListBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStrings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStrings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEditableListBox::wxEditableListBox()
	static wxEditableListBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEditableListBox::wxEditableListBox() function, expected prototype:\nwxEditableListBox::wxEditableListBox()\nClass arguments details:\n");
		}


		return new wxEditableListBox();
	}

	// wxEditableListBox::wxEditableListBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr)
	static wxEditableListBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEditableListBox::wxEditableListBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr) function, expected prototype:\nwxEditableListBox::wxEditableListBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxEditableListBox::wxEditableListBox function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxEditableListBox::wxEditableListBox function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxEL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxEditableListBox(parent, id, label, pos, size, style, name);
	}

	// Overload binder for wxEditableListBox::wxEditableListBox
	static wxEditableListBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxEditableListBox, cannot match any of the overloads for function wxEditableListBox:\n  wxEditableListBox()\n  wxEditableListBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxEditableListBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEditableListBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr) function, expected prototype:\nbool wxEditableListBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxEL_DEFAULT_STYLE, const wxString & name = wxEditableListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxEditableListBox::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxEditableListBox::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxEL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxEditableListBox* self=dynamic_cast< wxEditableListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEditableListBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEditableListBox::SetStrings(const wxArrayString & strings)
	static int _bind_SetStrings(lua_State *L) {
		if (!_lg_typecheck_SetStrings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEditableListBox::SetStrings(const wxArrayString & strings) function, expected prototype:\nvoid wxEditableListBox::SetStrings(const wxArrayString & strings)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* strings_ptr=(Luna< wxArrayString >::check(L,2));
		if( !strings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strings in wxEditableListBox::SetStrings function");
		}
		const wxArrayString & strings=*strings_ptr;

		wxEditableListBox* self=dynamic_cast< wxEditableListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEditableListBox::SetStrings(const wxArrayString &)");
		}
		self->SetStrings(strings);

		return 0;
	}

	// void wxEditableListBox::GetStrings(wxArrayString & strings) const
	static int _bind_GetStrings(lua_State *L) {
		if (!_lg_typecheck_GetStrings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEditableListBox::GetStrings(wxArrayString & strings) const function, expected prototype:\nvoid wxEditableListBox::GetStrings(wxArrayString & strings) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* strings_ptr=(Luna< wxArrayString >::check(L,2));
		if( !strings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strings in wxEditableListBox::GetStrings function");
		}
		wxArrayString & strings=*strings_ptr;

		wxEditableListBox* self=dynamic_cast< wxEditableListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEditableListBox::GetStrings(wxArrayString &) const");
		}
		self->GetStrings(strings);

		return 0;
	}


	// Operator binds:

};

wxEditableListBox* LunaTraits< wxEditableListBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEditableListBox::_bind_ctor(L);
}

void LunaTraits< wxEditableListBox >::_bind_dtor(wxEditableListBox* obj) {
	delete obj;
}

const char LunaTraits< wxEditableListBox >::className[] = "wxEditableListBox";
const char LunaTraits< wxEditableListBox >::fullName[] = "wxEditableListBox";
const char LunaTraits< wxEditableListBox >::moduleName[] = "wx";
const char* LunaTraits< wxEditableListBox >::parents[] = {"wx.wxPanel", 0};
const int LunaTraits< wxEditableListBox >::hash = 71507634;
const int LunaTraits< wxEditableListBox >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxEditableListBox >::methods[] = {
	{"Create", &luna_wrapper_wxEditableListBox::_bind_Create},
	{"SetStrings", &luna_wrapper_wxEditableListBox::_bind_SetStrings},
	{"GetStrings", &luna_wrapper_wxEditableListBox::_bind_GetStrings},
	{0,0}
};

luna_ConverterType LunaTraits< wxEditableListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxEditableListBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEditableListBox >::enumValues[] = {
	{0,0}
};

