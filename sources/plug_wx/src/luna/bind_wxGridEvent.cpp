#include <plug_common.h>

class luna_wrapper_wxGridEvent {
public:
	typedef Luna< wxGridEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridEvent* ptr= dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridEvent >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Selecting(lua_State *L) {
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
	// bool wxGridEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::AltDown() const function, expected prototype:\nbool wxGridEvent::AltDown() const\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridEvent::AltDown() const");
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::ControlDown() const function, expected prototype:\nbool wxGridEvent::ControlDown() const\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridEvent::ControlDown() const");
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGridEvent::GetCol()
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEvent::GetCol() function, expected prototype:\nint wxGridEvent::GetCol()\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEvent::GetCol()");
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxGridEvent::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxGridEvent::GetPosition() function, expected prototype:\nwxPoint wxGridEvent::GetPosition()\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxGridEvent::GetPosition()");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxGridEvent::GetRow()
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEvent::GetRow() function, expected prototype:\nint wxGridEvent::GetRow()\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEvent::GetRow()");
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::MetaDown() const function, expected prototype:\nbool wxGridEvent::MetaDown() const\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridEvent::MetaDown() const");
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::Selecting()
	static int _bind_Selecting(lua_State *L) {
		if (!_lg_typecheck_Selecting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::Selecting() function, expected prototype:\nbool wxGridEvent::Selecting()\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridEvent::Selecting()");
		}
		bool lret = self->Selecting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::ShiftDown() const function, expected prototype:\nbool wxGridEvent::ShiftDown() const\nClass arguments details:\n");
		}


		wxGridEvent* self=dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridEvent::ShiftDown() const");
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGridEvent* LunaTraits< wxGridEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxGridEvent >::_bind_dtor(wxGridEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridEvent >::className[] = "wxGridEvent";
const char LunaTraits< wxGridEvent >::fullName[] = "wxGridEvent";
const char LunaTraits< wxGridEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridEvent >::hash = 65091525;
const int LunaTraits< wxGridEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridEvent::_bind_ControlDown},
	{"GetCol", &luna_wrapper_wxGridEvent::_bind_GetCol},
	{"GetPosition", &luna_wrapper_wxGridEvent::_bind_GetPosition},
	{"GetRow", &luna_wrapper_wxGridEvent::_bind_GetRow},
	{"MetaDown", &luna_wrapper_wxGridEvent::_bind_MetaDown},
	{"Selecting", &luna_wrapper_wxGridEvent::_bind_Selecting},
	{"ShiftDown", &luna_wrapper_wxGridEvent::_bind_ShiftDown},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridEvent >::enumValues[] = {
	{0,0}
};


