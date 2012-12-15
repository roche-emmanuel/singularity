#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowModalDialogEvent.h>

class luna_wrapper_wxWindowModalDialogEvent {
public:
	typedef Luna< wxWindowModalDialogEvent > luna_t;

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
		//wxWindowModalDialogEvent* ptr= dynamic_cast< wxWindowModalDialogEvent* >(Luna< wxObject >::check(L,1));
		wxWindowModalDialogEvent* ptr= luna_caster< wxObject, wxWindowModalDialogEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowModalDialogEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReturnCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindowModalDialogEvent::wxWindowModalDialogEvent(int commandType = wxEVT_NULL, int id = 0)
	static wxWindowModalDialogEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowModalDialogEvent::wxWindowModalDialogEvent(int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxWindowModalDialogEvent::wxWindowModalDialogEvent(int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new wxWindowModalDialogEvent(commandType, id);
	}

	// wxWindowModalDialogEvent::wxWindowModalDialogEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)
	static wxWindowModalDialogEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowModalDialogEvent::wxWindowModalDialogEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxWindowModalDialogEvent::wxWindowModalDialogEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		return new wrapper_wxWindowModalDialogEvent(L,NULL, commandType, id);
	}

	// Overload binder for wxWindowModalDialogEvent::wxWindowModalDialogEvent
	static wxWindowModalDialogEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWindowModalDialogEvent, cannot match any of the overloads for function wxWindowModalDialogEvent:\n  wxWindowModalDialogEvent(int, int)\n  wxWindowModalDialogEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// wxDialog * wxWindowModalDialogEvent::GetDialog() const
	static int _bind_GetDialog(lua_State *L) {
		if (!_lg_typecheck_GetDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDialog * wxWindowModalDialogEvent::GetDialog() const function, expected prototype:\nwxDialog * wxWindowModalDialogEvent::GetDialog() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDialog * wxWindowModalDialogEvent::GetDialog() const");
		}
		wxDialog * lret = self->GetDialog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDialog >::push(L,lret,false);

		return 1;
	}

	// int wxWindowModalDialogEvent::GetReturnCode() const
	static int _bind_GetReturnCode(lua_State *L) {
		if (!_lg_typecheck_GetReturnCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindowModalDialogEvent::GetReturnCode() const function, expected prototype:\nint wxWindowModalDialogEvent::GetReturnCode() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindowModalDialogEvent::GetReturnCode() const");
		}
		int lret = self->GetReturnCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxWindowModalDialogEvent::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxWindowModalDialogEvent::Clone() const function, expected prototype:\nwxEvent * wxWindowModalDialogEvent::Clone() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxWindowModalDialogEvent::Clone() const");
		}
		wxEvent * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWindowModalDialogEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindowModalDialogEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindowModalDialogEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindowModalDialogEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxWindowModalDialogEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWindowModalDialogEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWindowModalDialogEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWindowModalDialogEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxWindowModalDialogEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxWindowModalDialogEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxWindowModalDialogEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxWindowModalDialogEvent::base_Clone() const function, expected prototype:\nwxEvent * wxWindowModalDialogEvent::base_Clone() const\nClass arguments details:\n");
		}


		wxWindowModalDialogEvent* self=Luna< wxObject >::checkSubType< wxWindowModalDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxWindowModalDialogEvent::base_Clone() const");
		}
		wxEvent * lret = self->wxWindowModalDialogEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWindowModalDialogEvent* LunaTraits< wxWindowModalDialogEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowModalDialogEvent::_bind_ctor(L);
}

void LunaTraits< wxWindowModalDialogEvent >::_bind_dtor(wxWindowModalDialogEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowModalDialogEvent >::className[] = "wxWindowModalDialogEvent";
const char LunaTraits< wxWindowModalDialogEvent >::fullName[] = "wxWindowModalDialogEvent";
const char LunaTraits< wxWindowModalDialogEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowModalDialogEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowModalDialogEvent >::hash = 5556897;
const int LunaTraits< wxWindowModalDialogEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowModalDialogEvent >::methods[] = {
	{"GetDialog", &luna_wrapper_wxWindowModalDialogEvent::_bind_GetDialog},
	{"GetReturnCode", &luna_wrapper_wxWindowModalDialogEvent::_bind_GetReturnCode},
	{"Clone", &luna_wrapper_wxWindowModalDialogEvent::_bind_Clone},
	{"base_GetClassInfo", &luna_wrapper_wxWindowModalDialogEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWindowModalDialogEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxWindowModalDialogEvent::_bind_base_Clone},
	{"__eq", &luna_wrapper_wxWindowModalDialogEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowModalDialogEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowModalDialogEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowModalDialogEvent >::enumValues[] = {
	{0,0}
};


