#include <plug_common.h>

class luna_wrapper_wxGridSizeEvent {
public:
	typedef Luna< wxGridSizeEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridSizeEvent* ptr= dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridSizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AltDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowOrCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShiftDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxGridSizeEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::AltDown() const function, expected prototype:\nbool wxGridSizeEvent::AltDown() const\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::AltDown() const");
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizeEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::ControlDown() const function, expected prototype:\nbool wxGridSizeEvent::ControlDown() const\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::ControlDown() const");
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxGridSizeEvent::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxGridSizeEvent::GetPosition() function, expected prototype:\nwxPoint wxGridSizeEvent::GetPosition()\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxGridSizeEvent::GetPosition()");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxGridSizeEvent::GetRowOrCol()
	static int _bind_GetRowOrCol(lua_State *L) {
		if (!_lg_typecheck_GetRowOrCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizeEvent::GetRowOrCol() function, expected prototype:\nint wxGridSizeEvent::GetRowOrCol()\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizeEvent::GetRowOrCol()");
		}
		int lret = self->GetRowOrCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridSizeEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::MetaDown() const function, expected prototype:\nbool wxGridSizeEvent::MetaDown() const\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::MetaDown() const");
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizeEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::ShiftDown() const function, expected prototype:\nbool wxGridSizeEvent::ShiftDown() const\nClass arguments details:\n");
		}


		wxGridSizeEvent* self=dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::ShiftDown() const");
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGridSizeEvent* LunaTraits< wxGridSizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxGridSizeEvent >::_bind_dtor(wxGridSizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridSizeEvent >::className[] = "wxGridSizeEvent";
const char LunaTraits< wxGridSizeEvent >::fullName[] = "wxGridSizeEvent";
const char LunaTraits< wxGridSizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridSizeEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridSizeEvent >::hash = 32317474;
const int LunaTraits< wxGridSizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridSizeEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridSizeEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridSizeEvent::_bind_ControlDown},
	{"GetPosition", &luna_wrapper_wxGridSizeEvent::_bind_GetPosition},
	{"GetRowOrCol", &luna_wrapper_wxGridSizeEvent::_bind_GetRowOrCol},
	{"MetaDown", &luna_wrapper_wxGridSizeEvent::_bind_MetaDown},
	{"ShiftDown", &luna_wrapper_wxGridSizeEvent::_bind_ShiftDown},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridSizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridSizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridSizeEvent >::enumValues[] = {
	{0,0}
};


