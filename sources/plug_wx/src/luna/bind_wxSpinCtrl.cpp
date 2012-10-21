#include <plug_common.h>

class luna_wrapper_wxSpinCtrl {
public:
	typedef Luna< wxSpinCtrl > luna_t;

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
		wxSpinCtrl* ptr= dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && lua_isstring(L,11)==0 ) return false;
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

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSpinCtrl::wxSpinCtrl()
	static wxSpinCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinCtrl::wxSpinCtrl() function, expected prototype:\nwxSpinCtrl::wxSpinCtrl()\nClass arguments details:\n");
		}


		return new wxSpinCtrl();
	}

	// wxSpinCtrl::wxSpinCtrl(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = "wxSpinCtrl")
	static wxSpinCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinCtrl::wxSpinCtrl(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = \"wxSpinCtrl\") function, expected prototype:\nwxSpinCtrl::wxSpinCtrl(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = \"wxSpinCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinCtrl::wxSpinCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinCtrl::wxSpinCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxSP_ARROW_KEYS;
		int min=luatop>6 ? (int)lua_tointeger(L,7) : 0;
		int max=luatop>7 ? (int)lua_tointeger(L,8) : 100;
		int initial=luatop>8 ? (int)lua_tointeger(L,9) : 0;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxSpinCtrl(parent, id, value, pos, size, style, min, max, initial, name);
	}

	// Overload binder for wxSpinCtrl::wxSpinCtrl
	static wxSpinCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSpinCtrl, cannot match any of the overloads for function wxSpinCtrl:\n  wxSpinCtrl()\n  wxSpinCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, int, int, int, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSpinCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = "wxSpinCtrl")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSpinCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = \"wxSpinCtrl\") function, expected prototype:\nbool wxSpinCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString & name = \"wxSpinCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxSP_ARROW_KEYS;
		int min=luatop>7 ? (int)lua_tointeger(L,8) : 0;
		int max=luatop>8 ? (int)lua_tointeger(L,9) : 100;
		int initial=luatop>9 ? (int)lua_tointeger(L,10) : 0;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSpinCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, int, int, int, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, min, max, initial, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxSpinCtrl::GetMax() const
	static int _bind_GetMax(lua_State *L) {
		if (!_lg_typecheck_GetMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinCtrl::GetMax() const function, expected prototype:\nint wxSpinCtrl::GetMax() const\nClass arguments details:\n");
		}


		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinCtrl::GetMax() const");
		}
		int lret = self->GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSpinCtrl::GetMin() const
	static int _bind_GetMin(lua_State *L) {
		if (!_lg_typecheck_GetMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinCtrl::GetMin() const function, expected prototype:\nint wxSpinCtrl::GetMin() const\nClass arguments details:\n");
		}


		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinCtrl::GetMin() const");
		}
		int lret = self->GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSpinCtrl::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinCtrl::GetValue() const function, expected prototype:\nint wxSpinCtrl::GetValue() const\nClass arguments details:\n");
		}


		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinCtrl::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinCtrl::SetRange(int minVal, int maxVal)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrl::SetRange(int minVal, int maxVal) function, expected prototype:\nvoid wxSpinCtrl::SetRange(int minVal, int maxVal)\nClass arguments details:\n");
		}

		int minVal=(int)lua_tointeger(L,2);
		int maxVal=(int)lua_tointeger(L,3);

		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrl::SetRange(int, int)");
		}
		self->SetRange(minVal, maxVal);

		return 0;
	}

	// void wxSpinCtrl::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrl::SetSelection(long from, long to) function, expected prototype:\nvoid wxSpinCtrl::SetSelection(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrl::SetSelection(long, long)");
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxSpinCtrl::SetValue(const wxString & text)
	static int _bind_SetValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrl::SetValue(const wxString & text) function, expected prototype:\nvoid wxSpinCtrl::SetValue(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrl::SetValue(const wxString &)");
		}
		self->SetValue(text);

		return 0;
	}

	// void wxSpinCtrl::SetValue(int value)
	static int _bind_SetValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrl::SetValue(int value) function, expected prototype:\nvoid wxSpinCtrl::SetValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxSpinCtrl* self=dynamic_cast< wxSpinCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrl::SetValue(int)");
		}
		self->SetValue(value);

		return 0;
	}

	// Overload binder for wxSpinCtrl::SetValue
	static int _bind_SetValue(lua_State *L) {
		if (_lg_typecheck_SetValue_overload_1(L)) return _bind_SetValue_overload_1(L);
		if (_lg_typecheck_SetValue_overload_2(L)) return _bind_SetValue_overload_2(L);

		luaL_error(L, "error in function SetValue, cannot match any of the overloads for function SetValue:\n  SetValue(const wxString &)\n  SetValue(int)\n");
		return 0;
	}


	// Operator binds:

};

wxSpinCtrl* LunaTraits< wxSpinCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSpinCtrl::_bind_ctor(L);
}

void LunaTraits< wxSpinCtrl >::_bind_dtor(wxSpinCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxSpinCtrl >::className[] = "wxSpinCtrl";
const char LunaTraits< wxSpinCtrl >::fullName[] = "wxSpinCtrl";
const char LunaTraits< wxSpinCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxSpinCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxSpinCtrl >::hash = 52125265;
const int LunaTraits< wxSpinCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSpinCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxSpinCtrl::_bind_Create},
	{"GetMax", &luna_wrapper_wxSpinCtrl::_bind_GetMax},
	{"GetMin", &luna_wrapper_wxSpinCtrl::_bind_GetMin},
	{"GetValue", &luna_wrapper_wxSpinCtrl::_bind_GetValue},
	{"SetRange", &luna_wrapper_wxSpinCtrl::_bind_SetRange},
	{"SetSelection", &luna_wrapper_wxSpinCtrl::_bind_SetSelection},
	{"SetValue", &luna_wrapper_wxSpinCtrl::_bind_SetValue},
	{"__eq", &luna_wrapper_wxSpinCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinCtrl >::enumValues[] = {
	{0,0}
};


