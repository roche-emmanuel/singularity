#include <plug_common.h>

class luna_wrapper_wxButton {
public:
	typedef Luna< wxButton > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxButton* ptr= dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
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
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAuthNeeded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAuthNeeded(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultSize(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxButton::wxButton()
	static wxButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxButton::wxButton() function, expected prototype:\nwxButton::wxButton()\nClass arguments details:\n");
		}


		return new wxButton();
	}

	// wxButton::wxButton(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static wxButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxButton::wxButton(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nwxButton::wxButton(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxButton::wxButton function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxButton::wxButton function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxButton::wxButton function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxButton(parent, id, label, pos, size, style, validator, name);
	}

	// Overload binder for wxButton::wxButton
	static wxButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxButton, cannot match any of the overloads for function wxButton:\n  wxButton()\n  wxButton(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxButton::Create(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxButton::Create(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nbool wxButton::Create(wxWindow * parent, int id, const wxString & label = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxButton::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxButton::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxButton::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxButton::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxButton::GetAuthNeeded() const
	static int _bind_GetAuthNeeded(lua_State *L) {
		if (!_lg_typecheck_GetAuthNeeded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxButton::GetAuthNeeded() const function, expected prototype:\nbool wxButton::GetAuthNeeded() const\nClass arguments details:\n");
		}


		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxButton::GetAuthNeeded() const");
		}
		bool lret = self->GetAuthNeeded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxButton::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxButton::GetLabel() const function, expected prototype:\nwxString wxButton::GetLabel() const\nClass arguments details:\n");
		}


		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxButton::GetLabel() const");
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxButton::SetAuthNeeded(bool needed = true)
	static int _bind_SetAuthNeeded(lua_State *L) {
		if (!_lg_typecheck_SetAuthNeeded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxButton::SetAuthNeeded(bool needed = true) function, expected prototype:\nvoid wxButton::SetAuthNeeded(bool needed = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxButton::SetAuthNeeded(bool)");
		}
		self->SetAuthNeeded(needed);

		return 0;
	}

	// wxWindow * wxButton::SetDefault()
	static int _bind_SetDefault(lua_State *L) {
		if (!_lg_typecheck_SetDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxButton::SetDefault() function, expected prototype:\nwxWindow * wxButton::SetDefault()\nClass arguments details:\n");
		}


		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxButton::SetDefault()");
		}
		wxWindow * lret = self->SetDefault();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxButton::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxButton::SetLabel(const wxString & label) function, expected prototype:\nvoid wxButton::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxButton* self=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxButton::SetLabel(const wxString &)");
		}
		self->SetLabel(label);

		return 0;
	}

	// static wxSize wxButton::GetDefaultSize()
	static int _bind_GetDefaultSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxSize wxButton::GetDefaultSize() function, expected prototype:\nstatic wxSize wxButton::GetDefaultSize()\nClass arguments details:\n");
		}


		wxSize stack_lret = wxButton::GetDefaultSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxButton* LunaTraits< wxButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxButton::_bind_ctor(L);
}

void LunaTraits< wxButton >::_bind_dtor(wxButton* obj) {
	delete obj;
}

const char LunaTraits< wxButton >::className[] = "wxButton";
const char LunaTraits< wxButton >::fullName[] = "wxButton";
const char LunaTraits< wxButton >::moduleName[] = "wx";
const char* LunaTraits< wxButton >::parents[] = {"wx.wxAnyButton", 0};
const int LunaTraits< wxButton >::hash = 2494282;
const int LunaTraits< wxButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxButton >::methods[] = {
	{"Create", &luna_wrapper_wxButton::_bind_Create},
	{"GetAuthNeeded", &luna_wrapper_wxButton::_bind_GetAuthNeeded},
	{"GetLabel", &luna_wrapper_wxButton::_bind_GetLabel},
	{"SetAuthNeeded", &luna_wrapper_wxButton::_bind_SetAuthNeeded},
	{"SetDefault", &luna_wrapper_wxButton::_bind_SetDefault},
	{"SetLabel", &luna_wrapper_wxButton::_bind_SetLabel},
	{"GetDefaultSize", &luna_wrapper_wxButton::_bind_GetDefaultSize},
	{0,0}
};

luna_ConverterType LunaTraits< wxButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxButton >::enumValues[] = {
	{0,0}
};


