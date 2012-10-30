#include <plug_common.h>

class luna_wrapper_wxCommandLinkButton {
public:
	typedef Luna< wxCommandLinkButton > luna_t;

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
		wxCommandLinkButton* ptr= dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommandLinkButton >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCommandLinkButton* ptr= static_cast< wxCommandLinkButton* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommandLinkButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
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
		if( luatop<3 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMainLabelAndNote(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMainLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNote(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMainLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNote(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCommandLinkButton::wxCommandLinkButton()
	static wxCommandLinkButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandLinkButton::wxCommandLinkButton() function, expected prototype:\nwxCommandLinkButton::wxCommandLinkButton()\nClass arguments details:\n");
		}


		return new wxCommandLinkButton();
	}

	// wxCommandLinkButton::wxCommandLinkButton(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static wxCommandLinkButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandLinkButton::wxCommandLinkButton(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nwxCommandLinkButton::wxCommandLinkButton(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString mainLabel(lua_tostring(L,3),lua_objlen(L,3));
		wxString note(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCommandLinkButton::wxCommandLinkButton function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCommandLinkButton::wxCommandLinkButton function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCommandLinkButton::wxCommandLinkButton function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxCommandLinkButton(parent, id, mainLabel, note, pos, size, style, validator, name);
	}

	// Overload binder for wxCommandLinkButton::wxCommandLinkButton
	static wxCommandLinkButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCommandLinkButton, cannot match any of the overloads for function wxCommandLinkButton:\n  wxCommandLinkButton()\n  wxCommandLinkButton(wxWindow *, int, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCommandLinkButton::Create(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandLinkButton::Create(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nbool wxCommandLinkButton::Create(wxWindow * parent, int id, const wxString & mainLabel = wxEmptyString, const wxString & note = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString mainLabel(lua_tostring(L,4),lua_objlen(L,4));
		wxString note(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCommandLinkButton::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCommandLinkButton::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCommandLinkButton::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandLinkButton::Create(wxWindow *, int, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, mainLabel, note, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandLinkButton::SetMainLabelAndNote(const wxString & mainLabel, const wxString & note)
	static int _bind_SetMainLabelAndNote(lua_State *L) {
		if (!_lg_typecheck_SetMainLabelAndNote(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandLinkButton::SetMainLabelAndNote(const wxString & mainLabel, const wxString & note) function, expected prototype:\nvoid wxCommandLinkButton::SetMainLabelAndNote(const wxString & mainLabel, const wxString & note)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString mainLabel(lua_tostring(L,2),lua_objlen(L,2));
		wxString note(lua_tostring(L,3),lua_objlen(L,3));

		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandLinkButton::SetMainLabelAndNote(const wxString &, const wxString &)");
		}
		self->SetMainLabelAndNote(mainLabel, note);

		return 0;
	}

	// void wxCommandLinkButton::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandLinkButton::SetLabel(const wxString & label) function, expected prototype:\nvoid wxCommandLinkButton::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandLinkButton::SetLabel(const wxString &)");
		}
		self->SetLabel(label);

		return 0;
	}

	// wxString wxCommandLinkButton::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandLinkButton::GetLabel() const function, expected prototype:\nwxString wxCommandLinkButton::GetLabel() const\nClass arguments details:\n");
		}


		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandLinkButton::GetLabel() const");
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxCommandLinkButton::SetMainLabel(const wxString & mainLabel)
	static int _bind_SetMainLabel(lua_State *L) {
		if (!_lg_typecheck_SetMainLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandLinkButton::SetMainLabel(const wxString & mainLabel) function, expected prototype:\nvoid wxCommandLinkButton::SetMainLabel(const wxString & mainLabel)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString mainLabel(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandLinkButton::SetMainLabel(const wxString &)");
		}
		self->SetMainLabel(mainLabel);

		return 0;
	}

	// void wxCommandLinkButton::SetNote(const wxString & note)
	static int _bind_SetNote(lua_State *L) {
		if (!_lg_typecheck_SetNote(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandLinkButton::SetNote(const wxString & note) function, expected prototype:\nvoid wxCommandLinkButton::SetNote(const wxString & note)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString note(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandLinkButton::SetNote(const wxString &)");
		}
		self->SetNote(note);

		return 0;
	}

	// wxString wxCommandLinkButton::GetMainLabel() const
	static int _bind_GetMainLabel(lua_State *L) {
		if (!_lg_typecheck_GetMainLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandLinkButton::GetMainLabel() const function, expected prototype:\nwxString wxCommandLinkButton::GetMainLabel() const\nClass arguments details:\n");
		}


		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandLinkButton::GetMainLabel() const");
		}
		wxString lret = self->GetMainLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxCommandLinkButton::GetNote() const
	static int _bind_GetNote(lua_State *L) {
		if (!_lg_typecheck_GetNote(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandLinkButton::GetNote() const function, expected prototype:\nwxString wxCommandLinkButton::GetNote() const\nClass arguments details:\n");
		}


		wxCommandLinkButton* self=dynamic_cast< wxCommandLinkButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandLinkButton::GetNote() const");
		}
		wxString lret = self->GetNote();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxCommandLinkButton* LunaTraits< wxCommandLinkButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCommandLinkButton::_bind_ctor(L);
}

void LunaTraits< wxCommandLinkButton >::_bind_dtor(wxCommandLinkButton* obj) {
	delete obj;
}

const char LunaTraits< wxCommandLinkButton >::className[] = "wxCommandLinkButton";
const char LunaTraits< wxCommandLinkButton >::fullName[] = "wxCommandLinkButton";
const char LunaTraits< wxCommandLinkButton >::moduleName[] = "wx";
const char* LunaTraits< wxCommandLinkButton >::parents[] = {"wx.wxButton", 0};
const int LunaTraits< wxCommandLinkButton >::hash = 53730473;
const int LunaTraits< wxCommandLinkButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxCommandLinkButton >::methods[] = {
	{"Create", &luna_wrapper_wxCommandLinkButton::_bind_Create},
	{"SetMainLabelAndNote", &luna_wrapper_wxCommandLinkButton::_bind_SetMainLabelAndNote},
	{"SetLabel", &luna_wrapper_wxCommandLinkButton::_bind_SetLabel},
	{"GetLabel", &luna_wrapper_wxCommandLinkButton::_bind_GetLabel},
	{"SetMainLabel", &luna_wrapper_wxCommandLinkButton::_bind_SetMainLabel},
	{"SetNote", &luna_wrapper_wxCommandLinkButton::_bind_SetNote},
	{"GetMainLabel", &luna_wrapper_wxCommandLinkButton::_bind_GetMainLabel},
	{"GetNote", &luna_wrapper_wxCommandLinkButton::_bind_GetNote},
	{"__eq", &luna_wrapper_wxCommandLinkButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommandLinkButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommandLinkButton::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxCommandLinkButton::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommandLinkButton >::enumValues[] = {
	{0,0}
};


