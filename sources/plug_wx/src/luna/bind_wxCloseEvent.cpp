#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCloseEvent.h>

class luna_wrapper_wxCloseEvent {
public:
	typedef Luna< wxCloseEvent > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxCloseEvent* ptr= dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		wxCloseEvent* ptr= luna_caster< wxObject, wxCloseEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCloseEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLoggingOff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanVeto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLoggingOff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCloseEvent::wxCloseEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0)
	static wxCloseEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCloseEvent::wxCloseEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxCloseEvent::wxCloseEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandEventType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		return new wrapper_wxCloseEvent(L,NULL, commandEventType, id);
	}


	// Function binds:
	// bool wxCloseEvent::CanVeto() const
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCloseEvent::CanVeto() const function, expected prototype:\nbool wxCloseEvent::CanVeto() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCloseEvent::CanVeto() const");
		}
		bool lret = self->CanVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCloseEvent::GetLoggingOff() const
	static int _bind_GetLoggingOff(lua_State *L) {
		if (!_lg_typecheck_GetLoggingOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCloseEvent::GetLoggingOff() const function, expected prototype:\nbool wxCloseEvent::GetLoggingOff() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCloseEvent::GetLoggingOff() const");
		}
		bool lret = self->GetLoggingOff();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCloseEvent::SetCanVeto(bool canVeto)
	static int _bind_SetCanVeto(lua_State *L) {
		if (!_lg_typecheck_SetCanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::SetCanVeto(bool canVeto) function, expected prototype:\nvoid wxCloseEvent::SetCanVeto(bool canVeto)\nClass arguments details:\n");
		}

		bool canVeto=(bool)(lua_toboolean(L,2)==1);

		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::SetCanVeto(bool)");
		}
		self->SetCanVeto(canVeto);

		return 0;
	}

	// void wxCloseEvent::SetLoggingOff(bool loggingOff)
	static int _bind_SetLoggingOff(lua_State *L) {
		if (!_lg_typecheck_SetLoggingOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::SetLoggingOff(bool loggingOff) function, expected prototype:\nvoid wxCloseEvent::SetLoggingOff(bool loggingOff)\nClass arguments details:\n");
		}

		bool loggingOff=(bool)(lua_toboolean(L,2)==1);

		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::SetLoggingOff(bool)");
		}
		self->SetLoggingOff(loggingOff);

		return 0;
	}

	// void wxCloseEvent::Veto(bool veto = true)
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::Veto(bool veto = true) function, expected prototype:\nvoid wxCloseEvent::Veto(bool veto = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool veto=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::Veto(bool)");
		}
		self->Veto(veto);

		return 0;
	}

	// wxClassInfo * wxCloseEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxCloseEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxCloseEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxCloseEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxCloseEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxCloseEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxCloseEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxCloseEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=Luna< wxObject >::checkSubType< wxCloseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxCloseEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxCloseEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxCloseEvent* LunaTraits< wxCloseEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCloseEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxCloseEvent >::_bind_dtor(wxCloseEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCloseEvent >::className[] = "wxCloseEvent";
const char LunaTraits< wxCloseEvent >::fullName[] = "wxCloseEvent";
const char LunaTraits< wxCloseEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCloseEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxCloseEvent >::hash = 51631401;
const int LunaTraits< wxCloseEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCloseEvent >::methods[] = {
	{"CanVeto", &luna_wrapper_wxCloseEvent::_bind_CanVeto},
	{"GetLoggingOff", &luna_wrapper_wxCloseEvent::_bind_GetLoggingOff},
	{"SetCanVeto", &luna_wrapper_wxCloseEvent::_bind_SetCanVeto},
	{"SetLoggingOff", &luna_wrapper_wxCloseEvent::_bind_SetLoggingOff},
	{"Veto", &luna_wrapper_wxCloseEvent::_bind_Veto},
	{"base_GetClassInfo", &luna_wrapper_wxCloseEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxCloseEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxCloseEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxCloseEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCloseEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCloseEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCloseEvent >::enumValues[] = {
	{0,0}
};


