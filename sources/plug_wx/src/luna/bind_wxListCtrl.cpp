#include <plug_common.h>

class luna_wrapper_wxListCtrl {
public:
	typedef Luna< wxListCtrl > luna_t;

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
		wxListCtrl* ptr= dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Arrange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndEditLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnIndexFromOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCountPerPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemColumnImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPtrData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSingleStyle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxListCtrl::wxListCtrl()
	static wxListCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl() function, expected prototype:\nwxListCtrl::wxListCtrl()\nClass arguments details:\n");
		}


		return new wxListCtrl();
	}

	// wxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)
	static wxListCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr) function, expected prototype:\nwxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::wxListCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::wxListCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxLC_ICON;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::wxListCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxListCtrl(parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxListCtrl::wxListCtrl
	static wxListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxListCtrl, cannot match any of the overloads for function wxListCtrl:\n  wxListCtrl()\n  wxListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxListCtrl::Arrange(int flag = wxLIST_ALIGN_DEFAULT)
	static int _bind_Arrange(lua_State *L) {
		if (!_lg_typecheck_Arrange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::Arrange(int flag = wxLIST_ALIGN_DEFAULT) function, expected prototype:\nbool wxListCtrl::Arrange(int flag = wxLIST_ALIGN_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flag=luatop>1 ? (int)lua_tointeger(L,2) : wxLIST_ALIGN_DEFAULT;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::Arrange(int)");
		}
		bool lret = self->Arrange(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::AssignImageList(wxImageList * imageList, int which)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::AssignImageList(wxImageList * imageList, int which) function, expected prototype:\nvoid wxListCtrl::AssignImageList(wxImageList * imageList, int which)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));
		int which=(int)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::AssignImageList(wxImageList *, int)");
		}
		self->AssignImageList(imageList, which);

		return 0;
	}

	// void wxListCtrl::ClearAll()
	static int _bind_ClearAll(lua_State *L) {
		if (!_lg_typecheck_ClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::ClearAll() function, expected prototype:\nvoid wxListCtrl::ClearAll()\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::ClearAll()");
		}
		self->ClearAll();

		return 0;
	}

	// bool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr) function, expected prototype:\nbool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxLC_ICON;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteAllItems() function, expected prototype:\nbool wxListCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteAllItems()");
		}
		bool lret = self->DeleteAllItems();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteColumn(int col)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteColumn(int col) function, expected prototype:\nbool wxListCtrl::DeleteColumn(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteColumn(int)");
		}
		bool lret = self->DeleteColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteItem(long item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteItem(long item) function, expected prototype:\nbool wxListCtrl::DeleteItem(long item)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteItem(long)");
		}
		bool lret = self->DeleteItem(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl ))
	static int _bind_EditLabel(lua_State *L) {
		if (!_lg_typecheck_EditLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl )) function, expected prototype:\nwxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl ))\nClass arguments details:\narg 2 ID = 96106697\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		wxClassInfo* textControlClass=luatop>2 ? (Luna< wxClassInfo >::check(L,3)) : (wxClassInfo*)wxCLASSINFO ( wxTextCtrl );

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxListCtrl::EditLabel(long, wxClassInfo *)");
		}
		wxTextCtrl * lret = self->EditLabel(item, textControlClass);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// bool wxListCtrl::EndEditLabel(bool cancel)
	static int _bind_EndEditLabel(lua_State *L) {
		if (!_lg_typecheck_EndEditLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::EndEditLabel(bool cancel) function, expected prototype:\nbool wxListCtrl::EndEditLabel(bool cancel)\nClass arguments details:\n");
		}

		bool cancel=(bool)(lua_toboolean(L,2)==1);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::EndEditLabel(bool)");
		}
		bool lret = self->EndEditLabel(cancel);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::EnsureVisible(long item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::EnsureVisible(long item) function, expected prototype:\nbool wxListCtrl::EnsureVisible(long item)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::EnsureVisible(long)");
		}
		bool lret = self->EnsureVisible(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, const wxString & str, bool partial = false)
	static int _bind_FindItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, const wxString & str, bool partial = false) function, expected prototype:\nlong wxListCtrl::FindItem(long start, const wxString & str, bool partial = false)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long start=(long)lua_tointeger(L,2);
		wxString str(lua_tostring(L,3),lua_objlen(L,3));
		bool partial=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, const wxString &, bool)");
		}
		long lret = self->FindItem(start, str, partial);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, size_t data)
	static int _bind_FindItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, size_t data) function, expected prototype:\nlong wxListCtrl::FindItem(long start, size_t data)\nClass arguments details:\n");
		}

		long start=(long)lua_tointeger(L,2);
		size_t data=(size_t)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, size_t)");
		}
		long lret = self->FindItem(start, data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, const wxPoint & pt, int direction)
	static int _bind_FindItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, const wxPoint & pt, int direction) function, expected prototype:\nlong wxListCtrl::FindItem(long start, const wxPoint & pt, int direction)\nClass arguments details:\narg 2 ID = 25723480\n");
		}

		long start=(long)lua_tointeger(L,2);
		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxListCtrl::FindItem function");
		}
		const wxPoint & pt=*pt_ptr;
		int direction=(int)lua_tointeger(L,4);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, const wxPoint &, int)");
		}
		long lret = self->FindItem(start, pt, direction);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::FindItem
	static int _bind_FindItem(lua_State *L) {
		if (_lg_typecheck_FindItem_overload_1(L)) return _bind_FindItem_overload_1(L);
		if (_lg_typecheck_FindItem_overload_2(L)) return _bind_FindItem_overload_2(L);
		if (_lg_typecheck_FindItem_overload_3(L)) return _bind_FindItem_overload_3(L);

		luaL_error(L, "error in function FindItem, cannot match any of the overloads for function FindItem:\n  FindItem(long, const wxString &, bool)\n  FindItem(long, size_t)\n  FindItem(long, const wxPoint &, int)\n");
		return 0;
	}

	// bool wxListCtrl::GetColumn(int col, wxListItem & item) const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetColumn(int col, wxListItem & item) const function, expected prototype:\nbool wxListCtrl::GetColumn(int col, wxListItem & item) const\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int col=(int)lua_tointeger(L,2);
		wxListItem* item_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxListCtrl::GetColumn function");
		}
		wxListItem & item=*item_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetColumn(int, wxListItem &) const");
		}
		bool lret = self->GetColumn(col, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxListCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnCount() const function, expected prototype:\nint wxListCtrl::GetColumnCount() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnCount() const");
		}
		int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnIndexFromOrder(int pos) const
	static int _bind_GetColumnIndexFromOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnIndexFromOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnIndexFromOrder(int pos) const function, expected prototype:\nint wxListCtrl::GetColumnIndexFromOrder(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnIndexFromOrder(int) const");
		}
		int lret = self->GetColumnIndexFromOrder(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnOrder(int col) const
	static int _bind_GetColumnOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnOrder(int col) const function, expected prototype:\nint wxListCtrl::GetColumnOrder(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnOrder(int) const");
		}
		int lret = self->GetColumnOrder(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnWidth(int col) const
	static int _bind_GetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_GetColumnWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnWidth(int col) const function, expected prototype:\nint wxListCtrl::GetColumnWidth(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnWidth(int) const");
		}
		int lret = self->GetColumnWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxArrayInt wxListCtrl::GetColumnsOrder() const
	static int _bind_GetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnsOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayInt wxListCtrl::GetColumnsOrder() const function, expected prototype:\nwxArrayInt wxListCtrl::GetColumnsOrder() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayInt wxListCtrl::GetColumnsOrder() const");
		}
		wxArrayInt stack_lret = self->GetColumnsOrder();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetCountPerPage() const
	static int _bind_GetCountPerPage(lua_State *L) {
		if (!_lg_typecheck_GetCountPerPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetCountPerPage() const function, expected prototype:\nint wxListCtrl::GetCountPerPage() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetCountPerPage() const");
		}
		int lret = self->GetCountPerPage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxListCtrl::GetEditControl() const
	static int _bind_GetEditControl(lua_State *L) {
		if (!_lg_typecheck_GetEditControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxListCtrl::GetEditControl() const function, expected prototype:\nwxTextCtrl * wxListCtrl::GetEditControl() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxListCtrl::GetEditControl() const");
		}
		wxTextCtrl * lret = self->GetEditControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxImageList * wxListCtrl::GetImageList(int which) const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxListCtrl::GetImageList(int which) const function, expected prototype:\nwxImageList * wxListCtrl::GetImageList(int which) const\nClass arguments details:\n");
		}

		int which=(int)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxListCtrl::GetImageList(int) const");
		}
		wxImageList * lret = self->GetImageList(which);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// bool wxListCtrl::GetItem(wxListItem & info) const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItem(wxListItem & info) const function, expected prototype:\nbool wxListCtrl::GetItem(wxListItem & info) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxListItem* info_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::GetItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItem(wxListItem &) const");
		}
		bool lret = self->GetItem(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxListCtrl::GetItemBackgroundColour(long item) const
	static int _bind_GetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetItemBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetItemBackgroundColour(long item) const function, expected prototype:\nwxColour wxListCtrl::GetItemBackgroundColour(long item) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetItemBackgroundColour(long) const");
		}
		wxColour stack_lret = self->GetItemBackgroundColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetItemCount() const
	static int _bind_GetItemCount(lua_State *L) {
		if (!_lg_typecheck_GetItemCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetItemCount() const function, expected prototype:\nint wxListCtrl::GetItemCount() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetItemCount() const");
		}
		int lret = self->GetItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxListCtrl::GetItemData(long item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxListCtrl::GetItemData(long item) const function, expected prototype:\nsize_t wxListCtrl::GetItemData(long item) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxListCtrl::GetItemData(long) const");
		}
		size_t lret = self->GetItemData(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxListCtrl::GetItemFont(long item) const
	static int _bind_GetItemFont(lua_State *L) {
		if (!_lg_typecheck_GetItemFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxListCtrl::GetItemFont(long item) const function, expected prototype:\nwxFont wxListCtrl::GetItemFont(long item) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxListCtrl::GetItemFont(long) const");
		}
		wxFont stack_lret = self->GetItemFont(item);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const
	static int _bind_GetItemPosition(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const function, expected prototype:\nbool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const\nClass arguments details:\narg 2 ID = 25723480\n");
		}

		long item=(long)lua_tointeger(L,2);
		wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::GetItemPosition function");
		}
		wxPoint & pos=*pos_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItemPosition(long, wxPoint &) const");
		}
		bool lret = self->GetItemPosition(item, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const function, expected prototype:\nbool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxListCtrl::GetItemRect function");
		}
		wxRect & rect=*rect_ptr;
		int code=luatop>3 ? (int)lua_tointeger(L,4) : wxLIST_RECT_BOUNDS;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItemRect(long, wxRect &, int) const");
		}
		bool lret = self->GetItemRect(item, rect, code);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxListCtrl::GetItemSpacing() const
	static int _bind_GetItemSpacing(lua_State *L) {
		if (!_lg_typecheck_GetItemSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::GetItemSpacing() const function, expected prototype:\nwxSize wxListCtrl::GetItemSpacing() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::GetItemSpacing() const");
		}
		wxSize stack_lret = self->GetItemSpacing();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetItemState(long item, long stateMask) const
	static int _bind_GetItemState(lua_State *L) {
		if (!_lg_typecheck_GetItemState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetItemState(long item, long stateMask) const function, expected prototype:\nint wxListCtrl::GetItemState(long item, long stateMask) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);
		long stateMask=(long)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetItemState(long, long) const");
		}
		int lret = self->GetItemState(item, stateMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxListCtrl::GetItemText(long item, int col = 0) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxListCtrl::GetItemText(long item, int col = 0) const function, expected prototype:\nwxString wxListCtrl::GetItemText(long item, int col = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxListCtrl::GetItemText(long, int) const");
		}
		wxString lret = self->GetItemText(item, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxListCtrl::GetItemTextColour(long item) const
	static int _bind_GetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_GetItemTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetItemTextColour(long item) const function, expected prototype:\nwxColour wxListCtrl::GetItemTextColour(long item) const\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetItemTextColour(long) const");
		}
		wxColour stack_lret = self->GetItemTextColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::GetNextItem(long item, int geometry = wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const
	static int _bind_GetNextItem(lua_State *L) {
		if (!_lg_typecheck_GetNextItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::GetNextItem(long item, int geometry = wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const function, expected prototype:\nlong wxListCtrl::GetNextItem(long item, int geometry = wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		int geometry=luatop>2 ? (int)lua_tointeger(L,3) : wxLIST_NEXT_ALL;
		int state=luatop>3 ? (int)lua_tointeger(L,4) : wxLIST_STATE_DONTCARE;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::GetNextItem(long, int, int) const");
		}
		long lret = self->GetNextItem(item, geometry, state);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetSelectedItemCount() const
	static int _bind_GetSelectedItemCount(lua_State *L) {
		if (!_lg_typecheck_GetSelectedItemCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetSelectedItemCount() const function, expected prototype:\nint wxListCtrl::GetSelectedItemCount() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetSelectedItemCount() const");
		}
		int lret = self->GetSelectedItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const
	static int _bind_GetSubItemRect(lua_State *L) {
		if (!_lg_typecheck_GetSubItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const function, expected prototype:\nbool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = wxLIST_RECT_BOUNDS) const\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		long subItem=(long)lua_tointeger(L,3);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxListCtrl::GetSubItemRect function");
		}
		wxRect & rect=*rect_ptr;
		int code=luatop>4 ? (int)lua_tointeger(L,5) : wxLIST_RECT_BOUNDS;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetSubItemRect(long, long, wxRect &, int) const");
		}
		bool lret = self->GetSubItemRect(item, subItem, rect, code);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxListCtrl::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetTextColour() const function, expected prototype:\nwxColour wxListCtrl::GetTextColour() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetTextColour() const");
		}
		wxColour stack_lret = self->GetTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::GetTopItem() const
	static int _bind_GetTopItem(lua_State *L) {
		if (!_lg_typecheck_GetTopItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::GetTopItem() const function, expected prototype:\nlong wxListCtrl::GetTopItem() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::GetTopItem() const");
		}
		long lret = self->GetTopItem();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxListCtrl::GetViewRect() const
	static int _bind_GetViewRect(lua_State *L) {
		if (!_lg_typecheck_GetViewRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxListCtrl::GetViewRect() const function, expected prototype:\nwxRect wxListCtrl::GetViewRect() const\nClass arguments details:\n");
		}


		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxListCtrl::GetViewRect() const");
		}
		wxRect stack_lret = self->GetViewRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const function, expected prototype:\nlong wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxListCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		int flags=(int)lua_tointeger(L,3);
		long ptrSubItem=luatop>3 ? (long)lua_tointeger(L,4) : NULL;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::HitTest(const wxPoint &, int &, long *) const");
		}
		long lret = self->HitTest(point, flags, &ptrSubItem);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertColumn(long col, wxListItem & info)
	static int _bind_InsertColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertColumn(long col, wxListItem & info) function, expected prototype:\nlong wxListCtrl::InsertColumn(long col, wxListItem & info)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		long col=(long)lua_tointeger(L,2);
		wxListItem* info_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,3));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::InsertColumn function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertColumn(long, wxListItem &)");
		}
		long lret = self->InsertColumn(col, info);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertColumn(long col, const wxString & heading, int format = wxLIST_FORMAT_LEFT, int width = -1)
	static int _bind_InsertColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertColumn(long col, const wxString & heading, int format = wxLIST_FORMAT_LEFT, int width = -1) function, expected prototype:\nlong wxListCtrl::InsertColumn(long col, const wxString & heading, int format = wxLIST_FORMAT_LEFT, int width = -1)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long col=(long)lua_tointeger(L,2);
		wxString heading(lua_tostring(L,3),lua_objlen(L,3));
		int format=luatop>3 ? (int)lua_tointeger(L,4) : wxLIST_FORMAT_LEFT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertColumn(long, const wxString &, int, int)");
		}
		long lret = self->InsertColumn(col, heading, format, width);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::InsertColumn
	static int _bind_InsertColumn(lua_State *L) {
		if (_lg_typecheck_InsertColumn_overload_1(L)) return _bind_InsertColumn_overload_1(L);
		if (_lg_typecheck_InsertColumn_overload_2(L)) return _bind_InsertColumn_overload_2(L);

		luaL_error(L, "error in function InsertColumn, cannot match any of the overloads for function InsertColumn:\n  InsertColumn(long, wxListItem &)\n  InsertColumn(long, const wxString &, int, int)\n");
		return 0;
	}

	// long wxListCtrl::InsertItem(wxListItem & info)
	static int _bind_InsertItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(wxListItem & info) function, expected prototype:\nlong wxListCtrl::InsertItem(wxListItem & info)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxListItem* info_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::InsertItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(wxListItem &)");
		}
		long lret = self->InsertItem(info);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, const wxString & label)
	static int _bind_InsertItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, const wxString & label) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		long index=(long)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, const wxString &)");
		}
		long lret = self->InsertItem(index, label);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, int imageIndex)
	static int _bind_InsertItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, int imageIndex) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, int imageIndex)\nClass arguments details:\n");
		}

		long index=(long)lua_tointeger(L,2);
		int imageIndex=(int)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, int)");
		}
		long lret = self->InsertItem(index, imageIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex)
	static int _bind_InsertItem_overload_4(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		long index=(long)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int imageIndex=(int)lua_tointeger(L,4);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, const wxString &, int)");
		}
		long lret = self->InsertItem(index, label, imageIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::InsertItem
	static int _bind_InsertItem(lua_State *L) {
		if (_lg_typecheck_InsertItem_overload_1(L)) return _bind_InsertItem_overload_1(L);
		if (_lg_typecheck_InsertItem_overload_2(L)) return _bind_InsertItem_overload_2(L);
		if (_lg_typecheck_InsertItem_overload_3(L)) return _bind_InsertItem_overload_3(L);
		if (_lg_typecheck_InsertItem_overload_4(L)) return _bind_InsertItem_overload_4(L);

		luaL_error(L, "error in function InsertItem, cannot match any of the overloads for function InsertItem:\n  InsertItem(wxListItem &)\n  InsertItem(long, const wxString &)\n  InsertItem(long, int)\n  InsertItem(long, const wxString &, int)\n");
		return 0;
	}

	// void wxListCtrl::RefreshItem(long item)
	static int _bind_RefreshItem(lua_State *L) {
		if (!_lg_typecheck_RefreshItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::RefreshItem(long item) function, expected prototype:\nvoid wxListCtrl::RefreshItem(long item)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::RefreshItem(long)");
		}
		self->RefreshItem(item);

		return 0;
	}

	// void wxListCtrl::RefreshItems(long itemFrom, long itemTo)
	static int _bind_RefreshItems(lua_State *L) {
		if (!_lg_typecheck_RefreshItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::RefreshItems(long itemFrom, long itemTo) function, expected prototype:\nvoid wxListCtrl::RefreshItems(long itemFrom, long itemTo)\nClass arguments details:\n");
		}

		long itemFrom=(long)lua_tointeger(L,2);
		long itemTo=(long)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::RefreshItems(long, long)");
		}
		self->RefreshItems(itemFrom, itemTo);

		return 0;
	}

	// bool wxListCtrl::ScrollList(int dx, int dy)
	static int _bind_ScrollList(lua_State *L) {
		if (!_lg_typecheck_ScrollList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::ScrollList(int dx, int dy) function, expected prototype:\nbool wxListCtrl::ScrollList(int dx, int dy)\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::ScrollList(int, int)");
		}
		bool lret = self->ScrollList(dx, dy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetBackgroundColour(const wxColour & col)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetBackgroundColour(const wxColour & col) function, expected prototype:\nbool wxListCtrl::SetBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetBackgroundColour(const wxColour &)");
		}
		bool lret = self->SetBackgroundColour(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumn(int col, wxListItem & item)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumn(int col, wxListItem & item) function, expected prototype:\nbool wxListCtrl::SetColumn(int col, wxListItem & item)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int col=(int)lua_tointeger(L,2);
		wxListItem* item_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxListCtrl::SetColumn function");
		}
		wxListItem & item=*item_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumn(int, wxListItem &)");
		}
		bool lret = self->SetColumn(col, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumnWidth(int col, int width)
	static int _bind_SetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_SetColumnWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumnWidth(int col, int width) function, expected prototype:\nbool wxListCtrl::SetColumnWidth(int col, int width)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumnWidth(int, int)");
		}
		bool lret = self->SetColumnWidth(col, width);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const
	static int _bind_SetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_SetColumnsOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const function, expected prototype:\nbool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		const wxArrayInt* orders_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !orders_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orders in wxListCtrl::SetColumnsOrder function");
		}
		const wxArrayInt & orders=*orders_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumnsOrder(const wxArrayInt &) const");
		}
		bool lret = self->SetColumnsOrder(orders);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetImageList(wxImageList * imageList, int which)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetImageList(wxImageList * imageList, int which) function, expected prototype:\nvoid wxListCtrl::SetImageList(wxImageList * imageList, int which)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));
		int which=(int)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetImageList(wxImageList *, int)");
		}
		self->SetImageList(imageList, which);

		return 0;
	}

	// bool wxListCtrl::SetItem(wxListItem & info)
	static int _bind_SetItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItem(wxListItem & info) function, expected prototype:\nbool wxListCtrl::SetItem(wxListItem & info)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxListItem* info_ptr=dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::SetItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItem(wxListItem &)");
		}
		bool lret = self->SetItem(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1)
	static int _bind_SetItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1) function, expected prototype:\nlong wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long index=(long)lua_tointeger(L,2);
		int column=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : -1;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListCtrl::SetItem(long, int, const wxString &, int)");
		}
		long lret = self->SetItem(index, column, label, imageId);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::SetItem
	static int _bind_SetItem(lua_State *L) {
		if (_lg_typecheck_SetItem_overload_1(L)) return _bind_SetItem_overload_1(L);
		if (_lg_typecheck_SetItem_overload_2(L)) return _bind_SetItem_overload_2(L);

		luaL_error(L, "error in function SetItem, cannot match any of the overloads for function SetItem:\n  SetItem(wxListItem &)\n  SetItem(long, int, const wxString &, int)\n");
		return 0;
	}

	// void wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col)
	static int _bind_SetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetItemBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		long item=(long)lua_tointeger(L,2);
		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetItemBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemBackgroundColour(long, const wxColour &)");
		}
		self->SetItemBackgroundColour(item, col);

		return 0;
	}

	// bool wxListCtrl::SetItemColumnImage(long item, long column, int image)
	static int _bind_SetItemColumnImage(lua_State *L) {
		if (!_lg_typecheck_SetItemColumnImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemColumnImage(long item, long column, int image) function, expected prototype:\nbool wxListCtrl::SetItemColumnImage(long item, long column, int image)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);
		long column=(long)lua_tointeger(L,3);
		int image=(int)lua_tointeger(L,4);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemColumnImage(long, long, int)");
		}
		bool lret = self->SetItemColumnImage(item, column, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemCount(long count)
	static int _bind_SetItemCount(lua_State *L) {
		if (!_lg_typecheck_SetItemCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemCount(long count) function, expected prototype:\nvoid wxListCtrl::SetItemCount(long count)\nClass arguments details:\n");
		}

		long count=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemCount(long)");
		}
		self->SetItemCount(count);

		return 0;
	}

	// bool wxListCtrl::SetItemData(long item, long data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemData(long item, long data) function, expected prototype:\nbool wxListCtrl::SetItemData(long item, long data)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);
		long data=(long)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemData(long, long)");
		}
		bool lret = self->SetItemData(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemFont(long item, const wxFont & font)
	static int _bind_SetItemFont(lua_State *L) {
		if (!_lg_typecheck_SetItemFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemFont(long item, const wxFont & font) function, expected prototype:\nvoid wxListCtrl::SetItemFont(long item, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		long item=(long)lua_tointeger(L,2);
		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListCtrl::SetItemFont function");
		}
		const wxFont & font=*font_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemFont(long, const wxFont &)");
		}
		self->SetItemFont(item, font);

		return 0;
	}

	// bool wxListCtrl::SetItemImage(long item, int image, int selImage = -1)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemImage(long item, int image, int selImage = -1) function, expected prototype:\nbool wxListCtrl::SetItemImage(long item, int image, int selImage = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);
		int selImage=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemImage(long, int, int)");
		}
		bool lret = self->SetItemImage(item, image, selImage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemPosition(long item, const wxPoint & pos)
	static int _bind_SetItemPosition(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemPosition(long item, const wxPoint & pos) function, expected prototype:\nbool wxListCtrl::SetItemPosition(long item, const wxPoint & pos)\nClass arguments details:\narg 2 ID = 25723480\n");
		}

		long item=(long)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::SetItemPosition function");
		}
		const wxPoint & pos=*pos_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemPosition(long, const wxPoint &)");
		}
		bool lret = self->SetItemPosition(item, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemPtrData(long item, size_t data)
	static int _bind_SetItemPtrData(lua_State *L) {
		if (!_lg_typecheck_SetItemPtrData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemPtrData(long item, size_t data) function, expected prototype:\nbool wxListCtrl::SetItemPtrData(long item, size_t data)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);
		size_t data=(size_t)lua_tointeger(L,3);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemPtrData(long, size_t)");
		}
		bool lret = self->SetItemPtrData(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemState(long item, long state, long stateMask)
	static int _bind_SetItemState(lua_State *L) {
		if (!_lg_typecheck_SetItemState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemState(long item, long state, long stateMask) function, expected prototype:\nbool wxListCtrl::SetItemState(long item, long state, long stateMask)\nClass arguments details:\n");
		}

		long item=(long)lua_tointeger(L,2);
		long state=(long)lua_tointeger(L,3);
		long stateMask=(long)lua_tointeger(L,4);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemState(long, long, long)");
		}
		bool lret = self->SetItemState(item, state, stateMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemText(long item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemText(long item, const wxString & text) function, expected prototype:\nvoid wxListCtrl::SetItemText(long item, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		long item=(long)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemText(long, const wxString &)");
		}
		self->SetItemText(item, text);

		return 0;
	}

	// void wxListCtrl::SetItemTextColour(long item, const wxColour & col)
	static int _bind_SetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_SetItemTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemTextColour(long item, const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetItemTextColour(long item, const wxColour & col)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		long item=(long)lua_tointeger(L,2);
		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetItemTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemTextColour(long, const wxColour &)");
		}
		self->SetItemTextColour(item, col);

		return 0;
	}

	// void wxListCtrl::SetSingleStyle(long style, bool add = true)
	static int _bind_SetSingleStyle(lua_State *L) {
		if (!_lg_typecheck_SetSingleStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetSingleStyle(long style, bool add = true) function, expected prototype:\nvoid wxListCtrl::SetSingleStyle(long style, bool add = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long style=(long)lua_tointeger(L,2);
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetSingleStyle(long, bool)");
		}
		self->SetSingleStyle(style, add);

		return 0;
	}

	// void wxListCtrl::SetTextColour(const wxColour & col)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetTextColour(const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetTextColour(const wxColour &)");
		}
		self->SetTextColour(col);

		return 0;
	}

	// void wxListCtrl::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxListCtrl::SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxListCtrl* self=dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetWindowStyleFlag(long)");
		}
		self->SetWindowStyleFlag(style);

		return 0;
	}


	// Operator binds:

};

wxListCtrl* LunaTraits< wxListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListCtrl::_bind_ctor(L);
}

void LunaTraits< wxListCtrl >::_bind_dtor(wxListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxListCtrl >::className[] = "wxListCtrl";
const char LunaTraits< wxListCtrl >::fullName[] = "wxListCtrl";
const char LunaTraits< wxListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxListCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxListCtrl >::hash = 43149301;
const int LunaTraits< wxListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxListCtrl >::methods[] = {
	{"Arrange", &luna_wrapper_wxListCtrl::_bind_Arrange},
	{"AssignImageList", &luna_wrapper_wxListCtrl::_bind_AssignImageList},
	{"ClearAll", &luna_wrapper_wxListCtrl::_bind_ClearAll},
	{"Create", &luna_wrapper_wxListCtrl::_bind_Create},
	{"DeleteAllItems", &luna_wrapper_wxListCtrl::_bind_DeleteAllItems},
	{"DeleteColumn", &luna_wrapper_wxListCtrl::_bind_DeleteColumn},
	{"DeleteItem", &luna_wrapper_wxListCtrl::_bind_DeleteItem},
	{"EditLabel", &luna_wrapper_wxListCtrl::_bind_EditLabel},
	{"EndEditLabel", &luna_wrapper_wxListCtrl::_bind_EndEditLabel},
	{"EnsureVisible", &luna_wrapper_wxListCtrl::_bind_EnsureVisible},
	{"FindItem", &luna_wrapper_wxListCtrl::_bind_FindItem},
	{"GetColumn", &luna_wrapper_wxListCtrl::_bind_GetColumn},
	{"GetColumnCount", &luna_wrapper_wxListCtrl::_bind_GetColumnCount},
	{"GetColumnIndexFromOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnIndexFromOrder},
	{"GetColumnOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnOrder},
	{"GetColumnWidth", &luna_wrapper_wxListCtrl::_bind_GetColumnWidth},
	{"GetColumnsOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnsOrder},
	{"GetCountPerPage", &luna_wrapper_wxListCtrl::_bind_GetCountPerPage},
	{"GetEditControl", &luna_wrapper_wxListCtrl::_bind_GetEditControl},
	{"GetImageList", &luna_wrapper_wxListCtrl::_bind_GetImageList},
	{"GetItem", &luna_wrapper_wxListCtrl::_bind_GetItem},
	{"GetItemBackgroundColour", &luna_wrapper_wxListCtrl::_bind_GetItemBackgroundColour},
	{"GetItemCount", &luna_wrapper_wxListCtrl::_bind_GetItemCount},
	{"GetItemData", &luna_wrapper_wxListCtrl::_bind_GetItemData},
	{"GetItemFont", &luna_wrapper_wxListCtrl::_bind_GetItemFont},
	{"GetItemPosition", &luna_wrapper_wxListCtrl::_bind_GetItemPosition},
	{"GetItemRect", &luna_wrapper_wxListCtrl::_bind_GetItemRect},
	{"GetItemSpacing", &luna_wrapper_wxListCtrl::_bind_GetItemSpacing},
	{"GetItemState", &luna_wrapper_wxListCtrl::_bind_GetItemState},
	{"GetItemText", &luna_wrapper_wxListCtrl::_bind_GetItemText},
	{"GetItemTextColour", &luna_wrapper_wxListCtrl::_bind_GetItemTextColour},
	{"GetNextItem", &luna_wrapper_wxListCtrl::_bind_GetNextItem},
	{"GetSelectedItemCount", &luna_wrapper_wxListCtrl::_bind_GetSelectedItemCount},
	{"GetSubItemRect", &luna_wrapper_wxListCtrl::_bind_GetSubItemRect},
	{"GetTextColour", &luna_wrapper_wxListCtrl::_bind_GetTextColour},
	{"GetTopItem", &luna_wrapper_wxListCtrl::_bind_GetTopItem},
	{"GetViewRect", &luna_wrapper_wxListCtrl::_bind_GetViewRect},
	{"HitTest", &luna_wrapper_wxListCtrl::_bind_HitTest},
	{"InsertColumn", &luna_wrapper_wxListCtrl::_bind_InsertColumn},
	{"InsertItem", &luna_wrapper_wxListCtrl::_bind_InsertItem},
	{"RefreshItem", &luna_wrapper_wxListCtrl::_bind_RefreshItem},
	{"RefreshItems", &luna_wrapper_wxListCtrl::_bind_RefreshItems},
	{"ScrollList", &luna_wrapper_wxListCtrl::_bind_ScrollList},
	{"SetBackgroundColour", &luna_wrapper_wxListCtrl::_bind_SetBackgroundColour},
	{"SetColumn", &luna_wrapper_wxListCtrl::_bind_SetColumn},
	{"SetColumnWidth", &luna_wrapper_wxListCtrl::_bind_SetColumnWidth},
	{"SetColumnsOrder", &luna_wrapper_wxListCtrl::_bind_SetColumnsOrder},
	{"SetImageList", &luna_wrapper_wxListCtrl::_bind_SetImageList},
	{"SetItem", &luna_wrapper_wxListCtrl::_bind_SetItem},
	{"SetItemBackgroundColour", &luna_wrapper_wxListCtrl::_bind_SetItemBackgroundColour},
	{"SetItemColumnImage", &luna_wrapper_wxListCtrl::_bind_SetItemColumnImage},
	{"SetItemCount", &luna_wrapper_wxListCtrl::_bind_SetItemCount},
	{"SetItemData", &luna_wrapper_wxListCtrl::_bind_SetItemData},
	{"SetItemFont", &luna_wrapper_wxListCtrl::_bind_SetItemFont},
	{"SetItemImage", &luna_wrapper_wxListCtrl::_bind_SetItemImage},
	{"SetItemPosition", &luna_wrapper_wxListCtrl::_bind_SetItemPosition},
	{"SetItemPtrData", &luna_wrapper_wxListCtrl::_bind_SetItemPtrData},
	{"SetItemState", &luna_wrapper_wxListCtrl::_bind_SetItemState},
	{"SetItemText", &luna_wrapper_wxListCtrl::_bind_SetItemText},
	{"SetItemTextColour", &luna_wrapper_wxListCtrl::_bind_SetItemTextColour},
	{"SetSingleStyle", &luna_wrapper_wxListCtrl::_bind_SetSingleStyle},
	{"SetTextColour", &luna_wrapper_wxListCtrl::_bind_SetTextColour},
	{"SetWindowStyleFlag", &luna_wrapper_wxListCtrl::_bind_SetWindowStyleFlag},
	{"__eq", &luna_wrapper_wxListCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListCtrl >::enumValues[] = {
	{0,0}
};


