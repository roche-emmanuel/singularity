#include <plug_common.h>

class luna_wrapper_wxHelpEvent {
public:
	typedef Luna< wxHelpEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHelpEvent* ptr= dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHelpEvent >::push(L,ptr,false);
		return 1;
	};


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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxHelpEvent::Origin wxHelpEvent::GetOrigin() const
	static int _bind_GetOrigin(lua_State *L) {
		if (!_lg_typecheck_GetOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHelpEvent::Origin wxHelpEvent::GetOrigin() const function, expected prototype:\nwxHelpEvent::Origin wxHelpEvent::GetOrigin() const\nClass arguments details:\n");
		}


		wxHelpEvent* self=dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHelpEvent::Origin wxHelpEvent::GetOrigin() const");
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


		wxHelpEvent* self=dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPoint & wxHelpEvent::GetPosition() const");
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

		wxHelpEvent* self=dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpEvent::SetOrigin(wxHelpEvent::Origin)");
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

		wxHelpEvent* self=dynamic_cast< wxHelpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpEvent::SetPosition(const wxPoint &)");
		}
		self->SetPosition(pt);

		return 0;
	}


	// Operator binds:

};

wxHelpEvent* LunaTraits< wxHelpEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
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


