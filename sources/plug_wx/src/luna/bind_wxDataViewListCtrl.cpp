#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewListCtrl.h>

class luna_wrapper_wxDataViewListCtrl {
public:
	typedef Luna< wxDataViewListCtrl > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
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
		//wxDataViewListCtrl* ptr= dynamic_cast< wxDataViewListCtrl* >(Luna< wxObject >::check(L,1));
		wxDataViewListCtrl* ptr= luna_caster< wxObject, wxDataViewListCtrl >::cast(Luna< wxObject >::check(L,1));
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
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,7))) ) return false;
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
		if( (lua_isnil(L,2)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2)) ) ) return false;
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
		if( (lua_isnil(L,3)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) ) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusRecursively(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCanFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocusFromKbd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AlwaysShowScrollbars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollThumb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsScrollbarAlwaysShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollPos(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClientToWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WindowToClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FitInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEffectiveMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBestVirtualSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowBorderSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SendSizeEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ClearBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldInheritColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Lower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Raise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HideWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsShownOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHelpTextAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93694316)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DragAcceptFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoUpdateWindowUI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasMultiplePages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InheritAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsRetained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsTopLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_MakeModal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnInternalIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RegisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnregisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateWindowUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Command(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AssociateModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableDragSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnsureVisible(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ExpandAncestors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelectedItemsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HitTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartEditor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
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

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
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
		const wxValidator* validator_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxValidator >(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;

		return new wxDataViewListCtrl(parent, id, pos, size, style, validator);
	}

	// wxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data)
	static wxDataViewListCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data) function, expected prototype:\nwxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxDataViewListCtrl(L,NULL);
	}

	// wxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)
	static wxDataViewListCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nwxDataViewListCtrl::wxDataViewListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0x0010;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::wxDataViewListCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		return new wrapper_wxDataViewListCtrl(L,NULL, parent, id, pos, size, style, validator);
	}

	// Overload binder for wxDataViewListCtrl::wxDataViewListCtrl
	static wxDataViewListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDataViewListCtrl, cannot match any of the overloads for function wxDataViewListCtrl:\n  wxDataViewListCtrl()\n  wxDataViewListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n  wxDataViewListCtrl(lua_Table *)\n  wxDataViewListCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n");
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

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
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
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::IsRowSelected(unsigned int) const");
		}
		bool lret = self->IsRowSelected(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column)
	static int _bind_AppendColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::AppendColumn(wxDataViewColumn *)");
		}
		bool lret = self->AppendColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_AppendColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 1 ID = 185523\narg 2 ID = 88196105\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

	// wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : ::wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : ::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendTextColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : ::wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : ::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendToggleColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : ::wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : ::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendProgressColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString & label, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_INERT;
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxAlignment align=luatop>4 ? (wxAlignment)lua_tointeger(L,5) : ::wxALIGN_LEFT;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : ::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::AppendIconTextColumn(const wxString &, wxDataViewCellMode, int, wxAlignment, int)");
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column)
	static int _bind_InsertColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column)\nClass arguments details:\narg 2 ID = 185523\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::InsertColumn(unsigned int, wxDataViewColumn *)");
		}
		bool lret = self->InsertColumn(pos, column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_InsertColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 2 ID = 185523\narg 3 ID = 88196105\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));
		wxString varianttype(lua_tostring(L,4),lua_objlen(L,4));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

	// bool wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column)
	static int _bind_PrependColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_PrependColumn_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::PrependColumn(wxDataViewColumn *)");
		}
		bool lret = self->PrependColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype)
	static int _bind_PrependColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_PrependColumn_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column, const wxString & varianttype)\nClass arguments details:\narg 1 ID = 185523\narg 2 ID = 88196105\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
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

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::GetToggleValue(unsigned int, unsigned int) const");
		}
		bool lret = self->GetToggleValue(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDataViewListCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewListCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewListCtrl::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewListCtrl::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewListCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewListCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxDataViewListCtrl::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_AcceptsFocus() const");
		}
		bool lret = self->wxDataViewListCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxDataViewListCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxDataViewListCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxDataViewListCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxDataViewListCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_HasFocus() const function, expected prototype:\nbool wxDataViewListCtrl::base_HasFocus() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_HasFocus() const");
		}
		bool lret = self->wxDataViewListCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetCanFocus(bool)");
		}
		self->wxDataViewListCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetFocus() function, expected prototype:\nvoid wxDataViewListCtrl::base_SetFocus()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetFocus()");
		}
		self->wxDataViewListCtrl::SetFocus();

		return 0;
	}

	// void wxDataViewListCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxDataViewListCtrl::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetFocusFromKbd()");
		}
		self->wxDataViewListCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxDataViewListCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewListCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_AddChild(wxWindow *)");
		}
		self->wxDataViewListCtrl::AddChild(child);

		return 0;
	}

	// void wxDataViewListCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewListCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_RemoveChild(wxWindow *)");
		}
		self->wxDataViewListCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxDataViewListCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxDataViewListCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxDataViewListCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxDataViewListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxDataViewListCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxDataViewListCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxDataViewListCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetScrollPos(int) const");
		}
		int lret = self->wxDataViewListCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxDataViewListCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetScrollRange(int) const");
		}
		int lret = self->wxDataViewListCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxDataViewListCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetScrollThumb(int) const");
		}
		int lret = self->wxDataViewListCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewListCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxDataViewListCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxDataViewListCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxDataViewListCtrl::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_ScrollLines(int)");
		}
		bool lret = self->wxDataViewListCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxDataViewListCtrl::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_ScrollPages(int)");
		}
		bool lret = self->wxDataViewListCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxDataViewListCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetScrollPos(int, int, bool)");
		}
		self->wxDataViewListCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxDataViewListCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxDataViewListCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewListCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewListCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewListCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Fit() function, expected prototype:\nvoid wxDataViewListCtrl::base_Fit()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Fit()");
		}
		self->wxDataViewListCtrl::Fit();

		return 0;
	}

	// void wxDataViewListCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_FitInside() function, expected prototype:\nvoid wxDataViewListCtrl::base_FitInside()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_FitInside()");
		}
		self->wxDataViewListCtrl::FitInside();

		return 0;
	}

	// wxSize wxDataViewListCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewListCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewListCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxDataViewListCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewListCtrl::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxDataViewListCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxDataViewListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxDataViewListCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxDataViewListCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SendSizeEvent(int)");
		}
		self->wxDataViewListCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxDataViewListCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetMaxSize(const wxSize &)");
		}
		self->wxDataViewListCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetMinClientSize(const wxSize &)");
		}
		self->wxDataViewListCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewListCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetMinSize(const wxSize &)");
		}
		self->wxDataViewListCtrl::SetMinSize(size);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxDataViewListCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxDataViewListCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxDataViewListCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxDataViewListCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxDataViewListCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxDataViewListCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxDataViewListCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxDataViewListCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxDataViewListCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDataViewListCtrl::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxDataViewListCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewListCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_ClearBackground() function, expected prototype:\nvoid wxDataViewListCtrl::base_ClearBackground()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_ClearBackground()");
		}
		self->wxDataViewListCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxDataViewListCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxDataViewListCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxDataViewListCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxDataViewListCtrl::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxDataViewListCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetCharHeight() const function, expected prototype:\nint wxDataViewListCtrl::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetCharHeight() const");
		}
		int lret = self->wxDataViewListCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetCharWidth() const function, expected prototype:\nint wxDataViewListCtrl::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetCharWidth() const");
		}
		int lret = self->wxDataViewListCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxDataViewListCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxDataViewListCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxDataViewListCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxDataViewListCtrl::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxDataViewListCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Refresh(bool, const wxRect *)");
		}
		self->wxDataViewListCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxDataViewListCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Update() function, expected prototype:\nvoid wxDataViewListCtrl::base_Update()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Update()");
		}
		self->wxDataViewListCtrl::Update();

		return 0;
	}

	// bool wxDataViewListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxDataViewListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxDataViewListCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxDataViewListCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDataViewListCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxDataViewListCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxDataViewListCtrl::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_ShouldInheritColours() const");
		}
		bool lret = self->wxDataViewListCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetThemeEnabled(bool)");
		}
		self->wxDataViewListCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxDataViewListCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxDataViewListCtrl::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_GetThemeEnabled() const");
		}
		bool lret = self->wxDataViewListCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxDataViewListCtrl::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_CanSetTransparent()");
		}
		bool lret = self->wxDataViewListCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxDataViewListCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxDataViewListCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxDataViewListCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxDataViewListCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxDataViewListCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxDataViewListCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxDataViewListCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxDataViewListCtrl::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxDataViewListCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetExtraStyle(long)");
		}
		self->wxDataViewListCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetWindowStyleFlag(long)");
		}
		self->wxDataViewListCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxDataViewListCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Lower() function, expected prototype:\nvoid wxDataViewListCtrl::base_Lower()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Lower()");
		}
		self->wxDataViewListCtrl::Lower();

		return 0;
	}

	// void wxDataViewListCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Raise() function, expected prototype:\nvoid wxDataViewListCtrl::base_Raise()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Raise()");
		}
		self->wxDataViewListCtrl::Raise();

		return 0;
	}

	// bool wxDataViewListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDataViewListCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsShown() const function, expected prototype:\nbool wxDataViewListCtrl::base_IsShown() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsShown() const");
		}
		bool lret = self->wxDataViewListCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxDataViewListCtrl::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsShownOnScreen() const");
		}
		bool lret = self->wxDataViewListCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxDataViewListCtrl::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Enable(bool)");
		}
		bool lret = self->wxDataViewListCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxDataViewListCtrl::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Show(bool)");
		}
		bool lret = self->wxDataViewListCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDataViewListCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDataViewListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxDataViewListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewListCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewListCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxDataViewListCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxDataViewListCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxDataViewListCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxDataViewListCtrl::base_GetValidator()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxDataViewListCtrl::base_GetValidator()");
		}
		wxValidator * lret = self->wxDataViewListCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewListCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetValidator(const wxValidator &)");
		}
		self->wxDataViewListCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxDataViewListCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxDataViewListCtrl::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_TransferDataFromWindow()");
		}
		bool lret = self->wxDataViewListCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxDataViewListCtrl::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_TransferDataToWindow()");
		}
		bool lret = self->wxDataViewListCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Validate() function, expected prototype:\nbool wxDataViewListCtrl::base_Validate()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Validate()");
		}
		bool lret = self->wxDataViewListCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxDataViewListCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxDataViewListCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxDataViewListCtrl::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxDataViewListCtrl::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxDataViewListCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewListCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListCtrl::base_GetName() const function, expected prototype:\nwxString wxDataViewListCtrl::base_GetName() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewListCtrl::base_GetName() const");
		}
		wxString lret = self->wxDataViewListCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxDataViewListCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetName(const wxString &)");
		}
		self->wxDataViewListCtrl::SetName(name);

		return 0;
	}

	// void wxDataViewListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxDataViewListCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxDataViewListCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxDataViewListCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Destroy() function, expected prototype:\nbool wxDataViewListCtrl::base_Destroy()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Destroy()");
		}
		bool lret = self->wxDataViewListCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxDataViewListCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxDataViewListCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxDataViewListCtrl::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxDataViewListCtrl::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxDataViewListCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewListCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxDataViewListCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxDataViewListCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxDataViewListCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_DragAcceptFiles(bool)");
		}
		self->wxDataViewListCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxDataViewListCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_Layout() function, expected prototype:\nbool wxDataViewListCtrl::base_Layout()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_Layout()");
		}
		bool lret = self->wxDataViewListCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_HasCapture() const function, expected prototype:\nbool wxDataViewListCtrl::base_HasCapture() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_HasCapture() const");
		}
		bool lret = self->wxDataViewListCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxDataViewListCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewListCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxDataViewListCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxDataViewListCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_WarpPointer(int, int)");
		}
		self->wxDataViewListCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxDataViewListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxDataViewListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewListCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxDataViewListCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxDataViewListCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxDataViewListCtrl::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_HasMultiplePages() const");
		}
		bool lret = self->wxDataViewListCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxDataViewListCtrl::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_InheritAttributes()");
		}
		self->wxDataViewListCtrl::InheritAttributes();

		return 0;
	}

	// void wxDataViewListCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_InitDialog() function, expected prototype:\nvoid wxDataViewListCtrl::base_InitDialog()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_InitDialog()");
		}
		self->wxDataViewListCtrl::InitDialog();

		return 0;
	}

	// bool wxDataViewListCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsRetained() const function, expected prototype:\nbool wxDataViewListCtrl::base_IsRetained() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsRetained() const");
		}
		bool lret = self->wxDataViewListCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxDataViewListCtrl::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsTopLevel() const");
		}
		bool lret = self->wxDataViewListCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxDataViewListCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_MakeModal(bool)");
		}
		self->wxDataViewListCtrl::MakeModal(modal);

		return 0;
	}

	// void wxDataViewListCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxDataViewListCtrl::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_OnInternalIdle()");
		}
		self->wxDataViewListCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxDataViewListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxDataViewListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxDataViewListCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxDataViewListCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxDataViewListCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxDataViewListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_UpdateWindowUI(long)");
		}
		self->wxDataViewListCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxDataViewListCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxDataViewListCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewListCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Command(wxCommandEvent &)");
		}
		self->wxDataViewListCtrl::Command(event);

		return 0;
	}

	// wxString wxDataViewListCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListCtrl::base_GetLabel() const function, expected prototype:\nwxString wxDataViewListCtrl::base_GetLabel() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewListCtrl::base_GetLabel() const");
		}
		wxString lret = self->wxDataViewListCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewListCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetLabel(const wxString &)");
		}
		self->wxDataViewListCtrl::SetLabel(label);

		return 0;
	}

	// bool wxDataViewListCtrl::base_AssociateModel(wxDataViewModel * model)
	static int _bind_base_AssociateModel(lua_State *L) {
		if (!_lg_typecheck_base_AssociateModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_AssociateModel(wxDataViewModel * model) function, expected prototype:\nbool wxDataViewListCtrl::base_AssociateModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n");
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_AssociateModel(wxDataViewModel *)");
		}
		bool lret = self->wxDataViewListCtrl::AssociateModel(model);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_ClearColumns()
	static int _bind_base_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_base_ClearColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_ClearColumns() function, expected prototype:\nbool wxDataViewListCtrl::base_ClearColumns()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_ClearColumns()");
		}
		bool lret = self->wxDataViewListCtrl::ClearColumns();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_Collapse(const wxDataViewItem & item)
	static int _bind_base_Collapse(lua_State *L) {
		if (!_lg_typecheck_base_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Collapse(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewListCtrl::base_Collapse(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_Collapse function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Collapse(const wxDataViewItem &)");
		}
		self->wxDataViewListCtrl::Collapse(item);

		return 0;
	}

	// bool wxDataViewListCtrl::base_DeleteColumn(wxDataViewColumn * column)
	static int _bind_base_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_base_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_DeleteColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::base_DeleteColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_DeleteColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewListCtrl::DeleteColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_EnableDragSource(const wxDataFormat & format)
	static int _bind_base_EnableDragSource(lua_State *L) {
		if (!_lg_typecheck_base_EnableDragSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_EnableDragSource(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewListCtrl::base_EnableDragSource(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewListCtrl::base_EnableDragSource function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_EnableDragSource(const wxDataFormat &)");
		}
		bool lret = self->wxDataViewListCtrl::EnableDragSource(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_EnableDropTarget(const wxDataFormat & format)
	static int _bind_base_EnableDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_EnableDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_EnableDropTarget(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewListCtrl::base_EnableDropTarget(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewListCtrl::base_EnableDropTarget function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_EnableDropTarget(const wxDataFormat &)");
		}
		bool lret = self->wxDataViewListCtrl::EnableDropTarget(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	static int _bind_base_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_base_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) function, expected prototype:\nvoid wxDataViewListCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_EnsureVisible function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* column=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_EnsureVisible(const wxDataViewItem &, const wxDataViewColumn *)");
		}
		self->wxDataViewListCtrl::EnsureVisible(item, column);

		return 0;
	}

	// void wxDataViewListCtrl::base_Expand(const wxDataViewItem & item)
	static int _bind_base_Expand(lua_State *L) {
		if (!_lg_typecheck_base_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Expand(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewListCtrl::base_Expand(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_Expand function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Expand(const wxDataViewItem &)");
		}
		self->wxDataViewListCtrl::Expand(item);

		return 0;
	}

	// void wxDataViewListCtrl::base_ExpandAncestors(const wxDataViewItem & item)
	static int _bind_base_ExpandAncestors(lua_State *L) {
		if (!_lg_typecheck_base_ExpandAncestors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_ExpandAncestors(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewListCtrl::base_ExpandAncestors(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_ExpandAncestors function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_ExpandAncestors(const wxDataViewItem &)");
		}
		self->wxDataViewListCtrl::ExpandAncestors(item);

		return 0;
	}

	// wxDataViewColumn * wxDataViewListCtrl::base_GetColumn(unsigned int pos) const
	static int _bind_base_GetColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::base_GetColumn(unsigned int pos) const function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::base_GetColumn(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::base_GetColumn(unsigned int) const");
		}
		wxDataViewColumn * lret = self->wxDataViewListCtrl::GetColumn(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxDataViewListCtrl::base_GetColumnCount() const
	static int _bind_base_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewListCtrl::base_GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewListCtrl::base_GetColumnCount() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewListCtrl::base_GetColumnCount() const");
		}
		unsigned int lret = self->wxDataViewListCtrl::GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const
	static int _bind_base_GetColumnPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const function, expected prototype:\nint wxDataViewListCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetColumnPosition(const wxDataViewColumn *) const");
		}
		int lret = self->wxDataViewListCtrl::GetColumnPosition(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxDataViewListCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	static int _bind_base_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_base_GetItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxDataViewListCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const function, expected prototype:\nwxRect wxDataViewListCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_GetItemRect function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* col=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxDataViewListCtrl::base_GetItemRect(const wxDataViewItem &, const wxDataViewColumn *) const");
		}
		wxRect stack_lret = self->wxDataViewListCtrl::GetItemRect(item, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetSelectedItemsCount() const
	static int _bind_base_GetSelectedItemsCount(lua_State *L) {
		if (!_lg_typecheck_base_GetSelectedItemsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetSelectedItemsCount() const function, expected prototype:\nint wxDataViewListCtrl::base_GetSelectedItemsCount() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetSelectedItemsCount() const");
		}
		int lret = self->wxDataViewListCtrl::GetSelectedItemsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewListCtrl::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewListCtrl::base_GetSelection() const function, expected prototype:\nwxDataViewItem wxDataViewListCtrl::base_GetSelection() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewListCtrl::base_GetSelection() const");
		}
		wxDataViewItem stack_lret = self->wxDataViewListCtrl::GetSelection();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewListCtrl::base_GetSelections(wxDataViewItemArray & sel) const
	static int _bind_base_GetSelections(lua_State *L) {
		if (!_lg_typecheck_base_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewListCtrl::base_GetSelections(wxDataViewItemArray & sel) const function, expected prototype:\nint wxDataViewListCtrl::base_GetSelections(wxDataViewItemArray & sel) const\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewListCtrl::base_GetSelections function");
		}
		wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewListCtrl::base_GetSelections(wxDataViewItemArray &) const");
		}
		int lret = self->wxDataViewListCtrl::GetSelections(sel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewListCtrl::base_GetSortingColumn() const
	static int _bind_base_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetSortingColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewListCtrl::base_GetSortingColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewListCtrl::base_GetSortingColumn() const\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewListCtrl::base_GetSortingColumn() const");
		}
		wxDataViewColumn * lret = self->wxDataViewListCtrl::GetSortingColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewListCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const function, expected prototype:\nvoid wxDataViewListCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 11709329\narg 3 ID = 185523\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewListCtrl::base_HitTest function");
		}
		const wxPoint & point=*point_ptr;
		wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_HitTest function");
		}
		wxDataViewItem & item=*item_ptr;
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,4));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_HitTest(const wxPoint &, wxDataViewItem &, wxDataViewColumn *&) const");
		}
		self->wxDataViewListCtrl::HitTest(point, item, col);

		return 0;
	}

	// bool wxDataViewListCtrl::base_IsExpanded(const wxDataViewItem & item) const
	static int _bind_base_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_base_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsExpanded(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewListCtrl::base_IsExpanded(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_IsExpanded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsExpanded(const wxDataViewItem &) const");
		}
		bool lret = self->wxDataViewListCtrl::IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_IsSelected(const wxDataViewItem & item) const
	static int _bind_base_IsSelected(lua_State *L) {
		if (!_lg_typecheck_base_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_IsSelected(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewListCtrl::base_IsSelected(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_IsSelected function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_IsSelected(const wxDataViewItem &) const");
		}
		bool lret = self->wxDataViewListCtrl::IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListCtrl::base_Select(const wxDataViewItem & item)
	static int _bind_base_Select(lua_State *L) {
		if (!_lg_typecheck_base_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Select(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewListCtrl::base_Select(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_Select function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Select(const wxDataViewItem &)");
		}
		self->wxDataViewListCtrl::Select(item);

		return 0;
	}

	// void wxDataViewListCtrl::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SelectAll() function, expected prototype:\nvoid wxDataViewListCtrl::base_SelectAll()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SelectAll()");
		}
		self->wxDataViewListCtrl::SelectAll();

		return 0;
	}

	// void wxDataViewListCtrl::base_SetSelections(const wxDataViewItemArray & sel)
	static int _bind_base_SetSelections(lua_State *L) {
		if (!_lg_typecheck_base_SetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_SetSelections(const wxDataViewItemArray & sel) function, expected prototype:\nvoid wxDataViewListCtrl::base_SetSelections(const wxDataViewItemArray & sel)\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		const wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewListCtrl::base_SetSelections function");
		}
		const wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_SetSelections(const wxDataViewItemArray &)");
		}
		self->wxDataViewListCtrl::SetSelections(sel);

		return 0;
	}

	// void wxDataViewListCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)
	static int _bind_base_StartEditor(lua_State *L) {
		if (!_lg_typecheck_base_StartEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column) function, expected prototype:\nvoid wxDataViewListCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_StartEditor function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,3);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_StartEditor(const wxDataViewItem &, unsigned int)");
		}
		self->wxDataViewListCtrl::StartEditor(item, column);

		return 0;
	}

	// void wxDataViewListCtrl::base_Unselect(const wxDataViewItem & item)
	static int _bind_base_Unselect(lua_State *L) {
		if (!_lg_typecheck_base_Unselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_Unselect(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewListCtrl::base_Unselect(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListCtrl::base_Unselect function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_Unselect(const wxDataViewItem &)");
		}
		self->wxDataViewListCtrl::Unselect(item);

		return 0;
	}

	// void wxDataViewListCtrl::base_UnselectAll()
	static int _bind_base_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_base_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListCtrl::base_UnselectAll() function, expected prototype:\nvoid wxDataViewListCtrl::base_UnselectAll()\nClass arguments details:\n");
		}


		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListCtrl::base_UnselectAll()");
		}
		self->wxDataViewListCtrl::UnselectAll();

		return 0;
	}

	// bool wxDataViewListCtrl::base_SetRowHeight(int rowHeight)
	static int _bind_base_SetRowHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetRowHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_SetRowHeight(int rowHeight) function, expected prototype:\nbool wxDataViewListCtrl::base_SetRowHeight(int rowHeight)\nClass arguments details:\n");
		}

		int rowHeight=(int)lua_tointeger(L,2);

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_SetRowHeight(int)");
		}
		bool lret = self->wxDataViewListCtrl::SetRowHeight(rowHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_AppendColumn(wxDataViewColumn * column)
	static int _bind_base_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_base_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_AppendColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::base_AppendColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_AppendColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewListCtrl::AppendColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * column)
	static int _bind_base_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_base_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * column)\nClass arguments details:\narg 2 ID = 185523\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_InsertColumn(unsigned int, wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewListCtrl::InsertColumn(pos, column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListCtrl::base_PrependColumn(wxDataViewColumn * column)
	static int _bind_base_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_base_PrependColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewListCtrl::base_PrependColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewListCtrl::base_PrependColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewListCtrl* self=Luna< wxObject >::checkSubType< wxDataViewListCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewListCtrl::base_PrependColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewListCtrl::PrependColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewListCtrl* LunaTraits< wxDataViewListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewListCtrl::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"base_GetClassInfo", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxDataViewListCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxDataViewListCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxDataViewListCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxDataViewListCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxDataViewListCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxDataViewListCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxDataViewListCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxDataViewListCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxDataViewListCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxDataViewListCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxDataViewListCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxDataViewListCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxDataViewListCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxDataViewListCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxDataViewListCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxDataViewListCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxDataViewListCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxDataViewListCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxDataViewListCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxDataViewListCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxDataViewListCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxDataViewListCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxDataViewListCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxDataViewListCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxDataViewListCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxDataViewListCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxDataViewListCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxDataViewListCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxDataViewListCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxDataViewListCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxDataViewListCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxDataViewListCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxDataViewListCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxDataViewListCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxDataViewListCtrl::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxDataViewListCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxDataViewListCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxDataViewListCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxDataViewListCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxDataViewListCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxDataViewListCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxDataViewListCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxDataViewListCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxDataViewListCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetLabel},
	{"base_AssociateModel", &luna_wrapper_wxDataViewListCtrl::_bind_base_AssociateModel},
	{"base_ClearColumns", &luna_wrapper_wxDataViewListCtrl::_bind_base_ClearColumns},
	{"base_Collapse", &luna_wrapper_wxDataViewListCtrl::_bind_base_Collapse},
	{"base_DeleteColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_DeleteColumn},
	{"base_EnableDragSource", &luna_wrapper_wxDataViewListCtrl::_bind_base_EnableDragSource},
	{"base_EnableDropTarget", &luna_wrapper_wxDataViewListCtrl::_bind_base_EnableDropTarget},
	{"base_EnsureVisible", &luna_wrapper_wxDataViewListCtrl::_bind_base_EnsureVisible},
	{"base_Expand", &luna_wrapper_wxDataViewListCtrl::_bind_base_Expand},
	{"base_ExpandAncestors", &luna_wrapper_wxDataViewListCtrl::_bind_base_ExpandAncestors},
	{"base_GetColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetColumn},
	{"base_GetColumnCount", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetColumnCount},
	{"base_GetColumnPosition", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetColumnPosition},
	{"base_GetItemRect", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetItemRect},
	{"base_GetSelectedItemsCount", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetSelectedItemsCount},
	{"base_GetSelection", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetSelection},
	{"base_GetSelections", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetSelections},
	{"base_GetSortingColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_GetSortingColumn},
	{"base_HitTest", &luna_wrapper_wxDataViewListCtrl::_bind_base_HitTest},
	{"base_IsExpanded", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsExpanded},
	{"base_IsSelected", &luna_wrapper_wxDataViewListCtrl::_bind_base_IsSelected},
	{"base_Select", &luna_wrapper_wxDataViewListCtrl::_bind_base_Select},
	{"base_SelectAll", &luna_wrapper_wxDataViewListCtrl::_bind_base_SelectAll},
	{"base_SetSelections", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetSelections},
	{"base_StartEditor", &luna_wrapper_wxDataViewListCtrl::_bind_base_StartEditor},
	{"base_Unselect", &luna_wrapper_wxDataViewListCtrl::_bind_base_Unselect},
	{"base_UnselectAll", &luna_wrapper_wxDataViewListCtrl::_bind_base_UnselectAll},
	{"base_SetRowHeight", &luna_wrapper_wxDataViewListCtrl::_bind_base_SetRowHeight},
	{"base_AppendColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_AppendColumn},
	{"base_InsertColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_InsertColumn},
	{"base_PrependColumn", &luna_wrapper_wxDataViewListCtrl::_bind_base_PrependColumn},
	{"__eq", &luna_wrapper_wxDataViewListCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewListCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListCtrl >::enumValues[] = {
	{0,0}
};


