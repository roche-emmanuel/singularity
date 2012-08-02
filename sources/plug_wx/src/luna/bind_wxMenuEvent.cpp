#include <plug_common.h>

class luna_wrapper_wxMenuEvent {
public:
	typedef Luna< wxMenuEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMenuEvent* ptr= dynamic_cast< wxMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenuEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxMenu * wxMenuEvent::GetMenu() const
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuEvent::GetMenu() const function, expected prototype:\nwxMenu * wxMenuEvent::GetMenu() const\nClass arguments details:\n");
		}


		wxMenuEvent* self=dynamic_cast< wxMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuEvent::GetMenu() const");
		}
		wxMenu * lret = self->GetMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// int wxMenuEvent::GetMenuId() const
	static int _bind_GetMenuId(lua_State *L) {
		if (!_lg_typecheck_GetMenuId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMenuEvent::GetMenuId() const function, expected prototype:\nint wxMenuEvent::GetMenuId() const\nClass arguments details:\n");
		}


		wxMenuEvent* self=dynamic_cast< wxMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMenuEvent::GetMenuId() const");
		}
		int lret = self->GetMenuId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMenuEvent::IsPopup() const
	static int _bind_IsPopup(lua_State *L) {
		if (!_lg_typecheck_IsPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuEvent::IsPopup() const function, expected prototype:\nbool wxMenuEvent::IsPopup() const\nClass arguments details:\n");
		}


		wxMenuEvent* self=dynamic_cast< wxMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuEvent::IsPopup() const");
		}
		bool lret = self->IsPopup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMenuEvent* LunaTraits< wxMenuEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxMenuEvent >::_bind_dtor(wxMenuEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMenuEvent >::className[] = "wxMenuEvent";
const char LunaTraits< wxMenuEvent >::fullName[] = "wxMenuEvent";
const char LunaTraits< wxMenuEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMenuEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMenuEvent >::hash = 71176912;
const int LunaTraits< wxMenuEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMenuEvent >::methods[] = {
	{"GetMenu", &luna_wrapper_wxMenuEvent::_bind_GetMenu},
	{"GetMenuId", &luna_wrapper_wxMenuEvent::_bind_GetMenuId},
	{"IsPopup", &luna_wrapper_wxMenuEvent::_bind_IsPopup},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenuEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuEvent >::enumValues[] = {
	{0,0}
};


