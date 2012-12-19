#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewTreeCtrl.h>

class luna_wrapper_wxDataViewTreeCtrl {
public:
	typedef Luna< wxDataViewTreeCtrl > luna_t;

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
		//wxDataViewTreeCtrl* ptr= dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		wxDataViewTreeCtrl* ptr= luna_caster< wxObject, wxDataViewTreeCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTreeCtrl >::push(L,ptr,false);
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
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6))) ) return false;
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
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_GetStore_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStore_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
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
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
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

	inline static bool _lg_typecheck_base_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PrependColumn(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewTreeCtrl::wxDataViewTreeCtrl()
	static wxDataViewTreeCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl() function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl()\nClass arguments details:\n");
		}


		return new wxDataViewTreeCtrl();
	}

	// wxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)
	static wxDataViewTreeCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0x0002|0x0010;
		const wxValidator* validator_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxValidator >(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;

		return new wxDataViewTreeCtrl(parent, id, pos, size, style, validator);
	}

	// wxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data)
	static wxDataViewTreeCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data) function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxDataViewTreeCtrl(L,NULL);
	}

	// wxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)
	static wxDataViewTreeCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0x0002|0x0010;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		return new wrapper_wxDataViewTreeCtrl(L,NULL, parent, id, pos, size, style, validator);
	}

	// Overload binder for wxDataViewTreeCtrl::wxDataViewTreeCtrl
	static wxDataViewTreeCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDataViewTreeCtrl, cannot match any of the overloads for function wxDataViewTreeCtrl:\n  wxDataViewTreeCtrl()\n  wxDataViewTreeCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n  wxDataViewTreeCtrl(lua_Table *)\n  wxDataViewTreeCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n");
		return NULL;
	}


	// Function binds:
	// wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_AppendContainer(lua_State *L) {
		if (!_lg_typecheck_AppendContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::AppendContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int expanded=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::AppendItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nbool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewTreeCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0x0002|0x0010;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteAllItems() function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::DeleteChildren function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem &)");
		}
		self->DeleteChildren(item);

		return 0;
	}

	// void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::DeleteItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem &)");
		}
		self->DeleteItem(item);

		return 0;
	}

	// int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const function, expected prototype:\nint wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::GetChildCount function");
		}
		const wxDataViewItem & parent=*parent_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem &) const");
		}
		int lret = self->GetChildCount(parent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImageList * wxDataViewTreeCtrl::GetImageList()
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxDataViewTreeCtrl::GetImageList() function, expected prototype:\nwxImageList * wxDataViewTreeCtrl::GetImageList()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxDataViewTreeCtrl::GetImageList()");
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const function, expected prototype:\nwxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem &) const");
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const
	static int _bind_GetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemExpandedIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const
	static int _bind_GetItemIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const function, expected prototype:\nwxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem &) const");
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const
	static int _bind_GetNthChild(lua_State *L) {
		if (!_lg_typecheck_GetNthChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::GetNthChild function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem &, unsigned int) const");
		}
		wxDataViewItem stack_lret = self->GetNthChild(parent, pos);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()
	static int _bind_GetStore_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() function, expected prototype:\nwxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()");
		}
		wxDataViewTreeStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewTreeStore >::push(L,lret,false);

		return 1;
	}

	// const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const
	static int _bind_GetStore_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const function, expected prototype:\nconst wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const");
		}
		const wxDataViewTreeStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewTreeStore >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewTreeCtrl::GetStore
	static int _bind_GetStore(lua_State *L) {
		if (_lg_typecheck_GetStore_overload_1(L)) return _bind_GetStore_overload_1(L);
		if (_lg_typecheck_GetStore_overload_2(L)) return _bind_GetStore_overload_2(L);

		luaL_error(L, "error in function GetStore, cannot match any of the overloads for function GetStore:\n  GetStore()\n  GetStore()\n");
		return 0;
	}

	// wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_InsertContainer(lua_State *L) {
		if (!_lg_typecheck_InsertContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::InsertContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeCtrl::InsertContainer function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int icon=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int expanded=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem &, const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertContainer(parent, previous, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::InsertItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeCtrl::InsertItem function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int icon=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem &, const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertItem(parent, previous, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item)
	static int _bind_IsContainer(lua_State *L) {
		if (!_lg_typecheck_IsContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::IsContainer function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem &)");
		}
		bool lret = self->IsContainer(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_PrependContainer(lua_State *L) {
		if (!_lg_typecheck_PrependContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::PrependContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int expanded=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::PrependItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imagelist=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetImageList(wxImageList *)");
		}
		self->SetImageList(imagelist);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 50457573\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem &, wxClientData *)");
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeCtrl::SetItemExpandedIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemExpandedIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeCtrl::SetItemIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem &, const wxString &)");
		}
		self->SetItemText(item, text);

		return 0;
	}

	// wxClassInfo * wxDataViewTreeCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewTreeCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewTreeCtrl::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewTreeCtrl::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewTreeCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_AcceptsFocus() const");
		}
		bool lret = self->wxDataViewTreeCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxDataViewTreeCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxDataViewTreeCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_HasFocus() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_HasFocus() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_HasFocus() const");
		}
		bool lret = self->wxDataViewTreeCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetCanFocus(bool)");
		}
		self->wxDataViewTreeCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetFocus() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetFocus()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetFocus()");
		}
		self->wxDataViewTreeCtrl::SetFocus();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetFocusFromKbd()");
		}
		self->wxDataViewTreeCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_AddChild(wxWindow *)");
		}
		self->wxDataViewTreeCtrl::AddChild(child);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_RemoveChild(wxWindow *)");
		}
		self->wxDataViewTreeCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxDataViewTreeCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxDataViewTreeCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxDataViewTreeCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxDataViewTreeCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetScrollPos(int) const");
		}
		int lret = self->wxDataViewTreeCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetScrollRange(int) const");
		}
		int lret = self->wxDataViewTreeCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetScrollThumb(int) const");
		}
		int lret = self->wxDataViewTreeCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxDataViewTreeCtrl::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_ScrollLines(int)");
		}
		bool lret = self->wxDataViewTreeCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxDataViewTreeCtrl::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_ScrollPages(int)");
		}
		bool lret = self->wxDataViewTreeCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxDataViewTreeCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetScrollPos(int, int, bool)");
		}
		self->wxDataViewTreeCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxDataViewTreeCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxDataViewTreeCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Fit() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Fit()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Fit()");
		}
		self->wxDataViewTreeCtrl::Fit();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_FitInside() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_FitInside()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_FitInside()");
		}
		self->wxDataViewTreeCtrl::FitInside();

		return 0;
	}

	// wxSize wxDataViewTreeCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewTreeCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewTreeCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxDataViewTreeCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewTreeCtrl::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxDataViewTreeCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxDataViewTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxDataViewTreeCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SendSizeEvent(int)");
		}
		self->wxDataViewTreeCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxDataViewTreeCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetMaxSize(const wxSize &)");
		}
		self->wxDataViewTreeCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetMinClientSize(const wxSize &)");
		}
		self->wxDataViewTreeCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetMinSize(const wxSize &)");
		}
		self->wxDataViewTreeCtrl::SetMinSize(size);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxDataViewTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxDataViewTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxDataViewTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxDataViewTreeCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxDataViewTreeCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxDataViewTreeCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxDataViewTreeCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxDataViewTreeCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxDataViewTreeCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDataViewTreeCtrl::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxDataViewTreeCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_ClearBackground() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_ClearBackground()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_ClearBackground()");
		}
		self->wxDataViewTreeCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxDataViewTreeCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxDataViewTreeCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxDataViewTreeCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxDataViewTreeCtrl::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxDataViewTreeCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetCharHeight() const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetCharHeight() const");
		}
		int lret = self->wxDataViewTreeCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetCharWidth() const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetCharWidth() const");
		}
		int lret = self->wxDataViewTreeCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxDataViewTreeCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxDataViewTreeCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxDataViewTreeCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxDataViewTreeCtrl::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxDataViewTreeCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Refresh(bool, const wxRect *)");
		}
		self->wxDataViewTreeCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Update() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Update()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Update()");
		}
		self->wxDataViewTreeCtrl::Update();

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxDataViewTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxDataViewTreeCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxDataViewTreeCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDataViewTreeCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxDataViewTreeCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_ShouldInheritColours() const");
		}
		bool lret = self->wxDataViewTreeCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetThemeEnabled(bool)");
		}
		self->wxDataViewTreeCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_GetThemeEnabled() const");
		}
		bool lret = self->wxDataViewTreeCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxDataViewTreeCtrl::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_CanSetTransparent()");
		}
		bool lret = self->wxDataViewTreeCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxDataViewTreeCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxDataViewTreeCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxDataViewTreeCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxDataViewTreeCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxDataViewTreeCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxDataViewTreeCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxDataViewTreeCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxDataViewTreeCtrl::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxDataViewTreeCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetExtraStyle(long)");
		}
		self->wxDataViewTreeCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetWindowStyleFlag(long)");
		}
		self->wxDataViewTreeCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Lower() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Lower()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Lower()");
		}
		self->wxDataViewTreeCtrl::Lower();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Raise() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Raise()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Raise()");
		}
		self->wxDataViewTreeCtrl::Raise();

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDataViewTreeCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsShown() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsShown() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsShown() const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsShownOnScreen() const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxDataViewTreeCtrl::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Enable(bool)");
		}
		bool lret = self->wxDataViewTreeCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxDataViewTreeCtrl::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Show(bool)");
		}
		bool lret = self->wxDataViewTreeCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDataViewTreeCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDataViewTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxDataViewTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewTreeCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxDataViewTreeCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxDataViewTreeCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxDataViewTreeCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxDataViewTreeCtrl::base_GetValidator()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxDataViewTreeCtrl::base_GetValidator()");
		}
		wxValidator * lret = self->wxDataViewTreeCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetValidator(const wxValidator &)");
		}
		self->wxDataViewTreeCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxDataViewTreeCtrl::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_TransferDataFromWindow()");
		}
		bool lret = self->wxDataViewTreeCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxDataViewTreeCtrl::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_TransferDataToWindow()");
		}
		bool lret = self->wxDataViewTreeCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Validate() function, expected prototype:\nbool wxDataViewTreeCtrl::base_Validate()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Validate()");
		}
		bool lret = self->wxDataViewTreeCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxDataViewTreeCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxDataViewTreeCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxDataViewTreeCtrl::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxDataViewTreeCtrl::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxDataViewTreeCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewTreeCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeCtrl::base_GetName() const function, expected prototype:\nwxString wxDataViewTreeCtrl::base_GetName() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeCtrl::base_GetName() const");
		}
		wxString lret = self->wxDataViewTreeCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxDataViewTreeCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetName(const wxString &)");
		}
		self->wxDataViewTreeCtrl::SetName(name);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxDataViewTreeCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxDataViewTreeCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Destroy() function, expected prototype:\nbool wxDataViewTreeCtrl::base_Destroy()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Destroy()");
		}
		bool lret = self->wxDataViewTreeCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxDataViewTreeCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxDataViewTreeCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxDataViewTreeCtrl::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxDataViewTreeCtrl::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxDataViewTreeCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxDataViewTreeCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_DragAcceptFiles(bool)");
		}
		self->wxDataViewTreeCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_Layout() function, expected prototype:\nbool wxDataViewTreeCtrl::base_Layout()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_Layout()");
		}
		bool lret = self->wxDataViewTreeCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_HasCapture() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_HasCapture() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_HasCapture() const");
		}
		bool lret = self->wxDataViewTreeCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxDataViewTreeCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewTreeCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxDataViewTreeCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_WarpPointer(int, int)");
		}
		self->wxDataViewTreeCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewTreeCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxDataViewTreeCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_HasMultiplePages() const");
		}
		bool lret = self->wxDataViewTreeCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_InheritAttributes()");
		}
		self->wxDataViewTreeCtrl::InheritAttributes();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_InitDialog() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_InitDialog()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_InitDialog()");
		}
		self->wxDataViewTreeCtrl::InitDialog();

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsRetained() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsRetained() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsRetained() const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsTopLevel() const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_MakeModal(bool)");
		}
		self->wxDataViewTreeCtrl::MakeModal(modal);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_OnInternalIdle()");
		}
		self->wxDataViewTreeCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxDataViewTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxDataViewTreeCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxDataViewTreeCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxDataViewTreeCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_UpdateWindowUI(long)");
		}
		self->wxDataViewTreeCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewTreeCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Command(wxCommandEvent &)");
		}
		self->wxDataViewTreeCtrl::Command(event);

		return 0;
	}

	// wxString wxDataViewTreeCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeCtrl::base_GetLabel() const function, expected prototype:\nwxString wxDataViewTreeCtrl::base_GetLabel() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeCtrl::base_GetLabel() const");
		}
		wxString lret = self->wxDataViewTreeCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewTreeCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetLabel(const wxString &)");
		}
		self->wxDataViewTreeCtrl::SetLabel(label);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_AppendColumn(wxDataViewColumn * col)
	static int _bind_base_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_base_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_AppendColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewTreeCtrl::base_AppendColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_AppendColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewTreeCtrl::AppendColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_PrependColumn(wxDataViewColumn * col)
	static int _bind_base_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_base_PrependColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_PrependColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewTreeCtrl::base_PrependColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_PrependColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewTreeCtrl::PrependColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col)
	static int _bind_base_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_base_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewTreeCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col)\nClass arguments details:\narg 2 ID = 185523\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_InsertColumn(unsigned int, wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewTreeCtrl::InsertColumn(pos, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_AssociateModel(wxDataViewModel * model)
	static int _bind_base_AssociateModel(lua_State *L) {
		if (!_lg_typecheck_base_AssociateModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_AssociateModel(wxDataViewModel * model) function, expected prototype:\nbool wxDataViewTreeCtrl::base_AssociateModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n");
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_AssociateModel(wxDataViewModel *)");
		}
		bool lret = self->wxDataViewTreeCtrl::AssociateModel(model);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_ClearColumns()
	static int _bind_base_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_base_ClearColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_ClearColumns() function, expected prototype:\nbool wxDataViewTreeCtrl::base_ClearColumns()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_ClearColumns()");
		}
		bool lret = self->wxDataViewTreeCtrl::ClearColumns();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_Collapse(const wxDataViewItem & item)
	static int _bind_base_Collapse(lua_State *L) {
		if (!_lg_typecheck_base_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Collapse(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Collapse(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_Collapse function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Collapse(const wxDataViewItem &)");
		}
		self->wxDataViewTreeCtrl::Collapse(item);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_DeleteColumn(wxDataViewColumn * column)
	static int _bind_base_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_base_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_DeleteColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewTreeCtrl::base_DeleteColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_DeleteColumn(wxDataViewColumn *)");
		}
		bool lret = self->wxDataViewTreeCtrl::DeleteColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_EnableDragSource(const wxDataFormat & format)
	static int _bind_base_EnableDragSource(lua_State *L) {
		if (!_lg_typecheck_base_EnableDragSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_EnableDragSource(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewTreeCtrl::base_EnableDragSource(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewTreeCtrl::base_EnableDragSource function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_EnableDragSource(const wxDataFormat &)");
		}
		bool lret = self->wxDataViewTreeCtrl::EnableDragSource(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_EnableDropTarget(const wxDataFormat & format)
	static int _bind_base_EnableDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_EnableDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_EnableDropTarget(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewTreeCtrl::base_EnableDropTarget(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewTreeCtrl::base_EnableDropTarget function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_EnableDropTarget(const wxDataFormat &)");
		}
		bool lret = self->wxDataViewTreeCtrl::EnableDropTarget(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	static int _bind_base_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_base_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_EnsureVisible function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* column=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_EnsureVisible(const wxDataViewItem &, const wxDataViewColumn *)");
		}
		self->wxDataViewTreeCtrl::EnsureVisible(item, column);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Expand(const wxDataViewItem & item)
	static int _bind_base_Expand(lua_State *L) {
		if (!_lg_typecheck_base_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Expand(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Expand(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_Expand function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Expand(const wxDataViewItem &)");
		}
		self->wxDataViewTreeCtrl::Expand(item);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_ExpandAncestors(const wxDataViewItem & item)
	static int _bind_base_ExpandAncestors(lua_State *L) {
		if (!_lg_typecheck_base_ExpandAncestors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_ExpandAncestors(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_ExpandAncestors(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_ExpandAncestors function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_ExpandAncestors(const wxDataViewItem &)");
		}
		self->wxDataViewTreeCtrl::ExpandAncestors(item);

		return 0;
	}

	// wxDataViewColumn * wxDataViewTreeCtrl::base_GetColumn(unsigned int pos) const
	static int _bind_base_GetColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewTreeCtrl::base_GetColumn(unsigned int pos) const function, expected prototype:\nwxDataViewColumn * wxDataViewTreeCtrl::base_GetColumn(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewTreeCtrl::base_GetColumn(unsigned int) const");
		}
		wxDataViewColumn * lret = self->wxDataViewTreeCtrl::GetColumn(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxDataViewTreeCtrl::base_GetColumnCount() const
	static int _bind_base_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewTreeCtrl::base_GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewTreeCtrl::base_GetColumnCount() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewTreeCtrl::base_GetColumnCount() const");
		}
		unsigned int lret = self->wxDataViewTreeCtrl::GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const
	static int _bind_base_GetColumnPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetColumnPosition(const wxDataViewColumn *) const");
		}
		int lret = self->wxDataViewTreeCtrl::GetColumnPosition(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxDataViewTreeCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	static int _bind_base_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_base_GetItemRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxDataViewTreeCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const function, expected prototype:\nwxRect wxDataViewTreeCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_GetItemRect function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* col=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxDataViewTreeCtrl::base_GetItemRect(const wxDataViewItem &, const wxDataViewColumn *) const");
		}
		wxRect stack_lret = self->wxDataViewTreeCtrl::GetItemRect(item, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetSelectedItemsCount() const
	static int _bind_base_GetSelectedItemsCount(lua_State *L) {
		if (!_lg_typecheck_base_GetSelectedItemsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetSelectedItemsCount() const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetSelectedItemsCount() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetSelectedItemsCount() const");
		}
		int lret = self->wxDataViewTreeCtrl::GetSelectedItemsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::base_GetSelection() const function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::base_GetSelection() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::base_GetSelection() const");
		}
		wxDataViewItem stack_lret = self->wxDataViewTreeCtrl::GetSelection();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewTreeCtrl::base_GetSelections(wxDataViewItemArray & sel) const
	static int _bind_base_GetSelections(lua_State *L) {
		if (!_lg_typecheck_base_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::base_GetSelections(wxDataViewItemArray & sel) const function, expected prototype:\nint wxDataViewTreeCtrl::base_GetSelections(wxDataViewItemArray & sel) const\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewTreeCtrl::base_GetSelections function");
		}
		wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::base_GetSelections(wxDataViewItemArray &) const");
		}
		int lret = self->wxDataViewTreeCtrl::GetSelections(sel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewTreeCtrl::base_GetSortingColumn() const
	static int _bind_base_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetSortingColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewTreeCtrl::base_GetSortingColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewTreeCtrl::base_GetSortingColumn() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewTreeCtrl::base_GetSortingColumn() const");
		}
		wxDataViewColumn * lret = self->wxDataViewTreeCtrl::GetSortingColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const function, expected prototype:\nvoid wxDataViewTreeCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 11709329\narg 3 ID = 185523\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewTreeCtrl::base_HitTest function");
		}
		const wxPoint & point=*point_ptr;
		wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_HitTest function");
		}
		wxDataViewItem & item=*item_ptr;
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,4));

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_HitTest(const wxPoint &, wxDataViewItem &, wxDataViewColumn *&) const");
		}
		self->wxDataViewTreeCtrl::HitTest(point, item, col);

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_IsExpanded(const wxDataViewItem & item) const
	static int _bind_base_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_base_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsExpanded(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsExpanded(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_IsExpanded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsExpanded(const wxDataViewItem &) const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeCtrl::base_IsSelected(const wxDataViewItem & item) const
	static int _bind_base_IsSelected(lua_State *L) {
		if (!_lg_typecheck_base_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_IsSelected(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewTreeCtrl::base_IsSelected(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_IsSelected function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_IsSelected(const wxDataViewItem &) const");
		}
		bool lret = self->wxDataViewTreeCtrl::IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::base_Select(const wxDataViewItem & item)
	static int _bind_base_Select(lua_State *L) {
		if (!_lg_typecheck_base_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Select(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Select(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_Select function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Select(const wxDataViewItem &)");
		}
		self->wxDataViewTreeCtrl::Select(item);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SelectAll() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SelectAll()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SelectAll()");
		}
		self->wxDataViewTreeCtrl::SelectAll();

		return 0;
	}

	// void wxDataViewTreeCtrl::base_SetSelections(const wxDataViewItemArray & sel)
	static int _bind_base_SetSelections(lua_State *L) {
		if (!_lg_typecheck_base_SetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_SetSelections(const wxDataViewItemArray & sel) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_SetSelections(const wxDataViewItemArray & sel)\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		const wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewTreeCtrl::base_SetSelections function");
		}
		const wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_SetSelections(const wxDataViewItemArray &)");
		}
		self->wxDataViewTreeCtrl::SetSelections(sel);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)
	static int _bind_base_StartEditor(lua_State *L) {
		if (!_lg_typecheck_base_StartEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_StartEditor function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_StartEditor(const wxDataViewItem &, unsigned int)");
		}
		self->wxDataViewTreeCtrl::StartEditor(item, column);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_Unselect(const wxDataViewItem & item)
	static int _bind_base_Unselect(lua_State *L) {
		if (!_lg_typecheck_base_Unselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_Unselect(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::base_Unselect(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::base_Unselect function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_Unselect(const wxDataViewItem &)");
		}
		self->wxDataViewTreeCtrl::Unselect(item);

		return 0;
	}

	// void wxDataViewTreeCtrl::base_UnselectAll()
	static int _bind_base_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_base_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::base_UnselectAll() function, expected prototype:\nvoid wxDataViewTreeCtrl::base_UnselectAll()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::base_UnselectAll()");
		}
		self->wxDataViewTreeCtrl::UnselectAll();

		return 0;
	}

	// bool wxDataViewTreeCtrl::base_SetRowHeight(int rowHeight)
	static int _bind_base_SetRowHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetRowHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::base_SetRowHeight(int rowHeight) function, expected prototype:\nbool wxDataViewTreeCtrl::base_SetRowHeight(int rowHeight)\nClass arguments details:\n");
		}

		int rowHeight=(int)lua_tointeger(L,2);

		wxDataViewTreeCtrl* self=Luna< wxObject >::checkSubType< wxDataViewTreeCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::base_SetRowHeight(int)");
		}
		bool lret = self->wxDataViewTreeCtrl::SetRowHeight(rowHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewTreeCtrl* LunaTraits< wxDataViewTreeCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewTreeCtrl::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDataViewTreeCtrl >::_bind_dtor(wxDataViewTreeCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTreeCtrl >::className[] = "wxDataViewTreeCtrl";
const char LunaTraits< wxDataViewTreeCtrl >::fullName[] = "wxDataViewTreeCtrl";
const char LunaTraits< wxDataViewTreeCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTreeCtrl >::parents[] = {"wx.wxDataViewCtrl", 0};
const int LunaTraits< wxDataViewTreeCtrl >::hash = 68008610;
const int LunaTraits< wxDataViewTreeCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDataViewTreeCtrl >::methods[] = {
	{"AppendContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_AppendContainer},
	{"AppendItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_AppendItem},
	{"Create", &luna_wrapper_wxDataViewTreeCtrl::_bind_Create},
	{"DeleteAllItems", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteChildren},
	{"DeleteItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteItem},
	{"GetChildCount", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetChildCount},
	{"GetImageList", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetImageList},
	{"GetItemData", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemData},
	{"GetItemExpandedIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemExpandedIcon},
	{"GetItemIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemIcon},
	{"GetItemText", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemText},
	{"GetNthChild", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetNthChild},
	{"GetStore", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetStore},
	{"InsertContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_InsertContainer},
	{"InsertItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_InsertItem},
	{"IsContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_IsContainer},
	{"PrependContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_PrependContainer},
	{"PrependItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_PrependItem},
	{"SetImageList", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetImageList},
	{"SetItemData", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemData},
	{"SetItemExpandedIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemExpandedIcon},
	{"SetItemIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemIcon},
	{"SetItemText", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemText},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetLabel},
	{"base_AppendColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AppendColumn},
	{"base_PrependColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_PrependColumn},
	{"base_InsertColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_InsertColumn},
	{"base_AssociateModel", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_AssociateModel},
	{"base_ClearColumns", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ClearColumns},
	{"base_Collapse", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Collapse},
	{"base_DeleteColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_DeleteColumn},
	{"base_EnableDragSource", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_EnableDragSource},
	{"base_EnableDropTarget", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_EnableDropTarget},
	{"base_EnsureVisible", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_EnsureVisible},
	{"base_Expand", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Expand},
	{"base_ExpandAncestors", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_ExpandAncestors},
	{"base_GetColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetColumn},
	{"base_GetColumnCount", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetColumnCount},
	{"base_GetColumnPosition", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetColumnPosition},
	{"base_GetItemRect", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetItemRect},
	{"base_GetSelectedItemsCount", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetSelectedItemsCount},
	{"base_GetSelection", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetSelection},
	{"base_GetSelections", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetSelections},
	{"base_GetSortingColumn", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_GetSortingColumn},
	{"base_HitTest", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_HitTest},
	{"base_IsExpanded", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsExpanded},
	{"base_IsSelected", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_IsSelected},
	{"base_Select", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Select},
	{"base_SelectAll", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SelectAll},
	{"base_SetSelections", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetSelections},
	{"base_StartEditor", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_StartEditor},
	{"base_Unselect", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_Unselect},
	{"base_UnselectAll", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_UnselectAll},
	{"base_SetRowHeight", &luna_wrapper_wxDataViewTreeCtrl::_bind_base_SetRowHeight},
	{"__eq", &luna_wrapper_wxDataViewTreeCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewTreeCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTreeCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewTreeCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTreeCtrl >::enumValues[] = {
	{0,0}
};


