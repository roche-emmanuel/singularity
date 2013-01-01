#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSettableHeaderColumn.h>

class luna_wrapper_wxSettableHeaderColumn {
public:
	typedef Luna< wxSettableHeaderColumn > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,185523) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderColumn*)");
		}

		wxHeaderColumn* rhs =(Luna< wxHeaderColumn >::check(L,2));
		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHeaderColumn(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxSettableHeaderColumn* ptr= dynamic_cast< wxSettableHeaderColumn* >(Luna< wxHeaderColumn >::check(L,1));
		wxSettableHeaderColumn* ptr= luna_caster< wxHeaderColumn, wxSettableHeaderColumn >::cast(Luna< wxHeaderColumn >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSettableHeaderColumn >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeFlag(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetResizeable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSortable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReorderable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnsetAsSortKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSortOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleSortOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsResizeable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSortable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsReorderable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsHidden(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetResizeable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSortable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetReorderable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxSettableHeaderColumn::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetTitle(const wxString & title) function, expected prototype:\nvoid wxSettableHeaderColumn::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetTitle(const wxString &). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetTitle(title);

		return 0;
	}

	// void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxSettableHeaderColumn::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetBitmap(const wxBitmap &). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// void wxSettableHeaderColumn::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetWidth(int width) function, expected prototype:\nvoid wxSettableHeaderColumn::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetWidth(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetWidth(width);

		return 0;
	}

	// void wxSettableHeaderColumn::SetMinWidth(int minWidth)
	static int _bind_SetMinWidth(lua_State *L) {
		if (!_lg_typecheck_SetMinWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetMinWidth(int minWidth) function, expected prototype:\nvoid wxSettableHeaderColumn::SetMinWidth(int minWidth)\nClass arguments details:\n");
		}

		int minWidth=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetMinWidth(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetMinWidth(minWidth);

		return 0;
	}

	// void wxSettableHeaderColumn::SetAlignment(wxAlignment align)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetAlignment(wxAlignment align) function, expected prototype:\nvoid wxSettableHeaderColumn::SetAlignment(wxAlignment align)\nClass arguments details:\n");
		}

		wxAlignment align=(wxAlignment)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetAlignment(wxAlignment). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetAlignment(align);

		return 0;
	}

	// void wxSettableHeaderColumn::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetFlags(int flags) function, expected prototype:\nvoid wxSettableHeaderColumn::SetFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetFlags(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxSettableHeaderColumn::ChangeFlag(int flag, bool set)
	static int _bind_ChangeFlag(lua_State *L) {
		if (!_lg_typecheck_ChangeFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::ChangeFlag(int flag, bool set) function, expected prototype:\nvoid wxSettableHeaderColumn::ChangeFlag(int flag, bool set)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);
		bool set=(bool)(lua_toboolean(L,3)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::ChangeFlag(int, bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->ChangeFlag(flag, set);

		return 0;
	}

	// void wxSettableHeaderColumn::SetFlag(int flag)
	static int _bind_SetFlag(lua_State *L) {
		if (!_lg_typecheck_SetFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetFlag(int flag) function, expected prototype:\nvoid wxSettableHeaderColumn::SetFlag(int flag)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetFlag(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetFlag(flag);

		return 0;
	}

	// void wxSettableHeaderColumn::ClearFlag(int flag)
	static int _bind_ClearFlag(lua_State *L) {
		if (!_lg_typecheck_ClearFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::ClearFlag(int flag) function, expected prototype:\nvoid wxSettableHeaderColumn::ClearFlag(int flag)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::ClearFlag(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->ClearFlag(flag);

		return 0;
	}

	// void wxSettableHeaderColumn::ToggleFlag(int flag)
	static int _bind_ToggleFlag(lua_State *L) {
		if (!_lg_typecheck_ToggleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::ToggleFlag(int flag) function, expected prototype:\nvoid wxSettableHeaderColumn::ToggleFlag(int flag)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::ToggleFlag(int). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->ToggleFlag(flag);

		return 0;
	}

	// void wxSettableHeaderColumn::SetResizeable(bool resizable)
	static int _bind_SetResizeable(lua_State *L) {
		if (!_lg_typecheck_SetResizeable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetResizeable(bool resizable) function, expected prototype:\nvoid wxSettableHeaderColumn::SetResizeable(bool resizable)\nClass arguments details:\n");
		}

		bool resizable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetResizeable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetResizeable(resizable);

		return 0;
	}

	// void wxSettableHeaderColumn::SetSortable(bool sortable)
	static int _bind_SetSortable(lua_State *L) {
		if (!_lg_typecheck_SetSortable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetSortable(bool sortable) function, expected prototype:\nvoid wxSettableHeaderColumn::SetSortable(bool sortable)\nClass arguments details:\n");
		}

		bool sortable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetSortable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetSortable(sortable);

		return 0;
	}

	// void wxSettableHeaderColumn::SetReorderable(bool reorderable)
	static int _bind_SetReorderable(lua_State *L) {
		if (!_lg_typecheck_SetReorderable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetReorderable(bool reorderable) function, expected prototype:\nvoid wxSettableHeaderColumn::SetReorderable(bool reorderable)\nClass arguments details:\n");
		}

		bool reorderable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetReorderable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetReorderable(reorderable);

		return 0;
	}

	// void wxSettableHeaderColumn::SetHidden(bool hidden)
	static int _bind_SetHidden(lua_State *L) {
		if (!_lg_typecheck_SetHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetHidden(bool hidden) function, expected prototype:\nvoid wxSettableHeaderColumn::SetHidden(bool hidden)\nClass arguments details:\n");
		}

		bool hidden=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetHidden(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetHidden(hidden);

		return 0;
	}

	// void wxSettableHeaderColumn::UnsetAsSortKey()
	static int _bind_UnsetAsSortKey(lua_State *L) {
		if (!_lg_typecheck_UnsetAsSortKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::UnsetAsSortKey() function, expected prototype:\nvoid wxSettableHeaderColumn::UnsetAsSortKey()\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::UnsetAsSortKey(). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->UnsetAsSortKey();

		return 0;
	}

	// void wxSettableHeaderColumn::SetSortOrder(bool ascending)
	static int _bind_SetSortOrder(lua_State *L) {
		if (!_lg_typecheck_SetSortOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::SetSortOrder(bool ascending) function, expected prototype:\nvoid wxSettableHeaderColumn::SetSortOrder(bool ascending)\nClass arguments details:\n");
		}

		bool ascending=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::SetSortOrder(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->SetSortOrder(ascending);

		return 0;
	}

	// void wxSettableHeaderColumn::ToggleSortOrder()
	static int _bind_ToggleSortOrder(lua_State *L) {
		if (!_lg_typecheck_ToggleSortOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::ToggleSortOrder() function, expected prototype:\nvoid wxSettableHeaderColumn::ToggleSortOrder()\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::ToggleSortOrder(). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->ToggleSortOrder();

		return 0;
	}

	// bool wxSettableHeaderColumn::base_IsResizeable() const
	static int _bind_base_IsResizeable(lua_State *L) {
		if (!_lg_typecheck_base_IsResizeable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSettableHeaderColumn::base_IsResizeable() const function, expected prototype:\nbool wxSettableHeaderColumn::base_IsResizeable() const\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSettableHeaderColumn::base_IsResizeable() const. Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		bool lret = self->wxSettableHeaderColumn::IsResizeable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSettableHeaderColumn::base_IsSortable() const
	static int _bind_base_IsSortable(lua_State *L) {
		if (!_lg_typecheck_base_IsSortable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSettableHeaderColumn::base_IsSortable() const function, expected prototype:\nbool wxSettableHeaderColumn::base_IsSortable() const\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSettableHeaderColumn::base_IsSortable() const. Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		bool lret = self->wxSettableHeaderColumn::IsSortable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSettableHeaderColumn::base_IsReorderable() const
	static int _bind_base_IsReorderable(lua_State *L) {
		if (!_lg_typecheck_base_IsReorderable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSettableHeaderColumn::base_IsReorderable() const function, expected prototype:\nbool wxSettableHeaderColumn::base_IsReorderable() const\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSettableHeaderColumn::base_IsReorderable() const. Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		bool lret = self->wxSettableHeaderColumn::IsReorderable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSettableHeaderColumn::base_IsHidden() const
	static int _bind_base_IsHidden(lua_State *L) {
		if (!_lg_typecheck_base_IsHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSettableHeaderColumn::base_IsHidden() const function, expected prototype:\nbool wxSettableHeaderColumn::base_IsHidden() const\nClass arguments details:\n");
		}


		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSettableHeaderColumn::base_IsHidden() const. Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		bool lret = self->wxSettableHeaderColumn::IsHidden();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSettableHeaderColumn::base_SetResizeable(bool resizable)
	static int _bind_base_SetResizeable(lua_State *L) {
		if (!_lg_typecheck_base_SetResizeable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::base_SetResizeable(bool resizable) function, expected prototype:\nvoid wxSettableHeaderColumn::base_SetResizeable(bool resizable)\nClass arguments details:\n");
		}

		bool resizable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::base_SetResizeable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->wxSettableHeaderColumn::SetResizeable(resizable);

		return 0;
	}

	// void wxSettableHeaderColumn::base_SetSortable(bool sortable)
	static int _bind_base_SetSortable(lua_State *L) {
		if (!_lg_typecheck_base_SetSortable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::base_SetSortable(bool sortable) function, expected prototype:\nvoid wxSettableHeaderColumn::base_SetSortable(bool sortable)\nClass arguments details:\n");
		}

		bool sortable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::base_SetSortable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->wxSettableHeaderColumn::SetSortable(sortable);

		return 0;
	}

	// void wxSettableHeaderColumn::base_SetReorderable(bool reorderable)
	static int _bind_base_SetReorderable(lua_State *L) {
		if (!_lg_typecheck_base_SetReorderable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::base_SetReorderable(bool reorderable) function, expected prototype:\nvoid wxSettableHeaderColumn::base_SetReorderable(bool reorderable)\nClass arguments details:\n");
		}

		bool reorderable=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::base_SetReorderable(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->wxSettableHeaderColumn::SetReorderable(reorderable);

		return 0;
	}

	// void wxSettableHeaderColumn::base_SetHidden(bool hidden)
	static int _bind_base_SetHidden(lua_State *L) {
		if (!_lg_typecheck_base_SetHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSettableHeaderColumn::base_SetHidden(bool hidden) function, expected prototype:\nvoid wxSettableHeaderColumn::base_SetHidden(bool hidden)\nClass arguments details:\n");
		}

		bool hidden=(bool)(lua_toboolean(L,2)==1);

		wxSettableHeaderColumn* self=Luna< wxHeaderColumn >::checkSubType< wxSettableHeaderColumn >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSettableHeaderColumn::base_SetHidden(bool). Got : '%s'",typeid(Luna< wxHeaderColumn >::check(L,1)).name());
		}
		self->wxSettableHeaderColumn::SetHidden(hidden);

		return 0;
	}


	// Operator binds:

};

wxSettableHeaderColumn* LunaTraits< wxSettableHeaderColumn >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxSettableHeaderColumn::SetTitle(const wxString & title)
	// void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)
	// void wxSettableHeaderColumn::SetWidth(int width)
	// void wxSettableHeaderColumn::SetMinWidth(int minWidth)
	// void wxSettableHeaderColumn::SetAlignment(wxAlignment align)
	// void wxSettableHeaderColumn::SetFlags(int flags)
	// void wxSettableHeaderColumn::SetSortOrder(bool ascending)
	// wxString wxHeaderColumn::GetTitle() const
	// wxBitmap wxHeaderColumn::GetBitmap() const
	// int wxHeaderColumn::GetWidth() const
	// int wxHeaderColumn::GetMinWidth() const
	// wxAlignment wxHeaderColumn::GetAlignment() const
	// int wxHeaderColumn::GetFlags() const
	// bool wxHeaderColumn::IsSortKey() const
	// bool wxHeaderColumn::IsSortOrderAscending() const
}

void LunaTraits< wxSettableHeaderColumn >::_bind_dtor(wxSettableHeaderColumn* obj) {
	delete obj;
}

const char LunaTraits< wxSettableHeaderColumn >::className[] = "wxSettableHeaderColumn";
const char LunaTraits< wxSettableHeaderColumn >::fullName[] = "wxSettableHeaderColumn";
const char LunaTraits< wxSettableHeaderColumn >::moduleName[] = "wx";
const char* LunaTraits< wxSettableHeaderColumn >::parents[] = {"wx.wxHeaderColumn", 0};
const int LunaTraits< wxSettableHeaderColumn >::hash = 76898647;
const int LunaTraits< wxSettableHeaderColumn >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxSettableHeaderColumn >::methods[] = {
	{"SetTitle", &luna_wrapper_wxSettableHeaderColumn::_bind_SetTitle},
	{"SetBitmap", &luna_wrapper_wxSettableHeaderColumn::_bind_SetBitmap},
	{"SetWidth", &luna_wrapper_wxSettableHeaderColumn::_bind_SetWidth},
	{"SetMinWidth", &luna_wrapper_wxSettableHeaderColumn::_bind_SetMinWidth},
	{"SetAlignment", &luna_wrapper_wxSettableHeaderColumn::_bind_SetAlignment},
	{"SetFlags", &luna_wrapper_wxSettableHeaderColumn::_bind_SetFlags},
	{"ChangeFlag", &luna_wrapper_wxSettableHeaderColumn::_bind_ChangeFlag},
	{"SetFlag", &luna_wrapper_wxSettableHeaderColumn::_bind_SetFlag},
	{"ClearFlag", &luna_wrapper_wxSettableHeaderColumn::_bind_ClearFlag},
	{"ToggleFlag", &luna_wrapper_wxSettableHeaderColumn::_bind_ToggleFlag},
	{"SetResizeable", &luna_wrapper_wxSettableHeaderColumn::_bind_SetResizeable},
	{"SetSortable", &luna_wrapper_wxSettableHeaderColumn::_bind_SetSortable},
	{"SetReorderable", &luna_wrapper_wxSettableHeaderColumn::_bind_SetReorderable},
	{"SetHidden", &luna_wrapper_wxSettableHeaderColumn::_bind_SetHidden},
	{"UnsetAsSortKey", &luna_wrapper_wxSettableHeaderColumn::_bind_UnsetAsSortKey},
	{"SetSortOrder", &luna_wrapper_wxSettableHeaderColumn::_bind_SetSortOrder},
	{"ToggleSortOrder", &luna_wrapper_wxSettableHeaderColumn::_bind_ToggleSortOrder},
	{"base_IsResizeable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_IsResizeable},
	{"base_IsSortable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_IsSortable},
	{"base_IsReorderable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_IsReorderable},
	{"base_IsHidden", &luna_wrapper_wxSettableHeaderColumn::_bind_base_IsHidden},
	{"base_SetResizeable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_SetResizeable},
	{"base_SetSortable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_SetSortable},
	{"base_SetReorderable", &luna_wrapper_wxSettableHeaderColumn::_bind_base_SetReorderable},
	{"base_SetHidden", &luna_wrapper_wxSettableHeaderColumn::_bind_base_SetHidden},
	{"__eq", &luna_wrapper_wxSettableHeaderColumn::_bind___eq},
	{"getTable", &luna_wrapper_wxSettableHeaderColumn::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSettableHeaderColumn >::converters[] = {
	{"wxHeaderColumn", &luna_wrapper_wxSettableHeaderColumn::_cast_from_wxHeaderColumn},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSettableHeaderColumn >::enumValues[] = {
	{0,0}
};


