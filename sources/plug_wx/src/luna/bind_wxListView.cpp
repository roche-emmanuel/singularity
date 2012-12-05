#include <plug_common.h>

#include <luna/wrappers/wrapper_wxListView.h>

class luna_wrapper_wxListView {
public:
	typedef Luna< wxListView > luna_t;

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
		wxListView* ptr= dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListView >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_ClearColumnImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Focus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstSelected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxListView::ClearColumnImage(int col)
	static int _bind_ClearColumnImage(lua_State *L) {
		if (!_lg_typecheck_ClearColumnImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListView::ClearColumnImage(int col) function, expected prototype:\nvoid wxListView::ClearColumnImage(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListView::ClearColumnImage(int)");
		}
		self->ClearColumnImage(col);

		return 0;
	}

	// void wxListView::Focus(long index)
	static int _bind_Focus(lua_State *L) {
		if (!_lg_typecheck_Focus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListView::Focus(long index) function, expected prototype:\nvoid wxListView::Focus(long index)\nClass arguments details:\n");
		}

		long index=(long)lua_tointeger(L,2);

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListView::Focus(long)");
		}
		self->Focus(index);

		return 0;
	}

	// long wxListView::GetFirstSelected() const
	static int _bind_GetFirstSelected(lua_State *L) {
		if (!_lg_typecheck_GetFirstSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListView::GetFirstSelected() const function, expected prototype:\nlong wxListView::GetFirstSelected() const\nClass arguments details:\n");
		}


		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListView::GetFirstSelected() const");
		}
		long lret = self->GetFirstSelected();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListView::GetFocusedItem() const
	static int _bind_GetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_GetFocusedItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListView::GetFocusedItem() const function, expected prototype:\nlong wxListView::GetFocusedItem() const\nClass arguments details:\n");
		}


		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListView::GetFocusedItem() const");
		}
		long lret = self->GetFocusedItem();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListView::GetNextSelected(long item) const
	static int _bind_GetNextSelected(lua_State *L) {
		if (!_lg_typecheck_GetNextSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListView::GetNextSelected(long item) const function, expected prototype:\nlong wxListView::GetNextSelected(long item) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListView::GetNextSelected(long) const");
		}
		long lret = self->GetNextSelected(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListView::IsSelected(long index) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListView::IsSelected(long index) const function, expected prototype:\nbool wxListView::IsSelected(long index) const\nClass arguments details:\n");
		}

		long index=(long)lua_tointeger(L,2);

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListView::IsSelected(long) const");
		}
		bool lret = self->IsSelected(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListView::Select(long n, bool on = true)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListView::Select(long n, bool on = true) function, expected prototype:\nvoid wxListView::Select(long n, bool on = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long n=(long)lua_tointeger(L,2);
		bool on=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListView::Select(long, bool)");
		}
		self->Select(n, on);

		return 0;
	}

	// void wxListView::SetColumnImage(int col, int image)
	static int _bind_SetColumnImage(lua_State *L) {
		if (!_lg_typecheck_SetColumnImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListView::SetColumnImage(int col, int image) function, expected prototype:\nvoid wxListView::SetColumnImage(int col, int image)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);

		wxListView* self=dynamic_cast< wxListView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListView::SetColumnImage(int, int)");
		}
		self->SetColumnImage(col, image);

		return 0;
	}


	// Operator binds:

};

wxListView* LunaTraits< wxListView >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxListView >::_bind_dtor(wxListView* obj) {
	delete obj;
}

const char LunaTraits< wxListView >::className[] = "wxListView";
const char LunaTraits< wxListView >::fullName[] = "wxListView";
const char LunaTraits< wxListView >::moduleName[] = "wx";
const char* LunaTraits< wxListView >::parents[] = {"wx.wxListCtrl", 0};
const int LunaTraits< wxListView >::hash = 43704367;
const int LunaTraits< wxListView >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxListView >::methods[] = {
	{"ClearColumnImage", &luna_wrapper_wxListView::_bind_ClearColumnImage},
	{"Focus", &luna_wrapper_wxListView::_bind_Focus},
	{"GetFirstSelected", &luna_wrapper_wxListView::_bind_GetFirstSelected},
	{"GetFocusedItem", &luna_wrapper_wxListView::_bind_GetFocusedItem},
	{"GetNextSelected", &luna_wrapper_wxListView::_bind_GetNextSelected},
	{"IsSelected", &luna_wrapper_wxListView::_bind_IsSelected},
	{"Select", &luna_wrapper_wxListView::_bind_Select},
	{"SetColumnImage", &luna_wrapper_wxListView::_bind_SetColumnImage},
	{"__eq", &luna_wrapper_wxListView::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxListView >::converters[] = {
	{"wxObject", &luna_wrapper_wxListView::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListView >::enumValues[] = {
	{0,0}
};


