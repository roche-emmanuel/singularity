#include <plug_common.h>

class luna_wrapper_wxSpinCtrlDouble {
public:
	typedef Luna< wxSpinCtrlDouble > luna_t;

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
		wxSpinCtrlDouble* ptr= dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinCtrlDouble >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSpinCtrlDouble* ptr= static_cast< wxSpinCtrlDouble* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinCtrlDouble >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>11 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		if( luatop>9 && lua_isnumber(L,10)==0 ) return false;
		if( luatop>10 && lua_isstring(L,11)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>12 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		if( luatop>9 && lua_isnumber(L,10)==0 ) return false;
		if( luatop>10 && lua_isnumber(L,11)==0 ) return false;
		if( luatop>11 && lua_isstring(L,12)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDigits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIncrement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_SetDigits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIncrement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSpinCtrlDouble::wxSpinCtrlDouble()
	static wxSpinCtrlDouble* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinCtrlDouble::wxSpinCtrlDouble() function, expected prototype:\nwxSpinCtrlDouble::wxSpinCtrlDouble()\nClass arguments details:\n");
		}


		return new wxSpinCtrlDouble();
	}

	// wxSpinCtrlDouble::wxSpinCtrlDouble(wxWindow * parent, int id = -1, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = wxT ("wxSpinCtrlDouble"))
	static wxSpinCtrlDouble* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinCtrlDouble::wxSpinCtrlDouble(wxWindow * parent, int id = -1, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = wxT (\"wxSpinCtrlDouble\")) function, expected prototype:\nwxSpinCtrlDouble::wxSpinCtrlDouble(wxWindow * parent, int id = -1, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = wxT (\"wxSpinCtrlDouble\"))\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 11 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinCtrlDouble::wxSpinCtrlDouble function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinCtrlDouble::wxSpinCtrlDouble function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxSP_ARROW_KEYS;
		double min=luatop>6 ? (double)lua_tonumber(L,7) : 0;
		double max=luatop>7 ? (double)lua_tonumber(L,8) : 100;
		double initial=luatop>8 ? (double)lua_tonumber(L,9) : 0;
		double inc=luatop>9 ? (double)lua_tonumber(L,10) : 1;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		return new wxSpinCtrlDouble(parent, id, value, pos, size, style, min, max, initial, inc, name);
	}

	// Overload binder for wxSpinCtrlDouble::wxSpinCtrlDouble
	static wxSpinCtrlDouble* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSpinCtrlDouble, cannot match any of the overloads for function wxSpinCtrlDouble:\n  wxSpinCtrlDouble()\n  wxSpinCtrlDouble(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, double, double, double, double, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSpinCtrlDouble::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = "wxSpinCtrlDouble")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSpinCtrlDouble::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = \"wxSpinCtrlDouble\") function, expected prototype:\nbool wxSpinCtrlDouble::Create(wxWindow * parent, int id = wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSP_ARROW_KEYS, double min = 0, double max = 100, double initial = 0, double inc = 1, const wxString & name = \"wxSpinCtrlDouble\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 11 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSpinCtrlDouble::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSpinCtrlDouble::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxSP_ARROW_KEYS;
		double min=luatop>7 ? (double)lua_tonumber(L,8) : 0;
		double max=luatop>8 ? (double)lua_tonumber(L,9) : 100;
		double initial=luatop>9 ? (double)lua_tonumber(L,10) : 0;
		double inc=luatop>10 ? (double)lua_tonumber(L,11) : 1;
		wxString name(lua_tostring(L,12),lua_objlen(L,12));

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSpinCtrlDouble::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, double, double, double, double, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, min, max, initial, inc, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxSpinCtrlDouble::GetDigits() const
	static int _bind_GetDigits(lua_State *L) {
		if (!_lg_typecheck_GetDigits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxSpinCtrlDouble::GetDigits() const function, expected prototype:\nunsigned int wxSpinCtrlDouble::GetDigits() const\nClass arguments details:\n");
		}


		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxSpinCtrlDouble::GetDigits() const");
		}
		unsigned int lret = self->GetDigits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxSpinCtrlDouble::GetIncrement() const
	static int _bind_GetIncrement(lua_State *L) {
		if (!_lg_typecheck_GetIncrement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinCtrlDouble::GetIncrement() const function, expected prototype:\ndouble wxSpinCtrlDouble::GetIncrement() const\nClass arguments details:\n");
		}


		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxSpinCtrlDouble::GetIncrement() const");
		}
		double lret = self->GetIncrement();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxSpinCtrlDouble::GetMax() const
	static int _bind_GetMax(lua_State *L) {
		if (!_lg_typecheck_GetMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinCtrlDouble::GetMax() const function, expected prototype:\ndouble wxSpinCtrlDouble::GetMax() const\nClass arguments details:\n");
		}


		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxSpinCtrlDouble::GetMax() const");
		}
		double lret = self->GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxSpinCtrlDouble::GetMin() const
	static int _bind_GetMin(lua_State *L) {
		if (!_lg_typecheck_GetMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinCtrlDouble::GetMin() const function, expected prototype:\ndouble wxSpinCtrlDouble::GetMin() const\nClass arguments details:\n");
		}


		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxSpinCtrlDouble::GetMin() const");
		}
		double lret = self->GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxSpinCtrlDouble::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinCtrlDouble::GetValue() const function, expected prototype:\ndouble wxSpinCtrlDouble::GetValue() const\nClass arguments details:\n");
		}


		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxSpinCtrlDouble::GetValue() const");
		}
		double lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinCtrlDouble::SetDigits(unsigned int digits)
	static int _bind_SetDigits(lua_State *L) {
		if (!_lg_typecheck_SetDigits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrlDouble::SetDigits(unsigned int digits) function, expected prototype:\nvoid wxSpinCtrlDouble::SetDigits(unsigned int digits)\nClass arguments details:\n");
		}

		unsigned int digits=(unsigned int)lua_tointeger(L,2);

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrlDouble::SetDigits(unsigned int)");
		}
		self->SetDigits(digits);

		return 0;
	}

	// void wxSpinCtrlDouble::SetIncrement(double inc)
	static int _bind_SetIncrement(lua_State *L) {
		if (!_lg_typecheck_SetIncrement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrlDouble::SetIncrement(double inc) function, expected prototype:\nvoid wxSpinCtrlDouble::SetIncrement(double inc)\nClass arguments details:\n");
		}

		double inc=(double)lua_tonumber(L,2);

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrlDouble::SetIncrement(double)");
		}
		self->SetIncrement(inc);

		return 0;
	}

	// void wxSpinCtrlDouble::SetRange(double minVal, double maxVal)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrlDouble::SetRange(double minVal, double maxVal) function, expected prototype:\nvoid wxSpinCtrlDouble::SetRange(double minVal, double maxVal)\nClass arguments details:\n");
		}

		double minVal=(double)lua_tonumber(L,2);
		double maxVal=(double)lua_tonumber(L,3);

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrlDouble::SetRange(double, double)");
		}
		self->SetRange(minVal, maxVal);

		return 0;
	}

	// void wxSpinCtrlDouble::SetValue(const wxString & text)
	static int _bind_SetValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrlDouble::SetValue(const wxString & text) function, expected prototype:\nvoid wxSpinCtrlDouble::SetValue(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrlDouble::SetValue(const wxString &)");
		}
		self->SetValue(text);

		return 0;
	}

	// void wxSpinCtrlDouble::SetValue(double value)
	static int _bind_SetValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinCtrlDouble::SetValue(double value) function, expected prototype:\nvoid wxSpinCtrlDouble::SetValue(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxSpinCtrlDouble* self=dynamic_cast< wxSpinCtrlDouble* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinCtrlDouble::SetValue(double)");
		}
		self->SetValue(value);

		return 0;
	}

	// Overload binder for wxSpinCtrlDouble::SetValue
	static int _bind_SetValue(lua_State *L) {
		if (_lg_typecheck_SetValue_overload_1(L)) return _bind_SetValue_overload_1(L);
		if (_lg_typecheck_SetValue_overload_2(L)) return _bind_SetValue_overload_2(L);

		luaL_error(L, "error in function SetValue, cannot match any of the overloads for function SetValue:\n  SetValue(const wxString &)\n  SetValue(double)\n");
		return 0;
	}


	// Operator binds:

};

wxSpinCtrlDouble* LunaTraits< wxSpinCtrlDouble >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSpinCtrlDouble::_bind_ctor(L);
}

void LunaTraits< wxSpinCtrlDouble >::_bind_dtor(wxSpinCtrlDouble* obj) {
	delete obj;
}

const char LunaTraits< wxSpinCtrlDouble >::className[] = "wxSpinCtrlDouble";
const char LunaTraits< wxSpinCtrlDouble >::fullName[] = "wxSpinCtrlDouble";
const char LunaTraits< wxSpinCtrlDouble >::moduleName[] = "wx";
const char* LunaTraits< wxSpinCtrlDouble >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxSpinCtrlDouble >::hash = 19306958;
const int LunaTraits< wxSpinCtrlDouble >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSpinCtrlDouble >::methods[] = {
	{"Create", &luna_wrapper_wxSpinCtrlDouble::_bind_Create},
	{"GetDigits", &luna_wrapper_wxSpinCtrlDouble::_bind_GetDigits},
	{"GetIncrement", &luna_wrapper_wxSpinCtrlDouble::_bind_GetIncrement},
	{"GetMax", &luna_wrapper_wxSpinCtrlDouble::_bind_GetMax},
	{"GetMin", &luna_wrapper_wxSpinCtrlDouble::_bind_GetMin},
	{"GetValue", &luna_wrapper_wxSpinCtrlDouble::_bind_GetValue},
	{"SetDigits", &luna_wrapper_wxSpinCtrlDouble::_bind_SetDigits},
	{"SetIncrement", &luna_wrapper_wxSpinCtrlDouble::_bind_SetIncrement},
	{"SetRange", &luna_wrapper_wxSpinCtrlDouble::_bind_SetRange},
	{"SetValue", &luna_wrapper_wxSpinCtrlDouble::_bind_SetValue},
	{"__eq", &luna_wrapper_wxSpinCtrlDouble::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinCtrlDouble >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinCtrlDouble::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxSpinCtrlDouble::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinCtrlDouble >::enumValues[] = {
	{0,0}
};


