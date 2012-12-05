#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmapToggleButton.h>

class luna_wrapper_wxBitmapToggleButton {
public:
	typedef Luna< wxBitmapToggleButton > luna_t;

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
		wxBitmapToggleButton* ptr= dynamic_cast< wxBitmapToggleButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapToggleButton >::push(L,ptr,false);
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
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
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

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapToggleButton::wxBitmapToggleButton()
	static wxBitmapToggleButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapToggleButton::wxBitmapToggleButton() function, expected prototype:\nwxBitmapToggleButton::wxBitmapToggleButton()\nClass arguments details:\n");
		}


		return new wxBitmapToggleButton();
	}

	// wxBitmapToggleButton::wxBitmapToggleButton(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)
	static wxBitmapToggleButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapToggleButton::wxBitmapToggleButton(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr) function, expected prototype:\nwxBitmapToggleButton::wxBitmapToggleButton(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxBitmap & label=*label_ptr;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* val_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxValidator & val=luatop>6 ? *val_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxBitmapToggleButton(parent, id, label, pos, size, style, val, name);
	}

	// wxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data)
	static wxBitmapToggleButton* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data) function, expected prototype:\nwxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxBitmapToggleButton(L,NULL);
	}

	// wxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)
	static wxBitmapToggleButton* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr) function, expected prototype:\nwxBitmapToggleButton::wxBitmapToggleButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxBitmap & label=*label_ptr;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* val_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in wxBitmapToggleButton::wxBitmapToggleButton function");
		}
		const wxValidator & val=luatop>7 ? *val_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxBitmapToggleButton(L,NULL, parent, id, label, pos, size, style, val, name);
	}

	// Overload binder for wxBitmapToggleButton::wxBitmapToggleButton
	static wxBitmapToggleButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxBitmapToggleButton, cannot match any of the overloads for function wxBitmapToggleButton:\n  wxBitmapToggleButton()\n  wxBitmapToggleButton(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxBitmapToggleButton(lua_Table *)\n  wxBitmapToggleButton(lua_Table *, wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxBitmapToggleButton::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmapToggleButton::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr) function, expected prototype:\nbool wxBitmapToggleButton::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & val = wxDefaultValidator, const wxString & name = wxCheckBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxBitmapToggleButton::Create function");
		}
		const wxBitmap & label=*label_ptr;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapToggleButton::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapToggleButton::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* val_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in wxBitmapToggleButton::Create function");
		}
		const wxValidator & val=luatop>7 ? *val_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxBitmapToggleButton* self=dynamic_cast< wxBitmapToggleButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmapToggleButton::Create(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, val, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapToggleButton::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmapToggleButton::GetValue() const function, expected prototype:\nbool wxBitmapToggleButton::GetValue() const\nClass arguments details:\n");
		}


		wxBitmapToggleButton* self=dynamic_cast< wxBitmapToggleButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmapToggleButton::GetValue() const");
		}
		bool lret = self->GetValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapToggleButton::SetValue(bool state)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmapToggleButton::SetValue(bool state) function, expected prototype:\nvoid wxBitmapToggleButton::SetValue(bool state)\nClass arguments details:\n");
		}

		bool state=(bool)(lua_toboolean(L,2)==1);

		wxBitmapToggleButton* self=dynamic_cast< wxBitmapToggleButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmapToggleButton::SetValue(bool)");
		}
		self->SetValue(state);

		return 0;
	}


	// Operator binds:

};

wxBitmapToggleButton* LunaTraits< wxBitmapToggleButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapToggleButton::_bind_ctor(L);
}

void LunaTraits< wxBitmapToggleButton >::_bind_dtor(wxBitmapToggleButton* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapToggleButton >::className[] = "wxBitmapToggleButton";
const char LunaTraits< wxBitmapToggleButton >::fullName[] = "wxBitmapToggleButton";
const char LunaTraits< wxBitmapToggleButton >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapToggleButton >::parents[] = {"wx.wxToggleButton", 0};
const int LunaTraits< wxBitmapToggleButton >::hash = 5423039;
const int LunaTraits< wxBitmapToggleButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxBitmapToggleButton >::methods[] = {
	{"Create", &luna_wrapper_wxBitmapToggleButton::_bind_Create},
	{"GetValue", &luna_wrapper_wxBitmapToggleButton::_bind_GetValue},
	{"SetValue", &luna_wrapper_wxBitmapToggleButton::_bind_SetValue},
	{"__eq", &luna_wrapper_wxBitmapToggleButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapToggleButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmapToggleButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapToggleButton >::enumValues[] = {
	{0,0}
};


