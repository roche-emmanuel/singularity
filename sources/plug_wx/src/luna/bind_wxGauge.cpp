#include <plug_common.h>

class luna_wrapper_wxGauge {
public:
	typedef Luna< wxGauge > luna_t;

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
		wxGauge* ptr= dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGauge >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBezelFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShadowWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Pulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBezelFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShadowWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxGauge::wxGauge()
	static wxGauge* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGauge::wxGauge() function, expected prototype:\nwxGauge::wxGauge()\nClass arguments details:\n");
		}


		return new wxGauge();
	}

	// wxGauge::wxGauge(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr)
	static wxGauge* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGauge::wxGauge(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr) function, expected prototype:\nwxGauge::wxGauge(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int range=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGauge::wxGauge function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGauge::wxGauge function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGauge::wxGauge function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxGauge(parent, id, range, pos, size, style, validator, name);
	}

	// Overload binder for wxGauge::wxGauge
	static wxGauge* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGauge, cannot match any of the overloads for function wxGauge:\n  wxGauge()\n  wxGauge(wxWindow *, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGauge::Create(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGauge::Create(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr) function, expected prototype:\nbool wxGauge::Create(wxWindow * parent, int id, int range, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxGaugeNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		int range=(int)lua_tointeger(L,4);
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGauge::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGauge::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGauge::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGauge::Create(wxWindow *, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, range, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGauge::GetBezelFace() const
	static int _bind_GetBezelFace(lua_State *L) {
		if (!_lg_typecheck_GetBezelFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGauge::GetBezelFace() const function, expected prototype:\nint wxGauge::GetBezelFace() const\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGauge::GetBezelFace() const");
		}
		int lret = self->GetBezelFace();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGauge::GetRange() const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGauge::GetRange() const function, expected prototype:\nint wxGauge::GetRange() const\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGauge::GetRange() const");
		}
		int lret = self->GetRange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGauge::GetShadowWidth() const
	static int _bind_GetShadowWidth(lua_State *L) {
		if (!_lg_typecheck_GetShadowWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGauge::GetShadowWidth() const function, expected prototype:\nint wxGauge::GetShadowWidth() const\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGauge::GetShadowWidth() const");
		}
		int lret = self->GetShadowWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGauge::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGauge::GetValue() const function, expected prototype:\nint wxGauge::GetValue() const\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGauge::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGauge::IsVertical() const
	static int _bind_IsVertical(lua_State *L) {
		if (!_lg_typecheck_IsVertical(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGauge::IsVertical() const function, expected prototype:\nbool wxGauge::IsVertical() const\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGauge::IsVertical() const");
		}
		bool lret = self->IsVertical();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGauge::Pulse()
	static int _bind_Pulse(lua_State *L) {
		if (!_lg_typecheck_Pulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGauge::Pulse() function, expected prototype:\nvoid wxGauge::Pulse()\nClass arguments details:\n");
		}


		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGauge::Pulse()");
		}
		self->Pulse();

		return 0;
	}

	// void wxGauge::SetBezelFace(int width)
	static int _bind_SetBezelFace(lua_State *L) {
		if (!_lg_typecheck_SetBezelFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGauge::SetBezelFace(int width) function, expected prototype:\nvoid wxGauge::SetBezelFace(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGauge::SetBezelFace(int)");
		}
		self->SetBezelFace(width);

		return 0;
	}

	// void wxGauge::SetRange(int range)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGauge::SetRange(int range) function, expected prototype:\nvoid wxGauge::SetRange(int range)\nClass arguments details:\n");
		}

		int range=(int)lua_tointeger(L,2);

		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGauge::SetRange(int)");
		}
		self->SetRange(range);

		return 0;
	}

	// void wxGauge::SetShadowWidth(int width)
	static int _bind_SetShadowWidth(lua_State *L) {
		if (!_lg_typecheck_SetShadowWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGauge::SetShadowWidth(int width) function, expected prototype:\nvoid wxGauge::SetShadowWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGauge::SetShadowWidth(int)");
		}
		self->SetShadowWidth(width);

		return 0;
	}

	// void wxGauge::SetValue(int pos)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGauge::SetValue(int pos) function, expected prototype:\nvoid wxGauge::SetValue(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxGauge* self=dynamic_cast< wxGauge* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGauge::SetValue(int)");
		}
		self->SetValue(pos);

		return 0;
	}


	// Operator binds:

};

wxGauge* LunaTraits< wxGauge >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGauge::_bind_ctor(L);
}

void LunaTraits< wxGauge >::_bind_dtor(wxGauge* obj) {
	delete obj;
}

const char LunaTraits< wxGauge >::className[] = "wxGauge";
const char LunaTraits< wxGauge >::fullName[] = "wxGauge";
const char LunaTraits< wxGauge >::moduleName[] = "wx";
const char* LunaTraits< wxGauge >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxGauge >::hash = 17006017;
const int LunaTraits< wxGauge >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGauge >::methods[] = {
	{"Create", &luna_wrapper_wxGauge::_bind_Create},
	{"GetBezelFace", &luna_wrapper_wxGauge::_bind_GetBezelFace},
	{"GetRange", &luna_wrapper_wxGauge::_bind_GetRange},
	{"GetShadowWidth", &luna_wrapper_wxGauge::_bind_GetShadowWidth},
	{"GetValue", &luna_wrapper_wxGauge::_bind_GetValue},
	{"IsVertical", &luna_wrapper_wxGauge::_bind_IsVertical},
	{"Pulse", &luna_wrapper_wxGauge::_bind_Pulse},
	{"SetBezelFace", &luna_wrapper_wxGauge::_bind_SetBezelFace},
	{"SetRange", &luna_wrapper_wxGauge::_bind_SetRange},
	{"SetShadowWidth", &luna_wrapper_wxGauge::_bind_SetShadowWidth},
	{"SetValue", &luna_wrapper_wxGauge::_bind_SetValue},
	{"__eq", &luna_wrapper_wxGauge::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGauge >::converters[] = {
	{"wxObject", &luna_wrapper_wxGauge::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGauge >::enumValues[] = {
	{0,0}
};


