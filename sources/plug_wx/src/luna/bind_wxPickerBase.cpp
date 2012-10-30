#include <plug_common.h>

class luna_wrapper_wxPickerBase {
public:
	typedef Luna< wxPickerBase > luna_t;

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
		wxPickerBase* ptr= dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPickerBase >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPickerBase* ptr= static_cast< wxPickerBase* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPickerBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetInternalMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPickerCtrlProportion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPickerCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextCtrlProportion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPickerCtrlGrowable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTextCtrlGrowable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetInternalMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPickerCtrlGrowable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPickerCtrlProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextCtrlGrowable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextCtrlProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxPickerBase::GetInternalMargin() const
	static int _bind_GetInternalMargin(lua_State *L) {
		if (!_lg_typecheck_GetInternalMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPickerBase::GetInternalMargin() const function, expected prototype:\nint wxPickerBase::GetInternalMargin() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPickerBase::GetInternalMargin() const");
		}
		int lret = self->GetInternalMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPickerBase::GetPickerCtrlProportion() const
	static int _bind_GetPickerCtrlProportion(lua_State *L) {
		if (!_lg_typecheck_GetPickerCtrlProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPickerBase::GetPickerCtrlProportion() const function, expected prototype:\nint wxPickerBase::GetPickerCtrlProportion() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPickerBase::GetPickerCtrlProportion() const");
		}
		int lret = self->GetPickerCtrlProportion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxPickerBase::GetTextCtrl()
	static int _bind_GetTextCtrl(lua_State *L) {
		if (!_lg_typecheck_GetTextCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxPickerBase::GetTextCtrl() function, expected prototype:\nwxTextCtrl * wxPickerBase::GetTextCtrl()\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxPickerBase::GetTextCtrl()");
		}
		wxTextCtrl * lret = self->GetTextCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxControl * wxPickerBase::GetPickerCtrl()
	static int _bind_GetPickerCtrl(lua_State *L) {
		if (!_lg_typecheck_GetPickerCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl * wxPickerBase::GetPickerCtrl() function, expected prototype:\nwxControl * wxPickerBase::GetPickerCtrl()\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxControl * wxPickerBase::GetPickerCtrl()");
		}
		wxControl * lret = self->GetPickerCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// int wxPickerBase::GetTextCtrlProportion() const
	static int _bind_GetTextCtrlProportion(lua_State *L) {
		if (!_lg_typecheck_GetTextCtrlProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPickerBase::GetTextCtrlProportion() const function, expected prototype:\nint wxPickerBase::GetTextCtrlProportion() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPickerBase::GetTextCtrlProportion() const");
		}
		int lret = self->GetTextCtrlProportion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPickerBase::HasTextCtrl() const
	static int _bind_HasTextCtrl(lua_State *L) {
		if (!_lg_typecheck_HasTextCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPickerBase::HasTextCtrl() const function, expected prototype:\nbool wxPickerBase::HasTextCtrl() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPickerBase::HasTextCtrl() const");
		}
		bool lret = self->HasTextCtrl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPickerBase::IsPickerCtrlGrowable() const
	static int _bind_IsPickerCtrlGrowable(lua_State *L) {
		if (!_lg_typecheck_IsPickerCtrlGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPickerBase::IsPickerCtrlGrowable() const function, expected prototype:\nbool wxPickerBase::IsPickerCtrlGrowable() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPickerBase::IsPickerCtrlGrowable() const");
		}
		bool lret = self->IsPickerCtrlGrowable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPickerBase::IsTextCtrlGrowable() const
	static int _bind_IsTextCtrlGrowable(lua_State *L) {
		if (!_lg_typecheck_IsTextCtrlGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPickerBase::IsTextCtrlGrowable() const function, expected prototype:\nbool wxPickerBase::IsTextCtrlGrowable() const\nClass arguments details:\n");
		}


		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPickerBase::IsTextCtrlGrowable() const");
		}
		bool lret = self->IsTextCtrlGrowable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPickerBase::SetInternalMargin(int margin)
	static int _bind_SetInternalMargin(lua_State *L) {
		if (!_lg_typecheck_SetInternalMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPickerBase::SetInternalMargin(int margin) function, expected prototype:\nvoid wxPickerBase::SetInternalMargin(int margin)\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);

		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPickerBase::SetInternalMargin(int)");
		}
		self->SetInternalMargin(margin);

		return 0;
	}

	// void wxPickerBase::SetPickerCtrlGrowable(bool grow = true)
	static int _bind_SetPickerCtrlGrowable(lua_State *L) {
		if (!_lg_typecheck_SetPickerCtrlGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPickerBase::SetPickerCtrlGrowable(bool grow = true) function, expected prototype:\nvoid wxPickerBase::SetPickerCtrlGrowable(bool grow = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool grow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPickerBase::SetPickerCtrlGrowable(bool)");
		}
		self->SetPickerCtrlGrowable(grow);

		return 0;
	}

	// void wxPickerBase::SetPickerCtrlProportion(int prop)
	static int _bind_SetPickerCtrlProportion(lua_State *L) {
		if (!_lg_typecheck_SetPickerCtrlProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPickerBase::SetPickerCtrlProportion(int prop) function, expected prototype:\nvoid wxPickerBase::SetPickerCtrlProportion(int prop)\nClass arguments details:\n");
		}

		int prop=(int)lua_tointeger(L,2);

		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPickerBase::SetPickerCtrlProportion(int)");
		}
		self->SetPickerCtrlProportion(prop);

		return 0;
	}

	// void wxPickerBase::SetTextCtrlGrowable(bool grow = true)
	static int _bind_SetTextCtrlGrowable(lua_State *L) {
		if (!_lg_typecheck_SetTextCtrlGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPickerBase::SetTextCtrlGrowable(bool grow = true) function, expected prototype:\nvoid wxPickerBase::SetTextCtrlGrowable(bool grow = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool grow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPickerBase::SetTextCtrlGrowable(bool)");
		}
		self->SetTextCtrlGrowable(grow);

		return 0;
	}

	// void wxPickerBase::SetTextCtrlProportion(int prop)
	static int _bind_SetTextCtrlProportion(lua_State *L) {
		if (!_lg_typecheck_SetTextCtrlProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPickerBase::SetTextCtrlProportion(int prop) function, expected prototype:\nvoid wxPickerBase::SetTextCtrlProportion(int prop)\nClass arguments details:\n");
		}

		int prop=(int)lua_tointeger(L,2);

		wxPickerBase* self=dynamic_cast< wxPickerBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPickerBase::SetTextCtrlProportion(int)");
		}
		self->SetTextCtrlProportion(prop);

		return 0;
	}


	// Operator binds:

};

wxPickerBase* LunaTraits< wxPickerBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPickerBase >::_bind_dtor(wxPickerBase* obj) {
	delete obj;
}

const char LunaTraits< wxPickerBase >::className[] = "wxPickerBase";
const char LunaTraits< wxPickerBase >::fullName[] = "wxPickerBase";
const char LunaTraits< wxPickerBase >::moduleName[] = "wx";
const char* LunaTraits< wxPickerBase >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxPickerBase >::hash = 27299901;
const int LunaTraits< wxPickerBase >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPickerBase >::methods[] = {
	{"GetInternalMargin", &luna_wrapper_wxPickerBase::_bind_GetInternalMargin},
	{"GetPickerCtrlProportion", &luna_wrapper_wxPickerBase::_bind_GetPickerCtrlProportion},
	{"GetTextCtrl", &luna_wrapper_wxPickerBase::_bind_GetTextCtrl},
	{"GetPickerCtrl", &luna_wrapper_wxPickerBase::_bind_GetPickerCtrl},
	{"GetTextCtrlProportion", &luna_wrapper_wxPickerBase::_bind_GetTextCtrlProportion},
	{"HasTextCtrl", &luna_wrapper_wxPickerBase::_bind_HasTextCtrl},
	{"IsPickerCtrlGrowable", &luna_wrapper_wxPickerBase::_bind_IsPickerCtrlGrowable},
	{"IsTextCtrlGrowable", &luna_wrapper_wxPickerBase::_bind_IsTextCtrlGrowable},
	{"SetInternalMargin", &luna_wrapper_wxPickerBase::_bind_SetInternalMargin},
	{"SetPickerCtrlGrowable", &luna_wrapper_wxPickerBase::_bind_SetPickerCtrlGrowable},
	{"SetPickerCtrlProportion", &luna_wrapper_wxPickerBase::_bind_SetPickerCtrlProportion},
	{"SetTextCtrlGrowable", &luna_wrapper_wxPickerBase::_bind_SetTextCtrlGrowable},
	{"SetTextCtrlProportion", &luna_wrapper_wxPickerBase::_bind_SetTextCtrlProportion},
	{"__eq", &luna_wrapper_wxPickerBase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPickerBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxPickerBase::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxPickerBase::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPickerBase >::enumValues[] = {
	{0,0}
};


