#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderCtrlSimple.h>

class luna_wrapper_wxHeaderCtrlSimple {
public:
	typedef Luna< wxHeaderCtrlSimple > luna_t;

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
		//wxHeaderCtrlSimple* ptr= dynamic_cast< wxHeaderCtrlSimple* >(Luna< wxObject >::check(L,1));
		wxHeaderCtrlSimple* ptr= luna_caster< wxObject, wxHeaderCtrlSimple >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderCtrlSimple >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,185523) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,185523) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowSortIndicator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveSortIndicator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data)
	static wxHeaderCtrlSimple* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data) function, expected prototype:\nwxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxHeaderCtrlSimple(L,NULL);
	}

	// wxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data, wxWindow * parent, int winid = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr)
	static wxHeaderCtrlSimple* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data, wxWindow * parent, int winid = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr) function, expected prototype:\nwxHeaderCtrlSimple::wxHeaderCtrlSimple(lua_Table * data, wxWindow * parent, int winid = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHeaderCtrlSimple::wxHeaderCtrlSimple function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::wxHeaderCtrlSimple function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : ::wxHD_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxHeaderCtrlSimple(L,NULL, parent, winid, pos, size, style, name);
	}

	// Overload binder for wxHeaderCtrlSimple::wxHeaderCtrlSimple
	static wxHeaderCtrlSimple* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHeaderCtrlSimple, cannot match any of the overloads for function wxHeaderCtrlSimple:\n  wxHeaderCtrlSimple(lua_Table *)\n  wxHeaderCtrlSimple(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple & col, unsigned int idx)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxHeaderColumnSimple* col_ptr=(Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxHeaderCtrlSimple::InsertColumn function");
		}
		const wxHeaderColumnSimple & col=*col_ptr;
		unsigned int idx=(unsigned int)lua_tointeger(L,3);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::InsertColumn(const wxHeaderColumnSimple &, unsigned int)");
		}
		self->InsertColumn(col, idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col) function, expected prototype:\nvoid wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple & col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		const wxHeaderColumnSimple* col_ptr=(Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxHeaderCtrlSimple::AppendColumn function");
		}
		const wxHeaderColumnSimple & col=*col_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::AppendColumn(const wxHeaderColumnSimple &)");
		}
		self->AppendColumn(col);

		return 0;
	}

	// void wxHeaderCtrlSimple::DeleteColumn(unsigned int idx)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::DeleteColumn(unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::DeleteColumn(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::DeleteColumn(unsigned int)");
		}
		self->DeleteColumn(idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true)
	static int _bind_ShowColumn(lua_State *L) {
		if (!_lg_typecheck_ShowColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::ShowColumn(unsigned int idx, bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int idx=(unsigned int)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::ShowColumn(unsigned int, bool)");
		}
		self->ShowColumn(idx, show);

		return 0;
	}

	// void wxHeaderCtrlSimple::HideColumn(unsigned int idx)
	static int _bind_HideColumn(lua_State *L) {
		if (!_lg_typecheck_HideColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::HideColumn(unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrlSimple::HideColumn(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::HideColumn(unsigned int)");
		}
		self->HideColumn(idx);

		return 0;
	}

	// void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true)
	static int _bind_ShowSortIndicator(lua_State *L) {
		if (!_lg_typecheck_ShowSortIndicator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::ShowSortIndicator(unsigned int idx, bool sortOrder = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int idx=(unsigned int)lua_tointeger(L,2);
		bool sortOrder=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::ShowSortIndicator(unsigned int, bool)");
		}
		self->ShowSortIndicator(idx, sortOrder);

		return 0;
	}

	// void wxHeaderCtrlSimple::RemoveSortIndicator()
	static int _bind_RemoveSortIndicator(lua_State *L) {
		if (!_lg_typecheck_RemoveSortIndicator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::RemoveSortIndicator() function, expected prototype:\nvoid wxHeaderCtrlSimple::RemoveSortIndicator()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::RemoveSortIndicator()");
		}
		self->RemoveSortIndicator();

		return 0;
	}

	// wxClassInfo * wxHeaderCtrlSimple::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHeaderCtrlSimple::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHeaderCtrlSimple::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHeaderCtrlSimple::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHeaderCtrlSimple::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_AcceptsFocus() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_AcceptsFocus() const");
		}
		bool lret = self->wxHeaderCtrlSimple::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxHeaderCtrlSimple::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxHeaderCtrlSimple::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_HasFocus() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_HasFocus() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_HasFocus() const");
		}
		bool lret = self->wxHeaderCtrlSimple::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetCanFocus(bool)");
		}
		self->wxHeaderCtrlSimple::SetCanFocus(canFocus);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetFocus() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetFocus()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetFocus()");
		}
		self->wxHeaderCtrlSimple::SetFocus();

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetFocusFromKbd() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetFocusFromKbd()");
		}
		self->wxHeaderCtrlSimple::SetFocusFromKbd();

		return 0;
	}

	// void wxHeaderCtrlSimple::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_AddChild(wxWindow *)");
		}
		self->wxHeaderCtrlSimple::AddChild(child);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_RemoveChild(wxWindow *)");
		}
		self->wxHeaderCtrlSimple::RemoveChild(child);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxHeaderCtrlSimple::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxHeaderCtrlSimple::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxHeaderCtrlSimple::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxHeaderCtrlSimple::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlSimple::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxHeaderCtrlSimple::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlSimple::base_GetScrollPos(int) const");
		}
		int lret = self->wxHeaderCtrlSimple::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlSimple::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlSimple::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxHeaderCtrlSimple::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlSimple::base_GetScrollRange(int) const");
		}
		int lret = self->wxHeaderCtrlSimple::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlSimple::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlSimple::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxHeaderCtrlSimple::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlSimple::base_GetScrollThumb(int) const");
		}
		int lret = self->wxHeaderCtrlSimple::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxHeaderCtrlSimple::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxHeaderCtrlSimple::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_ScrollLines(int lines) function, expected prototype:\nbool wxHeaderCtrlSimple::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_ScrollLines(int)");
		}
		bool lret = self->wxHeaderCtrlSimple::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_ScrollPages(int pages) function, expected prototype:\nbool wxHeaderCtrlSimple::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_ScrollPages(int)");
		}
		bool lret = self->wxHeaderCtrlSimple::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxHeaderCtrlSimple::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetScrollPos(int, int, bool)");
		}
		self->wxHeaderCtrlSimple::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxHeaderCtrlSimple::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxHeaderCtrlSimple::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Fit() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Fit()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Fit()");
		}
		self->wxHeaderCtrlSimple::Fit();

		return 0;
	}

	// void wxHeaderCtrlSimple::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_FitInside() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_FitInside()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_FitInside()");
		}
		self->wxHeaderCtrlSimple::FitInside();

		return 0;
	}

	// wxSize wxHeaderCtrlSimple::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetMaxSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetMinClientSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetMinSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHeaderCtrlSimple::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHeaderCtrlSimple::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxHeaderCtrlSimple::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHeaderCtrlSimple::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxHeaderCtrlSimple::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxHeaderCtrlSimple::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxHeaderCtrlSimple::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SendSizeEvent(int)");
		}
		self->wxHeaderCtrlSimple::SendSizeEvent(flags);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxHeaderCtrlSimple::SetMaxClientSize(size);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetMaxSize(const wxSize &)");
		}
		self->wxHeaderCtrlSimple::SetMaxSize(size);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetMinClientSize(const wxSize &)");
		}
		self->wxHeaderCtrlSimple::SetMinClientSize(size);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrlSimple::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetMinSize(const wxSize &)");
		}
		self->wxHeaderCtrlSimple::SetMinSize(size);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxHeaderCtrlSimple::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxHeaderCtrlSimple::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxHeaderCtrlSimple::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxHeaderCtrlSimple::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxHeaderCtrlSimple::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxHeaderCtrlSimple::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxHeaderCtrlSimple::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxHeaderCtrlSimple::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxHeaderCtrlSimple::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxHeaderCtrlSimple::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxHeaderCtrlSimple::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_ClearBackground() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_ClearBackground()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_ClearBackground()");
		}
		self->wxHeaderCtrlSimple::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxHeaderCtrlSimple::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxHeaderCtrlSimple::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxHeaderCtrlSimple::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxHeaderCtrlSimple::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxHeaderCtrlSimple::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlSimple::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlSimple::base_GetCharHeight() const function, expected prototype:\nint wxHeaderCtrlSimple::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlSimple::base_GetCharHeight() const");
		}
		int lret = self->wxHeaderCtrlSimple::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlSimple::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlSimple::base_GetCharWidth() const function, expected prototype:\nint wxHeaderCtrlSimple::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlSimple::base_GetCharWidth() const");
		}
		int lret = self->wxHeaderCtrlSimple::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxHeaderCtrlSimple::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxHeaderCtrlSimple::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxHeaderCtrlSimple::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxHeaderCtrlSimple::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxHeaderCtrlSimple::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Refresh(bool, const wxRect *)");
		}
		self->wxHeaderCtrlSimple::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Update() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Update()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Update()");
		}
		self->wxHeaderCtrlSimple::Update();

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxHeaderCtrlSimple::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxHeaderCtrlSimple::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxHeaderCtrlSimple::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxHeaderCtrlSimple::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxHeaderCtrlSimple::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_ShouldInheritColours() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_ShouldInheritColours() const");
		}
		bool lret = self->wxHeaderCtrlSimple::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetThemeEnabled(bool)");
		}
		self->wxHeaderCtrlSimple::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_GetThemeEnabled() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_GetThemeEnabled() const");
		}
		bool lret = self->wxHeaderCtrlSimple::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_CanSetTransparent() function, expected prototype:\nbool wxHeaderCtrlSimple::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_CanSetTransparent()");
		}
		bool lret = self->wxHeaderCtrlSimple::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxHeaderCtrlSimple::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxHeaderCtrlSimple::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxHeaderCtrlSimple::SetNextHandler(handler);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxHeaderCtrlSimple::SetPreviousHandler(handler);

		return 0;
	}

	// long wxHeaderCtrlSimple::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxHeaderCtrlSimple::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxHeaderCtrlSimple::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxHeaderCtrlSimple::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxHeaderCtrlSimple::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetExtraStyle(long)");
		}
		self->wxHeaderCtrlSimple::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetWindowStyleFlag(long)");
		}
		self->wxHeaderCtrlSimple::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Lower() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Lower()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Lower()");
		}
		self->wxHeaderCtrlSimple::Lower();

		return 0;
	}

	// void wxHeaderCtrlSimple::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Raise() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Raise()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Raise()");
		}
		self->wxHeaderCtrlSimple::Raise();

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHeaderCtrlSimple::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxHeaderCtrlSimple::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_IsShown() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_IsShown() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_IsShown() const");
		}
		bool lret = self->wxHeaderCtrlSimple::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_IsShownOnScreen() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_IsShownOnScreen() const");
		}
		bool lret = self->wxHeaderCtrlSimple::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Enable(bool enable = true) function, expected prototype:\nbool wxHeaderCtrlSimple::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Enable(bool)");
		}
		bool lret = self->wxHeaderCtrlSimple::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Show(bool show = true) function, expected prototype:\nbool wxHeaderCtrlSimple::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Show(bool)");
		}
		bool lret = self->wxHeaderCtrlSimple::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHeaderCtrlSimple::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxHeaderCtrlSimple::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHeaderCtrlSimple::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHeaderCtrlSimple::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxHeaderCtrlSimple::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHeaderCtrlSimple::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHeaderCtrlSimple::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxHeaderCtrlSimple::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxHeaderCtrlSimple::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxHeaderCtrlSimple::base_GetValidator() function, expected prototype:\nwxValidator * wxHeaderCtrlSimple::base_GetValidator()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxHeaderCtrlSimple::base_GetValidator()");
		}
		wxValidator * lret = self->wxHeaderCtrlSimple::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxHeaderCtrlSimple::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetValidator(const wxValidator &)");
		}
		self->wxHeaderCtrlSimple::SetValidator(validator);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_TransferDataFromWindow() function, expected prototype:\nbool wxHeaderCtrlSimple::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_TransferDataFromWindow()");
		}
		bool lret = self->wxHeaderCtrlSimple::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_TransferDataToWindow() function, expected prototype:\nbool wxHeaderCtrlSimple::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_TransferDataToWindow()");
		}
		bool lret = self->wxHeaderCtrlSimple::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Validate() function, expected prototype:\nbool wxHeaderCtrlSimple::base_Validate()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Validate()");
		}
		bool lret = self->wxHeaderCtrlSimple::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxHeaderCtrlSimple::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxHeaderCtrlSimple::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxHeaderCtrlSimple::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxHeaderCtrlSimple::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxHeaderCtrlSimple::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHeaderCtrlSimple::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHeaderCtrlSimple::base_GetName() const function, expected prototype:\nwxString wxHeaderCtrlSimple::base_GetName() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHeaderCtrlSimple::base_GetName() const");
		}
		wxString lret = self->wxHeaderCtrlSimple::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxHeaderCtrlSimple::SetLayoutDirection(dir);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetName(const wxString & name) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetName(const wxString &)");
		}
		self->wxHeaderCtrlSimple::SetName(name);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxHeaderCtrlSimple::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxHeaderCtrlSimple::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Destroy() function, expected prototype:\nbool wxHeaderCtrlSimple::base_Destroy()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Destroy()");
		}
		bool lret = self->wxHeaderCtrlSimple::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxHeaderCtrlSimple::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxHeaderCtrlSimple::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxHeaderCtrlSimple::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxHeaderCtrlSimple::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxHeaderCtrlSimple::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxHeaderCtrlSimple::SetDropTarget(target);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_DragAcceptFiles(bool)");
		}
		self->wxHeaderCtrlSimple::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_Layout() function, expected prototype:\nbool wxHeaderCtrlSimple::base_Layout()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_Layout()");
		}
		bool lret = self->wxHeaderCtrlSimple::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_HasCapture() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_HasCapture() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_HasCapture() const");
		}
		bool lret = self->wxHeaderCtrlSimple::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxHeaderCtrlSimple::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxHeaderCtrlSimple::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxHeaderCtrlSimple::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_WarpPointer(int, int)");
		}
		self->wxHeaderCtrlSimple::WarpPointer(x, y);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHeaderCtrlSimple::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxHeaderCtrlSimple::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_HasMultiplePages() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_HasMultiplePages() const");
		}
		bool lret = self->wxHeaderCtrlSimple::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_InheritAttributes() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_InheritAttributes()");
		}
		self->wxHeaderCtrlSimple::InheritAttributes();

		return 0;
	}

	// void wxHeaderCtrlSimple::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_InitDialog() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_InitDialog()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_InitDialog()");
		}
		self->wxHeaderCtrlSimple::InitDialog();

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_IsRetained() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_IsRetained() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_IsRetained() const");
		}
		bool lret = self->wxHeaderCtrlSimple::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_IsTopLevel() const function, expected prototype:\nbool wxHeaderCtrlSimple::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_IsTopLevel() const");
		}
		bool lret = self->wxHeaderCtrlSimple::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_MakeModal(bool)");
		}
		self->wxHeaderCtrlSimple::MakeModal(modal);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_OnInternalIdle() function, expected prototype:\nvoid wxHeaderCtrlSimple::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_OnInternalIdle()");
		}
		self->wxHeaderCtrlSimple::OnInternalIdle();

		return 0;
	}

	// bool wxHeaderCtrlSimple::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxHeaderCtrlSimple::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxHeaderCtrlSimple::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderCtrlSimple::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrlSimple::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxHeaderCtrlSimple::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrlSimple::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxHeaderCtrlSimple::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrlSimple::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_UpdateWindowUI(long)");
		}
		self->wxHeaderCtrlSimple::UpdateWindowUI(flags);

		return 0;
	}

	// void wxHeaderCtrlSimple::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHeaderCtrlSimple::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_Command(wxCommandEvent &)");
		}
		self->wxHeaderCtrlSimple::Command(event);

		return 0;
	}

	// wxString wxHeaderCtrlSimple::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHeaderCtrlSimple::base_GetLabel() const function, expected prototype:\nwxString wxHeaderCtrlSimple::base_GetLabel() const\nClass arguments details:\n");
		}


		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHeaderCtrlSimple::base_GetLabel() const");
		}
		wxString lret = self->wxHeaderCtrlSimple::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHeaderCtrlSimple::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrlSimple::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxHeaderCtrlSimple::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderCtrlSimple* self=Luna< wxObject >::checkSubType< wxHeaderCtrlSimple >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrlSimple::base_SetLabel(const wxString &)");
		}
		self->wxHeaderCtrlSimple::SetLabel(label);

		return 0;
	}


	// Operator binds:

};

wxHeaderCtrlSimple* LunaTraits< wxHeaderCtrlSimple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderCtrlSimple::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const wxHeaderColumn & wxHeaderCtrl::GetColumn(unsigned int idx) const
}

void LunaTraits< wxHeaderCtrlSimple >::_bind_dtor(wxHeaderCtrlSimple* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderCtrlSimple >::className[] = "wxHeaderCtrlSimple";
const char LunaTraits< wxHeaderCtrlSimple >::fullName[] = "wxHeaderCtrlSimple";
const char LunaTraits< wxHeaderCtrlSimple >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderCtrlSimple >::parents[] = {"wx.wxHeaderCtrl", 0};
const int LunaTraits< wxHeaderCtrlSimple >::hash = 31402285;
const int LunaTraits< wxHeaderCtrlSimple >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHeaderCtrlSimple >::methods[] = {
	{"InsertColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_InsertColumn},
	{"AppendColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_AppendColumn},
	{"DeleteColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_DeleteColumn},
	{"ShowColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_ShowColumn},
	{"HideColumn", &luna_wrapper_wxHeaderCtrlSimple::_bind_HideColumn},
	{"ShowSortIndicator", &luna_wrapper_wxHeaderCtrlSimple::_bind_ShowSortIndicator},
	{"RemoveSortIndicator", &luna_wrapper_wxHeaderCtrlSimple::_bind_RemoveSortIndicator},
	{"base_GetClassInfo", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxHeaderCtrlSimple::_bind_base_SetLabel},
	{"__eq", &luna_wrapper_wxHeaderCtrlSimple::_bind___eq},
	{"getTable", &luna_wrapper_wxHeaderCtrlSimple::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderCtrlSimple >::converters[] = {
	{"wxObject", &luna_wrapper_wxHeaderCtrlSimple::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderCtrlSimple >::enumValues[] = {
	{0,0}
};


