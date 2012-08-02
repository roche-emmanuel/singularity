#include <plug_common.h>

class luna_wrapper_wxHeaderCtrlSimple {
public:
	typedef Luna< wxHeaderCtrlSimple > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHeaderCtrlSimple* ptr= dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderCtrlSimple >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,185523) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,185523) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowSortIndicator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveSortIndicator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxHeaderColumnSimple* col_ptr=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxHeaderCtrlSimple::InsertColumn function");
		}
		const wxHeaderColumnSimple & col=*col_ptr;
		unsigned int idx=(unsigned int)lua_tointeger(L,3);

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple &, unsigned int)");
		}
		self->InsertColumn(col, idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col) function, expected prototype:\nvoid wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxHeaderColumnSimple* col_ptr=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxHeaderCtrlSimple::AppendColumn function");
		}
		const wxHeaderColumnSimple & col=*col_ptr;

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple &)");
		}
		self->AppendColumn(col);

		return 0;
	}

	// void wxHeaderCtrlSimple::DeleteColumn(unsigned int idx)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::DeleteColumn(unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::DeleteColumn(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::DeleteColumn(unsigned int)");
		}
		self->DeleteColumn(idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true)
	static int _bind_ShowColumn(lua_State *L) {
		if (!_lg_typecheck_ShowColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int idx=(unsigned int)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::ShowColumn(unsigned int, bool)");
		}
		self->ShowColumn(idx, show);

		return 0;
	}

	// void wxHeaderCtrlSimple::HideColumn(unsigned int idx)
	static int _bind_HideColumn(lua_State *L) {
		if (!_lg_typecheck_HideColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::HideColumn(unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::HideColumn(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::HideColumn(unsigned int)");
		}
		self->HideColumn(idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true)
	static int _bind_ShowSortIndicator(lua_State *L) {
		if (!_lg_typecheck_ShowSortIndicator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int idx=(unsigned int)lua_tointeger(L,2);
		bool sortOrder=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int, bool)");
		}
		self->ShowSortIndicator(idx, sortOrder);

		return 0;
	}

	// void wxHeaderCtrlSimple::RemoveSortIndicator()
	static int _bind_RemoveSortIndicator(lua_State *L) {
		if (!_lg_typecheck_RemoveSortIndicator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::RemoveSortIndicator() function, expected prototype:\nvoid wxHeaderCtrlSimple::RemoveSortIndicator()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::RemoveSortIndicator()");
		}
		self->RemoveSortIndicator();

		return 0;
	}


	// Operator binds:

};

wxHeaderCtrlSimple* LunaTraits< wxHeaderCtrlSimple >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// const wxHeaderColumn & wxHeaderCtrl::GetColumn(unsigned int idx) const

	// Abstract operators:
}

void LunaTraits< wxHeaderCtrlSimple >::_bind_dtor(wxHeaderCtrlSimple* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderCtrlSimple >::className[] = "wxHeaderCtrlSimple";
const char LunaTraits< wxHeaderCtrlSimple >::fullName[] = "wxHeaderCtrlSimple";
const char LunaTraits< wxHeaderCtrlSimple >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderCtrlSimple >::parents[] = {"wx.wxHeaderCtrl", 0};
const int LunaTraits< wxHeaderCtrlSimple >::hash = 31402285;
const int LunaTraits< wxHeaderCtrlSimple >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHeaderCtrlSimple >::methods[] = {
	{"InsertColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_InsertColumn},
	{"AppendColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_AppendColumn},
	{"DeleteColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_DeleteColumn},
	{"ShowColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_ShowColumn},
	{"HideColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_HideColumn},
	{"ShowSortIndicator", &luna_wrapper_wxHeaderCtrlSimple::_bind_ShowSortIndicator},
	{"RemoveSortIndicator", &luna_wrapper_wxHeaderCtrlSimple::_bind_RemoveSortIndicator},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderCtrlSimple >::converters[] = {
	{"wxObject", &luna_wrapper_wxHeaderCtrlSimple::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderCtrlSimple >::enumValues[] = {
	{0,0}
};


