#include <plug_common.h>

class luna_wrapper_wxVarVScrollHelper {
public:
	typedef Luna< wxVarVScrollHelper > luna_t;

	// Derived class converters:
	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxVarVScrollHelper* ptr= dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVarVScrollHelper >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetRowCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleRowsBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleRowsEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRowVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRows(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollRowPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// size_t wxVarVScrollHelper::GetRowCount() const
	static int _bind_GetRowCount(lua_State *L) {
		if (!_lg_typecheck_GetRowCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetRowCount() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetRowCount() const\nClass arguments details:\n");
		}


		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetRowCount() const");
		}
		size_t lret = self->GetRowCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarVScrollHelper::GetVisibleRowsBegin() const
	static int _bind_GetVisibleRowsBegin(lua_State *L) {
		if (!_lg_typecheck_GetVisibleRowsBegin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetVisibleRowsBegin() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetVisibleRowsBegin() const\nClass arguments details:\n");
		}


		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetVisibleRowsBegin() const");
		}
		size_t lret = self->GetVisibleRowsBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarVScrollHelper::GetVisibleRowsEnd() const
	static int _bind_GetVisibleRowsEnd(lua_State *L) {
		if (!_lg_typecheck_GetVisibleRowsEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetVisibleRowsEnd() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetVisibleRowsEnd() const\nClass arguments details:\n");
		}


		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetVisibleRowsEnd() const");
		}
		size_t lret = self->GetVisibleRowsEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVarVScrollHelper::IsRowVisible(size_t row) const
	static int _bind_IsRowVisible(lua_State *L) {
		if (!_lg_typecheck_IsRowVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::IsRowVisible(size_t row) const function, expected prototype:\nbool wxVarVScrollHelper::IsRowVisible(size_t row) const\nClass arguments details:\n");
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::IsRowVisible(size_t) const");
		}
		bool lret = self->IsRowVisible(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarVScrollHelper::RefreshRow(size_t row)
	static int _bind_RefreshRow(lua_State *L) {
		if (!_lg_typecheck_RefreshRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::RefreshRow(size_t row) function, expected prototype:\nvoid wxVarVScrollHelper::RefreshRow(size_t row)\nClass arguments details:\n");
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::RefreshRow(size_t)");
		}
		self->RefreshRow(row);

		return 0;
	}

	// void wxVarVScrollHelper::RefreshRows(size_t from, size_t to)
	static int _bind_RefreshRows(lua_State *L) {
		if (!_lg_typecheck_RefreshRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::RefreshRows(size_t from, size_t to) function, expected prototype:\nvoid wxVarVScrollHelper::RefreshRows(size_t from, size_t to)\nClass arguments details:\n");
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::RefreshRows(size_t, size_t)");
		}
		self->RefreshRows(from, to);

		return 0;
	}

	// bool wxVarVScrollHelper::ScrollRowPages(int pages)
	static int _bind_ScrollRowPages(lua_State *L) {
		if (!_lg_typecheck_ScrollRowPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollRowPages(int pages) function, expected prototype:\nbool wxVarVScrollHelper::ScrollRowPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollRowPages(int)");
		}
		bool lret = self->ScrollRowPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarVScrollHelper::ScrollRows(int rows)
	static int _bind_ScrollRows(lua_State *L) {
		if (!_lg_typecheck_ScrollRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollRows(int rows) function, expected prototype:\nbool wxVarVScrollHelper::ScrollRows(int rows)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollRows(int)");
		}
		bool lret = self->ScrollRows(rows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarVScrollHelper::ScrollToRow(size_t row)
	static int _bind_ScrollToRow(lua_State *L) {
		if (!_lg_typecheck_ScrollToRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollToRow(size_t row) function, expected prototype:\nbool wxVarVScrollHelper::ScrollToRow(size_t row)\nClass arguments details:\n");
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollToRow(size_t)");
		}
		bool lret = self->ScrollToRow(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarVScrollHelper::SetRowCount(size_t rowCount)
	static int _bind_SetRowCount(lua_State *L) {
		if (!_lg_typecheck_SetRowCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::SetRowCount(size_t rowCount) function, expected prototype:\nvoid wxVarVScrollHelper::SetRowCount(size_t rowCount)\nClass arguments details:\n");
		}

		size_t rowCount=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::SetRowCount(size_t)");
		}
		self->SetRowCount(rowCount);

		return 0;
	}


	// Operator binds:

};

wxVarVScrollHelper* LunaTraits< wxVarVScrollHelper >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const

	// Abstract operators:
}

void LunaTraits< wxVarVScrollHelper >::_bind_dtor(wxVarVScrollHelper* obj) {
	delete obj;
}

const char LunaTraits< wxVarVScrollHelper >::className[] = "wxVarVScrollHelper";
const char LunaTraits< wxVarVScrollHelper >::fullName[] = "wxVarVScrollHelper";
const char LunaTraits< wxVarVScrollHelper >::moduleName[] = "wx";
const char* LunaTraits< wxVarVScrollHelper >::parents[] = {"wx.wxVarScrollHelperBase", 0};
const int LunaTraits< wxVarVScrollHelper >::hash = 49888195;
const int LunaTraits< wxVarVScrollHelper >::uniqueIDs[] = {94004845,0};

luna_RegType LunaTraits< wxVarVScrollHelper >::methods[] = {
	{"GetRowCount", &luna_wrapper_wxVarVScrollHelper::_bind_GetRowCount},
	{"GetVisibleRowsBegin", &luna_wrapper_wxVarVScrollHelper::_bind_GetVisibleRowsBegin},
	{"GetVisibleRowsEnd", &luna_wrapper_wxVarVScrollHelper::_bind_GetVisibleRowsEnd},
	{"IsRowVisible", &luna_wrapper_wxVarVScrollHelper::_bind_IsRowVisible},
	{"RefreshRow", &luna_wrapper_wxVarVScrollHelper::_bind_RefreshRow},
	{"RefreshRows", &luna_wrapper_wxVarVScrollHelper::_bind_RefreshRows},
	{"ScrollRowPages", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollRowPages},
	{"ScrollRows", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollRows},
	{"ScrollToRow", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollToRow},
	{"SetRowCount", &luna_wrapper_wxVarVScrollHelper::_bind_SetRowCount},
	{0,0}
};

luna_ConverterType LunaTraits< wxVarVScrollHelper >::converters[] = {
	{"wxVarScrollHelperBase", &luna_wrapper_wxVarVScrollHelper::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVarVScrollHelper >::enumValues[] = {
	{0,0}
};


