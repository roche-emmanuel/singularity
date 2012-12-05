#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSpinButton.h>

class luna_wrapper_wxSpinButton {
public:
	typedef Luna< wxSpinButton > luna_t;

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
		wxSpinButton* ptr= dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSpinButton::wxSpinButton()
	static wxSpinButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinButton::wxSpinButton() function, expected prototype:\nwxSpinButton::wxSpinButton()\nClass arguments details:\n");
		}


		return new wxSpinButton();
	}

	// wxSpinButton::wxSpinButton(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = "spinButton")
	static wxSpinButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinButton::wxSpinButton(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"spinButton\") function, expected prototype:\nwxSpinButton::wxSpinButton(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"spinButton\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinButton::wxSpinButton function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinButton::wxSpinButton function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxSP_VERTICAL;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxSpinButton(parent, id, pos, size, style, name);
	}

	// wxSpinButton::wxSpinButton(lua_Table * data)
	static wxSpinButton* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinButton::wxSpinButton(lua_Table * data) function, expected prototype:\nwxSpinButton::wxSpinButton(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxSpinButton(L,NULL);
	}

	// wxSpinButton::wxSpinButton(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = "spinButton")
	static wxSpinButton* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinButton::wxSpinButton(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"spinButton\") function, expected prototype:\nwxSpinButton::wxSpinButton(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"spinButton\")\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinButton::wxSpinButton function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinButton::wxSpinButton function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxSP_VERTICAL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxSpinButton(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxSpinButton::wxSpinButton
	static wxSpinButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxSpinButton, cannot match any of the overloads for function wxSpinButton:\n  wxSpinButton()\n  wxSpinButton(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxSpinButton(lua_Table *)\n  wxSpinButton(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSpinButton::Create(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = "wxSpinButton")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSpinButton::Create(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"wxSpinButton\") function, expected prototype:\nbool wxSpinButton::Create(wxWindow * parent, int id = -1, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_VERTICAL, const wxString & name = \"wxSpinButton\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinButton::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinButton::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxSP_VERTICAL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSpinButton::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxSpinButton::GetMax() const
	static int _bind_GetMax(lua_State *L) {
		if (!_lg_typecheck_GetMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinButton::GetMax() const function, expected prototype:\nint wxSpinButton::GetMax() const\nClass arguments details:\n");
		}


		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinButton::GetMax() const");
		}
		int lret = self->GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSpinButton::GetMin() const
	static int _bind_GetMin(lua_State *L) {
		if (!_lg_typecheck_GetMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinButton::GetMin() const function, expected prototype:\nint wxSpinButton::GetMin() const\nClass arguments details:\n");
		}


		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinButton::GetMin() const");
		}
		int lret = self->GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSpinButton::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinButton::GetValue() const function, expected prototype:\nint wxSpinButton::GetValue() const\nClass arguments details:\n");
		}


		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinButton::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinButton::SetRange(int min, int max)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinButton::SetRange(int min, int max) function, expected prototype:\nvoid wxSpinButton::SetRange(int min, int max)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);
		int max=(int)lua_tointeger(L,3);

		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinButton::SetRange(int, int)");
		}
		self->SetRange(min, max);

		return 0;
	}

	// void wxSpinButton::SetValue(int value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinButton::SetValue(int value) function, expected prototype:\nvoid wxSpinButton::SetValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxSpinButton* self=dynamic_cast< wxSpinButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinButton::SetValue(int)");
		}
		self->SetValue(value);

		return 0;
	}


	// Operator binds:

};

wxSpinButton* LunaTraits< wxSpinButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSpinButton::_bind_ctor(L);
}

void LunaTraits< wxSpinButton >::_bind_dtor(wxSpinButton* obj) {
	delete obj;
}

const char LunaTraits< wxSpinButton >::className[] = "wxSpinButton";
const char LunaTraits< wxSpinButton >::fullName[] = "wxSpinButton";
const char LunaTraits< wxSpinButton >::moduleName[] = "wx";
const char* LunaTraits< wxSpinButton >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxSpinButton >::hash = 64739352;
const int LunaTraits< wxSpinButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSpinButton >::methods[] = {
	{"Create", &luna_wrapper_wxSpinButton::_bind_Create},
	{"GetMax", &luna_wrapper_wxSpinButton::_bind_GetMax},
	{"GetMin", &luna_wrapper_wxSpinButton::_bind_GetMin},
	{"GetValue", &luna_wrapper_wxSpinButton::_bind_GetValue},
	{"SetRange", &luna_wrapper_wxSpinButton::_bind_SetRange},
	{"SetValue", &luna_wrapper_wxSpinButton::_bind_SetValue},
	{"__eq", &luna_wrapper_wxSpinButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinButton >::enumValues[] = {
	{0,0}
};


