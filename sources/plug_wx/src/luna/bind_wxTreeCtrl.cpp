#include <plug_common.h>

class luna_wrapper_wxTreeCtrl {
public:
	typedef Luna< wxTreeCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTreeCtrl* ptr= dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddRoot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignStateImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CollapseAllChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseAndReset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndEditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExpandAllChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBoundingRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildrenCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstVisibleItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrevSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrevVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetQuickBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRootItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99349677) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStateImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsBold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemHasChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCompareItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBold(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemDropHighlight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemHasChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetQuickBestSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStateImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SortChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Toggle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleItemSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeCtrl::wxTreeCtrl()
	static wxTreeCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl() function, expected prototype:\nwxTreeCtrl::wxTreeCtrl()\nClass arguments details:\n");
		}


		return new wxTreeCtrl();
	}

	// wxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)
	static wxTreeCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxTR_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxTreeCtrl(parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxTreeCtrl::wxTreeCtrl
	static wxTreeCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTreeCtrl, cannot match any of the overloads for function wxTreeCtrl:\n  wxTreeCtrl()\n  wxTreeCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_AddRoot(lua_State *L) {
		if (!_lg_typecheck_AddRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int image=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		int selImage=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxTreeItemData* data=luatop>4 ? dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,5)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::AddRoot(const wxString &, int, int, wxTreeItemData *)");
		}
		wxTreeItemId stack_lret = self->AddRoot(text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::AppendItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int image=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int selImage=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxTreeItemData* data=luatop>5 ? dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,6)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *)");
		}
		wxTreeItemId stack_lret = self->AppendItem(parent, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::AssignImageList(wxImageList *)");
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::AssignStateImageList(wxImageList * imageList)
	static int _bind_AssignStateImageList(lua_State *L) {
		if (!_lg_typecheck_AssignStateImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::AssignStateImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::AssignStateImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::AssignStateImageList(wxImageList *)");
		}
		self->AssignStateImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::Collapse(const wxTreeItemId & item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Collapse(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Collapse(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Collapse function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Collapse(const wxTreeItemId &)");
		}
		self->Collapse(item);

		return 0;
	}

	// void wxTreeCtrl::CollapseAll()
	static int _bind_CollapseAll(lua_State *L) {
		if (!_lg_typecheck_CollapseAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAll() function, expected prototype:\nvoid wxTreeCtrl::CollapseAll()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAll()");
		}
		self->CollapseAll();

		return 0;
	}

	// void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item)
	static int _bind_CollapseAllChildren(lua_State *L) {
		if (!_lg_typecheck_CollapseAllChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::CollapseAllChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId &)");
		}
		self->CollapseAllChildren(item);

		return 0;
	}

	// void wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item)
	static int _bind_CollapseAndReset(lua_State *L) {
		if (!_lg_typecheck_CollapseAndReset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::CollapseAndReset function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAndReset(const wxTreeItemId &)");
		}
		self->CollapseAndReset(item);

		return 0;
	}

	// bool wxTreeCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nbool wxTreeCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxTR_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::Delete(const wxTreeItemId & item)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Delete(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Delete(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Delete function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Delete(const wxTreeItemId &)");
		}
		self->Delete(item);

		return 0;
	}

	// void wxTreeCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::DeleteAllItems() function, expected prototype:\nvoid wxTreeCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxTreeCtrl::DeleteChildren(const wxTreeItemId & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::DeleteChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::DeleteChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::DeleteChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::DeleteChildren(const wxTreeItemId &)");
		}
		self->DeleteChildren(item);

		return 0;
	}

	// wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))
	static int _bind_EditLabel(lua_State *L) {
		if (!_lg_typecheck_EditLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl )) function, expected prototype:\nwxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 96106697\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxClassInfo* textCtrlClass=luatop>2 ? (Luna< wxClassInfo >::check(L,3)) : (wxClassInfo*)wxCLASSINFO ( wxTextCtrl );

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId &, wxClassInfo *)");
		}
		wxTextCtrl * lret = self->EditLabel(item, textCtrlClass);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)
	static int _bind_EndEditLabel(lua_State *L) {
		if (!_lg_typecheck_EndEditLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false) function, expected prototype:\nvoid wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EndEditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool discardChanges=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::EndEditLabel(const wxTreeItemId &, bool)");
		}
		self->EndEditLabel(item, discardChanges);

		return 0;
	}

	// void wxTreeCtrl::EnsureVisible(const wxTreeItemId & item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::EnsureVisible(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::EnsureVisible(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EnsureVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::EnsureVisible(const wxTreeItemId &)");
		}
		self->EnsureVisible(item);

		return 0;
	}

	// void wxTreeCtrl::Expand(const wxTreeItemId & item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Expand(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Expand(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Expand function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Expand(const wxTreeItemId &)");
		}
		self->Expand(item);

		return 0;
	}

	// void wxTreeCtrl::ExpandAll()
	static int _bind_ExpandAll(lua_State *L) {
		if (!_lg_typecheck_ExpandAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ExpandAll() function, expected prototype:\nvoid wxTreeCtrl::ExpandAll()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ExpandAll()");
		}
		self->ExpandAll();

		return 0;
	}

	// void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item)
	static int _bind_ExpandAllChildren(lua_State *L) {
		if (!_lg_typecheck_ExpandAllChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ExpandAllChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId &)");
		}
		self->ExpandAllChildren(item);

		return 0;
	}

	// bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const
	static int _bind_GetBoundingRect(lua_State *L) {
		if (!_lg_typecheck_GetBoundingRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const function, expected prototype:\nbool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetBoundingRect function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxTreeCtrl::GetBoundingRect function");
		}
		wxRect & rect=*rect_ptr;
		bool textOnly=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId &, wxRect &, bool) const");
		}
		bool lret = self->GetBoundingRect(item, rect, textOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const
	static int _bind_GetChildrenCount(lua_State *L) {
		if (!_lg_typecheck_GetChildrenCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const function, expected prototype:\nsize_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetChildrenCount function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool recursively=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId &, bool) const");
		}
		size_t lret = self->GetChildrenCount(item, recursively);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTreeCtrl::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::GetCount() const function, expected prototype:\nunsigned int wxTreeCtrl::GetCount() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxTreeCtrl::GetEditControl() const
	static int _bind_GetEditControl(lua_State *L) {
		if (!_lg_typecheck_GetEditControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::GetEditControl() const function, expected prototype:\nwxTextCtrl * wxTreeCtrl::GetEditControl() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::GetEditControl() const");
		}
		wxTextCtrl * lret = self->GetEditControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_GetFirstChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetFirstChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::GetFirstChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId &, wxTreeItemIdValue &) const");
		}
		wxTreeItemId stack_lret = self->GetFirstChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const
	static int _bind_GetFirstVisibleItem(lua_State *L) {
		if (!_lg_typecheck_GetFirstVisibleItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const");
		}
		wxTreeItemId stack_lret = self->GetFirstVisibleItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFocusedItem() const
	static int _bind_GetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_GetFocusedItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFocusedItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFocusedItem() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFocusedItem() const");
		}
		wxTreeItemId stack_lret = self->GetFocusedItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::ClearFocusedItem()
	static int _bind_ClearFocusedItem(lua_State *L) {
		if (!_lg_typecheck_ClearFocusedItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ClearFocusedItem() function, expected prototype:\nvoid wxTreeCtrl::ClearFocusedItem()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ClearFocusedItem()");
		}
		self->ClearFocusedItem();

		return 0;
	}

	// void wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item)
	static int _bind_SetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_SetFocusedItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetFocusedItem function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetFocusedItem(const wxTreeItemId &)");
		}
		self->SetFocusedItem(item);

		return 0;
	}

	// wxImageList * wxTreeCtrl::GetImageList() const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxTreeCtrl::GetImageList() const function, expected prototype:\nwxImageList * wxTreeCtrl::GetImageList() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxTreeCtrl::GetImageList() const");
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxTreeCtrl::GetIndent() const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::GetIndent() const function, expected prototype:\nunsigned int wxTreeCtrl::GetIndent() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::GetIndent() const");
		}
		unsigned int lret = self->GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const
	static int _bind_GetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetItemBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId &) const");
		}
		wxColour stack_lret = self->GetItemBackgroundColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId &) const");
		}
		wxTreeItemData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemData >::push(L,lret,false);

		return 1;
	}

	// wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const
	static int _bind_GetItemFont(lua_State *L) {
		if (!_lg_typecheck_GetItemFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const function, expected prototype:\nwxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId &) const");
		}
		wxFont stack_lret = self->GetItemFont(item);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// int wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = wxTreeItemIcon_Normal) const
	static int _bind_GetItemImage(lua_State *L) {
		if (!_lg_typecheck_GetItemImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = wxTreeItemIcon_Normal) const function, expected prototype:\nint wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = wxTreeItemIcon_Normal) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIcon which=luatop>2 ? (wxTreeItemIcon)lua_tointeger(L,3) : wxTreeItemIcon_Normal;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::GetItemImage(const wxTreeItemId &, wxTreeItemIcon) const");
		}
		int lret = self->GetItemImage(item, which);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const
	static int _bind_GetItemParent(lua_State *L) {
		if (!_lg_typecheck_GetItemParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemParent function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetItemParent(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// int wxTreeCtrl::GetItemState(const wxTreeItemId & item) const
	static int _bind_GetItemState(lua_State *L) {
		if (!_lg_typecheck_GetItemState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::GetItemState(const wxTreeItemId & item) const function, expected prototype:\nint wxTreeCtrl::GetItemState(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemState function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::GetItemState(const wxTreeItemId &) const");
		}
		int lret = self->GetItemState(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const function, expected prototype:\nwxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::GetItemText(const wxTreeItemId &) const");
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const
	static int _bind_GetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_GetItemTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId &) const");
		}
		wxColour stack_lret = self->GetItemTextColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const
	static int _bind_GetLastChild(lua_State *L) {
		if (!_lg_typecheck_GetLastChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetLastChild function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetLastChild(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_GetNextChild(lua_State *L) {
		if (!_lg_typecheck_GetNextChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::GetNextChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId &, wxTreeItemIdValue &) const");
		}
		wxTreeItemId stack_lret = self->GetNextChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetNextSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const
	static int _bind_GetNextVisible(lua_State *L) {
		if (!_lg_typecheck_GetNextVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetNextVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const
	static int _bind_GetPrevSibling(lua_State *L) {
		if (!_lg_typecheck_GetPrevSibling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetPrevSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetPrevSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const
	static int _bind_GetPrevVisible(lua_State *L) {
		if (!_lg_typecheck_GetPrevVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetPrevVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId &) const");
		}
		wxTreeItemId stack_lret = self->GetPrevVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeCtrl::GetQuickBestSize() const
	static int _bind_GetQuickBestSize(lua_State *L) {
		if (!_lg_typecheck_GetQuickBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::GetQuickBestSize() const function, expected prototype:\nbool wxTreeCtrl::GetQuickBestSize() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::GetQuickBestSize() const");
		}
		bool lret = self->GetQuickBestSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetRootItem() const
	static int _bind_GetRootItem(lua_State *L) {
		if (!_lg_typecheck_GetRootItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetRootItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetRootItem() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetRootItem() const");
		}
		wxTreeItemId stack_lret = self->GetRootItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetSelection() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetSelection() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetSelection() const");
		}
		wxTreeItemId stack_lret = self->GetSelection();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const function, expected prototype:\nsize_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const\nClass arguments details:\narg 1 ID = 99349677\n");
		}

		wxArrayTreeItemIds* selection_ptr=(Luna< wxArrayTreeItemIds >::check(L,2));
		if( !selection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selection in wxTreeCtrl::GetSelections function");
		}
		wxArrayTreeItemIds & selection=*selection_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds &) const");
		}
		size_t lret = self->GetSelections(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImageList * wxTreeCtrl::GetStateImageList() const
	static int _bind_GetStateImageList(lua_State *L) {
		if (!_lg_typecheck_GetStateImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxTreeCtrl::GetStateImageList() const function, expected prototype:\nwxImageList * wxTreeCtrl::GetStateImageList() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxTreeCtrl::GetStateImageList() const");
		}
		wxImageList * lret = self->GetStateImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxTreeCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		int flags=(int)lua_tointeger(L,3);

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::HitTest(const wxPoint &, int &) const");
		}
		wxTreeItemId stack_lret = self->HitTest(point, flags);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_InsertItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 28400299\narg 3 ID = 88196105\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		const wxTreeItemId* previous_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int image=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int selImage=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		wxTreeItemData* data=luatop>6 ? dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,7)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId &, const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *)");
		}
		wxTreeItemId stack_lret = self->InsertItem(parent, previous, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_InsertItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 3 ID = 88196105\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		size_t before=(size_t)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int image=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int selImage=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		wxTreeItemData* data=luatop>6 ? dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,7)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId &, size_t, const wxString &, int, int, wxTreeItemData *)");
		}
		wxTreeItemId stack_lret = self->InsertItem(parent, before, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTreeCtrl::InsertItem
	static int _bind_InsertItem(lua_State *L) {
		if (_lg_typecheck_InsertItem_overload_1(L)) return _bind_InsertItem_overload_1(L);
		if (_lg_typecheck_InsertItem_overload_2(L)) return _bind_InsertItem_overload_2(L);

		luaL_error(L, "error in function InsertItem, cannot match any of the overloads for function InsertItem:\n  InsertItem(const wxTreeItemId &, const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *)\n  InsertItem(const wxTreeItemId &, size_t, const wxString &, int, int, wxTreeItemData *)\n");
		return 0;
	}

	// bool wxTreeCtrl::IsBold(const wxTreeItemId & item) const
	static int _bind_IsBold(lua_State *L) {
		if (!_lg_typecheck_IsBold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsBold(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsBold(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsBold function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsBold(const wxTreeItemId &) const");
		}
		bool lret = self->IsBold(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsEmpty() const function, expected prototype:\nbool wxTreeCtrl::IsEmpty() const\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsExpanded function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsExpanded(const wxTreeItemId &) const");
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsSelected function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsSelected(const wxTreeItemId &) const");
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsVisible(const wxTreeItemId &) const");
		}
		bool lret = self->IsVisible(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const
	static int _bind_ItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_ItemHasChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId &) const");
		}
		bool lret = self->ItemHasChildren(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)
	static int _bind_OnCompareItems(lua_State *L) {
		if (!_lg_typecheck_OnCompareItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2) function, expected prototype:\nint wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 28400299\n");
		}

		const wxTreeItemId* item1_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxTreeCtrl::OnCompareItems function");
		}
		const wxTreeItemId & item1=*item1_ptr;
		const wxTreeItemId* item2_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxTreeCtrl::OnCompareItems function");
		}
		const wxTreeItemId & item2=*item2_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::OnCompareItems(const wxTreeItemId &, const wxTreeItemId &)");
		}
		int lret = self->OnCompareItems(item1, item2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::PrependItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int image=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int selImage=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxTreeItemData* data=luatop>5 ? dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,6)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *)");
		}
		wxTreeItemId stack_lret = self->PrependItem(parent, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::ScrollTo(const wxTreeItemId & item)
	static int _bind_ScrollTo(lua_State *L) {
		if (!_lg_typecheck_ScrollTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ScrollTo(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ScrollTo(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ScrollTo function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ScrollTo(const wxTreeItemId &)");
		}
		self->ScrollTo(item);

		return 0;
	}

	// void wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true)
	static int _bind_SelectItem(lua_State *L) {
		if (!_lg_typecheck_SelectItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true) function, expected prototype:\nvoid wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SelectItem function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SelectItem(const wxTreeItemId &, bool)");
		}
		self->SelectItem(item, select);

		return 0;
	}

	// void wxTreeCtrl::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetImageList(wxImageList *)");
		}
		self->SetImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::SetIndent(unsigned int indent)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetIndent(unsigned int indent) function, expected prototype:\nvoid wxTreeCtrl::SetIndent(unsigned int indent)\nClass arguments details:\n");
		}

		unsigned int indent=(unsigned int)lua_tointeger(L,2);

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetIndent(unsigned int)");
		}
		self->SetIndent(indent);

		return 0;
	}

	// void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_SetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetItemBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::SetItemBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId &, const wxColour &)");
		}
		self->SetItemBackgroundColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true)
	static int _bind_SetItemBold(lua_State *L) {
		if (!_lg_typecheck_SetItemBold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemBold function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool bold=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemBold(const wxTreeItemId &, bool)");
		}
		self->SetItemBold(item, bold);

		return 0;
	}

	// void wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data) function, expected prototype:\nvoid wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 50457573\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemData* data=dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,3));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemData(const wxTreeItemId &, wxTreeItemData *)");
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)
	static int _bind_SetItemDropHighlight(lua_State *L) {
		if (!_lg_typecheck_SetItemDropHighlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemDropHighlight function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool highlight=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId &, bool)");
		}
		self->SetItemDropHighlight(item, highlight);

		return 0;
	}

	// void wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font)
	static int _bind_SetItemFont(lua_State *L) {
		if (!_lg_typecheck_SetItemFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font) function, expected prototype:\nvoid wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTreeCtrl::SetItemFont function");
		}
		const wxFont & font=*font_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemFont(const wxTreeItemId &, const wxFont &)");
		}
		self->SetItemFont(item, font);

		return 0;
	}

	// void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)
	static int _bind_SetItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_SetItemHasChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool hasChildren=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId &, bool)");
		}
		self->SetItemHasChildren(item, hasChildren);

		return 0;
	}

	// void wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = wxTreeItemIcon_Normal)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = wxTreeItemIcon_Normal) function, expected prototype:\nvoid wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = wxTreeItemIcon_Normal)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		int image=(int)lua_tointeger(L,3);
		wxTreeItemIcon which=luatop>3 ? (wxTreeItemIcon)lua_tointeger(L,4) : wxTreeItemIcon_Normal;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemImage(const wxTreeItemId &, int, wxTreeItemIcon)");
		}
		self->SetItemImage(item, image, which);

		return 0;
	}

	// void wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state)
	static int _bind_SetItemState(lua_State *L) {
		if (!_lg_typecheck_SetItemState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state) function, expected prototype:\nvoid wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemState function");
		}
		const wxTreeItemId & item=*item_ptr;
		int state=(int)lua_tointeger(L,3);

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemState(const wxTreeItemId &, int)");
		}
		self->SetItemState(item, state);

		return 0;
	}

	// void wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text) function, expected prototype:\nvoid wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemText(const wxTreeItemId &, const wxString &)");
		}
		self->SetItemText(item, text);

		return 0;
	}

	// void wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_SetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_SetItemTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::SetItemTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemTextColour(const wxTreeItemId &, const wxColour &)");
		}
		self->SetItemTextColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::SetQuickBestSize(bool quickBestSize)
	static int _bind_SetQuickBestSize(lua_State *L) {
		if (!_lg_typecheck_SetQuickBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetQuickBestSize(bool quickBestSize) function, expected prototype:\nvoid wxTreeCtrl::SetQuickBestSize(bool quickBestSize)\nClass arguments details:\n");
		}

		bool quickBestSize=(bool)(lua_toboolean(L,2)==1);

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetQuickBestSize(bool)");
		}
		self->SetQuickBestSize(quickBestSize);

		return 0;
	}

	// void wxTreeCtrl::SetStateImageList(wxImageList * imageList)
	static int _bind_SetStateImageList(lua_State *L) {
		if (!_lg_typecheck_SetStateImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetStateImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::SetStateImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetStateImageList(wxImageList *)");
		}
		self->SetStateImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::SetWindowStyle(long styles)
	static int _bind_SetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetWindowStyle(long styles) function, expected prototype:\nvoid wxTreeCtrl::SetWindowStyle(long styles)\nClass arguments details:\n");
		}

		long styles=(long)lua_tointeger(L,2);

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetWindowStyle(long)");
		}
		self->SetWindowStyle(styles);

		return 0;
	}

	// void wxTreeCtrl::SortChildren(const wxTreeItemId & item)
	static int _bind_SortChildren(lua_State *L) {
		if (!_lg_typecheck_SortChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SortChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::SortChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SortChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SortChildren(const wxTreeItemId &)");
		}
		self->SortChildren(item);

		return 0;
	}

	// void wxTreeCtrl::Toggle(const wxTreeItemId & item)
	static int _bind_Toggle(lua_State *L) {
		if (!_lg_typecheck_Toggle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Toggle(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Toggle(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Toggle function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Toggle(const wxTreeItemId &)");
		}
		self->Toggle(item);

		return 0;
	}

	// void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item)
	static int _bind_ToggleItemSelection(lua_State *L) {
		if (!_lg_typecheck_ToggleItemSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ToggleItemSelection function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId &)");
		}
		self->ToggleItemSelection(item);

		return 0;
	}

	// void wxTreeCtrl::Unselect()
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Unselect() function, expected prototype:\nvoid wxTreeCtrl::Unselect()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Unselect()");
		}
		self->Unselect();

		return 0;
	}

	// void wxTreeCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::UnselectAll() function, expected prototype:\nvoid wxTreeCtrl::UnselectAll()\nClass arguments details:\n");
		}


		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::UnselectAll()");
		}
		self->UnselectAll();

		return 0;
	}

	// void wxTreeCtrl::UnselectItem(const wxTreeItemId & item)
	static int _bind_UnselectItem(lua_State *L) {
		if (!_lg_typecheck_UnselectItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::UnselectItem(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::UnselectItem(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::UnselectItem function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::UnselectItem(const wxTreeItemId &)");
		}
		self->UnselectItem(item);

		return 0;
	}

	// void wxTreeCtrl::SelectChildren(const wxTreeItemId & parent)
	static int _bind_SelectChildren(lua_State *L) {
		if (!_lg_typecheck_SelectChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SelectChildren(const wxTreeItemId & parent) function, expected prototype:\nvoid wxTreeCtrl::SelectChildren(const wxTreeItemId & parent)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::SelectChildren function");
		}
		const wxTreeItemId & parent=*parent_ptr;

		wxTreeCtrl* self=dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SelectChildren(const wxTreeItemId &)");
		}
		self->SelectChildren(parent);

		return 0;
	}


	// Operator binds:

};

wxTreeCtrl* LunaTraits< wxTreeCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeCtrl::_bind_ctor(L);
}

void LunaTraits< wxTreeCtrl >::_bind_dtor(wxTreeCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTreeCtrl >::className[] = "wxTreeCtrl";
const char LunaTraits< wxTreeCtrl >::fullName[] = "wxTreeCtrl";
const char LunaTraits< wxTreeCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTreeCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxTreeCtrl >::hash = 16916765;
const int LunaTraits< wxTreeCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTreeCtrl >::methods[] = {
	{"AddRoot", &luna_wrapper_wxTreeCtrl::_bind_AddRoot},
	{"AppendItem", &luna_wrapper_wxTreeCtrl::_bind_AppendItem},
	{"AssignImageList", &luna_wrapper_wxTreeCtrl::_bind_AssignImageList},
	{"AssignStateImageList", &luna_wrapper_wxTreeCtrl::_bind_AssignStateImageList},
	{"Collapse", &luna_wrapper_wxTreeCtrl::_bind_Collapse},
	{"CollapseAll", &luna_wrapper_wxTreeCtrl::_bind_CollapseAll},
	{"CollapseAllChildren", &luna_wrapper_wxTreeCtrl::_bind_CollapseAllChildren},
	{"CollapseAndReset", &luna_wrapper_wxTreeCtrl::_bind_CollapseAndReset},
	{"Create", &luna_wrapper_wxTreeCtrl::_bind_Create},
	{"Delete", &luna_wrapper_wxTreeCtrl::_bind_Delete},
	{"DeleteAllItems", &luna_wrapper_wxTreeCtrl::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxTreeCtrl::_bind_DeleteChildren},
	{"EditLabel", &luna_wrapper_wxTreeCtrl::_bind_EditLabel},
	{"EndEditLabel", &luna_wrapper_wxTreeCtrl::_bind_EndEditLabel},
	{"EnsureVisible", &luna_wrapper_wxTreeCtrl::_bind_EnsureVisible},
	{"Expand", &luna_wrapper_wxTreeCtrl::_bind_Expand},
	{"ExpandAll", &luna_wrapper_wxTreeCtrl::_bind_ExpandAll},
	{"ExpandAllChildren", &luna_wrapper_wxTreeCtrl::_bind_ExpandAllChildren},
	{"GetBoundingRect", &luna_wrapper_wxTreeCtrl::_bind_GetBoundingRect},
	{"GetChildrenCount", &luna_wrapper_wxTreeCtrl::_bind_GetChildrenCount},
	{"GetCount", &luna_wrapper_wxTreeCtrl::_bind_GetCount},
	{"GetEditControl", &luna_wrapper_wxTreeCtrl::_bind_GetEditControl},
	{"GetFirstChild", &luna_wrapper_wxTreeCtrl::_bind_GetFirstChild},
	{"GetFirstVisibleItem", &luna_wrapper_wxTreeCtrl::_bind_GetFirstVisibleItem},
	{"GetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_GetFocusedItem},
	{"ClearFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_ClearFocusedItem},
	{"SetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_SetFocusedItem},
	{"GetImageList", &luna_wrapper_wxTreeCtrl::_bind_GetImageList},
	{"GetIndent", &luna_wrapper_wxTreeCtrl::_bind_GetIndent},
	{"GetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_GetItemBackgroundColour},
	{"GetItemData", &luna_wrapper_wxTreeCtrl::_bind_GetItemData},
	{"GetItemFont", &luna_wrapper_wxTreeCtrl::_bind_GetItemFont},
	{"GetItemImage", &luna_wrapper_wxTreeCtrl::_bind_GetItemImage},
	{"GetItemParent", &luna_wrapper_wxTreeCtrl::_bind_GetItemParent},
	{"GetItemState", &luna_wrapper_wxTreeCtrl::_bind_GetItemState},
	{"GetItemText", &luna_wrapper_wxTreeCtrl::_bind_GetItemText},
	{"GetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_GetItemTextColour},
	{"GetLastChild", &luna_wrapper_wxTreeCtrl::_bind_GetLastChild},
	{"GetNextChild", &luna_wrapper_wxTreeCtrl::_bind_GetNextChild},
	{"GetNextSibling", &luna_wrapper_wxTreeCtrl::_bind_GetNextSibling},
	{"GetNextVisible", &luna_wrapper_wxTreeCtrl::_bind_GetNextVisible},
	{"GetPrevSibling", &luna_wrapper_wxTreeCtrl::_bind_GetPrevSibling},
	{"GetPrevVisible", &luna_wrapper_wxTreeCtrl::_bind_GetPrevVisible},
	{"GetQuickBestSize", &luna_wrapper_wxTreeCtrl::_bind_GetQuickBestSize},
	{"GetRootItem", &luna_wrapper_wxTreeCtrl::_bind_GetRootItem},
	{"GetSelection", &luna_wrapper_wxTreeCtrl::_bind_GetSelection},
	{"GetSelections", &luna_wrapper_wxTreeCtrl::_bind_GetSelections},
	{"GetStateImageList", &luna_wrapper_wxTreeCtrl::_bind_GetStateImageList},
	{"HitTest", &luna_wrapper_wxTreeCtrl::_bind_HitTest},
	{"InsertItem", &luna_wrapper_wxTreeCtrl::_bind_InsertItem},
	{"IsBold", &luna_wrapper_wxTreeCtrl::_bind_IsBold},
	{"IsEmpty", &luna_wrapper_wxTreeCtrl::_bind_IsEmpty},
	{"IsExpanded", &luna_wrapper_wxTreeCtrl::_bind_IsExpanded},
	{"IsSelected", &luna_wrapper_wxTreeCtrl::_bind_IsSelected},
	{"IsVisible", &luna_wrapper_wxTreeCtrl::_bind_IsVisible},
	{"ItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_ItemHasChildren},
	{"OnCompareItems", &luna_wrapper_wxTreeCtrl::_bind_OnCompareItems},
	{"PrependItem", &luna_wrapper_wxTreeCtrl::_bind_PrependItem},
	{"ScrollTo", &luna_wrapper_wxTreeCtrl::_bind_ScrollTo},
	{"SelectItem", &luna_wrapper_wxTreeCtrl::_bind_SelectItem},
	{"SetImageList", &luna_wrapper_wxTreeCtrl::_bind_SetImageList},
	{"SetIndent", &luna_wrapper_wxTreeCtrl::_bind_SetIndent},
	{"SetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_SetItemBackgroundColour},
	{"SetItemBold", &luna_wrapper_wxTreeCtrl::_bind_SetItemBold},
	{"SetItemData", &luna_wrapper_wxTreeCtrl::_bind_SetItemData},
	{"SetItemDropHighlight", &luna_wrapper_wxTreeCtrl::_bind_SetItemDropHighlight},
	{"SetItemFont", &luna_wrapper_wxTreeCtrl::_bind_SetItemFont},
	{"SetItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_SetItemHasChildren},
	{"SetItemImage", &luna_wrapper_wxTreeCtrl::_bind_SetItemImage},
	{"SetItemState", &luna_wrapper_wxTreeCtrl::_bind_SetItemState},
	{"SetItemText", &luna_wrapper_wxTreeCtrl::_bind_SetItemText},
	{"SetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_SetItemTextColour},
	{"SetQuickBestSize", &luna_wrapper_wxTreeCtrl::_bind_SetQuickBestSize},
	{"SetStateImageList", &luna_wrapper_wxTreeCtrl::_bind_SetStateImageList},
	{"SetWindowStyle", &luna_wrapper_wxTreeCtrl::_bind_SetWindowStyle},
	{"SortChildren", &luna_wrapper_wxTreeCtrl::_bind_SortChildren},
	{"Toggle", &luna_wrapper_wxTreeCtrl::_bind_Toggle},
	{"ToggleItemSelection", &luna_wrapper_wxTreeCtrl::_bind_ToggleItemSelection},
	{"Unselect", &luna_wrapper_wxTreeCtrl::_bind_Unselect},
	{"UnselectAll", &luna_wrapper_wxTreeCtrl::_bind_UnselectAll},
	{"UnselectItem", &luna_wrapper_wxTreeCtrl::_bind_UnselectItem},
	{"SelectChildren", &luna_wrapper_wxTreeCtrl::_bind_SelectChildren},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeCtrl >::enumValues[] = {
	{0,0}
};


