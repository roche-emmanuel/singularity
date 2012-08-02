#include <plug_common.h>

class luna_wrapper_wxSpinEvent {
public:
	typedef Luna< wxSpinEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSpinEvent* ptr= dynamic_cast< wxSpinEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxSpinEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSpinEvent::GetPosition() const function, expected prototype:\nint wxSpinEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxSpinEvent* self=dynamic_cast< wxSpinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSpinEvent::GetPosition() const");
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinEvent::SetPosition(int pos) function, expected prototype:\nvoid wxSpinEvent::SetPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxSpinEvent* self=dynamic_cast< wxSpinEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinEvent::SetPosition(int)");
		}
		self->SetPosition(pos);

		return 0;
	}


	// Operator binds:

};

wxSpinEvent* LunaTraits< wxSpinEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSpinEvent >::_bind_dtor(wxSpinEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSpinEvent >::className[] = "wxSpinEvent";
const char LunaTraits< wxSpinEvent >::fullName[] = "wxSpinEvent";
const char LunaTraits< wxSpinEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSpinEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSpinEvent >::hash = 17777348;
const int LunaTraits< wxSpinEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSpinEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxSpinEvent::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxSpinEvent::_bind_SetPosition},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinEvent >::enumValues[] = {
	{0,0}
};


