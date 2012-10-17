#include <plug_common.h>

class luna_wrapper_wxDataViewTreeStore {
public:
	typedef Luna< wxDataViewTreeStore > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66533182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewModel*)");
		}

		wxDataViewModel* rhs =(Luna< wxDataViewModel >::check(L,2));
		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewTreeStore* ptr= dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTreeStore >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AppendContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNthChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_AppendContainer(lua_State *L) {
		if (!_lg_typecheck_AppendContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::AppendContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::AppendContainer function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : wxNullIcon;
		const wxIcon* expanded_ptr=luatop>4 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::AppendContainer function");
		}
		const wxIcon & expanded=luatop>4 ? *expanded_ptr : wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::AppendItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::AppendItem function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : wxNullIcon;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeStore::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteAllItems() function, expected prototype:\nvoid wxDataViewTreeStore::DeleteAllItems()\nClass arguments details:\n");
		}


		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::DeleteChildren function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem &)");
		}
		self->DeleteChildren(item);

		return 0;
	}

	// void wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::DeleteItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteItem(const wxDataViewItem &)");
		}
		self->DeleteItem(item);

		return 0;
	}

	// int wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const function, expected prototype:\nint wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::GetChildCount function");
		}
		const wxDataViewItem & parent=*parent_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeStore::GetChildCount(const wxDataViewItem &) const");
		}
		int lret = self->GetChildCount(parent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const function, expected prototype:\nwxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem &) const");
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const
	static int _bind_GetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemExpandedIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const
	static int _bind_GetItemIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const function, expected prototype:\nwxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem &) const");
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const
	static int _bind_GetNthChild(lua_State *L) {
		if (!_lg_typecheck_GetNthChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::GetNthChild function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem &, unsigned int) const");
		}
		wxDataViewItem stack_lret = self->GetNthChild(parent, pos);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_InsertContainer(lua_State *L) {
		if (!_lg_typecheck_InsertContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::InsertContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeStore::InsertContainer function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		const wxIcon* icon_ptr=luatop>4 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::InsertContainer function");
		}
		const wxIcon & icon=luatop>4 ? *icon_ptr : wxNullIcon;
		const wxIcon* expanded_ptr=luatop>5 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::InsertContainer function");
		}
		const wxIcon & expanded=luatop>5 ? *expanded_ptr : wxNullIcon;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem &, const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertContainer(parent, previous, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::InsertItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeStore::InsertItem function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		const wxIcon* icon_ptr=luatop>4 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::InsertItem function");
		}
		const wxIcon & icon=luatop>4 ? *icon_ptr : wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem &, const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertItem(parent, previous, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_PrependContainer(lua_State *L) {
		if (!_lg_typecheck_PrependContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::PrependContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::PrependContainer function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : wxNullIcon;
		const wxIcon* expanded_ptr=luatop>4 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::PrependContainer function");
		}
		const wxIcon & expanded=luatop>4 ? *expanded_ptr : wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::PrependItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::PrependItem function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : wxNullIcon;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 50457573\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemData(const wxDataViewItem &, wxClientData *)");
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::SetItemExpandedIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemExpandedIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::SetItemIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeStore* self=dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemIcon(item, icon);

		return 0;
	}


	// Operator binds:

};

wxDataViewTreeStore* LunaTraits< wxDataViewTreeStore >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// unsigned int wxDataViewModel::GetColumnCount() const
	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)

	// Abstract operators:
}

void LunaTraits< wxDataViewTreeStore >::_bind_dtor(wxDataViewTreeStore* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTreeStore >::className[] = "wxDataViewTreeStore";
const char LunaTraits< wxDataViewTreeStore >::fullName[] = "wxDataViewTreeStore";
const char LunaTraits< wxDataViewTreeStore >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTreeStore >::parents[] = {"wx.wxDataViewModel", 0};
const int LunaTraits< wxDataViewTreeStore >::hash = 23040251;
const int LunaTraits< wxDataViewTreeStore >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewTreeStore >::methods[] = {
	{"AppendContainer", &luna_wrapper_wxDataViewTreeStore::_bind_AppendContainer},
	{"AppendItem", &luna_wrapper_wxDataViewTreeStore::_bind_AppendItem},
	{"DeleteAllItems", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteChildren},
	{"DeleteItem", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteItem},
	{"GetChildCount", &luna_wrapper_wxDataViewTreeStore::_bind_GetChildCount},
	{"GetItemData", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemData},
	{"GetItemExpandedIcon", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemExpandedIcon},
	{"GetItemIcon", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemIcon},
	{"GetItemText", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemText},
	{"GetNthChild", &luna_wrapper_wxDataViewTreeStore::_bind_GetNthChild},
	{"InsertContainer", &luna_wrapper_wxDataViewTreeStore::_bind_InsertContainer},
	{"InsertItem", &luna_wrapper_wxDataViewTreeStore::_bind_InsertItem},
	{"PrependContainer", &luna_wrapper_wxDataViewTreeStore::_bind_PrependContainer},
	{"PrependItem", &luna_wrapper_wxDataViewTreeStore::_bind_PrependItem},
	{"SetItemData", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemData},
	{"SetItemExpandedIcon", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemExpandedIcon},
	{"SetItemIcon", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemIcon},
	{"__eq", &luna_wrapper_wxDataViewTreeStore::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTreeStore >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewTreeStore::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTreeStore >::enumValues[] = {
	{0,0}
};


