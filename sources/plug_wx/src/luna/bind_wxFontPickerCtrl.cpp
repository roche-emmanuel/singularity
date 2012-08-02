#include <plug_common.h>

class luna_wrapper_wxFontPickerCtrl {
public:
	typedef Luna< wxFontPickerCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFontPickerCtrl* ptr= dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontPickerCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
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
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxPointSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectedFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontPickerCtrl::wxFontPickerCtrl(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr)
	static wxFontPickerCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontPickerCtrl::wxFontPickerCtrl(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr) function, expected prototype:\nwxFontPickerCtrl::wxFontPickerCtrl(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxFont* font_ptr=luatop>2 ? dynamic_cast< wxFont* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontPickerCtrl::wxFontPickerCtrl function");
		}
		const wxFont & font=luatop>2 ? *font_ptr : wxNullFont;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFontPickerCtrl::wxFontPickerCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontPickerCtrl::wxFontPickerCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxFNTP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFontPickerCtrl::wxFontPickerCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxFontPickerCtrl(parent, id, font, pos, size, style, validator, name);
	}


	// Function binds:
	// bool wxFontPickerCtrl::Create(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontPickerCtrl::Create(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr) function, expected prototype:\nbool wxFontPickerCtrl::Create(wxWindow * parent, int id, const wxFont & font = wxNullFont, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFNTP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFontPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxFont* font_ptr=luatop>3 ? dynamic_cast< wxFont* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontPickerCtrl::Create function");
		}
		const wxFont & font=luatop>3 ? *font_ptr : wxNullFont;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFontPickerCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontPickerCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxFNTP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFontPickerCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxFontPickerCtrl* self=dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontPickerCtrl::Create(wxWindow *, int, const wxFont &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, font, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxFontPickerCtrl::GetMaxPointSize() const
	static int _bind_GetMaxPointSize(lua_State *L) {
		if (!_lg_typecheck_GetMaxPointSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxFontPickerCtrl::GetMaxPointSize() const function, expected prototype:\nunsigned int wxFontPickerCtrl::GetMaxPointSize() const\nClass arguments details:\n");
		}


		wxFontPickerCtrl* self=dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxFontPickerCtrl::GetMaxPointSize() const");
		}
		unsigned int lret = self->GetMaxPointSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxFontPickerCtrl::GetSelectedFont() const
	static int _bind_GetSelectedFont(lua_State *L) {
		if (!_lg_typecheck_GetSelectedFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxFontPickerCtrl::GetSelectedFont() const function, expected prototype:\nwxFont wxFontPickerCtrl::GetSelectedFont() const\nClass arguments details:\n");
		}


		wxFontPickerCtrl* self=dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxFontPickerCtrl::GetSelectedFont() const");
		}
		wxFont stack_lret = self->GetSelectedFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxFontPickerCtrl::SetMaxPointSize(unsigned int max)
	static int _bind_SetMaxPointSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxPointSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontPickerCtrl::SetMaxPointSize(unsigned int max) function, expected prototype:\nvoid wxFontPickerCtrl::SetMaxPointSize(unsigned int max)\nClass arguments details:\n");
		}

		unsigned int max=(unsigned int)lua_tointeger(L,2);

		wxFontPickerCtrl* self=dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontPickerCtrl::SetMaxPointSize(unsigned int)");
		}
		self->SetMaxPointSize(max);

		return 0;
	}

	// void wxFontPickerCtrl::SetSelectedFont(const wxFont & font)
	static int _bind_SetSelectedFont(lua_State *L) {
		if (!_lg_typecheck_SetSelectedFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontPickerCtrl::SetSelectedFont(const wxFont & font) function, expected prototype:\nvoid wxFontPickerCtrl::SetSelectedFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontPickerCtrl::SetSelectedFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontPickerCtrl* self=dynamic_cast< wxFontPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontPickerCtrl::SetSelectedFont(const wxFont &)");
		}
		self->SetSelectedFont(font);

		return 0;
	}


	// Operator binds:

};

wxFontPickerCtrl* LunaTraits< wxFontPickerCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontPickerCtrl::_bind_ctor(L);
}

void LunaTraits< wxFontPickerCtrl >::_bind_dtor(wxFontPickerCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxFontPickerCtrl >::className[] = "wxFontPickerCtrl";
const char LunaTraits< wxFontPickerCtrl >::fullName[] = "wxFontPickerCtrl";
const char LunaTraits< wxFontPickerCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxFontPickerCtrl >::parents[] = {"wx.wxPickerBase", 0};
const int LunaTraits< wxFontPickerCtrl >::hash = 27135780;
const int LunaTraits< wxFontPickerCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFontPickerCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxFontPickerCtrl::_bind_Create},
	{"GetMaxPointSize", &luna_wrapper_wxFontPickerCtrl::_bind_GetMaxPointSize},
	{"GetSelectedFont", &luna_wrapper_wxFontPickerCtrl::_bind_GetSelectedFont},
	{"SetMaxPointSize", &luna_wrapper_wxFontPickerCtrl::_bind_SetMaxPointSize},
	{"SetSelectedFont", &luna_wrapper_wxFontPickerCtrl::_bind_SetSelectedFont},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontPickerCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontPickerCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontPickerCtrl >::enumValues[] = {
	{0,0}
};


