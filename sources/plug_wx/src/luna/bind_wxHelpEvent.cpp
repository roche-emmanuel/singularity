#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHelpEvent.h>

class luna_wrapper_wxHelpEvent {
public:
	typedef Luna< wxHelpEvent > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//wxHelpEvent* ptr= dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		wxHelpEvent* ptr= luna_caster< wxObject, wxHelpEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHelpEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
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
	// wxHelpEvent::wxHelpEvent(lua_Table * data, int type = wxEVT_NULL, int winid = 0, const wxPoint & pt = wxDefaultPosition, wxHelpEvent::Origin origin = wxHelpEvent::Origin_Unknown)
	static wxHelpEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHelpEvent::wxHelpEvent(lua_Table * data, int type = wxEVT_NULL, int winid = 0, const wxPoint & pt = wxDefaultPosition, wxHelpEvent::Origin origin = wxHelpEvent::Origin_Unknown) function, expected prototype:\nwxHelpEvent::wxHelpEvent(lua_Table * data, int type = wxEVT_NULL, int winid = 0, const wxPoint & pt = wxDefaultPosition, wxHelpEvent::Origin origin = wxHelpEvent::Origin_Unknown)\nClass arguments details:\narg 4 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		const wxPoint* pt_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxHelpEvent::wxHelpEvent function");
		}
		const wxPoint & pt=luatop>3 ? *pt_ptr : wxDefaultPosition;
		wxHelpEvent::Origin origin=luatop>4 ? (wxHelpEvent::Origin)lua_tointeger(L,5) : wxHelpEvent::Origin_Unknown;

		return new wrapper_wxHelpEvent(L,NULL, type, winid, pt, origin);
	}


	// Function binds:
	// wxHelpEvent::Origin wxHelpEvent::GetOrigin() const
	static int _bind_GetOrigin(lua_State *L) {
		if (!_lg_typecheck_GetOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHelpEvent::Origin wxHelpEvent::GetOrigin() const function, expected prototype:\nwxHelpEvent::Origin wxHelpEvent::GetOrigin() const\nClass arguments details:\n");
		}


		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHelpEvent::Origin wxHelpEvent::GetOrigin() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxHelpEvent::Origin lret = self->GetOrigin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxPoint & wxHelpEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxPoint & wxHelpEvent::GetPosition() const function, expected prototype:\nconst wxPoint & wxHelpEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPoint & wxHelpEvent::GetPosition() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxPoint* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// void wxHelpEvent::SetOrigin(wxHelpEvent::Origin origin)
	static int _bind_SetOrigin(lua_State *L) {
		if (!_lg_typecheck_SetOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpEvent::SetOrigin(wxHelpEvent::Origin origin) function, expected prototype:\nvoid wxHelpEvent::SetOrigin(wxHelpEvent::Origin origin)\nClass arguments details:\n");
		}

		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,2);

		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpEvent::SetOrigin(wxHelpEvent::Origin). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetOrigin(origin);

		return 0;
	}

	// void wxHelpEvent::SetPosition(const wxPoint & pt)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpEvent::SetPosition(const wxPoint & pt) function, expected prototype:\nvoid wxHelpEvent::SetPosition(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxHelpEvent::SetPosition function");
		}
		const wxPoint & pt=*pt_ptr;

		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpEvent::SetPosition(const wxPoint &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetPosition(pt);

		return 0;
	}

	// wxClassInfo * wxHelpEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHelpEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHelpEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHelpEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxHelpEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHelpEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHelpEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHelpEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxHelpEvent* self=Luna< wxObject >::checkSubType< wxHelpEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxHelpEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxHelpEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxHelpEvent* LunaTraits< wxHelpEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHelpEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxHelpEvent >::_bind_dtor(wxHelpEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHelpEvent >::className[] = "wxHelpEvent";
const char LunaTraits< wxHelpEvent >::fullName[] = "wxHelpEvent";
const char LunaTraits< wxHelpEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHelpEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHelpEvent >::hash = 98161372;
const int LunaTraits< wxHelpEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHelpEvent >::methods[] = {
	{"GetOrigin", &luna_wrapper_wxHelpEvent::_bind_GetOrigin},
	{"GetPosition", &luna_wrapper_wxHelpEvent::_bind_GetPosition},
	{"SetOrigin", &luna_wrapper_wxHelpEvent::_bind_SetOrigin},
	{"SetPosition", &luna_wrapper_wxHelpEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxHelpEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHelpEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxHelpEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxHelpEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHelpEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHelpEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHelpEvent >::enumValues[] = {
	{"Origin_Unknown", wxHelpEvent::Origin_Unknown},
	{"Origin_Keyboard", wxHelpEvent::Origin_Keyboard},
	{"Origin_HelpButton", wxHelpEvent::Origin_HelpButton},
	{0,0}
};


