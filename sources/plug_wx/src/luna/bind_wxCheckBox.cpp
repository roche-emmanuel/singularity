#include <plug_common.h>

class luna_wrapper_wxCheckBox {
public:
	typedef Luna< wxCheckBox > luna_t;

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
		wxCheckBox* ptr= dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCheckBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCheckBox* ptr= static_cast< wxCheckBox* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCheckBox >::push(L,ptr,false);
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
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get3StateValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Is3State(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Is3rdStateAllowedForUser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set3StateValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCheckBox::wxCheckBox()
	static wxCheckBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCheckBox::wxCheckBox() function, expected prototype:\nwxCheckBox::wxCheckBox()\nClass arguments details:\n");
		}


		return new wxCheckBox();
	}

	// wxCheckBox::wxCheckBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)
	static wxCheckBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCheckBox::wxCheckBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr) function, expected prototype:\nwxCheckBox::wxCheckBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCheckBox::wxCheckBox function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCheckBox::wxCheckBox function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCheckBox::wxCheckBox function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxCheckBox(parent, id, label, pos, size, style, validator, name);
	}

	// Overload binder for wxCheckBox::wxCheckBox
	static wxCheckBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCheckBox, cannot match any of the overloads for function wxCheckBox:\n  wxCheckBox()\n  wxCheckBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCheckBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCheckBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr) function, expected prototype:\nbool wxCheckBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCheckBox::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCheckBox::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCheckBox::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCheckBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCheckBox::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCheckBox::GetValue() const function, expected prototype:\nbool wxCheckBox::GetValue() const\nClass arguments details:\n");
		}


		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCheckBox::GetValue() const");
		}
		bool lret = self->GetValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCheckBoxState wxCheckBox::Get3StateValue() const
	static int _bind_Get3StateValue(lua_State *L) {
		if (!_lg_typecheck_Get3StateValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCheckBoxState wxCheckBox::Get3StateValue() const function, expected prototype:\nwxCheckBoxState wxCheckBox::Get3StateValue() const\nClass arguments details:\n");
		}


		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCheckBoxState wxCheckBox::Get3StateValue() const");
		}
		wxCheckBoxState lret = self->Get3StateValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxCheckBox::Is3State() const
	static int _bind_Is3State(lua_State *L) {
		if (!_lg_typecheck_Is3State(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCheckBox::Is3State() const function, expected prototype:\nbool wxCheckBox::Is3State() const\nClass arguments details:\n");
		}


		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCheckBox::Is3State() const");
		}
		bool lret = self->Is3State();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCheckBox::Is3rdStateAllowedForUser() const
	static int _bind_Is3rdStateAllowedForUser(lua_State *L) {
		if (!_lg_typecheck_Is3rdStateAllowedForUser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCheckBox::Is3rdStateAllowedForUser() const function, expected prototype:\nbool wxCheckBox::Is3rdStateAllowedForUser() const\nClass arguments details:\n");
		}


		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCheckBox::Is3rdStateAllowedForUser() const");
		}
		bool lret = self->Is3rdStateAllowedForUser();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCheckBox::IsChecked() const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCheckBox::IsChecked() const function, expected prototype:\nbool wxCheckBox::IsChecked() const\nClass arguments details:\n");
		}


		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCheckBox::IsChecked() const");
		}
		bool lret = self->IsChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCheckBox::SetValue(bool state)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCheckBox::SetValue(bool state) function, expected prototype:\nvoid wxCheckBox::SetValue(bool state)\nClass arguments details:\n");
		}

		bool state=(bool)(lua_toboolean(L,2)==1);

		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCheckBox::SetValue(bool)");
		}
		self->SetValue(state);

		return 0;
	}

	// void wxCheckBox::Set3StateValue(wxCheckBoxState state)
	static int _bind_Set3StateValue(lua_State *L) {
		if (!_lg_typecheck_Set3StateValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCheckBox::Set3StateValue(wxCheckBoxState state) function, expected prototype:\nvoid wxCheckBox::Set3StateValue(wxCheckBoxState state)\nClass arguments details:\n");
		}

		wxCheckBoxState state=(wxCheckBoxState)lua_tointeger(L,2);

		wxCheckBox* self=dynamic_cast< wxCheckBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCheckBox::Set3StateValue(wxCheckBoxState)");
		}
		self->Set3StateValue(state);

		return 0;
	}


	// Operator binds:

};

wxCheckBox* LunaTraits< wxCheckBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCheckBox::_bind_ctor(L);
}

void LunaTraits< wxCheckBox >::_bind_dtor(wxCheckBox* obj) {
	delete obj;
}

const char LunaTraits< wxCheckBox >::className[] = "wxCheckBox";
const char LunaTraits< wxCheckBox >::fullName[] = "wxCheckBox";
const char LunaTraits< wxCheckBox >::moduleName[] = "wx";
const char* LunaTraits< wxCheckBox >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxCheckBox >::hash = 26774616;
const int LunaTraits< wxCheckBox >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxCheckBox >::methods[] = {
	{"Create", &luna_wrapper_wxCheckBox::_bind_Create},
	{"GetValue", &luna_wrapper_wxCheckBox::_bind_GetValue},
	{"Get3StateValue", &luna_wrapper_wxCheckBox::_bind_Get3StateValue},
	{"Is3State", &luna_wrapper_wxCheckBox::_bind_Is3State},
	{"Is3rdStateAllowedForUser", &luna_wrapper_wxCheckBox::_bind_Is3rdStateAllowedForUser},
	{"IsChecked", &luna_wrapper_wxCheckBox::_bind_IsChecked},
	{"SetValue", &luna_wrapper_wxCheckBox::_bind_SetValue},
	{"Set3StateValue", &luna_wrapper_wxCheckBox::_bind_Set3StateValue},
	{"__eq", &luna_wrapper_wxCheckBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCheckBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxCheckBox::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxCheckBox::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCheckBox >::enumValues[] = {
	{0,0}
};


