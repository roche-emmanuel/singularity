#include <plug_common.h>

class luna_wrapper_wxIdleEvent {
public:
	typedef Luna< wxIdleEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxIdleEvent* ptr= dynamic_cast< wxIdleEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIdleEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_MoreRequested(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RequestMore(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxIdleEvent::MoreRequested() const
	static int _bind_MoreRequested(lua_State *L) {
		if (!_lg_typecheck_MoreRequested(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIdleEvent::MoreRequested() const function, expected prototype:\nbool wxIdleEvent::MoreRequested() const\nClass arguments details:\n");
		}


		wxIdleEvent* self=dynamic_cast< wxIdleEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIdleEvent::MoreRequested() const");
		}
		bool lret = self->MoreRequested();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxIdleEvent::RequestMore(bool needMore = true)
	static int _bind_RequestMore(lua_State *L) {
		if (!_lg_typecheck_RequestMore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIdleEvent::RequestMore(bool needMore = true) function, expected prototype:\nvoid wxIdleEvent::RequestMore(bool needMore = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needMore=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxIdleEvent* self=dynamic_cast< wxIdleEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIdleEvent::RequestMore(bool)");
		}
		self->RequestMore(needMore);

		return 0;
	}

	// static wxIdleMode wxIdleEvent::GetMode()
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxIdleMode wxIdleEvent::GetMode() function, expected prototype:\nstatic wxIdleMode wxIdleEvent::GetMode()\nClass arguments details:\n");
		}


		wxIdleMode lret = wxIdleEvent::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxIdleEvent::SetMode(wxIdleMode mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxIdleEvent::SetMode(wxIdleMode mode) function, expected prototype:\nstatic void wxIdleEvent::SetMode(wxIdleMode mode)\nClass arguments details:\n");
		}

		wxIdleMode mode=(wxIdleMode)lua_tointeger(L,1);

		wxIdleEvent::SetMode(mode);

		return 0;
	}


	// Operator binds:

};

wxIdleEvent* LunaTraits< wxIdleEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxIdleEvent >::_bind_dtor(wxIdleEvent* obj) {
	delete obj;
}

const char LunaTraits< wxIdleEvent >::className[] = "wxIdleEvent";
const char LunaTraits< wxIdleEvent >::fullName[] = "wxIdleEvent";
const char LunaTraits< wxIdleEvent >::moduleName[] = "wx";
const char* LunaTraits< wxIdleEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxIdleEvent >::hash = 61589214;
const int LunaTraits< wxIdleEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIdleEvent >::methods[] = {
	{"MoreRequested", &luna_wrapper_wxIdleEvent::_bind_MoreRequested},
	{"RequestMore", &luna_wrapper_wxIdleEvent::_bind_RequestMore},
	{"GetMode", &luna_wrapper_wxIdleEvent::_bind_GetMode},
	{"SetMode", &luna_wrapper_wxIdleEvent::_bind_SetMode},
	{0,0}
};

luna_ConverterType LunaTraits< wxIdleEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxIdleEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIdleEvent >::enumValues[] = {
	{0,0}
};


