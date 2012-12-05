#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVarHScrollHelper.h>

class luna_wrapper_wxVarHScrollHelper {
public:
	typedef Luna< wxVarHScrollHelper > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94004845) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxVarScrollHelperBase*)");
		}

		wxVarScrollHelperBase* rhs =(Luna< wxVarScrollHelperBase >::check(L,2));
		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxVarHScrollHelper* ptr= dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVarHScrollHelper >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleColumnsBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleColumnsEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsColumnVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshColumns(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollColumnPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollColumns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// size_t wxVarHScrollHelper::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetColumnCount() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetColumnCount() const\nClass arguments details:\n");
		}


		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetColumnCount() const");
		}
		size_t lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const
	static int _bind_GetVisibleColumnsBegin(lua_State *L) {
		if (!_lg_typecheck_GetVisibleColumnsBegin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetVisibleColumnsBegin() const\nClass arguments details:\n");
		}


		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const");
		}
		size_t lret = self->GetVisibleColumnsBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const
	static int _bind_GetVisibleColumnsEnd(lua_State *L) {
		if (!_lg_typecheck_GetVisibleColumnsEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetVisibleColumnsEnd() const\nClass arguments details:\n");
		}


		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const");
		}
		size_t lret = self->GetVisibleColumnsEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVarHScrollHelper::IsColumnVisible(size_t column) const
	static int _bind_IsColumnVisible(lua_State *L) {
		if (!_lg_typecheck_IsColumnVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::IsColumnVisible(size_t column) const function, expected prototype:\nbool wxVarHScrollHelper::IsColumnVisible(size_t column) const\nClass arguments details:\n");
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::IsColumnVisible(size_t) const");
		}
		bool lret = self->IsColumnVisible(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarHScrollHelper::RefreshColumn(size_t column)
	static int _bind_RefreshColumn(lua_State *L) {
		if (!_lg_typecheck_RefreshColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::RefreshColumn(size_t column) function, expected prototype:\nvoid wxVarHScrollHelper::RefreshColumn(size_t column)\nClass arguments details:\n");
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::RefreshColumn(size_t)");
		}
		self->RefreshColumn(column);

		return 0;
	}

	// void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)
	static int _bind_RefreshColumns(lua_State *L) {
		if (!_lg_typecheck_RefreshColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to) function, expected prototype:\nvoid wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)\nClass arguments details:\n");
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::RefreshColumns(size_t, size_t)");
		}
		self->RefreshColumns(from, to);

		return 0;
	}

	// bool wxVarHScrollHelper::ScrollColumnPages(int pages)
	static int _bind_ScrollColumnPages(lua_State *L) {
		if (!_lg_typecheck_ScrollColumnPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollColumnPages(int pages) function, expected prototype:\nbool wxVarHScrollHelper::ScrollColumnPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollColumnPages(int)");
		}
		bool lret = self->ScrollColumnPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarHScrollHelper::ScrollColumns(int columns)
	static int _bind_ScrollColumns(lua_State *L) {
		if (!_lg_typecheck_ScrollColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollColumns(int columns) function, expected prototype:\nbool wxVarHScrollHelper::ScrollColumns(int columns)\nClass arguments details:\n");
		}

		int columns=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollColumns(int)");
		}
		bool lret = self->ScrollColumns(columns);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarHScrollHelper::ScrollToColumn(size_t column)
	static int _bind_ScrollToColumn(lua_State *L) {
		if (!_lg_typecheck_ScrollToColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollToColumn(size_t column) function, expected prototype:\nbool wxVarHScrollHelper::ScrollToColumn(size_t column)\nClass arguments details:\n");
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollToColumn(size_t)");
		}
		bool lret = self->ScrollToColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarHScrollHelper::SetColumnCount(size_t columnCount)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::SetColumnCount(size_t columnCount) function, expected prototype:\nvoid wxVarHScrollHelper::SetColumnCount(size_t columnCount)\nClass arguments details:\n");
		}

		size_t columnCount=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::SetColumnCount(size_t)");
		}
		self->SetColumnCount(columnCount);

		return 0;
	}


	// Operator binds:

};

wxVarHScrollHelper* LunaTraits< wxVarHScrollHelper >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxVarHScrollHelper::OnGetColumnWidth(size_t column) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxVarHScrollHelper >::_bind_dtor(wxVarHScrollHelper* obj) {
	delete obj;
}

const char LunaTraits< wxVarHScrollHelper >::className[] = "wxVarHScrollHelper";
const char LunaTraits< wxVarHScrollHelper >::fullName[] = "wxVarHScrollHelper";
const char LunaTraits< wxVarHScrollHelper >::moduleName[] = "wx";
const char* LunaTraits< wxVarHScrollHelper >::parents[] = {"wx.wxVarScrollHelperBase", 0};
const int LunaTraits< wxVarHScrollHelper >::hash = 49341946;
const int LunaTraits< wxVarHScrollHelper >::uniqueIDs[] = {94004845,0};

luna_RegType LunaTraits< wxVarHScrollHelper >::methods[] = {
	{"GetColumnCount", &luna_wrapper_wxVarHScrollHelper::_bind_GetColumnCount},
	{"GetVisibleColumnsBegin", &luna_wrapper_wxVarHScrollHelper::_bind_GetVisibleColumnsBegin},
	{"GetVisibleColumnsEnd", &luna_wrapper_wxVarHScrollHelper::_bind_GetVisibleColumnsEnd},
	{"IsColumnVisible", &luna_wrapper_wxVarHScrollHelper::_bind_IsColumnVisible},
	{"RefreshColumn", &luna_wrapper_wxVarHScrollHelper::_bind_RefreshColumn},
	{"RefreshColumns", &luna_wrapper_wxVarHScrollHelper::_bind_RefreshColumns},
	{"ScrollColumnPages", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollColumnPages},
	{"ScrollColumns", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollColumns},
	{"ScrollToColumn", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollToColumn},
	{"SetColumnCount", &luna_wrapper_wxVarHScrollHelper::_bind_SetColumnCount},
	{"__eq", &luna_wrapper_wxVarHScrollHelper::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxVarHScrollHelper >::converters[] = {
	{"wxVarScrollHelperBase", &luna_wrapper_wxVarHScrollHelper::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVarHScrollHelper >::enumValues[] = {
	{0,0}
};


