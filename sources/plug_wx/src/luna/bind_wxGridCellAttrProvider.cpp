#include <plug_common.h>

class luna_wrapper_wxGridCellAttrProvider {
public:
	typedef Luna< wxGridCellAttrProvider > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96494917) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxClientDataContainer*)");
		}

		wxClientDataContainer* rhs =(Luna< wxClientDataContainer >::check(L,2));
		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxClientDataContainer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellAttrProvider* ptr= dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellAttrProvider >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCornerRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellAttrProvider::wxGridCellAttrProvider()
	static wxGridCellAttrProvider* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellAttrProvider::wxGridCellAttrProvider() function, expected prototype:\nwxGridCellAttrProvider::wxGridCellAttrProvider()\nClass arguments details:\n");
		}


		return new wxGridCellAttrProvider();
	}


	// Function binds:
	// wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const function, expected prototype:\nwxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int, int, wxGridCellAttr::wxAttrKind) const");
		}
		wxGridCellAttr * lret = self->GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_SetAttr(lua_State *L) {
		if (!_lg_typecheck_SetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetAttr(wxGridCellAttr *, int, int)");
		}
		self->SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_SetRowAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr *, int)");
		}
		self->SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_SetColAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr *, int)");
		}
		self->SetColAttr(attr, col);

		return 0;
	}

	// const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col)
	static int _bind_GetColumnHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_GetColumnHeaderRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col) function, expected prototype:\nconst wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int)");
		}
		const wxGridColumnHeaderRenderer* lret = &self->GetColumnHeaderRenderer(col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridColumnHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row)
	static int _bind_GetRowHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_GetRowHeaderRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row) function, expected prototype:\nconst wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int)");
		}
		const wxGridRowHeaderRenderer* lret = &self->GetRowHeaderRenderer(row);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridRowHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()
	static int _bind_GetCornerRenderer(lua_State *L) {
		if (!_lg_typecheck_GetCornerRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer() function, expected prototype:\nconst wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()\nClass arguments details:\n");
		}


		wxGridCellAttrProvider* self=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()");
		}
		const wxGridCornerHeaderRenderer* lret = &self->GetCornerRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCornerHeaderRenderer >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGridCellAttrProvider* LunaTraits< wxGridCellAttrProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellAttrProvider::_bind_ctor(L);
}

void LunaTraits< wxGridCellAttrProvider >::_bind_dtor(wxGridCellAttrProvider* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellAttrProvider >::className[] = "wxGridCellAttrProvider";
const char LunaTraits< wxGridCellAttrProvider >::fullName[] = "wxGridCellAttrProvider";
const char LunaTraits< wxGridCellAttrProvider >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAttrProvider >::parents[] = {"wx.wxClientDataContainer", 0};
const int LunaTraits< wxGridCellAttrProvider >::hash = 87329435;
const int LunaTraits< wxGridCellAttrProvider >::uniqueIDs[] = {96494917,0};

luna_RegType LunaTraits< wxGridCellAttrProvider >::methods[] = {
	{"GetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_GetAttr},
	{"SetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetAttr},
	{"SetRowAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetRowAttr},
	{"SetColAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetColAttr},
	{"GetColumnHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetColumnHeaderRenderer},
	{"GetRowHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetRowHeaderRenderer},
	{"GetCornerRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetCornerRenderer},
	{"__eq", &luna_wrapper_wxGridCellAttrProvider::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAttrProvider >::converters[] = {
	{"wxClientDataContainer", &luna_wrapper_wxGridCellAttrProvider::_cast_from_wxClientDataContainer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAttrProvider >::enumValues[] = {
	{0,0}
};


