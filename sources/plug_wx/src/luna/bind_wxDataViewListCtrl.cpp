#include <plug_common.h>

class luna_wrapper_wxDataViewListCtrl {
public:
	typedef Luna< wxDataViewListCtrl > luna_t;

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
		wxDataViewListCtrl* ptr= dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStore_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStore_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ItemToRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RowToItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnselectRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsRowSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendToggleColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendProgressColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendIconTextColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTextValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToggleValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToggleValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewListCtrl::wxDataViewListCtrl()
	static wxDataViewListCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewListCtrl::wxDataViewListCtrl() function, expected prototype:\nwxDataViewListCtrl::wxDataViewListCtrl()\nClass arguments details:\n");
		}


		return new wxDataViewListCtrl();
	}

	// wxDataViewListCtrl::wxDataViewListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)
	static wxDataViewListCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewListCtrl::wxDataViewListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nwxDataViewListCtrl::wxDataViewListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0x0010;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;

		return new wxDataViewListCtrl(parent, id, pos, size, style, validator);
	}

	// Overload binder for wxDataViewListCtrl::wxDataViewListCtrl
	static wxDataViewListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewListCtrl, cannot match any of the overloads for function wxDataViewListCtrl:\n  wxDataViewListCtrl()\n  wxDataViewListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDataViewListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nbool wxDataViewListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewListCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0x0010;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewListStore * wxDataViewListCtrl::GetStore()
	static int _bind_GetStore_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewListStore * wxDataViewListCtrl::GetStore() function, expected prototype:\nwxDataViewListStore * wxDataViewListCtrl::GetStore()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewListStore * wxDataViewListCtrl::GetStore()");
		}
		wxDataViewListStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewListStore >::push(L,lret,false);

		return 1;
	}

	// const wxDataViewListStore * wxDataViewListCtrl::GetStore() const
	static int _bind_GetStore_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataViewListStore * wxDataViewListCtrl::GetStore() const function, expected prototype:\nconst wxDataViewListStore * wxDataViewListCtrl::GetStore() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataViewListStore * wxDataViewListCtrl::GetStore() const");
		}
		const wxDataViewListStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewListStore >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewListCtrl::GetStore
	static int _bind_GetStore(lua_State *L) {
		if (_lg_typecheck_GetStore_overload_1(L)) return _bind_GetStore_overload_1(L);
		if (_lg_typecheck_GetStore_overload_2(L)) return _bind_GetStore_overload_2(L);

		luaL_error(L, "error in function GetStore, cannot match any of the overloads for function GetStore:\n  GetStore()\n  GetStore()\n");
		return 0;
	}

	// int wxDataViewListCtrl::ItemToRow(const wxDataViewItem & item) const
	static int _bind_ItemToRow(lua_State *L) {
		if (!_lg_typecheck_ItemToRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::ItemToRow(const wxDataViewItem & item) const function, expected prototype:\nint wxDataViewListCtrl::ItemToRow(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::ItemToRow function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::ItemToRow(const wxDataViewItem &) const");
		}
		int lret = self->ItemToRow(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewListCtrl::RowToItem(int row) const
	static int _bind_RowToItem(lua_State *L) {
		if (!_lg_typecheck_RowToItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewListCtrl::RowToItem(int row) const function, expected prototype:\nwxDataViewItem wxDataViewListCtrl::RowToItem(int row) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewListCtrl::RowToItem(int) const");
		}
		wxDataViewItem stack_lret = self->RowToItem(row);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewListCtrl::GetSelectedRow() const
	static int _bind_GetSelectedRow(lua_State *L) {
		if (!_lg_typecheck_GetSelectedRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::GetSelectedRow() const function, expected prototype:\nint wxDataViewListCtrl::GetSelectedRow() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::GetSelectedRow() const");
		}
		int lret = self->GetSelectedRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewListCtrl::SelectRow(unsigned int row)
	static int _bind_SelectRow(lua_State *L) {
		if (!_lg_typecheck_SelectRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::SelectRow(unsigned int row) function, expected prototype:\nvoid wxDataViewListCtrl::SelectRow(unsigned int row)\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::SelectRow(unsigned int)");
		}
		self->SelectRow(row);

		return 0;
	}

	// void wxDataViewListCtrl::UnselectRow(unsigned int row)
	static int _bind_UnselectRow(lua_State *L) {
		if (!_lg_typecheck_UnselectRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::UnselectRow(unsigned int row) function, expected prototype:\nvoid wxDataViewListCtrl::UnselectRow(unsigned int row)\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::UnselectRow(unsigned int)");
		}
		self->UnselectRow(row);

		return 0;
	}

	// bool wxDataViewListCtrl::IsRowSelected(unsigned int row) const
	static int _bind_IsRowSelected(lua_State *L) {
		if (!_lg_typecheck_IsRowSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::IsRowSelected(unsigned int row) const function, expected prototype:\nbool wxDataViewListCtrl::IsRowSelected(unsigned int row) const\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::IsRowSelected(unsigned int) const");
		}
		bool lret = self->IsRowSelected(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column)
	static int _bind_AppendColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column) function, expected prototype:\nvoid wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::AppendColumn(wxDataViewColumn *)");
		}
		self->AppendColumn(column);

		return 0;
	}

	// void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_AppendColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 1 ID = 185523\narg 2 ID = 88196105\n");
		}

		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::AppendColumn(wxDataViewColumn *, const wxString &)");
		}
		self->AppendColumn(column, varianttype);

		return 0;
	}

	// Overload binder for wxDataViewListCtrl::AppendColumn
	static int _bind_AppendColumn(lua_State *L) {
		if (_lg_typecheck_AppendColumn_overload_1(L)) return _bind_AppendColumn_overload_1(L);
		if (_lg_typecheck_AppendColumn_overload_2(L)) return _bind_AppendColumn_overload_2(L);

		luaL_error(L, "error in function AppendColumn, cannot match any of the overloads for function AppendColumn:\n  AppendColumn(wxDataViewColumn *)\n  AppendColumn(wxDataViewColumn *, const wxString &)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_LEFT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column)
	static int _bind_InsertColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column) function, expected prototype:\nvoid wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column)\nClass arguments details:\narg 2 ID = 185523\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,3));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::InsertColumn(unsigned int, wxDataViewColumn *)");
		}
		self->InsertColumn(pos, column);

		return 0;
	}

	// void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_InsertColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 2 ID = 185523\narg 3 ID = 88196105\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,3));
		wxString varianttype(lua_tostring(L,4),lua_objlen(L,4));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::InsertColumn(unsigned int, wxDataViewColumn *, const wxString &)");
		}
		self->InsertColumn(pos, column, varianttype);

		return 0;
	}

	// Overload binder for wxDataViewListCtrl::InsertColumn
	static int _bind_InsertColumn(lua_State *L) {
		if (_lg_typecheck_InsertColumn_overload_1(L)) return _bind_InsertColumn_overload_1(L);
		if (_lg_typecheck_InsertColumn_overload_2(L)) return _bind_InsertColumn_overload_2(L);

		luaL_error(L, "error in function InsertColumn, cannot match any of the overloads for function InsertColumn:\n  InsertColumn(unsigned int, wxDataViewColumn *)\n  InsertColumn(unsigned int, wxDataViewColumn *, const wxString &)\n");
		return 0;
	}

	// void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column)
	static int _bind_PrependColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_PrependColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column) function, expected prototype:\nvoid wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::PrependColumn(wxDataViewColumn *)");
		}
		self->PrependColumn(column);

		return 0;
	}

	// void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_PrependColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_PrependColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 1 ID = 185523\narg 2 ID = 88196105\n");
		}

		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::PrependColumn(wxDataViewColumn *, const wxString &)");
		}
		self->PrependColumn(column, varianttype);

		return 0;
	}

	// Overload binder for wxDataViewListCtrl::PrependColumn
	static int _bind_PrependColumn(lua_State *L) {
		if (_lg_typecheck_PrependColumn_overload_1(L)) return _bind_PrependColumn_overload_1(L);
		if (_lg_typecheck_PrependColumn_overload_2(L)) return _bind_PrependColumn_overload_2(L);

		luaL_error(L, "error in function PrependColumn, cannot match any of the overloads for function PrependColumn:\n  PrependColumn(wxDataViewColumn *)\n  PrependColumn(wxDataViewColumn *, const wxString &)\n");
		return 0;
	}

	// void wxDataViewListCtrl::DeleteItem(unsigned int row)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::DeleteItem(unsigned int row) function, expected prototype:\nvoid wxDataViewListCtrl::DeleteItem(unsigned int row)\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::DeleteItem(unsigned int)");
		}
		self->DeleteItem(row);

		return 0;
	}

	// void wxDataViewListCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::DeleteAllItems() function, expected prototype:\nvoid wxDataViewListCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxDataViewListCtrl::SetTextValue(const wxString & value, unsigned int row, unsigned int col)
	static int _bind_SetTextValue(lua_State *L) {
		if (!_lg_typecheck_SetTextValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::SetTextValue(const wxString & value, unsigned int row, unsigned int col) function, expected prototype:\nvoid wxDataViewListCtrl::SetTextValue(const wxString & value, unsigned int row, unsigned int col)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int row=(unsigned int)lua_tointeger(L,3);
		unsigned int col=(unsigned int)lua_tointeger(L,4);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::SetTextValue(const wxString &, unsigned int, unsigned int)");
		}
		self->SetTextValue(value, row, col);

		return 0;
	}

	// wxString wxDataViewListCtrl::GetTextValue(unsigned int row, unsigned int col) const
	static int _bind_GetTextValue(lua_State *L) {
		if (!_lg_typecheck_GetTextValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListCtrl::GetTextValue(unsigned int row, unsigned int col) const function, expected prototype:\nwxString wxDataViewListCtrl::GetTextValue(unsigned int row, unsigned int col) const\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewListCtrl::GetTextValue(unsigned int, unsigned int) const");
		}
		wxString lret = self->GetTextValue(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewListCtrl::SetToggleValue(bool value, unsigned int row, unsigned int col)
	static int _bind_SetToggleValue(lua_State *L) {
		if (!_lg_typecheck_SetToggleValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::SetToggleValue(bool value, unsigned int row, unsigned int col) function, expected prototype:\nvoid wxDataViewListCtrl::SetToggleValue(bool value, unsigned int row, unsigned int col)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);
		unsigned int row=(unsigned int)lua_tointeger(L,3);
		unsigned int col=(unsigned int)lua_tointeger(L,4);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::SetToggleValue(bool, unsigned int, unsigned int)");
		}
		self->SetToggleValue(value, row, col);

		return 0;
	}

	// bool wxDataViewListCtrl::GetToggleValue(unsigned int row, unsigned int col) const
	static int _bind_GetToggleValue(lua_State *L) {
		if (!_lg_typecheck_GetToggleValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::GetToggleValue(unsigned int row, unsigned int col) const function, expected prototype:\nbool wxDataViewListCtrl::GetToggleValue(unsigned int row, unsigned int col) const\nClass arguments details:\n");
		}

		unsigned int row=(unsigned int)lua_tointeger(L,2);
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewListCtrl* self=dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::GetToggleValue(unsigned int, unsigned int) const");
		}
		bool lret = self->GetToggleValue(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewListCtrl* LunaTraits< wxDataViewListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewListCtrl::_bind_ctor(L);
}

void LunaTraits< wxDataViewListCtrl >::_bind_dtor(wxDataViewListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewListCtrl >::className[] = "wxDataViewListCtrl";
const char LunaTraits< wxDataViewListCtrl >::fullName[] = "wxDataViewListCtrl";
const char LunaTraits< wxDataViewListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewListCtrl >::parents[] = {"wx.wxDataViewCtrl", 0};
const int LunaTraits< wxDataViewListCtrl >::hash = 94260292;
const int LunaTraits< wxDataViewListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDataViewListCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxDataViewListCtrl::_bind_Create},
	{"GetStore", &luna_wrapper_wxDataViewListCtrl::_bind_GetStore},
	{"ItemToRow", &luna_wrapper_wxDataViewListCtrl::_bind_ItemToRow},
	{"RowToItem", &luna_wrapper_wxDataViewListCtrl::_bind_RowToItem},
	{"GetSelectedRow", &luna_wrapper_wxDataViewListCtrl::_bind_GetSelectedRow},
	{"SelectRow", &luna_wrapper_wxDataViewListCtrl::_bind_SelectRow},
	{"UnselectRow", &luna_wrapper_wxDataViewListCtrl::_bind_UnselectRow},
	{"IsRowSelected", &luna_wrapper_wxDataViewListCtrl::_bind_IsRowSelected},
	{"AppendColumn", &luna_wrapper_wxDataViewListCtrl::_bind_AppendColumn},
	{"AppendTextColumn", &luna_wrapper_wxDataViewListCtrl::_bind_AppendTextColumn},
	{"AppendToggleColumn", &luna_wrapper_wxDataViewListCtrl::_bind_AppendToggleColumn},
	{"AppendProgressColumn", &luna_wrapper_wxDataViewListCtrl::_bind_AppendProgressColumn},
	{"AppendIconTextColumn", &luna_wrapper_wxDataViewListCtrl::_bind_AppendIconTextColumn},
	{"InsertColumn", &luna_wrapper_wxDataViewListCtrl::_bind_InsertColumn},
	{"PrependColumn", &luna_wrapper_wxDataViewListCtrl::_bind_PrependColumn},
	{"DeleteItem", &luna_wrapper_wxDataViewListCtrl::_bind_DeleteItem},
	{"DeleteAllItems", &luna_wrapper_wxDataViewListCtrl::_bind_DeleteAllItems},
	{"SetTextValue", &luna_wrapper_wxDataViewListCtrl::_bind_SetTextValue},
	{"GetTextValue", &luna_wrapper_wxDataViewListCtrl::_bind_GetTextValue},
	{"SetToggleValue", &luna_wrapper_wxDataViewListCtrl::_bind_SetToggleValue},
	{"GetToggleValue", &luna_wrapper_wxDataViewListCtrl::_bind_GetToggleValue},
	{"__eq", &luna_wrapper_wxDataViewListCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListCtrl >::enumValues[] = {
	{0,0}
};


