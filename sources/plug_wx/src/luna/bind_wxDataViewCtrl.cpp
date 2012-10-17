#include <plug_common.h>

class luna_wrapper_wxDataViewCtrl {
public:
	typedef Luna< wxDataViewCtrl > luna_t;

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
		wxDataViewCtrl* ptr= dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewCtrl >::push(L,ptr,false);
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
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendBitmapColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendBitmapColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendDateColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendDateColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendIconTextColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendIconTextColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendProgressColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendProgressColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendToggleColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendToggleColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssociateModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
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

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandAncestors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExpanderColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedItemsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetExpanderColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCurrentItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartEditor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewCtrl::wxDataViewCtrl()
	static wxDataViewCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl() function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl()\nClass arguments details:\n");
		}


		return new wxDataViewCtrl();
	}

	// wxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)
	static wxDataViewCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr) function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxDataViewCtrl(parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxDataViewCtrl::wxDataViewCtrl
	static wxDataViewCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewCtrl, cannot match any of the overloads for function wxDataViewCtrl:\n  wxDataViewCtrl()\n  wxDataViewCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::AppendColumn(wxDataViewColumn *)");
		}
		bool lret = self->AppendColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col)
	static int _bind_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_PrependColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::PrependColumn(wxDataViewColumn *)");
		}
		bool lret = self->PrependColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col)\nClass arguments details:\narg 2 ID = 185523\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,3));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::InsertColumn(unsigned int, wxDataViewColumn *)");
		}
		bool lret = self->InsertColumn(pos, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendBitmapColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendBitmapColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendBitmapColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendBitmapColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendBitmapColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendBitmapColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendBitmapColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendBitmapColumn
	static int _bind_AppendBitmapColumn(lua_State *L) {
		if (_lg_typecheck_AppendBitmapColumn_overload_1(L)) return _bind_AppendBitmapColumn_overload_1(L);
		if (_lg_typecheck_AppendBitmapColumn_overload_2(L)) return _bind_AppendBitmapColumn_overload_2(L);

		luaL_error(L, "error in function AppendBitmapColumn, cannot match any of the overloads for function AppendBitmapColumn:\n  AppendBitmapColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendBitmapColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendDateColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendDateColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendDateColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendDateColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendDateColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendDateColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendDateColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendDateColumn
	static int _bind_AppendDateColumn(lua_State *L) {
		if (_lg_typecheck_AppendDateColumn_overload_1(L)) return _bind_AppendDateColumn_overload_1(L);
		if (_lg_typecheck_AppendDateColumn_overload_2(L)) return _bind_AppendDateColumn_overload_2(L);

		luaL_error(L, "error in function AppendDateColumn, cannot match any of the overloads for function AppendDateColumn:\n  AppendDateColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendDateColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendIconTextColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendIconTextColumn
	static int _bind_AppendIconTextColumn(lua_State *L) {
		if (_lg_typecheck_AppendIconTextColumn_overload_1(L)) return _bind_AppendIconTextColumn_overload_1(L);
		if (_lg_typecheck_AppendIconTextColumn_overload_2(L)) return _bind_AppendIconTextColumn_overload_2(L);

		luaL_error(L, "error in function AppendIconTextColumn, cannot match any of the overloads for function AppendIconTextColumn:\n  AppendIconTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendIconTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : 80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendProgressColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : 80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendProgressColumn
	static int _bind_AppendProgressColumn(lua_State *L) {
		if (_lg_typecheck_AppendProgressColumn_overload_1(L)) return _bind_AppendProgressColumn_overload_1(L);
		if (_lg_typecheck_AppendProgressColumn_overload_2(L)) return _bind_AppendProgressColumn_overload_2(L);

		luaL_error(L, "error in function AppendProgressColumn, cannot match any of the overloads for function AppendProgressColumn:\n  AppendProgressColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendProgressColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = wxALIGN_NOT, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendTextColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendTextColumn
	static int _bind_AppendTextColumn(lua_State *L) {
		if (_lg_typecheck_AppendTextColumn_overload_1(L)) return _bind_AppendTextColumn_overload_1(L);
		if (_lg_typecheck_AppendTextColumn_overload_2(L)) return _bind_AppendTextColumn_overload_2(L);

		luaL_error(L, "error in function AppendTextColumn, cannot match any of the overloads for function AppendTextColumn:\n  AppendTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : 30;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = wxALIGN_CENTER, int flags = wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendToggleColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : 30;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendToggleColumn
	static int _bind_AppendToggleColumn(lua_State *L) {
		if (_lg_typecheck_AppendToggleColumn_overload_1(L)) return _bind_AppendToggleColumn_overload_1(L);
		if (_lg_typecheck_AppendToggleColumn_overload_2(L)) return _bind_AppendToggleColumn_overload_2(L);

		luaL_error(L, "error in function AppendToggleColumn, cannot match any of the overloads for function AppendToggleColumn:\n  AppendToggleColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendToggleColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)
	static int _bind_AssociateModel(lua_State *L) {
		if (!_lg_typecheck_AssociateModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model) function, expected prototype:\nbool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n");
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::AssociateModel(wxDataViewModel *)");
		}
		bool lret = self->AssociateModel(model);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::ClearColumns()
	static int _bind_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_ClearColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::ClearColumns() function, expected prototype:\nbool wxDataViewCtrl::ClearColumns()\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::ClearColumns()");
		}
		bool lret = self->ClearColumns();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::Collapse(const wxDataViewItem & item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Collapse(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Collapse(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Collapse function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Collapse(const wxDataViewItem &)");
		}
		self->Collapse(item);

		return 0;
	}

	// bool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr) function, expected prototype:\nbool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn *)");
		}
		bool lret = self->DeleteColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)
	static int _bind_EnableDragSource(lua_State *L) {
		if (!_lg_typecheck_EnableDragSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::EnableDragSource function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::EnableDragSource(const wxDataFormat &)");
		}
		bool lret = self->EnableDragSource(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)
	static int _bind_EnableDropTarget(lua_State *L) {
		if (!_lg_typecheck_EnableDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::EnableDropTarget function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat &)");
		}
		bool lret = self->EnableDropTarget(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) function, expected prototype:\nvoid wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::EnsureVisible function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* column=luatop>2 ? dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::EnsureVisible(const wxDataViewItem &, const wxDataViewColumn *)");
		}
		self->EnsureVisible(item, column);

		return 0;
	}

	// void wxDataViewCtrl::Expand(const wxDataViewItem & item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Expand(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Expand(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Expand function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Expand(const wxDataViewItem &)");
		}
		self->Expand(item);

		return 0;
	}

	// void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)
	static int _bind_ExpandAncestors(lua_State *L) {
		if (!_lg_typecheck_ExpandAncestors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::ExpandAncestors function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem &)");
		}
		self->ExpandAncestors(item);

		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int) const");
		}
		wxDataViewColumn * lret = self->GetColumn(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxDataViewCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewCtrl::GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewCtrl::GetColumnCount() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewCtrl::GetColumnCount() const");
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const
	static int _bind_GetColumnPosition(lua_State *L) {
		if (!_lg_typecheck_GetColumnPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const function, expected prototype:\nint wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxDataViewColumn* column=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn *) const");
		}
		int lret = self->GetColumnPosition(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const
	static int _bind_GetExpanderColumn(lua_State *L) {
		if (!_lg_typecheck_GetExpanderColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const");
		}
		wxDataViewColumn * lret = self->GetExpanderColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewItem wxDataViewCtrl::GetCurrentItem() const
	static int _bind_GetCurrentItem(lua_State *L) {
		if (!_lg_typecheck_GetCurrentItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewCtrl::GetCurrentItem() const function, expected prototype:\nwxDataViewItem wxDataViewCtrl::GetCurrentItem() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewCtrl::GetCurrentItem() const");
		}
		wxDataViewItem stack_lret = self->GetCurrentItem();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::GetIndent() const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetIndent() const function, expected prototype:\nint wxDataViewCtrl::GetIndent() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetIndent() const");
		}
		int lret = self->GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const function, expected prototype:\nwxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::GetItemRect function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* col=luatop>2 ? dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem &, const wxDataViewColumn *) const");
		}
		wxRect stack_lret = self->GetItemRect(item, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxDataViewModel * wxDataViewCtrl::GetModel()
	static int _bind_GetModel(lua_State *L) {
		if (!_lg_typecheck_GetModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewCtrl::GetModel() function, expected prototype:\nwxDataViewModel * wxDataViewCtrl::GetModel()\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewCtrl::GetModel()");
		}
		wxDataViewModel * lret = self->GetModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewCtrl::GetSelectedItemsCount() const
	static int _bind_GetSelectedItemsCount(lua_State *L) {
		if (!_lg_typecheck_GetSelectedItemsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetSelectedItemsCount() const function, expected prototype:\nint wxDataViewCtrl::GetSelectedItemsCount() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetSelectedItemsCount() const");
		}
		int lret = self->GetSelectedItemsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewCtrl::GetSelection() const function, expected prototype:\nwxDataViewItem wxDataViewCtrl::GetSelection() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewCtrl::GetSelection() const");
		}
		wxDataViewItem stack_lret = self->GetSelection();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const function, expected prototype:\nint wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::GetSelections function");
		}
		wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetSelections(wxDataViewItemArray &) const");
		}
		int lret = self->GetSelections(sel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const
	static int _bind_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_GetSortingColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const");
		}
		wxDataViewColumn * lret = self->GetSortingColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewCtrl::HasSelection() const
	static int _bind_HasSelection(lua_State *L) {
		if (!_lg_typecheck_HasSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::HasSelection() const function, expected prototype:\nbool wxDataViewCtrl::HasSelection() const\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::HasSelection() const");
		}
		bool lret = self->HasSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const function, expected prototype:\nvoid wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 11709329\narg 3 ID = 185523\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::HitTest function");
		}
		wxDataViewItem & item=*item_ptr;
		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,4));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::HitTest(const wxPoint &, wxDataViewItem &, wxDataViewColumn *&) const");
		}
		self->HitTest(point, item, col);

		return 0;
	}

	// bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::IsExpanded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::IsExpanded(const wxDataViewItem &) const");
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::IsSelected function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::IsSelected(const wxDataViewItem &) const");
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::Select(const wxDataViewItem & item)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Select(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Select(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Select function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Select(const wxDataViewItem &)");
		}
		self->Select(item);

		return 0;
	}

	// void wxDataViewCtrl::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SelectAll() function, expected prototype:\nvoid wxDataViewCtrl::SelectAll()\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SelectAll()");
		}
		self->SelectAll();

		return 0;
	}

	// void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col)
	static int _bind_SetExpanderColumn(lua_State *L) {
		if (!_lg_typecheck_SetExpanderColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col) function, expected prototype:\nvoid wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn *)");
		}
		self->SetExpanderColumn(col);

		return 0;
	}

	// void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item)
	static int _bind_SetCurrentItem(lua_State *L) {
		if (!_lg_typecheck_SetCurrentItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::SetCurrentItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem &)");
		}
		self->SetCurrentItem(item);

		return 0;
	}

	// void wxDataViewCtrl::SetIndent(int indent)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetIndent(int indent) function, expected prototype:\nvoid wxDataViewCtrl::SetIndent(int indent)\nClass arguments details:\n");
		}

		int indent=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetIndent(int)");
		}
		self->SetIndent(indent);

		return 0;
	}

	// void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)
	static int _bind_SetSelections(lua_State *L) {
		if (!_lg_typecheck_SetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel) function, expected prototype:\nvoid wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		const wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::SetSelections function");
		}
		const wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetSelections(const wxDataViewItemArray &)");
		}
		self->SetSelections(sel);

		return 0;
	}

	// void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)
	static int _bind_StartEditor(lua_State *L) {
		if (!_lg_typecheck_StartEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column) function, expected prototype:\nvoid wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::StartEditor function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,3);

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::StartEditor(const wxDataViewItem &, unsigned int)");
		}
		self->StartEditor(item, column);

		return 0;
	}

	// void wxDataViewCtrl::Unselect(const wxDataViewItem & item)
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Unselect(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Unselect(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Unselect function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Unselect(const wxDataViewItem &)");
		}
		self->Unselect(item);

		return 0;
	}

	// void wxDataViewCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::UnselectAll() function, expected prototype:\nvoid wxDataViewCtrl::UnselectAll()\nClass arguments details:\n");
		}


		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::UnselectAll()");
		}
		self->UnselectAll();

		return 0;
	}

	// bool wxDataViewCtrl::SetRowHeight(int rowHeight)
	static int _bind_SetRowHeight(lua_State *L) {
		if (!_lg_typecheck_SetRowHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::SetRowHeight(int rowHeight) function, expected prototype:\nbool wxDataViewCtrl::SetRowHeight(int rowHeight)\nClass arguments details:\n");
		}

		int rowHeight=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::SetRowHeight(int)");
		}
		bool lret = self->SetRowHeight(rowHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewCtrl* LunaTraits< wxDataViewCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewCtrl::_bind_ctor(L);
}

void LunaTraits< wxDataViewCtrl >::_bind_dtor(wxDataViewCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewCtrl >::className[] = "wxDataViewCtrl";
const char LunaTraits< wxDataViewCtrl >::fullName[] = "wxDataViewCtrl";
const char LunaTraits< wxDataViewCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxDataViewCtrl >::hash = 11530985;
const int LunaTraits< wxDataViewCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDataViewCtrl >::methods[] = {
	{"AppendColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendColumn},
	{"PrependColumn", &luna_wrapper_wxDataViewCtrl::_bind_PrependColumn},
	{"InsertColumn", &luna_wrapper_wxDataViewCtrl::_bind_InsertColumn},
	{"AppendBitmapColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendBitmapColumn},
	{"AppendDateColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendDateColumn},
	{"AppendIconTextColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendIconTextColumn},
	{"AppendProgressColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendProgressColumn},
	{"AppendTextColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendTextColumn},
	{"AppendToggleColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendToggleColumn},
	{"AssociateModel", &luna_wrapper_wxDataViewCtrl::_bind_AssociateModel},
	{"ClearColumns", &luna_wrapper_wxDataViewCtrl::_bind_ClearColumns},
	{"Collapse", &luna_wrapper_wxDataViewCtrl::_bind_Collapse},
	{"Create", &luna_wrapper_wxDataViewCtrl::_bind_Create},
	{"DeleteColumn", &luna_wrapper_wxDataViewCtrl::_bind_DeleteColumn},
	{"EnableDragSource", &luna_wrapper_wxDataViewCtrl::_bind_EnableDragSource},
	{"EnableDropTarget", &luna_wrapper_wxDataViewCtrl::_bind_EnableDropTarget},
	{"EnsureVisible", &luna_wrapper_wxDataViewCtrl::_bind_EnsureVisible},
	{"Expand", &luna_wrapper_wxDataViewCtrl::_bind_Expand},
	{"ExpandAncestors", &luna_wrapper_wxDataViewCtrl::_bind_ExpandAncestors},
	{"GetColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetColumn},
	{"GetColumnCount", &luna_wrapper_wxDataViewCtrl::_bind_GetColumnCount},
	{"GetColumnPosition", &luna_wrapper_wxDataViewCtrl::_bind_GetColumnPosition},
	{"GetExpanderColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetExpanderColumn},
	{"GetCurrentItem", &luna_wrapper_wxDataViewCtrl::_bind_GetCurrentItem},
	{"GetIndent", &luna_wrapper_wxDataViewCtrl::_bind_GetIndent},
	{"GetItemRect", &luna_wrapper_wxDataViewCtrl::_bind_GetItemRect},
	{"GetModel", &luna_wrapper_wxDataViewCtrl::_bind_GetModel},
	{"GetSelectedItemsCount", &luna_wrapper_wxDataViewCtrl::_bind_GetSelectedItemsCount},
	{"GetSelection", &luna_wrapper_wxDataViewCtrl::_bind_GetSelection},
	{"GetSelections", &luna_wrapper_wxDataViewCtrl::_bind_GetSelections},
	{"GetSortingColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetSortingColumn},
	{"HasSelection", &luna_wrapper_wxDataViewCtrl::_bind_HasSelection},
	{"HitTest", &luna_wrapper_wxDataViewCtrl::_bind_HitTest},
	{"IsExpanded", &luna_wrapper_wxDataViewCtrl::_bind_IsExpanded},
	{"IsSelected", &luna_wrapper_wxDataViewCtrl::_bind_IsSelected},
	{"Select", &luna_wrapper_wxDataViewCtrl::_bind_Select},
	{"SelectAll", &luna_wrapper_wxDataViewCtrl::_bind_SelectAll},
	{"SetExpanderColumn", &luna_wrapper_wxDataViewCtrl::_bind_SetExpanderColumn},
	{"SetCurrentItem", &luna_wrapper_wxDataViewCtrl::_bind_SetCurrentItem},
	{"SetIndent", &luna_wrapper_wxDataViewCtrl::_bind_SetIndent},
	{"SetSelections", &luna_wrapper_wxDataViewCtrl::_bind_SetSelections},
	{"StartEditor", &luna_wrapper_wxDataViewCtrl::_bind_StartEditor},
	{"Unselect", &luna_wrapper_wxDataViewCtrl::_bind_Unselect},
	{"UnselectAll", &luna_wrapper_wxDataViewCtrl::_bind_UnselectAll},
	{"SetRowHeight", &luna_wrapper_wxDataViewCtrl::_bind_SetRowHeight},
	{"__eq", &luna_wrapper_wxDataViewCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewCtrl >::enumValues[] = {
	{0,0}
};


