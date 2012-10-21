#include <plug_common.h>

class luna_wrapper_wxControl {
public:
	typedef Luna< wxControl > luna_t;

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
		wxControl* ptr= dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxControl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Command(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelMarkup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveMnemonics(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EscapeMnemonics(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ellipsize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxControl::wxControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)
	static wxControl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl::wxControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr) function, expected prototype:\nwxControl::wxControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxControl::wxControl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxControl::wxControl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxControl::wxControl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxControl(parent, id, pos, size, style, validator, name);
	}

	// wxControl::wxControl()
	static wxControl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl::wxControl() function, expected prototype:\nwxControl::wxControl()\nClass arguments details:\n");
		}


		return new wxControl();
	}

	// Overload binder for wxControl::wxControl
	static wxControl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxControl, cannot match any of the overloads for function wxControl:\n  wxControl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxControl()\n");
		return NULL;
	}


	// Function binds:
	// bool wxControl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxControl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr) function, expected prototype:\nbool wxControl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxControl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxControl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxControl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxControl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxControl::Command(wxCommandEvent & event)
	static int _bind_Command(lua_State *L) {
		if (!_lg_typecheck_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxControl::Command(wxCommandEvent & event) function, expected prototype:\nvoid wxControl::Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxControl::Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxControl::Command(wxCommandEvent &)");
		}
		self->Command(event);

		return 0;
	}

	// wxString wxControl::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxControl::GetLabel() const function, expected prototype:\nwxString wxControl::GetLabel() const\nClass arguments details:\n");
		}


		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxControl::GetLabel() const");
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxControl::GetLabelText() const
	static int _bind_GetLabelText_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLabelText_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxControl::GetLabelText() const function, expected prototype:\nwxString wxControl::GetLabelText() const\nClass arguments details:\n");
		}


		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxControl::GetLabelText() const");
		}
		wxString lret = self->GetLabelText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxControl::GetLabelText(const wxString & label)
	static int _bind_GetLabelText_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLabelText_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxControl::GetLabelText(const wxString & label) function, expected prototype:\nstatic wxString wxControl::GetLabelText(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxControl::GetLabelText(label);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxControl::GetLabelText
	static int _bind_GetLabelText(lua_State *L) {
		if (_lg_typecheck_GetLabelText_overload_1(L)) return _bind_GetLabelText_overload_1(L);
		if (_lg_typecheck_GetLabelText_overload_2(L)) return _bind_GetLabelText_overload_2(L);

		luaL_error(L, "error in function GetLabelText, cannot match any of the overloads for function GetLabelText:\n  GetLabelText()\n  GetLabelText(const wxString &)\n");
		return 0;
	}

	// void wxControl::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxControl::SetLabel(const wxString & label) function, expected prototype:\nvoid wxControl::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxControl::SetLabel(const wxString &)");
		}
		self->SetLabel(label);

		return 0;
	}

	// void wxControl::SetLabelText(const wxString & text)
	static int _bind_SetLabelText(lua_State *L) {
		if (!_lg_typecheck_SetLabelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxControl::SetLabelText(const wxString & text) function, expected prototype:\nvoid wxControl::SetLabelText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxControl::SetLabelText(const wxString &)");
		}
		self->SetLabelText(text);

		return 0;
	}

	// bool wxControl::SetLabelMarkup(const wxString & markup)
	static int _bind_SetLabelMarkup(lua_State *L) {
		if (!_lg_typecheck_SetLabelMarkup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxControl::SetLabelMarkup(const wxString & markup) function, expected prototype:\nbool wxControl::SetLabelMarkup(const wxString & markup)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString markup(lua_tostring(L,2),lua_objlen(L,2));

		wxControl* self=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxControl::SetLabelMarkup(const wxString &)");
		}
		bool lret = self->SetLabelMarkup(markup);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxString wxControl::RemoveMnemonics(const wxString & str)
	static int _bind_RemoveMnemonics(lua_State *L) {
		if (!_lg_typecheck_RemoveMnemonics(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxControl::RemoveMnemonics(const wxString & str) function, expected prototype:\nstatic wxString wxControl::RemoveMnemonics(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxControl::RemoveMnemonics(str);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxControl::EscapeMnemonics(const wxString & text)
	static int _bind_EscapeMnemonics(lua_State *L) {
		if (!_lg_typecheck_EscapeMnemonics(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxControl::EscapeMnemonics(const wxString & text) function, expected prototype:\nstatic wxString wxControl::EscapeMnemonics(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxControl::EscapeMnemonics(text);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxControl::Ellipsize(const wxString & label, const wxDC & dc, wxEllipsizeMode mode, int maxWidth, int flags = wxELLIPSIZE_FLAGS_DEFAULT)
	static int _bind_Ellipsize(lua_State *L) {
		if (!_lg_typecheck_Ellipsize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxControl::Ellipsize(const wxString & label, const wxDC & dc, wxEllipsizeMode mode, int maxWidth, int flags = wxELLIPSIZE_FLAGS_DEFAULT) function, expected prototype:\nstatic wxString wxControl::Ellipsize(const wxString & label, const wxDC & dc, wxEllipsizeMode mode, int maxWidth, int flags = wxELLIPSIZE_FLAGS_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,1),lua_objlen(L,1));
		const wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxControl::Ellipsize function");
		}
		const wxDC & dc=*dc_ptr;
		wxEllipsizeMode mode=(wxEllipsizeMode)lua_tointeger(L,3);
		int maxWidth=(int)lua_tointeger(L,4);
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : wxELLIPSIZE_FLAGS_DEFAULT;

		wxString lret = wxControl::Ellipsize(label, dc, mode, maxWidth, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxControl* LunaTraits< wxControl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxControl::_bind_ctor(L);
}

void LunaTraits< wxControl >::_bind_dtor(wxControl* obj) {
	delete obj;
}

const char LunaTraits< wxControl >::className[] = "wxControl";
const char LunaTraits< wxControl >::fullName[] = "wxControl";
const char LunaTraits< wxControl >::moduleName[] = "wx";
const char* LunaTraits< wxControl >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxControl >::hash = 87513350;
const int LunaTraits< wxControl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxControl >::methods[] = {
	{"Create", &luna_wrapper_wxControl::_bind_Create},
	{"Command", &luna_wrapper_wxControl::_bind_Command},
	{"GetLabel", &luna_wrapper_wxControl::_bind_GetLabel},
	{"GetLabelText", &luna_wrapper_wxControl::_bind_GetLabelText},
	{"SetLabel", &luna_wrapper_wxControl::_bind_SetLabel},
	{"SetLabelText", &luna_wrapper_wxControl::_bind_SetLabelText},
	{"SetLabelMarkup", &luna_wrapper_wxControl::_bind_SetLabelMarkup},
	{"RemoveMnemonics", &luna_wrapper_wxControl::_bind_RemoveMnemonics},
	{"EscapeMnemonics", &luna_wrapper_wxControl::_bind_EscapeMnemonics},
	{"Ellipsize", &luna_wrapper_wxControl::_bind_Ellipsize},
	{"__eq", &luna_wrapper_wxControl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxControl >::converters[] = {
	{"wxObject", &luna_wrapper_wxControl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxControl >::enumValues[] = {
	{0,0}
};


