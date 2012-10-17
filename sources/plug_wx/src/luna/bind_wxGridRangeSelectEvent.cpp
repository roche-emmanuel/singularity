#include <plug_common.h>

class luna_wrapper_wxGridRangeSelectEvent {
public:
	typedef Luna< wxGridRangeSelectEvent > luna_t;

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
		wxGridRangeSelectEvent* ptr= dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridRangeSelectEvent >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetBottomRightCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopLeftCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopRow(lua_State *L) {
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
	// bool wxGridRangeSelectEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::AltDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::AltDown() const\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::AltDown() const");
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::ControlDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::ControlDown() const\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::ControlDown() const");
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords()
	static int _bind_GetBottomRightCoords(lua_State *L) {
		if (!_lg_typecheck_GetBottomRightCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords() function, expected prototype:\nwxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords()");
		}
		wxGridCellCoords stack_lret = self->GetBottomRightCoords();
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetBottomRow()
	static int _bind_GetBottomRow(lua_State *L) {
		if (!_lg_typecheck_GetBottomRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetBottomRow() function, expected prototype:\nint wxGridRangeSelectEvent::GetBottomRow()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetBottomRow()");
		}
		int lret = self->GetBottomRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetLeftCol()
	static int _bind_GetLeftCol(lua_State *L) {
		if (!_lg_typecheck_GetLeftCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetLeftCol() function, expected prototype:\nint wxGridRangeSelectEvent::GetLeftCol()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetLeftCol()");
		}
		int lret = self->GetLeftCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetRightCol()
	static int _bind_GetRightCol(lua_State *L) {
		if (!_lg_typecheck_GetRightCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetRightCol() function, expected prototype:\nint wxGridRangeSelectEvent::GetRightCol()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetRightCol()");
		}
		int lret = self->GetRightCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords()
	static int _bind_GetTopLeftCoords(lua_State *L) {
		if (!_lg_typecheck_GetTopLeftCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords() function, expected prototype:\nwxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords()");
		}
		wxGridCellCoords stack_lret = self->GetTopLeftCoords();
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetTopRow()
	static int _bind_GetTopRow(lua_State *L) {
		if (!_lg_typecheck_GetTopRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetTopRow() function, expected prototype:\nint wxGridRangeSelectEvent::GetTopRow()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetTopRow()");
		}
		int lret = self->GetTopRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridRangeSelectEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::MetaDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::MetaDown() const\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::MetaDown() const");
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::Selecting()
	static int _bind_Selecting(lua_State *L) {
		if (!_lg_typecheck_Selecting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::Selecting() function, expected prototype:\nbool wxGridRangeSelectEvent::Selecting()\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::Selecting()");
		}
		bool lret = self->Selecting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::ShiftDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::ShiftDown() const\nClass arguments details:\n");
		}


		wxGridRangeSelectEvent* self=dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::ShiftDown() const");
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGridRangeSelectEvent* LunaTraits< wxGridRangeSelectEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxGridRangeSelectEvent >::_bind_dtor(wxGridRangeSelectEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridRangeSelectEvent >::className[] = "wxGridRangeSelectEvent";
const char LunaTraits< wxGridRangeSelectEvent >::fullName[] = "wxGridRangeSelectEvent";
const char LunaTraits< wxGridRangeSelectEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridRangeSelectEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridRangeSelectEvent >::hash = 75623635;
const int LunaTraits< wxGridRangeSelectEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridRangeSelectEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_ControlDown},
	{"GetBottomRightCoords", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetBottomRightCoords},
	{"GetBottomRow", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetBottomRow},
	{"GetLeftCol", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetLeftCol},
	{"GetRightCol", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetRightCol},
	{"GetTopLeftCoords", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetTopLeftCoords},
	{"GetTopRow", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetTopRow},
	{"MetaDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_MetaDown},
	{"Selecting", &luna_wrapper_wxGridRangeSelectEvent::_bind_Selecting},
	{"ShiftDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_ShiftDown},
	{"__eq", &luna_wrapper_wxGridRangeSelectEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridRangeSelectEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridRangeSelectEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridRangeSelectEvent >::enumValues[] = {
	{0,0}
};


