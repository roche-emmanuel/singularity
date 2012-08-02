#include <plug_common.h>

class luna_wrapper_wxAuiToolBarEvent {
public:
	typedef Luna< wxAuiToolBarEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiToolBarEvent* ptr= dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiToolBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsDropDownClicked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClickPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxAuiToolBarEvent::IsDropDownClicked() const
	static int _bind_IsDropDownClicked(lua_State *L) {
		if (!_lg_typecheck_IsDropDownClicked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBarEvent::IsDropDownClicked() const function, expected prototype:\nbool wxAuiToolBarEvent::IsDropDownClicked() const\nClass arguments details:\n");
		}


		wxAuiToolBarEvent* self=dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBarEvent::IsDropDownClicked() const");
		}
		bool lret = self->IsDropDownClicked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxAuiToolBarEvent::GetClickPoint() const
	static int _bind_GetClickPoint(lua_State *L) {
		if (!_lg_typecheck_GetClickPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxAuiToolBarEvent::GetClickPoint() const function, expected prototype:\nwxPoint wxAuiToolBarEvent::GetClickPoint() const\nClass arguments details:\n");
		}


		wxAuiToolBarEvent* self=dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxAuiToolBarEvent::GetClickPoint() const");
		}
		wxPoint stack_lret = self->GetClickPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxAuiToolBarEvent::GetItemRect() const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxAuiToolBarEvent::GetItemRect() const function, expected prototype:\nwxRect wxAuiToolBarEvent::GetItemRect() const\nClass arguments details:\n");
		}


		wxAuiToolBarEvent* self=dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxAuiToolBarEvent::GetItemRect() const");
		}
		wxRect stack_lret = self->GetItemRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// int wxAuiToolBarEvent::GetToolId() const
	static int _bind_GetToolId(lua_State *L) {
		if (!_lg_typecheck_GetToolId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarEvent::GetToolId() const function, expected prototype:\nint wxAuiToolBarEvent::GetToolId() const\nClass arguments details:\n");
		}


		wxAuiToolBarEvent* self=dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarEvent::GetToolId() const");
		}
		int lret = self->GetToolId();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBarEvent* LunaTraits< wxAuiToolBarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxAuiToolBarEvent >::_bind_dtor(wxAuiToolBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBarEvent >::className[] = "wxAuiToolBarEvent";
const char LunaTraits< wxAuiToolBarEvent >::fullName[] = "wxAuiToolBarEvent";
const char LunaTraits< wxAuiToolBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBarEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxAuiToolBarEvent >::hash = 61045037;
const int LunaTraits< wxAuiToolBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAuiToolBarEvent >::methods[] = {
	{"IsDropDownClicked", &luna_wrapper_wxAuiToolBarEvent::_bind_IsDropDownClicked},
	{"GetClickPoint", &luna_wrapper_wxAuiToolBarEvent::_bind_GetClickPoint},
	{"GetItemRect", &luna_wrapper_wxAuiToolBarEvent::_bind_GetItemRect},
	{"GetToolId", &luna_wrapper_wxAuiToolBarEvent::_bind_GetToolId},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiToolBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBarEvent >::enumValues[] = {
	{0,0}
};


