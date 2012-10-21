#include <plug_common.h>

class luna_wrapper_wxInfoBar {
public:
	typedef Luna< wxInfoBar > luna_t;

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
		wxInfoBar* ptr= dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInfoBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowMessage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShowHideEffects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetShowEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHideEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEffectDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEffectDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxInfoBar::wxInfoBar()
	static wxInfoBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInfoBar::wxInfoBar() function, expected prototype:\nwxInfoBar::wxInfoBar()\nClass arguments details:\n");
		}


		return new wxInfoBar();
	}

	// wxInfoBar::wxInfoBar(wxWindow * parent, int winid = wxID_ANY)
	static wxInfoBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInfoBar::wxInfoBar(wxWindow * parent, int winid = wxID_ANY) function, expected prototype:\nwxInfoBar::wxInfoBar(wxWindow * parent, int winid = wxID_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int winid=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;

		return new wxInfoBar(parent, winid);
	}

	// Overload binder for wxInfoBar::wxInfoBar
	static wxInfoBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxInfoBar, cannot match any of the overloads for function wxInfoBar:\n  wxInfoBar()\n  wxInfoBar(wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxInfoBar::Create(wxWindow * parent, int winid = wxID_ANY)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInfoBar::Create(wxWindow * parent, int winid = wxID_ANY) function, expected prototype:\nbool wxInfoBar::Create(wxWindow * parent, int winid = wxID_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInfoBar::Create(wxWindow *, int)");
		}
		bool lret = self->Create(parent, winid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxInfoBar::AddButton(int btnid, const wxString & label = wxString ())
	static int _bind_AddButton(lua_State *L) {
		if (!_lg_typecheck_AddButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::AddButton(int btnid, const wxString & label = wxString ()) function, expected prototype:\nvoid wxInfoBar::AddButton(int btnid, const wxString & label = wxString ())\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int btnid=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::AddButton(int, const wxString &)");
		}
		self->AddButton(btnid, label);

		return 0;
	}

	// void wxInfoBar::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::Dismiss() function, expected prototype:\nvoid wxInfoBar::Dismiss()\nClass arguments details:\n");
		}


		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::Dismiss()");
		}
		self->Dismiss();

		return 0;
	}

	// void wxInfoBar::RemoveButton(int btnid)
	static int _bind_RemoveButton(lua_State *L) {
		if (!_lg_typecheck_RemoveButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::RemoveButton(int btnid) function, expected prototype:\nvoid wxInfoBar::RemoveButton(int btnid)\nClass arguments details:\n");
		}

		int btnid=(int)lua_tointeger(L,2);

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::RemoveButton(int)");
		}
		self->RemoveButton(btnid);

		return 0;
	}

	// void wxInfoBar::ShowMessage(const wxString & msg, int flags = wxICON_NONE)
	static int _bind_ShowMessage(lua_State *L) {
		if (!_lg_typecheck_ShowMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::ShowMessage(const wxString & msg, int flags = wxICON_NONE) function, expected prototype:\nvoid wxInfoBar::ShowMessage(const wxString & msg, int flags = wxICON_NONE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString msg(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxICON_NONE;

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::ShowMessage(const wxString &, int)");
		}
		self->ShowMessage(msg, flags);

		return 0;
	}

	// void wxInfoBar::SetShowHideEffects(wxShowEffect showEffect, wxShowEffect hideEffect)
	static int _bind_SetShowHideEffects(lua_State *L) {
		if (!_lg_typecheck_SetShowHideEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::SetShowHideEffects(wxShowEffect showEffect, wxShowEffect hideEffect) function, expected prototype:\nvoid wxInfoBar::SetShowHideEffects(wxShowEffect showEffect, wxShowEffect hideEffect)\nClass arguments details:\n");
		}

		wxShowEffect showEffect=(wxShowEffect)lua_tointeger(L,2);
		wxShowEffect hideEffect=(wxShowEffect)lua_tointeger(L,3);

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::SetShowHideEffects(wxShowEffect, wxShowEffect)");
		}
		self->SetShowHideEffects(showEffect, hideEffect);

		return 0;
	}

	// wxShowEffect wxInfoBar::GetShowEffect() const
	static int _bind_GetShowEffect(lua_State *L) {
		if (!_lg_typecheck_GetShowEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxShowEffect wxInfoBar::GetShowEffect() const function, expected prototype:\nwxShowEffect wxInfoBar::GetShowEffect() const\nClass arguments details:\n");
		}


		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxShowEffect wxInfoBar::GetShowEffect() const");
		}
		wxShowEffect lret = self->GetShowEffect();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxShowEffect wxInfoBar::GetHideEffect() const
	static int _bind_GetHideEffect(lua_State *L) {
		if (!_lg_typecheck_GetHideEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxShowEffect wxInfoBar::GetHideEffect() const function, expected prototype:\nwxShowEffect wxInfoBar::GetHideEffect() const\nClass arguments details:\n");
		}


		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxShowEffect wxInfoBar::GetHideEffect() const");
		}
		wxShowEffect lret = self->GetHideEffect();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxInfoBar::SetEffectDuration(int duration)
	static int _bind_SetEffectDuration(lua_State *L) {
		if (!_lg_typecheck_SetEffectDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxInfoBar::SetEffectDuration(int duration) function, expected prototype:\nvoid wxInfoBar::SetEffectDuration(int duration)\nClass arguments details:\n");
		}

		int duration=(int)lua_tointeger(L,2);

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxInfoBar::SetEffectDuration(int)");
		}
		self->SetEffectDuration(duration);

		return 0;
	}

	// int wxInfoBar::GetEffectDuration() const
	static int _bind_GetEffectDuration(lua_State *L) {
		if (!_lg_typecheck_GetEffectDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxInfoBar::GetEffectDuration() const function, expected prototype:\nint wxInfoBar::GetEffectDuration() const\nClass arguments details:\n");
		}


		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxInfoBar::GetEffectDuration() const");
		}
		int lret = self->GetEffectDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxInfoBar::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInfoBar::SetFont(const wxFont & font) function, expected prototype:\nbool wxInfoBar::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxInfoBar::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxInfoBar* self=dynamic_cast< wxInfoBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInfoBar::SetFont(const wxFont &)");
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxInfoBar* LunaTraits< wxInfoBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxInfoBar::_bind_ctor(L);
}

void LunaTraits< wxInfoBar >::_bind_dtor(wxInfoBar* obj) {
	delete obj;
}

const char LunaTraits< wxInfoBar >::className[] = "wxInfoBar";
const char LunaTraits< wxInfoBar >::fullName[] = "wxInfoBar";
const char LunaTraits< wxInfoBar >::moduleName[] = "wx";
const char* LunaTraits< wxInfoBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxInfoBar >::hash = 76322160;
const int LunaTraits< wxInfoBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxInfoBar >::methods[] = {
	{"Create", &luna_wrapper_wxInfoBar::_bind_Create},
	{"AddButton", &luna_wrapper_wxInfoBar::_bind_AddButton},
	{"Dismiss", &luna_wrapper_wxInfoBar::_bind_Dismiss},
	{"RemoveButton", &luna_wrapper_wxInfoBar::_bind_RemoveButton},
	{"ShowMessage", &luna_wrapper_wxInfoBar::_bind_ShowMessage},
	{"SetShowHideEffects", &luna_wrapper_wxInfoBar::_bind_SetShowHideEffects},
	{"GetShowEffect", &luna_wrapper_wxInfoBar::_bind_GetShowEffect},
	{"GetHideEffect", &luna_wrapper_wxInfoBar::_bind_GetHideEffect},
	{"SetEffectDuration", &luna_wrapper_wxInfoBar::_bind_SetEffectDuration},
	{"GetEffectDuration", &luna_wrapper_wxInfoBar::_bind_GetEffectDuration},
	{"SetFont", &luna_wrapper_wxInfoBar::_bind_SetFont},
	{"__eq", &luna_wrapper_wxInfoBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxInfoBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxInfoBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInfoBar >::enumValues[] = {
	{0,0}
};


