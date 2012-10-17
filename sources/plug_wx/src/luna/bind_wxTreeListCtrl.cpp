#include <plug_common.h>

class luna_wrapper_wxTreeListCtrl {
public:
	typedef Luna< wxTreeListCtrl > luna_t;

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
		wxTreeListCtrl* ptr= dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeListCtrl >::push(L,ptr,false);
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
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
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
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WidthFor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,75268455) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRootItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CheckItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckItemRecursively(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UncheckItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateItemParentStateRecursively(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckedState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreAllChildrenInState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSortColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemComparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,87583976)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeListCtrl::wxTreeListCtrl()
	static wxTreeListCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl() function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl()\nClass arguments details:\n");
		}


		return new wxTreeListCtrl();
	}

	// wxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)
	static wxTreeListCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr) function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxTL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxTreeListCtrl(parent, id, pos, size, style, name);
	}

	// Overload binder for wxTreeListCtrl::wxTreeListCtrl
	static wxTreeListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTreeListCtrl, cannot match any of the overloads for function wxTreeListCtrl:\n  wxTreeListCtrl()\n  wxTreeListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr) function, expected prototype:\nbool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeListCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxTL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeListCtrl::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::AssignImageList(wxImageList *)");
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxTreeListCtrl::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeListCtrl::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetImageList(wxImageList *)");
		}
		self->SetImageList(imageList);

		return 0;
	}

	// int wxTreeListCtrl::AppendColumn(const wxString & title, int width = wxCOL_WIDTH_AUTOSIZE, wxAlignment align = wxALIGN_LEFT, int flags = wxCOL_RESIZABLE)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::AppendColumn(const wxString & title, int width = wxCOL_WIDTH_AUTOSIZE, wxAlignment align = wxALIGN_LEFT, int flags = wxCOL_RESIZABLE) function, expected prototype:\nint wxTreeListCtrl::AppendColumn(const wxString & title, int width = wxCOL_WIDTH_AUTOSIZE, wxAlignment align = wxALIGN_LEFT, int flags = wxCOL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		int width=luatop>2 ? (int)lua_tointeger(L,3) : wxCOL_WIDTH_AUTOSIZE;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : wxALIGN_LEFT;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : wxCOL_RESIZABLE;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::AppendColumn(const wxString &, int, wxAlignment, int)");
		}
		int lret = self->AppendColumn(title, width, align, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned wxTreeListCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned wxTreeListCtrl::GetColumnCount() const function, expected prototype:\nunsigned wxTreeListCtrl::GetColumnCount() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned wxTreeListCtrl::GetColumnCount() const");
		}
		unsigned lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeListCtrl::DeleteColumn(unsigned col)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::DeleteColumn(unsigned col) function, expected prototype:\nbool wxTreeListCtrl::DeleteColumn(unsigned col)\nClass arguments details:\n");
		}

		unsigned col=(unsigned)lua_tointeger(L,2);

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::DeleteColumn(unsigned)");
		}
		bool lret = self->DeleteColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::ClearColumns()
	static int _bind_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_ClearColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::ClearColumns() function, expected prototype:\nvoid wxTreeListCtrl::ClearColumns()\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::ClearColumns()");
		}
		self->ClearColumns();

		return 0;
	}

	// void wxTreeListCtrl::SetColumnWidth(unsigned col, int width)
	static int _bind_SetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_SetColumnWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetColumnWidth(unsigned col, int width) function, expected prototype:\nvoid wxTreeListCtrl::SetColumnWidth(unsigned col, int width)\nClass arguments details:\n");
		}

		unsigned col=(unsigned)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetColumnWidth(unsigned, int)");
		}
		self->SetColumnWidth(col, width);

		return 0;
	}

	// int wxTreeListCtrl::GetColumnWidth(unsigned col) const
	static int _bind_GetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_GetColumnWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::GetColumnWidth(unsigned col) const function, expected prototype:\nint wxTreeListCtrl::GetColumnWidth(unsigned col) const\nClass arguments details:\n");
		}

		unsigned col=(unsigned)lua_tointeger(L,2);

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::GetColumnWidth(unsigned) const");
		}
		int lret = self->GetColumnWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::WidthFor(const wxString & text) const
	static int _bind_WidthFor(lua_State *L) {
		if (!_lg_typecheck_WidthFor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::WidthFor(const wxString & text) const function, expected prototype:\nint wxTreeListCtrl::WidthFor(const wxString & text) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::WidthFor(const wxString &) const");
		}
		int lret = self->WidthFor(text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::AppendItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int imageClosed=luatop>3 ? (int)lua_tointeger(L,4) : wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>4 ? (int)lua_tointeger(L,5) : wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem, const wxString &, int, int, wxClientData *)");
		}
		wxTreeListItem stack_lret = self->AppendItem(parent, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 75268455\narg 3 ID = 88196105\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::InsertItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxTreeListItem* previous_ptr=(Luna< wxTreeListItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxTreeListCtrl::InsertItem function");
		}
		wxTreeListItem previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int imageClosed=luatop>4 ? (int)lua_tointeger(L,5) : wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>5 ? (int)lua_tointeger(L,6) : wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem, wxTreeListItem, const wxString &, int, int, wxClientData *)");
		}
		wxTreeListItem stack_lret = self->InsertItem(parent, previous, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::PrependItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int imageClosed=luatop>3 ? (int)lua_tointeger(L,4) : wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>4 ? (int)lua_tointeger(L,5) : wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem, const wxString &, int, int, wxClientData *)");
		}
		wxTreeListItem stack_lret = self->PrependItem(parent, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::DeleteItem(wxTreeListItem item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::DeleteItem(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::DeleteItem(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::DeleteItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::DeleteItem(wxTreeListItem)");
		}
		self->DeleteItem(item);

		return 0;
	}

	// void wxTreeListCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::DeleteAllItems() function, expected prototype:\nvoid wxTreeListCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// wxTreeListItem wxTreeListCtrl::GetRootItem() const
	static int _bind_GetRootItem(lua_State *L) {
		if (!_lg_typecheck_GetRootItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetRootItem() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetRootItem() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetRootItem() const");
		}
		wxTreeListItem stack_lret = self->GetRootItem();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const
	static int _bind_GetItemParent(lua_State *L) {
		if (!_lg_typecheck_GetItemParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemParent function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem) const");
		}
		wxTreeListItem stack_lret = self->GetItemParent(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const
	static int _bind_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_GetFirstChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetFirstChild function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem) const");
		}
		wxTreeListItem stack_lret = self->GetFirstChild(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetNextSibling function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem) const");
		}
		wxTreeListItem stack_lret = self->GetNextSibling(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetFirstItem() const
	static int _bind_GetFirstItem(lua_State *L) {
		if (!_lg_typecheck_GetFirstItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetFirstItem() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetFirstItem() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetFirstItem() const");
		}
		wxTreeListItem stack_lret = self->GetFirstItem();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const
	static int _bind_GetNextItem(lua_State *L) {
		if (!_lg_typecheck_GetNextItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetNextItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem) const");
		}
		wxTreeListItem stack_lret = self->GetNextItem(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned col = 0) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned col = 0) const function, expected prototype:\nconst wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned col = 0) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		unsigned col=luatop>2 ? (unsigned)lua_tointeger(L,3) : 0;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem, unsigned) const");
		}
		const wxString & lret = self->GetItemText(item, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned col, const wxString & text)
	static int _bind_SetItemText_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemText_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned col, const wxString & text) function, expected prototype:\nvoid wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned col, const wxString & text)\nClass arguments details:\narg 1 ID = 75268455\narg 3 ID = 88196105\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		unsigned col=(unsigned)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemText(wxTreeListItem, unsigned, const wxString &)");
		}
		self->SetItemText(item, col, text);

		return 0;
	}

	// void wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text)
	static int _bind_SetItemText_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemText_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text) function, expected prototype:\nvoid wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemText(wxTreeListItem, const wxString &)");
		}
		self->SetItemText(item, text);

		return 0;
	}

	// Overload binder for wxTreeListCtrl::SetItemText
	static int _bind_SetItemText(lua_State *L) {
		if (_lg_typecheck_SetItemText_overload_1(L)) return _bind_SetItemText_overload_1(L);
		if (_lg_typecheck_SetItemText_overload_2(L)) return _bind_SetItemText_overload_2(L);

		luaL_error(L, "error in function SetItemText, cannot match any of the overloads for function SetItemText:\n  SetItemText(wxTreeListItem, unsigned, const wxString &)\n  SetItemText(wxTreeListItem, const wxString &)\n");
		return 0;
	}

	// void wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE) function, expected prototype:\nvoid wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemImage function");
		}
		wxTreeListItem item=*item_ptr;
		int closed=(int)lua_tointeger(L,3);
		int opened=luatop>3 ? (int)lua_tointeger(L,4) : wxTreeListCtrl::NO_IMAGE;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemImage(wxTreeListItem, int, int)");
		}
		self->SetItemImage(item, closed, opened);

		return 0;
	}

	// wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const function, expected prototype:\nwxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemData function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem) const");
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data) function, expected prototype:\nvoid wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 50457573\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemData function");
		}
		wxTreeListItem item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemData(wxTreeListItem, wxClientData *)");
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxTreeListCtrl::Expand(wxTreeListItem item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Expand(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Expand(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Expand function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Expand(wxTreeListItem)");
		}
		self->Expand(item);

		return 0;
	}

	// void wxTreeListCtrl::Collapse(wxTreeListItem item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Collapse(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Collapse(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Collapse function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Collapse(wxTreeListItem)");
		}
		self->Collapse(item);

		return 0;
	}

	// bool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const function, expected prototype:\nbool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::IsExpanded function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::IsExpanded(wxTreeListItem) const");
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetSelection() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetSelection() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetSelection() const");
		}
		wxTreeListItem stack_lret = self->GetSelection();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::Select(wxTreeListItem item)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Select(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Select(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Select function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Select(wxTreeListItem)");
		}
		self->Select(item);

		return 0;
	}

	// void wxTreeListCtrl::Unselect(wxTreeListItem item)
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Unselect(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Unselect(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Unselect function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Unselect(wxTreeListItem)");
		}
		self->Unselect(item);

		return 0;
	}

	// bool wxTreeListCtrl::IsSelected(wxTreeListItem item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::IsSelected(wxTreeListItem item) const function, expected prototype:\nbool wxTreeListCtrl::IsSelected(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::IsSelected function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::IsSelected(wxTreeListItem) const");
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SelectAll() function, expected prototype:\nvoid wxTreeListCtrl::SelectAll()\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SelectAll()");
		}
		self->SelectAll();

		return 0;
	}

	// void wxTreeListCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UnselectAll() function, expected prototype:\nvoid wxTreeListCtrl::UnselectAll()\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UnselectAll()");
		}
		self->UnselectAll();

		return 0;
	}

	// void wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED)
	static int _bind_CheckItem(lua_State *L) {
		if (!_lg_typecheck_CheckItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED) function, expected prototype:\nvoid wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::CheckItem function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=luatop>2 ? (wxCheckBoxState)lua_tointeger(L,3) : wxCHK_CHECKED;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::CheckItem(wxTreeListItem, wxCheckBoxState)");
		}
		self->CheckItem(item, state);

		return 0;
	}

	// void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED)
	static int _bind_CheckItemRecursively(lua_State *L) {
		if (!_lg_typecheck_CheckItemRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED) function, expected prototype:\nvoid wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = wxCHK_CHECKED)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::CheckItemRecursively function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=luatop>2 ? (wxCheckBoxState)lua_tointeger(L,3) : wxCHK_CHECKED;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem, wxCheckBoxState)");
		}
		self->CheckItemRecursively(item, state);

		return 0;
	}

	// void wxTreeListCtrl::UncheckItem(wxTreeListItem item)
	static int _bind_UncheckItem(lua_State *L) {
		if (!_lg_typecheck_UncheckItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UncheckItem(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::UncheckItem(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::UncheckItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UncheckItem(wxTreeListItem)");
		}
		self->UncheckItem(item);

		return 0;
	}

	// void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item)
	static int _bind_UpdateItemParentStateRecursively(lua_State *L) {
		if (!_lg_typecheck_UpdateItemParentStateRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::UpdateItemParentStateRecursively function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem)");
		}
		self->UpdateItemParentStateRecursively(item);

		return 0;
	}

	// wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const
	static int _bind_GetCheckedState(lua_State *L) {
		if (!_lg_typecheck_GetCheckedState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const function, expected prototype:\nwxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetCheckedState function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem) const");
		}
		wxCheckBoxState lret = self->GetCheckedState(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const
	static int _bind_AreAllChildrenInState(lua_State *L) {
		if (!_lg_typecheck_AreAllChildrenInState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const function, expected prototype:\nbool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const\nClass arguments details:\narg 1 ID = 75268455\n");
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::AreAllChildrenInState function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=(wxCheckBoxState)lua_tointeger(L,3);

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem, wxCheckBoxState) const");
		}
		bool lret = self->AreAllChildrenInState(item, state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::SetSortColumn(unsigned col, bool ascendingOrder = true)
	static int _bind_SetSortColumn(lua_State *L) {
		if (!_lg_typecheck_SetSortColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetSortColumn(unsigned col, bool ascendingOrder = true) function, expected prototype:\nvoid wxTreeListCtrl::SetSortColumn(unsigned col, bool ascendingOrder = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned col=(unsigned)lua_tointeger(L,2);
		bool ascendingOrder=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetSortColumn(unsigned, bool)");
		}
		self->SetSortColumn(col, ascendingOrder);

		return 0;
	}

	// void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator)
	static int _bind_SetItemComparator(lua_State *L) {
		if (!_lg_typecheck_SetItemComparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator) function, expected prototype:\nvoid wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator)\nClass arguments details:\narg 1 ID = 87583976\n");
		}

		wxTreeListItemComparator* comparator=(Luna< wxTreeListItemComparator >::check(L,2));

		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator *)");
		}
		self->SetItemComparator(comparator);

		return 0;
	}

	// wxWindow * wxTreeListCtrl::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxTreeListCtrl::GetView() const function, expected prototype:\nwxWindow * wxTreeListCtrl::GetView() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxTreeListCtrl::GetView() const");
		}
		wxWindow * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxDataViewCtrl * wxTreeListCtrl::GetDataView() const
	static int _bind_GetDataView(lua_State *L) {
		if (!_lg_typecheck_GetDataView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl * wxTreeListCtrl::GetDataView() const function, expected prototype:\nwxDataViewCtrl * wxTreeListCtrl::GetDataView() const\nClass arguments details:\n");
		}


		wxTreeListCtrl* self=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCtrl * wxTreeListCtrl::GetDataView() const");
		}
		wxDataViewCtrl * lret = self->GetDataView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewCtrl >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxTreeListCtrl* LunaTraits< wxTreeListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeListCtrl::_bind_ctor(L);
}

void LunaTraits< wxTreeListCtrl >::_bind_dtor(wxTreeListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListCtrl >::className[] = "wxTreeListCtrl";
const char LunaTraits< wxTreeListCtrl >::fullName[] = "wxTreeListCtrl";
const char LunaTraits< wxTreeListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListCtrl >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxTreeListCtrl >::hash = 75090111;
const int LunaTraits< wxTreeListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTreeListCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxTreeListCtrl::_bind_Create},
	{"AssignImageList", &luna_wrapper_wxTreeListCtrl::_bind_AssignImageList},
	{"SetImageList", &luna_wrapper_wxTreeListCtrl::_bind_SetImageList},
	{"AppendColumn", &luna_wrapper_wxTreeListCtrl::_bind_AppendColumn},
	{"GetColumnCount", &luna_wrapper_wxTreeListCtrl::_bind_GetColumnCount},
	{"DeleteColumn", &luna_wrapper_wxTreeListCtrl::_bind_DeleteColumn},
	{"ClearColumns", &luna_wrapper_wxTreeListCtrl::_bind_ClearColumns},
	{"SetColumnWidth", &luna_wrapper_wxTreeListCtrl::_bind_SetColumnWidth},
	{"GetColumnWidth", &luna_wrapper_wxTreeListCtrl::_bind_GetColumnWidth},
	{"WidthFor", &luna_wrapper_wxTreeListCtrl::_bind_WidthFor},
	{"AppendItem", &luna_wrapper_wxTreeListCtrl::_bind_AppendItem},
	{"InsertItem", &luna_wrapper_wxTreeListCtrl::_bind_InsertItem},
	{"PrependItem", &luna_wrapper_wxTreeListCtrl::_bind_PrependItem},
	{"DeleteItem", &luna_wrapper_wxTreeListCtrl::_bind_DeleteItem},
	{"DeleteAllItems", &luna_wrapper_wxTreeListCtrl::_bind_DeleteAllItems},
	{"GetRootItem", &luna_wrapper_wxTreeListCtrl::_bind_GetRootItem},
	{"GetItemParent", &luna_wrapper_wxTreeListCtrl::_bind_GetItemParent},
	{"GetFirstChild", &luna_wrapper_wxTreeListCtrl::_bind_GetFirstChild},
	{"GetNextSibling", &luna_wrapper_wxTreeListCtrl::_bind_GetNextSibling},
	{"GetFirstItem", &luna_wrapper_wxTreeListCtrl::_bind_GetFirstItem},
	{"GetNextItem", &luna_wrapper_wxTreeListCtrl::_bind_GetNextItem},
	{"GetItemText", &luna_wrapper_wxTreeListCtrl::_bind_GetItemText},
	{"SetItemText", &luna_wrapper_wxTreeListCtrl::_bind_SetItemText},
	{"SetItemImage", &luna_wrapper_wxTreeListCtrl::_bind_SetItemImage},
	{"GetItemData", &luna_wrapper_wxTreeListCtrl::_bind_GetItemData},
	{"SetItemData", &luna_wrapper_wxTreeListCtrl::_bind_SetItemData},
	{"Expand", &luna_wrapper_wxTreeListCtrl::_bind_Expand},
	{"Collapse", &luna_wrapper_wxTreeListCtrl::_bind_Collapse},
	{"IsExpanded", &luna_wrapper_wxTreeListCtrl::_bind_IsExpanded},
	{"GetSelection", &luna_wrapper_wxTreeListCtrl::_bind_GetSelection},
	{"Select", &luna_wrapper_wxTreeListCtrl::_bind_Select},
	{"Unselect", &luna_wrapper_wxTreeListCtrl::_bind_Unselect},
	{"IsSelected", &luna_wrapper_wxTreeListCtrl::_bind_IsSelected},
	{"SelectAll", &luna_wrapper_wxTreeListCtrl::_bind_SelectAll},
	{"UnselectAll", &luna_wrapper_wxTreeListCtrl::_bind_UnselectAll},
	{"CheckItem", &luna_wrapper_wxTreeListCtrl::_bind_CheckItem},
	{"CheckItemRecursively", &luna_wrapper_wxTreeListCtrl::_bind_CheckItemRecursively},
	{"UncheckItem", &luna_wrapper_wxTreeListCtrl::_bind_UncheckItem},
	{"UpdateItemParentStateRecursively", &luna_wrapper_wxTreeListCtrl::_bind_UpdateItemParentStateRecursively},
	{"GetCheckedState", &luna_wrapper_wxTreeListCtrl::_bind_GetCheckedState},
	{"AreAllChildrenInState", &luna_wrapper_wxTreeListCtrl::_bind_AreAllChildrenInState},
	{"SetSortColumn", &luna_wrapper_wxTreeListCtrl::_bind_SetSortColumn},
	{"SetItemComparator", &luna_wrapper_wxTreeListCtrl::_bind_SetItemComparator},
	{"GetView", &luna_wrapper_wxTreeListCtrl::_bind_GetView},
	{"GetDataView", &luna_wrapper_wxTreeListCtrl::_bind_GetDataView},
	{"__eq", &luna_wrapper_wxTreeListCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListCtrl >::enumValues[] = {
	{0,0}
};


