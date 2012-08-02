#include <plug_common.h>

class luna_wrapper_wxPropertyGridEvent {
public:
	typedef Luna< wxPropertyGridEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridEvent* ptr= dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMainParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPropertyName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanVeto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidationFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidationFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WasVetoed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxPropertyGridEvent::CanVeto() const
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridEvent::CanVeto() const function, expected prototype:\nbool wxPropertyGridEvent::CanVeto() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridEvent::CanVeto() const");
		}
		bool lret = self->CanVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxPropertyGridEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxPropertyGridEvent::GetColumn() const function, expected prototype:\nunsigned int wxPropertyGridEvent::GetColumn() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxPropertyGridEvent::GetColumn() const");
		}
		unsigned int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridEvent::GetMainParent() const
	static int _bind_GetMainParent(lua_State *L) {
		if (!_lg_typecheck_GetMainParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridEvent::GetMainParent() const function, expected prototype:\nwxPGProperty * wxPropertyGridEvent::GetMainParent() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridEvent::GetMainParent() const");
		}
		wxPGProperty * lret = self->GetMainParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridEvent::GetProperty() const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridEvent::GetProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridEvent::GetProperty() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridEvent::GetProperty() const");
		}
		wxPGProperty * lret = self->GetProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxString wxPropertyGridEvent::GetPropertyName() const
	static int _bind_GetPropertyName(lua_State *L) {
		if (!_lg_typecheck_GetPropertyName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridEvent::GetPropertyName() const function, expected prototype:\nwxString wxPropertyGridEvent::GetPropertyName() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridEvent::GetPropertyName() const");
		}
		wxString lret = self->GetPropertyName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPropertyGridEvent::SetCanVeto(bool canVeto)
	static int _bind_SetCanVeto(lua_State *L) {
		if (!_lg_typecheck_SetCanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetCanVeto(bool canVeto) function, expected prototype:\nvoid wxPropertyGridEvent::SetCanVeto(bool canVeto)\nClass arguments details:\n");
		}

		bool canVeto=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetCanVeto(bool)");
		}
		self->SetCanVeto(canVeto);

		return 0;
	}

	// void wxPropertyGridEvent::SetProperty(wxPGProperty * p)
	static int _bind_SetProperty(lua_State *L) {
		if (!_lg_typecheck_SetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGridEvent::SetProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPGProperty* p=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));

		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetProperty(wxPGProperty *)");
		}
		self->SetProperty(p);

		return 0;
	}

	// void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags)
	static int _bind_SetValidationFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_SetValidationFailureBehavior(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags) function, expected prototype:\nvoid wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags)\nClass arguments details:\n");
		}

		unsigned char flags = (unsigned char)(lua_tointeger(L,2));

		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char)");
		}
		self->SetValidationFailureBehavior(flags);

		return 0;
	}

	// void wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message)
	static int _bind_SetValidationFailureMessage(lua_State *L) {
		if (!_lg_typecheck_SetValidationFailureMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message) function, expected prototype:\nvoid wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetValidationFailureMessage(const wxString &)");
		}
		self->SetValidationFailureMessage(message);

		return 0;
	}

	// void wxPropertyGridEvent::Veto(bool veto = true)
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::Veto(bool veto = true) function, expected prototype:\nvoid wxPropertyGridEvent::Veto(bool veto = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool veto=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::Veto(bool)");
		}
		self->Veto(veto);

		return 0;
	}

	// bool wxPropertyGridEvent::WasVetoed() const
	static int _bind_WasVetoed(lua_State *L) {
		if (!_lg_typecheck_WasVetoed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridEvent::WasVetoed() const function, expected prototype:\nbool wxPropertyGridEvent::WasVetoed() const\nClass arguments details:\n");
		}


		wxPropertyGridEvent* self=dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridEvent::WasVetoed() const");
		}
		bool lret = self->WasVetoed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxPropertyGridEvent* LunaTraits< wxPropertyGridEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxPropertyGridEvent >::_bind_dtor(wxPropertyGridEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridEvent >::className[] = "wxPropertyGridEvent";
const char LunaTraits< wxPropertyGridEvent >::fullName[] = "wxPropertyGridEvent";
const char LunaTraits< wxPropertyGridEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxPropertyGridEvent >::hash = 6006083;
const int LunaTraits< wxPropertyGridEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPropertyGridEvent >::methods[] = {
	{"CanVeto", &luna_wrapper_wxPropertyGridEvent::_bind_CanVeto},
	{"GetColumn", &luna_wrapper_wxPropertyGridEvent::_bind_GetColumn},
	{"GetMainParent", &luna_wrapper_wxPropertyGridEvent::_bind_GetMainParent},
	{"GetProperty", &luna_wrapper_wxPropertyGridEvent::_bind_GetProperty},
	{"GetPropertyName", &luna_wrapper_wxPropertyGridEvent::_bind_GetPropertyName},
	{"SetCanVeto", &luna_wrapper_wxPropertyGridEvent::_bind_SetCanVeto},
	{"SetProperty", &luna_wrapper_wxPropertyGridEvent::_bind_SetProperty},
	{"SetValidationFailureBehavior", &luna_wrapper_wxPropertyGridEvent::_bind_SetValidationFailureBehavior},
	{"SetValidationFailureMessage", &luna_wrapper_wxPropertyGridEvent::_bind_SetValidationFailureMessage},
	{"Veto", &luna_wrapper_wxPropertyGridEvent::_bind_Veto},
	{"WasVetoed", &luna_wrapper_wxPropertyGridEvent::_bind_WasVetoed},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridEvent >::enumValues[] = {
	{0,0}
};


