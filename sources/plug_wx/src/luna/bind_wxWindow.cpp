#include <plug_common.h>

class luna_wrapper_wxWindow {
public:
	typedef Luna< wxWindow > luna_t;

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
		wxWindow* ptr= dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindow >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AcceptsFocusFromKeyboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AcceptsFocusRecursively(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFocusFromKbd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindWindow_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindow_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGrandParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrevSibling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AlwaysShowScrollbars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollThumb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanScroll(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasScrollbar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsScrollbarAlwaysShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetScrollPos(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CacheBestSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WindowToClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FitInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVirtualSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVirtualSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestVirtualSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowBorderSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InvalidateBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PostSizeEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PostSizeEventToParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SendSizeEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SendSizeEventToParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!dynamic_cast< wxRect* >(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContainingSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitialSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!dynamic_cast< wxRect* >(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints_overload_1(lua_State *L) {
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

	inline static bool _lg_typecheck_SetSizeHints_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_SetVirtualSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVirtualSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Center(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CenterOnParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Centre(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CentreOnParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScreenPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScreenPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScreenRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Move_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Move_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToScreen_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToScreen_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertDialogToPixels_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertDialogToPixels_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToDialog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToDialog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScreenToClient_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScreenToClient_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Freeze(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Thaw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxFont* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUpdateRegion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpdateClientRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTransparentBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShouldInheritColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEventHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HandleAsNavigationKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HandleWindowEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessWindowEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessWindowEventLocally(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopEventHandler(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveAfterInTabOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveBeforeInTabOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Navigate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NavigateIn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Lower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Raise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HideWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!dynamic_cast< wxRect* >(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShownOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Disable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHelpText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpTextAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolTipText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolTip_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolTip_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxToolTip* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnsetToolTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransferDataFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferDataToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowVariant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowVariant(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsBeingDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93694316)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DragAcceptFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetContainingSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSizer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizerAndFit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetConstraints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAutoLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAutoLayout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CaptureMouse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaret(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReleaseMouse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCaret(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,13309003)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoUpdateWindowUI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMultiplePages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InheritAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRetained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsThisEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTopLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeModal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnInternalIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RegisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnregisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateWindowUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClassDefaultAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFocus(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindWindowById(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindowByLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindowByName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCapture(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NewControlId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnreserveControlId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindow::wxWindow()
	static wxWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow() function, expected prototype:\nwxWindow::wxWindow()\nClass arguments details:\n");
		}


		return new wxWindow();
	}

	// wxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)
	static wxWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr) function, expected prototype:\nwxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::wxWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::wxWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxWindow(parent, id, pos, size, style, name);
	}

	// Overload binder for wxWindow::wxWindow
	static wxWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWindow, cannot match any of the overloads for function wxWindow:\n  wxWindow()\n  wxWindow(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr) function, expected prototype:\nbool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocus() const
	static int _bind_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocus() const function, expected prototype:\nbool wxWindow::AcceptsFocus() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocus() const");
		}
		bool lret = self->AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	static int _bind_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxWindow::AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocusRecursively() const
	static int _bind_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocusRecursively() const function, expected prototype:\nbool wxWindow::AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocusRecursively() const");
		}
		bool lret = self->AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasFocus() const
	static int _bind_HasFocus(lua_State *L) {
		if (!_lg_typecheck_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasFocus() const function, expected prototype:\nbool wxWindow::HasFocus() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasFocus() const");
		}
		bool lret = self->HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetCanFocus(bool canFocus)
	static int _bind_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxWindow::SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetCanFocus(bool)");
		}
		self->SetCanFocus(canFocus);

		return 0;
	}

	// void wxWindow::SetFocus()
	static int _bind_SetFocus(lua_State *L) {
		if (!_lg_typecheck_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetFocus() function, expected prototype:\nvoid wxWindow::SetFocus()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetFocus()");
		}
		self->SetFocus();

		return 0;
	}

	// void wxWindow::SetFocusFromKbd()
	static int _bind_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetFocusFromKbd() function, expected prototype:\nvoid wxWindow::SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetFocusFromKbd()");
		}
		self->SetFocusFromKbd();

		return 0;
	}

	// void wxWindow::AddChild(wxWindow * child)
	static int _bind_AddChild(lua_State *L) {
		if (!_lg_typecheck_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::AddChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::AddChild(wxWindow *)");
		}
		self->AddChild(child);

		return 0;
	}

	// bool wxWindow::DestroyChildren()
	static int _bind_DestroyChildren(lua_State *L) {
		if (!_lg_typecheck_DestroyChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::DestroyChildren() function, expected prototype:\nbool wxWindow::DestroyChildren()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::DestroyChildren()");
		}
		bool lret = self->DestroyChildren();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWindow * wxWindow::FindWindow(long id) const
	static int _bind_FindWindow_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindWindow_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::FindWindow(long id) const function, expected prototype:\nwxWindow * wxWindow::FindWindow(long id) const\nClass arguments details:\n");
		}

		long id=(long)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::FindWindow(long) const");
		}
		wxWindow * lret = self->FindWindow(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::FindWindow(const wxString & name) const
	static int _bind_FindWindow_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindWindow_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::FindWindow(const wxString & name) const function, expected prototype:\nwxWindow * wxWindow::FindWindow(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::FindWindow(const wxString &) const");
		}
		wxWindow * lret = self->FindWindow(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxWindow::FindWindow
	static int _bind_FindWindow(lua_State *L) {
		if (_lg_typecheck_FindWindow_overload_1(L)) return _bind_FindWindow_overload_1(L);
		if (_lg_typecheck_FindWindow_overload_2(L)) return _bind_FindWindow_overload_2(L);

		luaL_error(L, "error in function FindWindow, cannot match any of the overloads for function FindWindow:\n  FindWindow(long)\n  FindWindow(const wxString &)\n");
		return 0;
	}

	// wxWindowList & wxWindow::GetChildren()
	static int _bind_GetChildren_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowList & wxWindow::GetChildren() function, expected prototype:\nwxWindowList & wxWindow::GetChildren()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindowList & wxWindow::GetChildren()");
		}
		wxWindowList & lret = self->GetChildren();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxWindowList &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// const wxWindowList & wxWindow::GetChildren() const
	static int _bind_GetChildren_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxWindowList & wxWindow::GetChildren() const function, expected prototype:\nconst wxWindowList & wxWindow::GetChildren() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxWindowList & wxWindow::GetChildren() const");
		}
		const wxWindowList & lret = self->GetChildren();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const wxWindowList &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// Overload binder for wxWindow::GetChildren
	static int _bind_GetChildren(lua_State *L) {
		if (_lg_typecheck_GetChildren_overload_1(L)) return _bind_GetChildren_overload_1(L);
		if (_lg_typecheck_GetChildren_overload_2(L)) return _bind_GetChildren_overload_2(L);

		luaL_error(L, "error in function GetChildren, cannot match any of the overloads for function GetChildren:\n  GetChildren()\n  GetChildren()\n");
		return 0;
	}

	// void wxWindow::RemoveChild(wxWindow * child)
	static int _bind_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::RemoveChild(wxWindow *)");
		}
		self->RemoveChild(child);

		return 0;
	}

	// wxWindow * wxWindow::GetGrandParent() const
	static int _bind_GetGrandParent(lua_State *L) {
		if (!_lg_typecheck_GetGrandParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetGrandParent() const function, expected prototype:\nwxWindow * wxWindow::GetGrandParent() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetGrandParent() const");
		}
		wxWindow * lret = self->GetGrandParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetNextSibling() const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetNextSibling() const function, expected prototype:\nwxWindow * wxWindow::GetNextSibling() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetNextSibling() const");
		}
		wxWindow * lret = self->GetNextSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetParent() const function, expected prototype:\nwxWindow * wxWindow::GetParent() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetParent() const");
		}
		wxWindow * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetPrevSibling() const
	static int _bind_GetPrevSibling(lua_State *L) {
		if (!_lg_typecheck_GetPrevSibling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetPrevSibling() const function, expected prototype:\nwxWindow * wxWindow::GetPrevSibling() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetPrevSibling() const");
		}
		wxWindow * lret = self->GetPrevSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::Reparent(wxWindow * newParent)
	static int _bind_Reparent(lua_State *L) {
		if (!_lg_typecheck_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Reparent(wxWindow * newParent) function, expected prototype:\nbool wxWindow::Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Reparent(wxWindow *)");
		}
		bool lret = self->Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::AlwaysShowScrollbars(bool, bool)");
		}
		self->AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxWindow::GetScrollPos(int orientation) const
	static int _bind_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollPos(int orientation) const function, expected prototype:\nint wxWindow::GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollPos(int) const");
		}
		int lret = self->GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetScrollRange(int orientation) const
	static int _bind_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollRange(int orientation) const function, expected prototype:\nint wxWindow::GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollRange(int) const");
		}
		int lret = self->GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetScrollThumb(int orientation) const
	static int _bind_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollThumb(int orientation) const function, expected prototype:\nint wxWindow::GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollThumb(int) const");
		}
		int lret = self->GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWindow::CanScroll(int orient) const
	static int _bind_CanScroll(lua_State *L) {
		if (!_lg_typecheck_CanScroll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::CanScroll(int orient) const function, expected prototype:\nbool wxWindow::CanScroll(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::CanScroll(int) const");
		}
		bool lret = self->CanScroll(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasScrollbar(int orient) const
	static int _bind_HasScrollbar(lua_State *L) {
		if (!_lg_typecheck_HasScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasScrollbar(int orient) const function, expected prototype:\nbool wxWindow::HasScrollbar(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasScrollbar(int) const");
		}
		bool lret = self->HasScrollbar(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	static int _bind_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxWindow::IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ScrollLines(int lines)
	static int _bind_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ScrollLines(int lines) function, expected prototype:\nbool wxWindow::ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ScrollLines(int)");
		}
		bool lret = self->ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ScrollPages(int pages)
	static int _bind_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ScrollPages(int pages) function, expected prototype:\nbool wxWindow::ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ScrollPages(int)");
		}
		bool lret = self->ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::ScrollWindow(int, int, const wxRect *)");
		}
		self->ScrollWindow(dx, dy, rect);

		return 0;
	}

	// bool wxWindow::LineUp()
	static int _bind_LineUp(lua_State *L) {
		if (!_lg_typecheck_LineUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::LineUp() function, expected prototype:\nbool wxWindow::LineUp()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::LineUp()");
		}
		bool lret = self->LineUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::LineDown()
	static int _bind_LineDown(lua_State *L) {
		if (!_lg_typecheck_LineDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::LineDown() function, expected prototype:\nbool wxWindow::LineDown()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::LineDown()");
		}
		bool lret = self->LineDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PageUp()
	static int _bind_PageUp(lua_State *L) {
		if (!_lg_typecheck_PageUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::PageUp() function, expected prototype:\nbool wxWindow::PageUp()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::PageUp()");
		}
		bool lret = self->PageUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PageDown()
	static int _bind_PageDown(lua_State *L) {
		if (!_lg_typecheck_PageDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::PageDown() function, expected prototype:\nbool wxWindow::PageDown()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::PageDown()");
		}
		bool lret = self->PageDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetScrollPos(int, int, bool)");
		}
		self->SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetScrollbar(int, int, int, int, bool)");
		}
		self->SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// void wxWindow::CacheBestSize(const wxSize & size) const
	static int _bind_CacheBestSize(lua_State *L) {
		if (!_lg_typecheck_CacheBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::CacheBestSize(const wxSize & size) const function, expected prototype:\nvoid wxWindow::CacheBestSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::CacheBestSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::CacheBestSize(const wxSize &) const");
		}
		self->CacheBestSize(size);

		return 0;
	}

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	static int _bind_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	static int _bind_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::Fit()
	static int _bind_Fit(lua_State *L) {
		if (!_lg_typecheck_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Fit() function, expected prototype:\nvoid wxWindow::Fit()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Fit()");
		}
		self->Fit();

		return 0;
	}

	// void wxWindow::FitInside()
	static int _bind_FitInside(lua_State *L) {
		if (!_lg_typecheck_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::FitInside() function, expected prototype:\nvoid wxWindow::FitInside()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::FitInside()");
		}
		self->FitInside();

		return 0;
	}

	// wxSize wxWindow::GetBestSize() const
	static int _bind_GetBestSize(lua_State *L) {
		if (!_lg_typecheck_GetBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetBestSize() const function, expected prototype:\nwxSize wxWindow::GetBestSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetBestSize() const");
		}
		wxSize stack_lret = self->GetBestSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetClientSize(int * width, int * height) const
	static int _bind_GetClientSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetClientSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetClientSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetClientSize(int * width, int * height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetClientSize(int *, int *) const");
		}
		self->GetClientSize(&width, &height);

		return 0;
	}

	// wxSize wxWindow::GetClientSize() const
	static int _bind_GetClientSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetClientSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetClientSize() const function, expected prototype:\nwxSize wxWindow::GetClientSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetClientSize() const");
		}
		wxSize stack_lret = self->GetClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetClientSize
	static int _bind_GetClientSize(lua_State *L) {
		if (_lg_typecheck_GetClientSize_overload_1(L)) return _bind_GetClientSize_overload_1(L);
		if (_lg_typecheck_GetClientSize_overload_2(L)) return _bind_GetClientSize_overload_2(L);

		luaL_error(L, "error in function GetClientSize, cannot match any of the overloads for function GetClientSize:\n  GetClientSize(int *, int *)\n  GetClientSize()\n");
		return 0;
	}

	// wxSize wxWindow::GetEffectiveMinSize() const
	static int _bind_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetEffectiveMinSize() const function, expected prototype:\nwxSize wxWindow::GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMaxClientSize() const
	static int _bind_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMaxClientSize() const function, expected prototype:\nwxSize wxWindow::GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMaxClientSize() const");
		}
		wxSize stack_lret = self->GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMaxSize() const
	static int _bind_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMaxSize() const function, expected prototype:\nwxSize wxWindow::GetMaxSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMaxSize() const");
		}
		wxSize stack_lret = self->GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMinClientSize() const
	static int _bind_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMinClientSize() const function, expected prototype:\nwxSize wxWindow::GetMinClientSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMinClientSize() const");
		}
		wxSize stack_lret = self->GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMinSize() const
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMinSize() const function, expected prototype:\nwxSize wxWindow::GetMinSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMinSize() const");
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxWindow::GetMinWidth() const
	static int _bind_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMinWidth() const function, expected prototype:\nint wxWindow::GetMinWidth() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetMinWidth() const");
		}
		int lret = self->GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMinHeight() const
	static int _bind_GetMinHeight(lua_State *L) {
		if (!_lg_typecheck_GetMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMinHeight() const function, expected prototype:\nint wxWindow::GetMinHeight() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetMinHeight() const");
		}
		int lret = self->GetMinHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMaxWidth() const
	static int _bind_GetMaxWidth(lua_State *L) {
		if (!_lg_typecheck_GetMaxWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMaxWidth() const function, expected prototype:\nint wxWindow::GetMaxWidth() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetMaxWidth() const");
		}
		int lret = self->GetMaxWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMaxHeight() const
	static int _bind_GetMaxHeight(lua_State *L) {
		if (!_lg_typecheck_GetMaxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMaxHeight() const function, expected prototype:\nint wxWindow::GetMaxHeight() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetMaxHeight() const");
		}
		int lret = self->GetMaxHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWindow::GetSize(int * width, int * height) const
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetSize(int * width, int * height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetSize(int *, int *) const");
		}
		self->GetSize(&width, &height);

		return 0;
	}

	// wxSize wxWindow::GetSize() const
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetSize() const function, expected prototype:\nwxSize wxWindow::GetSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize(int *, int *)\n  GetSize()\n");
		return 0;
	}

	// wxSize wxWindow::GetVirtualSize() const
	static int _bind_GetVirtualSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetVirtualSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetVirtualSize() const function, expected prototype:\nwxSize wxWindow::GetVirtualSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetVirtualSize() const");
		}
		wxSize stack_lret = self->GetVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetVirtualSize(int * width, int * height) const
	static int _bind_GetVirtualSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetVirtualSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetVirtualSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetVirtualSize(int * width, int * height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetVirtualSize(int *, int *) const");
		}
		self->GetVirtualSize(&width, &height);

		return 0;
	}

	// Overload binder for wxWindow::GetVirtualSize
	static int _bind_GetVirtualSize(lua_State *L) {
		if (_lg_typecheck_GetVirtualSize_overload_1(L)) return _bind_GetVirtualSize_overload_1(L);
		if (_lg_typecheck_GetVirtualSize_overload_2(L)) return _bind_GetVirtualSize_overload_2(L);

		luaL_error(L, "error in function GetVirtualSize, cannot match any of the overloads for function GetVirtualSize:\n  GetVirtualSize()\n  GetVirtualSize(int *, int *)\n");
		return 0;
	}

	// wxSize wxWindow::GetBestVirtualSize() const
	static int _bind_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetBestVirtualSize() const function, expected prototype:\nwxSize wxWindow::GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetWindowBorderSize() const
	static int _bind_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetWindowBorderSize() const function, expected prototype:\nwxSize wxWindow::GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::InformFirstDirection(int, int, int)");
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::InvalidateBestSize()
	static int _bind_InvalidateBestSize(lua_State *L) {
		if (!_lg_typecheck_InvalidateBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::InvalidateBestSize() function, expected prototype:\nvoid wxWindow::InvalidateBestSize()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::InvalidateBestSize()");
		}
		self->InvalidateBestSize();

		return 0;
	}

	// void wxWindow::PostSizeEvent()
	static int _bind_PostSizeEvent(lua_State *L) {
		if (!_lg_typecheck_PostSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::PostSizeEvent() function, expected prototype:\nvoid wxWindow::PostSizeEvent()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::PostSizeEvent()");
		}
		self->PostSizeEvent();

		return 0;
	}

	// void wxWindow::PostSizeEventToParent()
	static int _bind_PostSizeEventToParent(lua_State *L) {
		if (!_lg_typecheck_PostSizeEventToParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::PostSizeEventToParent() function, expected prototype:\nvoid wxWindow::PostSizeEventToParent()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::PostSizeEventToParent()");
		}
		self->PostSizeEventToParent();

		return 0;
	}

	// void wxWindow::SendSizeEvent(int flags = 0)
	static int _bind_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxWindow::SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SendSizeEvent(int)");
		}
		self->SendSizeEvent(flags);

		return 0;
	}

	// void wxWindow::SendSizeEventToParent(int flags = 0)
	static int _bind_SendSizeEventToParent(lua_State *L) {
		if (!_lg_typecheck_SendSizeEventToParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SendSizeEventToParent(int flags = 0) function, expected prototype:\nvoid wxWindow::SendSizeEventToParent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SendSizeEventToParent(int)");
		}
		self->SendSizeEventToParent(flags);

		return 0;
	}

	// void wxWindow::SetClientSize(int width, int height)
	static int _bind_SetClientSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetClientSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(int, int)");
		}
		self->SetClientSize(width, height);

		return 0;
	}

	// void wxWindow::SetClientSize(const wxSize & size)
	static int _bind_SetClientSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(const wxSize &)");
		}
		self->SetClientSize(size);

		return 0;
	}

	// void wxWindow::SetClientSize(const wxRect & rect)
	static int _bind_SetClientSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(const wxRect & rect) function, expected prototype:\nvoid wxWindow::SetClientSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::SetClientSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(const wxRect &)");
		}
		self->SetClientSize(rect);

		return 0;
	}

	// Overload binder for wxWindow::SetClientSize
	static int _bind_SetClientSize(lua_State *L) {
		if (_lg_typecheck_SetClientSize_overload_1(L)) return _bind_SetClientSize_overload_1(L);
		if (_lg_typecheck_SetClientSize_overload_2(L)) return _bind_SetClientSize_overload_2(L);
		if (_lg_typecheck_SetClientSize_overload_3(L)) return _bind_SetClientSize_overload_3(L);

		luaL_error(L, "error in function SetClientSize, cannot match any of the overloads for function SetClientSize:\n  SetClientSize(int, int)\n  SetClientSize(const wxSize &)\n  SetClientSize(const wxRect &)\n");
		return 0;
	}

	// void wxWindow::SetContainingSizer(wxSizer * sizer)
	static int _bind_SetContainingSizer(lua_State *L) {
		if (!_lg_typecheck_SetContainingSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetContainingSizer(wxSizer * sizer) function, expected prototype:\nvoid wxWindow::SetContainingSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetContainingSizer(wxSizer *)");
		}
		self->SetContainingSizer(sizer);

		return 0;
	}

	// void wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize)
	static int _bind_SetInitialSize(lua_State *L) {
		if (!_lg_typecheck_SetInitialSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize) function, expected prototype:\nvoid wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetInitialSize function");
		}
		const wxSize & size=luatop>1 ? *size_ptr : wxDefaultSize;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetInitialSize(const wxSize &)");
		}
		self->SetInitialSize(size);

		return 0;
	}

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	static int _bind_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetMaxClientSize(const wxSize &)");
		}
		self->SetMaxClientSize(size);

		return 0;
	}

	// void wxWindow::SetMaxSize(const wxSize & size)
	static int _bind_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetMaxSize(const wxSize &)");
		}
		self->SetMaxSize(size);

		return 0;
	}

	// void wxWindow::SetMinClientSize(const wxSize & size)
	static int _bind_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetMinClientSize(const wxSize &)");
		}
		self->SetMinClientSize(size);

		return 0;
	}

	// void wxWindow::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetMinSize(const wxSize &)");
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO)
	static int _bind_SetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO) function, expected prototype:\nvoid wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int sizeFlags=luatop>5 ? (int)lua_tointeger(L,6) : wxSIZE_AUTO;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(int, int, int, int, int)");
		}
		self->SetSize(x, y, width, height, sizeFlags);

		return 0;
	}

	// void wxWindow::SetSize(const wxRect & rect)
	static int _bind_SetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(const wxRect & rect) function, expected prototype:\nvoid wxWindow::SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(const wxRect &)");
		}
		self->SetSize(rect);

		return 0;
	}

	// void wxWindow::SetSize(const wxSize & size)
	static int _bind_SetSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(const wxSize &)");
		}
		self->SetSize(size);

		return 0;
	}

	// void wxWindow::SetSize(int width, int height)
	static int _bind_SetSize_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(int, int)");
		}
		self->SetSize(width, height);

		return 0;
	}

	// Overload binder for wxWindow::SetSize
	static int _bind_SetSize(lua_State *L) {
		if (_lg_typecheck_SetSize_overload_1(L)) return _bind_SetSize_overload_1(L);
		if (_lg_typecheck_SetSize_overload_2(L)) return _bind_SetSize_overload_2(L);
		if (_lg_typecheck_SetSize_overload_3(L)) return _bind_SetSize_overload_3(L);
		if (_lg_typecheck_SetSize_overload_4(L)) return _bind_SetSize_overload_4(L);

		luaL_error(L, "error in function SetSize, cannot match any of the overloads for function SetSize:\n  SetSize(int, int, int, int, int)\n  SetSize(const wxRect &)\n  SetSize(const wxSize &)\n  SetSize(int, int)\n");
		return 0;
	}

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxWindow::SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxWindow::SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxWindow::SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizeHints(int, int, int, int, int, int)");
		}
		self->SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxWindow::SetSizeHints
	static int _bind_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_SetSizeHints_overload_1(L)) return _bind_SetSizeHints_overload_1(L);
		if (_lg_typecheck_SetSizeHints_overload_2(L)) return _bind_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function SetSizeHints, cannot match any of the overloads for function SetSizeHints:\n  SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// void wxWindow::SetVirtualSize(int width, int height)
	static int _bind_SetVirtualSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetVirtualSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetVirtualSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetVirtualSize(int, int)");
		}
		self->SetVirtualSize(width, height);

		return 0;
	}

	// void wxWindow::SetVirtualSize(const wxSize & size)
	static int _bind_SetVirtualSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetVirtualSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetVirtualSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetVirtualSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetVirtualSize(const wxSize &)");
		}
		self->SetVirtualSize(size);

		return 0;
	}

	// Overload binder for wxWindow::SetVirtualSize
	static int _bind_SetVirtualSize(lua_State *L) {
		if (_lg_typecheck_SetVirtualSize_overload_1(L)) return _bind_SetVirtualSize_overload_1(L);
		if (_lg_typecheck_SetVirtualSize_overload_2(L)) return _bind_SetVirtualSize_overload_2(L);

		luaL_error(L, "error in function SetVirtualSize, cannot match any of the overloads for function SetVirtualSize:\n  SetVirtualSize(int, int)\n  SetVirtualSize(const wxSize &)\n");
		return 0;
	}

	// void wxWindow::Center(int dir = wxBOTH)
	static int _bind_Center(lua_State *L) {
		if (!_lg_typecheck_Center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Center(int dir = wxBOTH) function, expected prototype:\nvoid wxWindow::Center(int dir = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int dir=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Center(int)");
		}
		self->Center(dir);

		return 0;
	}

	// void wxWindow::CenterOnParent(int dir = wxBOTH)
	static int _bind_CenterOnParent(lua_State *L) {
		if (!_lg_typecheck_CenterOnParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::CenterOnParent(int dir = wxBOTH) function, expected prototype:\nvoid wxWindow::CenterOnParent(int dir = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int dir=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::CenterOnParent(int)");
		}
		self->CenterOnParent(dir);

		return 0;
	}

	// void wxWindow::Centre(int direction = wxBOTH)
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Centre(int direction = wxBOTH) function, expected prototype:\nvoid wxWindow::Centre(int direction = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Centre(int)");
		}
		self->Centre(direction);

		return 0;
	}

	// void wxWindow::CentreOnParent(int direction = wxBOTH)
	static int _bind_CentreOnParent(lua_State *L) {
		if (!_lg_typecheck_CentreOnParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::CentreOnParent(int direction = wxBOTH) function, expected prototype:\nvoid wxWindow::CentreOnParent(int direction = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::CentreOnParent(int)");
		}
		self->CentreOnParent(direction);

		return 0;
	}

	// void wxWindow::GetPosition(int * x, int * y) const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetPosition(int * x, int * y) const function, expected prototype:\nvoid wxWindow::GetPosition(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetPosition(int *, int *) const");
		}
		self->GetPosition(&x, &y);

		return 0;
	}

	// wxPoint wxWindow::GetPosition() const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetPosition() const function, expected prototype:\nwxPoint wxWindow::GetPosition() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition(int *, int *)\n  GetPosition()\n");
		return 0;
	}

	// wxRect wxWindow::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetRect() const function, expected prototype:\nwxRect wxWindow::GetRect() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetRect() const");
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetScreenPosition(int * x, int * y) const
	static int _bind_GetScreenPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetScreenPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetScreenPosition(int * x, int * y) const function, expected prototype:\nvoid wxWindow::GetScreenPosition(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetScreenPosition(int *, int *) const");
		}
		self->GetScreenPosition(&x, &y);

		return 0;
	}

	// wxPoint wxWindow::GetScreenPosition() const
	static int _bind_GetScreenPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetScreenPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetScreenPosition() const function, expected prototype:\nwxPoint wxWindow::GetScreenPosition() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetScreenPosition() const");
		}
		wxPoint stack_lret = self->GetScreenPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetScreenPosition
	static int _bind_GetScreenPosition(lua_State *L) {
		if (_lg_typecheck_GetScreenPosition_overload_1(L)) return _bind_GetScreenPosition_overload_1(L);
		if (_lg_typecheck_GetScreenPosition_overload_2(L)) return _bind_GetScreenPosition_overload_2(L);

		luaL_error(L, "error in function GetScreenPosition, cannot match any of the overloads for function GetScreenPosition:\n  GetScreenPosition(int *, int *)\n  GetScreenPosition()\n");
		return 0;
	}

	// wxRect wxWindow::GetScreenRect() const
	static int _bind_GetScreenRect(lua_State *L) {
		if (!_lg_typecheck_GetScreenRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetScreenRect() const function, expected prototype:\nwxRect wxWindow::GetScreenRect() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetScreenRect() const");
		}
		wxRect stack_lret = self->GetScreenRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxWindow::GetClientAreaOrigin() const
	static int _bind_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxWindow::GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxWindow::GetClientRect() const
	static int _bind_GetClientRect(lua_State *L) {
		if (!_lg_typecheck_GetClientRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetClientRect() const function, expected prototype:\nwxRect wxWindow::GetClientRect() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetClientRect() const");
		}
		wxRect stack_lret = self->GetClientRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING)
	static int _bind_Move_overload_1(lua_State *L) {
		if (!_lg_typecheck_Move_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING) function, expected prototype:\nvoid wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : wxSIZE_USE_EXISTING;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Move(int, int, int)");
		}
		self->Move(x, y, flags);

		return 0;
	}

	// void wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING)
	static int _bind_Move_overload_2(lua_State *L) {
		if (!_lg_typecheck_Move_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING) function, expected prototype:\nvoid wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::Move function");
		}
		const wxPoint & pt=*pt_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxSIZE_USE_EXISTING;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Move(const wxPoint &, int)");
		}
		self->Move(pt, flags);

		return 0;
	}

	// Overload binder for wxWindow::Move
	static int _bind_Move(lua_State *L) {
		if (_lg_typecheck_Move_overload_1(L)) return _bind_Move_overload_1(L);
		if (_lg_typecheck_Move_overload_2(L)) return _bind_Move_overload_2(L);

		luaL_error(L, "error in function Move, cannot match any of the overloads for function Move:\n  Move(int, int, int)\n  Move(const wxPoint &, int)\n");
		return 0;
	}

	// void wxWindow::SetPosition(const wxPoint & pt)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPosition(const wxPoint & pt) function, expected prototype:\nvoid wxWindow::SetPosition(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::SetPosition function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetPosition(const wxPoint &)");
		}
		self->SetPosition(pt);

		return 0;
	}

	// void wxWindow::ClientToScreen(int * x, int * y) const
	static int _bind_ClientToScreen_overload_1(lua_State *L) {
		if (!_lg_typecheck_ClientToScreen_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::ClientToScreen(int * x, int * y) const function, expected prototype:\nvoid wxWindow::ClientToScreen(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::ClientToScreen(int *, int *) const");
		}
		self->ClientToScreen(&x, &y);

		return 0;
	}

	// wxPoint wxWindow::ClientToScreen(const wxPoint & pt) const
	static int _bind_ClientToScreen_overload_2(lua_State *L) {
		if (!_lg_typecheck_ClientToScreen_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ClientToScreen(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ClientToScreen(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ClientToScreen function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ClientToScreen(const wxPoint &) const");
		}
		wxPoint stack_lret = self->ClientToScreen(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ClientToScreen
	static int _bind_ClientToScreen(lua_State *L) {
		if (_lg_typecheck_ClientToScreen_overload_1(L)) return _bind_ClientToScreen_overload_1(L);
		if (_lg_typecheck_ClientToScreen_overload_2(L)) return _bind_ClientToScreen_overload_2(L);

		luaL_error(L, "error in function ClientToScreen, cannot match any of the overloads for function ClientToScreen:\n  ClientToScreen(int *, int *)\n  ClientToScreen(const wxPoint &)\n");
		return 0;
	}

	// wxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const
	static int _bind_ConvertDialogToPixels_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertDialogToPixels_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ConvertDialogToPixels function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ConvertDialogToPixels(const wxPoint &) const");
		}
		wxPoint stack_lret = self->ConvertDialogToPixels(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const
	static int _bind_ConvertDialogToPixels_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertDialogToPixels_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const function, expected prototype:\nwxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxWindow::ConvertDialogToPixels function");
		}
		const wxSize & sz=*sz_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ConvertDialogToPixels(const wxSize &) const");
		}
		wxSize stack_lret = self->ConvertDialogToPixels(sz);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ConvertDialogToPixels
	static int _bind_ConvertDialogToPixels(lua_State *L) {
		if (_lg_typecheck_ConvertDialogToPixels_overload_1(L)) return _bind_ConvertDialogToPixels_overload_1(L);
		if (_lg_typecheck_ConvertDialogToPixels_overload_2(L)) return _bind_ConvertDialogToPixels_overload_2(L);

		luaL_error(L, "error in function ConvertDialogToPixels, cannot match any of the overloads for function ConvertDialogToPixels:\n  ConvertDialogToPixels(const wxPoint &)\n  ConvertDialogToPixels(const wxSize &)\n");
		return 0;
	}

	// wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const
	static int _bind_ConvertPixelsToDialog_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToDialog_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ConvertPixelsToDialog function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint &) const");
		}
		wxPoint stack_lret = self->ConvertPixelsToDialog(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const
	static int _bind_ConvertPixelsToDialog_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToDialog_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const function, expected prototype:\nwxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxWindow::ConvertPixelsToDialog function");
		}
		const wxSize & sz=*sz_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ConvertPixelsToDialog(const wxSize &) const");
		}
		wxSize stack_lret = self->ConvertPixelsToDialog(sz);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ConvertPixelsToDialog
	static int _bind_ConvertPixelsToDialog(lua_State *L) {
		if (_lg_typecheck_ConvertPixelsToDialog_overload_1(L)) return _bind_ConvertPixelsToDialog_overload_1(L);
		if (_lg_typecheck_ConvertPixelsToDialog_overload_2(L)) return _bind_ConvertPixelsToDialog_overload_2(L);

		luaL_error(L, "error in function ConvertPixelsToDialog, cannot match any of the overloads for function ConvertPixelsToDialog:\n  ConvertPixelsToDialog(const wxPoint &)\n  ConvertPixelsToDialog(const wxSize &)\n");
		return 0;
	}

	// void wxWindow::ScreenToClient(int * x, int * y) const
	static int _bind_ScreenToClient_overload_1(lua_State *L) {
		if (!_lg_typecheck_ScreenToClient_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::ScreenToClient(int * x, int * y) const function, expected prototype:\nvoid wxWindow::ScreenToClient(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::ScreenToClient(int *, int *) const");
		}
		self->ScreenToClient(&x, &y);

		return 0;
	}

	// wxPoint wxWindow::ScreenToClient(const wxPoint & pt) const
	static int _bind_ScreenToClient_overload_2(lua_State *L) {
		if (!_lg_typecheck_ScreenToClient_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ScreenToClient(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ScreenToClient(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ScreenToClient function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ScreenToClient(const wxPoint &) const");
		}
		wxPoint stack_lret = self->ScreenToClient(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ScreenToClient
	static int _bind_ScreenToClient(lua_State *L) {
		if (_lg_typecheck_ScreenToClient_overload_1(L)) return _bind_ScreenToClient_overload_1(L);
		if (_lg_typecheck_ScreenToClient_overload_2(L)) return _bind_ScreenToClient_overload_2(L);

		luaL_error(L, "error in function ScreenToClient, cannot match any of the overloads for function ScreenToClient:\n  ScreenToClient(int *, int *)\n  ScreenToClient(const wxPoint &)\n");
		return 0;
	}

	// void wxWindow::ClearBackground()
	static int _bind_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::ClearBackground() function, expected prototype:\nvoid wxWindow::ClearBackground()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::ClearBackground()");
		}
		self->ClearBackground();

		return 0;
	}

	// void wxWindow::Freeze()
	static int _bind_Freeze(lua_State *L) {
		if (!_lg_typecheck_Freeze(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Freeze() function, expected prototype:\nvoid wxWindow::Freeze()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Freeze()");
		}
		self->Freeze();

		return 0;
	}

	// void wxWindow::Thaw()
	static int _bind_Thaw(lua_State *L) {
		if (!_lg_typecheck_Thaw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Thaw() function, expected prototype:\nvoid wxWindow::Thaw()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Thaw()");
		}
		self->Thaw();

		return 0;
	}

	// bool wxWindow::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsFrozen() const function, expected prototype:\nbool wxWindow::IsFrozen() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsFrozen() const");
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxWindow::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxWindow::GetBackgroundColour() const function, expected prototype:\nwxColour wxWindow::GetBackgroundColour() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxWindow::GetBackgroundColour() const");
		}
		wxColour stack_lret = self->GetBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	static int _bind_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxWindow::GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxWindow::GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxWindow::GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetCharHeight() const
	static int _bind_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetCharHeight() const function, expected prototype:\nint wxWindow::GetCharHeight() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetCharHeight() const");
		}
		int lret = self->GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetCharWidth() const
	static int _bind_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetCharWidth() const function, expected prototype:\nint wxWindow::GetCharWidth() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetCharWidth() const");
		}
		int lret = self->GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	static int _bind_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxWindow::GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxWindow::GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxWindow::GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// wxFont wxWindow::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxWindow::GetFont() const function, expected prototype:\nwxFont wxWindow::GetFont() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxWindow::GetFont() const");
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxWindow::GetForegroundColour() const
	static int _bind_GetForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetForegroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxWindow::GetForegroundColour() const function, expected prototype:\nwxColour wxWindow::GetForegroundColour() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxWindow::GetForegroundColour() const");
		}
		wxColour stack_lret = self->GetForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const
	static int _bind_GetTextExtent_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const function, expected prototype:\nvoid wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int w=(int)lua_tointeger(L,3);
		int h=(int)lua_tointeger(L,4);
		int descent=luatop>4 ? (int)lua_tointeger(L,5) : NULL;
		int externalLeading=luatop>5 ? (int)lua_tointeger(L,6) : NULL;
		const wxFont* font=luatop>6 ? dynamic_cast< wxFont* >(Luna< wxObject >::check(L,7)) : (const wxFont*)NULL;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *) const");
		}
		self->GetTextExtent(string, &w, &h, &descent, &externalLeading, font);

		return 0;
	}

	// wxSize wxWindow::GetTextExtent(const wxString & string) const
	static int _bind_GetTextExtent_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetTextExtent(const wxString & string) const function, expected prototype:\nwxSize wxWindow::GetTextExtent(const wxString & string) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetTextExtent(const wxString &) const");
		}
		wxSize stack_lret = self->GetTextExtent(string);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetTextExtent
	static int _bind_GetTextExtent(lua_State *L) {
		if (_lg_typecheck_GetTextExtent_overload_1(L)) return _bind_GetTextExtent_overload_1(L);
		if (_lg_typecheck_GetTextExtent_overload_2(L)) return _bind_GetTextExtent_overload_2(L);

		luaL_error(L, "error in function GetTextExtent, cannot match any of the overloads for function GetTextExtent:\n  GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *)\n  GetTextExtent(const wxString &)\n");
		return 0;
	}

	// const wxRegion & wxWindow::GetUpdateRegion() const
	static int _bind_GetUpdateRegion(lua_State *L) {
		if (!_lg_typecheck_GetUpdateRegion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxRegion & wxWindow::GetUpdateRegion() const function, expected prototype:\nconst wxRegion & wxWindow::GetUpdateRegion() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxRegion & wxWindow::GetUpdateRegion() const");
		}
		const wxRegion* lret = &self->GetUpdateRegion();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRegion >::push(L,lret,false);

		return 1;
	}

	// wxRect wxWindow::GetUpdateClientRect() const
	static int _bind_GetUpdateClientRect(lua_State *L) {
		if (!_lg_typecheck_GetUpdateClientRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetUpdateClientRect() const function, expected prototype:\nwxRect wxWindow::GetUpdateClientRect() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetUpdateClientRect() const");
		}
		wxRect stack_lret = self->GetUpdateClientRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::HasTransparentBackground()
	static int _bind_HasTransparentBackground(lua_State *L) {
		if (!_lg_typecheck_HasTransparentBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasTransparentBackground() function, expected prototype:\nbool wxWindow::HasTransparentBackground()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasTransparentBackground()");
		}
		bool lret = self->HasTransparentBackground();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_Refresh(lua_State *L) {
		if (!_lg_typecheck_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Refresh(bool, const wxRect *)");
		}
		self->Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true)
	static int _bind_RefreshRect(lua_State *L) {
		if (!_lg_typecheck_RefreshRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true) function, expected prototype:\nvoid wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::RefreshRect function");
		}
		const wxRect & rect=*rect_ptr;
		bool eraseBackground=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::RefreshRect(const wxRect &, bool)");
		}
		self->RefreshRect(rect, eraseBackground);

		return 0;
	}

	// void wxWindow::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Update() function, expected prototype:\nvoid wxWindow::Update()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Update()");
		}
		self->Update();

		return 0;
	}

	// bool wxWindow::SetBackgroundColour(const wxColour & colour)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetBackgroundColour(const wxColour & colour) function, expected prototype:\nbool wxWindow::SetBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetBackgroundColour(const wxColour &)");
		}
		bool lret = self->SetBackgroundColour(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetFont(const wxFont & font) function, expected prototype:\nbool wxWindow::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWindow::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetFont(const wxFont &)");
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetForegroundColour(const wxColour & colour)
	static int _bind_SetForegroundColour(lua_State *L) {
		if (!_lg_typecheck_SetForegroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetForegroundColour(const wxColour & colour) function, expected prototype:\nbool wxWindow::SetForegroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetForegroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetForegroundColour(const wxColour &)");
		}
		bool lret = self->SetForegroundColour(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetOwnBackgroundColour(const wxColour & colour)
	static int _bind_SetOwnBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetOwnBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWindow::SetOwnBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetOwnBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnBackgroundColour(const wxColour &)");
		}
		self->SetOwnBackgroundColour(colour);

		return 0;
	}

	// void wxWindow::SetOwnFont(const wxFont & font)
	static int _bind_SetOwnFont(lua_State *L) {
		if (!_lg_typecheck_SetOwnFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnFont(const wxFont & font) function, expected prototype:\nvoid wxWindow::SetOwnFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWindow::SetOwnFont function");
		}
		const wxFont & font=*font_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnFont(const wxFont &)");
		}
		self->SetOwnFont(font);

		return 0;
	}

	// void wxWindow::SetOwnForegroundColour(const wxColour & colour)
	static int _bind_SetOwnForegroundColour(lua_State *L) {
		if (!_lg_typecheck_SetOwnForegroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnForegroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWindow::SetOwnForegroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetOwnForegroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnForegroundColour(const wxColour &)");
		}
		self->SetOwnForegroundColour(colour);

		return 0;
	}

	// void wxWindow::SetPalette(const wxPalette & pal)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPalette(const wxPalette & pal) function, expected prototype:\nvoid wxWindow::SetPalette(const wxPalette & pal)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPalette* pal_ptr=dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,2));
		if( !pal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pal in wxWindow::SetPalette function");
		}
		const wxPalette & pal=*pal_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetPalette(const wxPalette &)");
		}
		self->SetPalette(pal);

		return 0;
	}

	// bool wxWindow::ShouldInheritColours() const
	static int _bind_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ShouldInheritColours() const function, expected prototype:\nbool wxWindow::ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ShouldInheritColours() const");
		}
		bool lret = self->ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetThemeEnabled(bool enable)
	static int _bind_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxWindow::SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetThemeEnabled(bool)");
		}
		self->SetThemeEnabled(enable);

		return 0;
	}

	// bool wxWindow::GetThemeEnabled() const
	static int _bind_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::GetThemeEnabled() const function, expected prototype:\nbool wxWindow::GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::GetThemeEnabled() const");
		}
		bool lret = self->GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::CanSetTransparent()
	static int _bind_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::CanSetTransparent() function, expected prototype:\nbool wxWindow::CanSetTransparent()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::CanSetTransparent()");
		}
		bool lret = self->CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetTransparent(unsigned char alpha)
	static int _bind_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxWindow::SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetTransparent(unsigned char)");
		}
		bool lret = self->SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxWindow::GetEventHandler() const
	static int _bind_GetEventHandler(lua_State *L) {
		if (!_lg_typecheck_GetEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxWindow::GetEventHandler() const function, expected prototype:\nwxEvtHandler * wxWindow::GetEventHandler() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxWindow::GetEventHandler() const");
		}
		wxEvtHandler * lret = self->GetEventHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event)
	static int _bind_HandleAsNavigationKey(lua_State *L) {
		if (!_lg_typecheck_HandleAsNavigationKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event) function, expected prototype:\nbool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxKeyEvent* event_ptr=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::HandleAsNavigationKey function");
		}
		const wxKeyEvent & event=*event_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HandleAsNavigationKey(const wxKeyEvent &)");
		}
		bool lret = self->HandleAsNavigationKey(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HandleWindowEvent(wxEvent & event) const
	static int _bind_HandleWindowEvent(lua_State *L) {
		if (!_lg_typecheck_HandleWindowEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HandleWindowEvent(wxEvent & event) const function, expected prototype:\nbool wxWindow::HandleWindowEvent(wxEvent & event) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::HandleWindowEvent function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HandleWindowEvent(wxEvent &) const");
		}
		bool lret = self->HandleWindowEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ProcessWindowEvent(wxEvent & event)
	static int _bind_ProcessWindowEvent(lua_State *L) {
		if (!_lg_typecheck_ProcessWindowEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ProcessWindowEvent(wxEvent & event) function, expected prototype:\nbool wxWindow::ProcessWindowEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::ProcessWindowEvent function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ProcessWindowEvent(wxEvent &)");
		}
		bool lret = self->ProcessWindowEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ProcessWindowEventLocally(wxEvent & event)
	static int _bind_ProcessWindowEventLocally(lua_State *L) {
		if (!_lg_typecheck_ProcessWindowEventLocally(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ProcessWindowEventLocally(wxEvent & event) function, expected prototype:\nbool wxWindow::ProcessWindowEventLocally(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::ProcessWindowEventLocally function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ProcessWindowEventLocally(wxEvent &)");
		}
		bool lret = self->ProcessWindowEventLocally(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false)
	static int _bind_PopEventHandler(lua_State *L) {
		if (!_lg_typecheck_PopEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false) function, expected prototype:\nwxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool deleteHandler=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxWindow::PopEventHandler(bool)");
		}
		wxEvtHandler * lret = self->PopEventHandler(deleteHandler);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::PushEventHandler(wxEvtHandler * handler)
	static int _bind_PushEventHandler(lua_State *L) {
		if (!_lg_typecheck_PushEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::PushEventHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::PushEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::PushEventHandler(wxEvtHandler *)");
		}
		self->PushEventHandler(handler);

		return 0;
	}

	// bool wxWindow::RemoveEventHandler(wxEvtHandler * handler)
	static int _bind_RemoveEventHandler(lua_State *L) {
		if (!_lg_typecheck_RemoveEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::RemoveEventHandler(wxEvtHandler * handler) function, expected prototype:\nbool wxWindow::RemoveEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::RemoveEventHandler(wxEvtHandler *)");
		}
		bool lret = self->RemoveEventHandler(handler);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetEventHandler(wxEvtHandler * handler)
	static int _bind_SetEventHandler(lua_State *L) {
		if (!_lg_typecheck_SetEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetEventHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetEventHandler(wxEvtHandler *)");
		}
		self->SetEventHandler(handler);

		return 0;
	}

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	static int _bind_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetNextHandler(wxEvtHandler *)");
		}
		self->SetNextHandler(handler);

		return 0;
	}

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetPreviousHandler(wxEvtHandler *)");
		}
		self->SetPreviousHandler(handler);

		return 0;
	}

	// long wxWindow::GetExtraStyle() const
	static int _bind_GetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_GetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxWindow::GetExtraStyle() const function, expected prototype:\nlong wxWindow::GetExtraStyle() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxWindow::GetExtraStyle() const");
		}
		long lret = self->GetExtraStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxWindow::GetWindowStyleFlag() const
	static int _bind_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxWindow::GetWindowStyleFlag() const function, expected prototype:\nlong wxWindow::GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxWindow::GetWindowStyleFlag() const");
		}
		long lret = self->GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxWindow::GetWindowStyle() const
	static int _bind_GetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_GetWindowStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxWindow::GetWindowStyle() const function, expected prototype:\nlong wxWindow::GetWindowStyle() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxWindow::GetWindowStyle() const");
		}
		long lret = self->GetWindowStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWindow::HasExtraStyle(int exFlag) const
	static int _bind_HasExtraStyle(lua_State *L) {
		if (!_lg_typecheck_HasExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasExtraStyle(int exFlag) const function, expected prototype:\nbool wxWindow::HasExtraStyle(int exFlag) const\nClass arguments details:\n");
		}

		int exFlag=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasExtraStyle(int) const");
		}
		bool lret = self->HasExtraStyle(exFlag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasFlag(int flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasFlag(int flag) const function, expected prototype:\nbool wxWindow::HasFlag(int flag) const\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasFlag(int) const");
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetExtraStyle(long exStyle)
	static int _bind_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxWindow::SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetExtraStyle(long)");
		}
		self->SetExtraStyle(exStyle);

		return 0;
	}

	// void wxWindow::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxWindow::SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowStyleFlag(long)");
		}
		self->SetWindowStyleFlag(style);

		return 0;
	}

	// void wxWindow::SetWindowStyle(long style)
	static int _bind_SetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowStyle(long style) function, expected prototype:\nvoid wxWindow::SetWindowStyle(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowStyle(long)");
		}
		self->SetWindowStyle(style);

		return 0;
	}

	// bool wxWindow::ToggleWindowStyle(int flag)
	static int _bind_ToggleWindowStyle(lua_State *L) {
		if (!_lg_typecheck_ToggleWindowStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ToggleWindowStyle(int flag) function, expected prototype:\nbool wxWindow::ToggleWindowStyle(int flag)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ToggleWindowStyle(int)");
		}
		bool lret = self->ToggleWindowStyle(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::MoveAfterInTabOrder(wxWindow * win)
	static int _bind_MoveAfterInTabOrder(lua_State *L) {
		if (!_lg_typecheck_MoveAfterInTabOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::MoveAfterInTabOrder(wxWindow * win) function, expected prototype:\nvoid wxWindow::MoveAfterInTabOrder(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::MoveAfterInTabOrder(wxWindow *)");
		}
		self->MoveAfterInTabOrder(win);

		return 0;
	}

	// void wxWindow::MoveBeforeInTabOrder(wxWindow * win)
	static int _bind_MoveBeforeInTabOrder(lua_State *L) {
		if (!_lg_typecheck_MoveBeforeInTabOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::MoveBeforeInTabOrder(wxWindow * win) function, expected prototype:\nvoid wxWindow::MoveBeforeInTabOrder(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::MoveBeforeInTabOrder(wxWindow *)");
		}
		self->MoveBeforeInTabOrder(win);

		return 0;
	}

	// bool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward)
	static int _bind_Navigate(lua_State *L) {
		if (!_lg_typecheck_Navigate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward) function, expected prototype:\nbool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxNavigationKeyEvent::IsForward;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Navigate(int)");
		}
		bool lret = self->Navigate(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward)
	static int _bind_NavigateIn(lua_State *L) {
		if (!_lg_typecheck_NavigateIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward) function, expected prototype:\nbool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxNavigationKeyEvent::IsForward;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::NavigateIn(int)");
		}
		bool lret = self->NavigateIn(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::Lower()
	static int _bind_Lower(lua_State *L) {
		if (!_lg_typecheck_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Lower() function, expected prototype:\nvoid wxWindow::Lower()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Lower()");
		}
		self->Lower();

		return 0;
	}

	// void wxWindow::Raise()
	static int _bind_Raise(lua_State *L) {
		if (!_lg_typecheck_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::Raise() function, expected prototype:\nvoid wxWindow::Raise()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::Raise()");
		}
		self->Raise();

		return 0;
	}

	// bool wxWindow::Hide()
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Hide() function, expected prototype:\nbool wxWindow::Hide()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Hide()");
		}
		bool lret = self->Hide();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsEnabled() const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsEnabled() const function, expected prototype:\nbool wxWindow::IsEnabled() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsEnabled() const");
		}
		bool lret = self->IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(int x, int y) const
	static int _bind_IsExposed_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(int x, int y) const function, expected prototype:\nbool wxWindow::IsExposed(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(int, int) const");
		}
		bool lret = self->IsExposed(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(wxPoint & pt) const
	static int _bind_IsExposed_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(wxPoint & pt) const function, expected prototype:\nbool wxWindow::IsExposed(wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::IsExposed function");
		}
		wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(wxPoint &) const");
		}
		bool lret = self->IsExposed(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(int x, int y, int w, int h) const
	static int _bind_IsExposed_overload_3(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(int x, int y, int w, int h) const function, expected prototype:\nbool wxWindow::IsExposed(int x, int y, int w, int h) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(int, int, int, int) const");
		}
		bool lret = self->IsExposed(x, y, w, h);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(wxRect & rect) const
	static int _bind_IsExposed_overload_4(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(wxRect & rect) const function, expected prototype:\nbool wxWindow::IsExposed(wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::IsExposed function");
		}
		wxRect & rect=*rect_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(wxRect &) const");
		}
		bool lret = self->IsExposed(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWindow::IsExposed
	static int _bind_IsExposed(lua_State *L) {
		if (_lg_typecheck_IsExposed_overload_1(L)) return _bind_IsExposed_overload_1(L);
		if (_lg_typecheck_IsExposed_overload_2(L)) return _bind_IsExposed_overload_2(L);
		if (_lg_typecheck_IsExposed_overload_3(L)) return _bind_IsExposed_overload_3(L);
		if (_lg_typecheck_IsExposed_overload_4(L)) return _bind_IsExposed_overload_4(L);

		luaL_error(L, "error in function IsExposed, cannot match any of the overloads for function IsExposed:\n  IsExposed(int, int)\n  IsExposed(wxPoint &)\n  IsExposed(int, int, int, int)\n  IsExposed(wxRect &)\n");
		return 0;
	}

	// bool wxWindow::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsShown() const function, expected prototype:\nbool wxWindow::IsShown() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsShown() const");
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsShownOnScreen() const
	static int _bind_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsShownOnScreen() const function, expected prototype:\nbool wxWindow::IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsShownOnScreen() const");
		}
		bool lret = self->IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Disable()
	static int _bind_Disable(lua_State *L) {
		if (!_lg_typecheck_Disable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Disable() function, expected prototype:\nbool wxWindow::Disable()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Disable()");
		}
		bool lret = self->Disable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Enable(bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Enable(bool enable = true) function, expected prototype:\nbool wxWindow::Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Enable(bool)");
		}
		bool lret = self->Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Show(bool show = true) function, expected prototype:\nbool wxWindow::Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Show(bool)");
		}
		bool lret = self->Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWindow::GetHelpText() const
	static int _bind_GetHelpText(lua_State *L) {
		if (!_lg_typecheck_GetHelpText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetHelpText() const function, expected prototype:\nwxString wxWindow::GetHelpText() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetHelpText() const");
		}
		wxString lret = self->GetHelpText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWindow::SetHelpText(const wxString & helpText)
	static int _bind_SetHelpText(lua_State *L) {
		if (!_lg_typecheck_SetHelpText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetHelpText(const wxString & helpText) function, expected prototype:\nvoid wxWindow::SetHelpText(const wxString & helpText)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString helpText(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetHelpText(const wxString &)");
		}
		self->SetHelpText(helpText);

		return 0;
	}

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxWindow::GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxToolTip * wxWindow::GetToolTip() const
	static int _bind_GetToolTip(lua_State *L) {
		if (!_lg_typecheck_GetToolTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolTip * wxWindow::GetToolTip() const function, expected prototype:\nwxToolTip * wxWindow::GetToolTip() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolTip * wxWindow::GetToolTip() const");
		}
		wxToolTip * lret = self->GetToolTip();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolTip >::push(L,lret,false);

		return 1;
	}

	// wxString wxWindow::GetToolTipText() const
	static int _bind_GetToolTipText(lua_State *L) {
		if (!_lg_typecheck_GetToolTipText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetToolTipText() const function, expected prototype:\nwxString wxWindow::GetToolTipText() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetToolTipText() const");
		}
		wxString lret = self->GetToolTipText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWindow::SetToolTip(const wxString & tipString)
	static int _bind_SetToolTip_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetToolTip_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetToolTip(const wxString & tipString) function, expected prototype:\nvoid wxWindow::SetToolTip(const wxString & tipString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString tipString(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetToolTip(const wxString &)");
		}
		self->SetToolTip(tipString);

		return 0;
	}

	// void wxWindow::SetToolTip(wxToolTip * tip)
	static int _bind_SetToolTip_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetToolTip_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetToolTip(wxToolTip * tip) function, expected prototype:\nvoid wxWindow::SetToolTip(wxToolTip * tip)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolTip* tip=dynamic_cast< wxToolTip* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetToolTip(wxToolTip *)");
		}
		self->SetToolTip(tip);

		return 0;
	}

	// Overload binder for wxWindow::SetToolTip
	static int _bind_SetToolTip(lua_State *L) {
		if (_lg_typecheck_SetToolTip_overload_1(L)) return _bind_SetToolTip_overload_1(L);
		if (_lg_typecheck_SetToolTip_overload_2(L)) return _bind_SetToolTip_overload_2(L);

		luaL_error(L, "error in function SetToolTip, cannot match any of the overloads for function SetToolTip:\n  SetToolTip(const wxString &)\n  SetToolTip(wxToolTip *)\n");
		return 0;
	}

	// void wxWindow::UnsetToolTip()
	static int _bind_UnsetToolTip(lua_State *L) {
		if (!_lg_typecheck_UnsetToolTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::UnsetToolTip() function, expected prototype:\nvoid wxWindow::UnsetToolTip()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::UnsetToolTip()");
		}
		self->UnsetToolTip();

		return 0;
	}

	// int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition)
	static int _bind_GetPopupMenuSelectionFromUser_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nint wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxMenu* menu_ptr=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		if( !menu_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		wxMenu & menu=*menu_ptr;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetPopupMenuSelectionFromUser(wxMenu &, const wxPoint &)");
		}
		int lret = self->GetPopupMenuSelectionFromUser(menu, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y)
	static int _bind_GetPopupMenuSelectionFromUser_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y) function, expected prototype:\nint wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu_ptr=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		if( !menu_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		wxMenu & menu=*menu_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetPopupMenuSelectionFromUser(wxMenu &, int, int)");
		}
		int lret = self->GetPopupMenuSelectionFromUser(menu, x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::GetPopupMenuSelectionFromUser
	static int _bind_GetPopupMenuSelectionFromUser(lua_State *L) {
		if (_lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(L)) return _bind_GetPopupMenuSelectionFromUser_overload_1(L);
		if (_lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(L)) return _bind_GetPopupMenuSelectionFromUser_overload_2(L);

		luaL_error(L, "error in function GetPopupMenuSelectionFromUser, cannot match any of the overloads for function GetPopupMenuSelectionFromUser:\n  GetPopupMenuSelectionFromUser(wxMenu &, const wxPoint &)\n  GetPopupMenuSelectionFromUser(wxMenu &, int, int)\n");
		return 0;
	}

	// bool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition)
	static int _bind_PopupMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_PopupMenu_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nbool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::PopupMenu function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::PopupMenu(wxMenu *, const wxPoint &)");
		}
		bool lret = self->PopupMenu(menu, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PopupMenu(wxMenu * menu, int x, int y)
	static int _bind_PopupMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_PopupMenu_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::PopupMenu(wxMenu * menu, int x, int y) function, expected prototype:\nbool wxWindow::PopupMenu(wxMenu * menu, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::PopupMenu(wxMenu *, int, int)");
		}
		bool lret = self->PopupMenu(menu, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWindow::PopupMenu
	static int _bind_PopupMenu(lua_State *L) {
		if (_lg_typecheck_PopupMenu_overload_1(L)) return _bind_PopupMenu_overload_1(L);
		if (_lg_typecheck_PopupMenu_overload_2(L)) return _bind_PopupMenu_overload_2(L);

		luaL_error(L, "error in function PopupMenu, cannot match any of the overloads for function PopupMenu:\n  PopupMenu(wxMenu *, const wxPoint &)\n  PopupMenu(wxMenu *, int, int)\n");
		return 0;
	}

	// wxValidator * wxWindow::GetValidator()
	static int _bind_GetValidator(lua_State *L) {
		if (!_lg_typecheck_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxWindow::GetValidator() function, expected prototype:\nwxValidator * wxWindow::GetValidator()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxWindow::GetValidator()");
		}
		wxValidator * lret = self->GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetValidator(const wxValidator & validator)
	static int _bind_SetValidator(lua_State *L) {
		if (!_lg_typecheck_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxWindow::SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxWindow::SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetValidator(const wxValidator &)");
		}
		self->SetValidator(validator);

		return 0;
	}

	// bool wxWindow::TransferDataFromWindow()
	static int _bind_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::TransferDataFromWindow() function, expected prototype:\nbool wxWindow::TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::TransferDataFromWindow()");
		}
		bool lret = self->TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::TransferDataToWindow()
	static int _bind_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::TransferDataToWindow() function, expected prototype:\nbool wxWindow::TransferDataToWindow()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::TransferDataToWindow()");
		}
		bool lret = self->TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Validate()
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Validate() function, expected prototype:\nbool wxWindow::Validate()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Validate()");
		}
		bool lret = self->Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxWindow::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWindow::GetId() const function, expected prototype:\nint wxWindow::GetId() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWindow::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWindow::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetLabel() const function, expected prototype:\nwxString wxWindow::GetLabel() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetLabel() const");
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxWindow::GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxWindow::GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxWindow::GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWindow::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetName() const function, expected prototype:\nwxString wxWindow::GetName() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxWindowVariant wxWindow::GetWindowVariant() const
	static int _bind_GetWindowVariant(lua_State *L) {
		if (!_lg_typecheck_GetWindowVariant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowVariant wxWindow::GetWindowVariant() const function, expected prototype:\nwxWindowVariant wxWindow::GetWindowVariant() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindowVariant wxWindow::GetWindowVariant() const");
		}
		wxWindowVariant lret = self->GetWindowVariant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWindow::SetId(int winid)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetId(int winid) function, expected prototype:\nvoid wxWindow::SetId(int winid)\nClass arguments details:\n");
		}

		int winid=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetId(int)");
		}
		self->SetId(winid);

		return 0;
	}

	// void wxWindow::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetLabel(const wxString & label) function, expected prototype:\nvoid wxWindow::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetLabel(const wxString &)");
		}
		self->SetLabel(label);

		return 0;
	}

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxWindow::SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetLayoutDirection(wxLayoutDirection)");
		}
		self->SetLayoutDirection(dir);

		return 0;
	}

	// void wxWindow::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetName(const wxString & name) function, expected prototype:\nvoid wxWindow::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetName(const wxString &)");
		}
		self->SetName(name);

		return 0;
	}

	// void wxWindow::SetWindowVariant(wxWindowVariant variant)
	static int _bind_SetWindowVariant(lua_State *L) {
		if (!_lg_typecheck_SetWindowVariant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowVariant(wxWindowVariant variant) function, expected prototype:\nvoid wxWindow::SetWindowVariant(wxWindowVariant variant)\nClass arguments details:\n");
		}

		wxWindowVariant variant=(wxWindowVariant)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowVariant(wxWindowVariant)");
		}
		self->SetWindowVariant(variant);

		return 0;
	}

	// wxAcceleratorTable * wxWindow::GetAcceleratorTable()
	static int _bind_GetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_GetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable * wxWindow::GetAcceleratorTable() function, expected prototype:\nwxAcceleratorTable * wxWindow::GetAcceleratorTable()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAcceleratorTable * wxWindow::GetAcceleratorTable()");
		}
		wxAcceleratorTable * lret = self->GetAcceleratorTable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAcceleratorTable >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=dynamic_cast< wxAcceleratorTable* >(Luna< wxObject >::check(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxWindow::SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxWindow::Close(bool force = false)
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Close(bool force = false) function, expected prototype:\nbool wxWindow::Close(bool force = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool force=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Close(bool)");
		}
		bool lret = self->Close(force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Destroy() function, expected prototype:\nbool wxWindow::Destroy()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Destroy()");
		}
		bool lret = self->Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsBeingDeleted() const
	static int _bind_IsBeingDeleted(lua_State *L) {
		if (!_lg_typecheck_IsBeingDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsBeingDeleted() const function, expected prototype:\nbool wxWindow::IsBeingDeleted() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsBeingDeleted() const");
		}
		bool lret = self->IsBeingDeleted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxWindow::GetDropTarget() const
	static int _bind_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxWindow::GetDropTarget() const function, expected prototype:\nwxDropTarget * wxWindow::GetDropTarget() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxWindow::GetDropTarget() const");
		}
		wxDropTarget * lret = self->GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	static int _bind_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxWindow::SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetDropTarget(wxDropTarget *)");
		}
		self->SetDropTarget(target);

		return 0;
	}

	// void wxWindow::DragAcceptFiles(bool accept)
	static int _bind_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxWindow::DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::DragAcceptFiles(bool)");
		}
		self->DragAcceptFiles(accept);

		return 0;
	}

	// wxSizer * wxWindow::GetContainingSizer() const
	static int _bind_GetContainingSizer(lua_State *L) {
		if (!_lg_typecheck_GetContainingSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxWindow::GetContainingSizer() const function, expected prototype:\nwxSizer * wxWindow::GetContainingSizer() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxWindow::GetContainingSizer() const");
		}
		wxSizer * lret = self->GetContainingSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxWindow::GetSizer() const
	static int _bind_GetSizer(lua_State *L) {
		if (!_lg_typecheck_GetSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxWindow::GetSizer() const function, expected prototype:\nwxSizer * wxWindow::GetSizer() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxWindow::GetSizer() const");
		}
		wxSizer * lret = self->GetSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true)
	static int _bind_SetSizer(lua_State *L) {
		if (!_lg_typecheck_SetSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true) function, expected prototype:\nvoid wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		bool deleteOld=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizer(wxSizer *, bool)");
		}
		self->SetSizer(sizer, deleteOld);

		return 0;
	}

	// void wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true)
	static int _bind_SetSizerAndFit(lua_State *L) {
		if (!_lg_typecheck_SetSizerAndFit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true) function, expected prototype:\nvoid wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		bool deleteOld=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizerAndFit(wxSizer *, bool)");
		}
		self->SetSizerAndFit(sizer, deleteOld);

		return 0;
	}

	// wxLayoutConstraints * wxWindow::GetConstraints() const
	static int _bind_GetConstraints(lua_State *L) {
		if (!_lg_typecheck_GetConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutConstraints * wxWindow::GetConstraints() const function, expected prototype:\nwxLayoutConstraints * wxWindow::GetConstraints() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutConstraints * wxWindow::GetConstraints() const");
		}
		wxLayoutConstraints * lret = self->GetConstraints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLayoutConstraints >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetConstraints(wxLayoutConstraints * constraints)
	static int _bind_SetConstraints(lua_State *L) {
		if (!_lg_typecheck_SetConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetConstraints(wxLayoutConstraints * constraints) function, expected prototype:\nvoid wxWindow::SetConstraints(wxLayoutConstraints * constraints)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxLayoutConstraints* constraints=dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetConstraints(wxLayoutConstraints *)");
		}
		self->SetConstraints(constraints);

		return 0;
	}

	// bool wxWindow::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::Layout() function, expected prototype:\nbool wxWindow::Layout()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::Layout()");
		}
		bool lret = self->Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetAutoLayout(bool autoLayout)
	static int _bind_SetAutoLayout(lua_State *L) {
		if (!_lg_typecheck_SetAutoLayout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetAutoLayout(bool autoLayout) function, expected prototype:\nvoid wxWindow::SetAutoLayout(bool autoLayout)\nClass arguments details:\n");
		}

		bool autoLayout=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetAutoLayout(bool)");
		}
		self->SetAutoLayout(autoLayout);

		return 0;
	}

	// bool wxWindow::GetAutoLayout() const
	static int _bind_GetAutoLayout(lua_State *L) {
		if (!_lg_typecheck_GetAutoLayout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::GetAutoLayout() const function, expected prototype:\nbool wxWindow::GetAutoLayout() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::GetAutoLayout() const");
		}
		bool lret = self->GetAutoLayout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::CaptureMouse()
	static int _bind_CaptureMouse(lua_State *L) {
		if (!_lg_typecheck_CaptureMouse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::CaptureMouse() function, expected prototype:\nvoid wxWindow::CaptureMouse()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::CaptureMouse()");
		}
		self->CaptureMouse();

		return 0;
	}

	// wxCaret * wxWindow::GetCaret() const
	static int _bind_GetCaret(lua_State *L) {
		if (!_lg_typecheck_GetCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret * wxWindow::GetCaret() const function, expected prototype:\nwxCaret * wxWindow::GetCaret() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCaret * wxWindow::GetCaret() const");
		}
		wxCaret * lret = self->GetCaret();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCaret >::push(L,lret,false);

		return 1;
	}

	// const wxCursor & wxWindow::GetCursor() const
	static int _bind_GetCursor(lua_State *L) {
		if (!_lg_typecheck_GetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxCursor & wxWindow::GetCursor() const function, expected prototype:\nconst wxCursor & wxWindow::GetCursor() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxCursor & wxWindow::GetCursor() const");
		}
		const wxCursor* lret = &self->GetCursor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCursor >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::HasCapture() const
	static int _bind_HasCapture(lua_State *L) {
		if (!_lg_typecheck_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasCapture() const function, expected prototype:\nbool wxWindow::HasCapture() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasCapture() const");
		}
		bool lret = self->HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::ReleaseMouse()
	static int _bind_ReleaseMouse(lua_State *L) {
		if (!_lg_typecheck_ReleaseMouse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::ReleaseMouse() function, expected prototype:\nvoid wxWindow::ReleaseMouse()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::ReleaseMouse()");
		}
		self->ReleaseMouse();

		return 0;
	}

	// void wxWindow::SetCaret(wxCaret * caret)
	static int _bind_SetCaret(lua_State *L) {
		if (!_lg_typecheck_SetCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::SetCaret(wxCaret * caret) function, expected prototype:\nvoid wxWindow::SetCaret(wxCaret * caret)\nClass arguments details:\narg 1 ID = 13309003\n");
		}

		wxCaret* caret=(Luna< wxCaret >::check(L,2));

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::SetCaret(wxCaret *)");
		}
		self->SetCaret(caret);

		return 0;
	}

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	static int _bind_SetCursor(lua_State *L) {
		if (!_lg_typecheck_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxWindow::SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxWindow::SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::SetCursor(const wxCursor &)");
		}
		bool lret = self->SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::WarpPointer(int x, int y)
	static int _bind_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::WarpPointer(int x, int y) function, expected prototype:\nvoid wxWindow::WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::WarpPointer(int, int)");
		}
		self->WarpPointer(x, y);

		return 0;
	}

	// wxHitTest wxWindow::HitTest(int x, int y) const
	static int _bind_HitTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHitTest wxWindow::HitTest(int x, int y) const function, expected prototype:\nwxHitTest wxWindow::HitTest(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHitTest wxWindow::HitTest(int, int) const");
		}
		wxHitTest lret = self->HitTest(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxHitTest wxWindow::HitTest(const wxPoint & pt) const
	static int _bind_HitTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHitTest wxWindow::HitTest(const wxPoint & pt) const function, expected prototype:\nwxHitTest wxWindow::HitTest(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHitTest wxWindow::HitTest(const wxPoint &) const");
		}
		wxHitTest lret = self->HitTest(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::HitTest
	static int _bind_HitTest(lua_State *L) {
		if (_lg_typecheck_HitTest_overload_1(L)) return _bind_HitTest_overload_1(L);
		if (_lg_typecheck_HitTest_overload_2(L)) return _bind_HitTest_overload_2(L);

		luaL_error(L, "error in function HitTest, cannot match any of the overloads for function HitTest:\n  HitTest(int, int)\n  HitTest(const wxPoint &)\n");
		return 0;
	}

	// wxBorder wxWindow::GetBorder(long flags) const
	static int _bind_GetBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBorder wxWindow::GetBorder(long flags) const function, expected prototype:\nwxBorder wxWindow::GetBorder(long flags) const\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBorder wxWindow::GetBorder(long) const");
		}
		wxBorder lret = self->GetBorder(flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxBorder wxWindow::GetBorder() const
	static int _bind_GetBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBorder wxWindow::GetBorder() const function, expected prototype:\nwxBorder wxWindow::GetBorder() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBorder wxWindow::GetBorder() const");
		}
		wxBorder lret = self->GetBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::GetBorder
	static int _bind_GetBorder(lua_State *L) {
		if (_lg_typecheck_GetBorder_overload_1(L)) return _bind_GetBorder_overload_1(L);
		if (_lg_typecheck_GetBorder_overload_2(L)) return _bind_GetBorder_overload_2(L);

		luaL_error(L, "error in function GetBorder, cannot match any of the overloads for function GetBorder:\n  GetBorder(long)\n  GetBorder()\n");
		return 0;
	}

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->DoUpdateWindowUI(event);

		return 0;
	}

	// WXWidget wxWindow::GetHandle() const
	static int _bind_GetHandle(lua_State *L) {
		if (!_lg_typecheck_GetHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WXWidget wxWindow::GetHandle() const function, expected prototype:\nWXWidget wxWindow::GetHandle() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call WXWidget wxWindow::GetHandle() const");
		}
		WXWidget lret = self->GetHandle();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'WXWidget'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// bool wxWindow::HasMultiplePages() const
	static int _bind_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasMultiplePages() const function, expected prototype:\nbool wxWindow::HasMultiplePages() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::HasMultiplePages() const");
		}
		bool lret = self->HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::InheritAttributes()
	static int _bind_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::InheritAttributes() function, expected prototype:\nvoid wxWindow::InheritAttributes()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::InheritAttributes()");
		}
		self->InheritAttributes();

		return 0;
	}

	// void wxWindow::InitDialog()
	static int _bind_InitDialog(lua_State *L) {
		if (!_lg_typecheck_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::InitDialog() function, expected prototype:\nvoid wxWindow::InitDialog()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::InitDialog()");
		}
		self->InitDialog();

		return 0;
	}

	// bool wxWindow::IsRetained() const
	static int _bind_IsRetained(lua_State *L) {
		if (!_lg_typecheck_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsRetained() const function, expected prototype:\nbool wxWindow::IsRetained() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsRetained() const");
		}
		bool lret = self->IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsThisEnabled() const
	static int _bind_IsThisEnabled(lua_State *L) {
		if (!_lg_typecheck_IsThisEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsThisEnabled() const function, expected prototype:\nbool wxWindow::IsThisEnabled() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsThisEnabled() const");
		}
		bool lret = self->IsThisEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsTopLevel() const
	static int _bind_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsTopLevel() const function, expected prototype:\nbool wxWindow::IsTopLevel() const\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::IsTopLevel() const");
		}
		bool lret = self->IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::MakeModal(bool modal = true)
	static int _bind_MakeModal(lua_State *L) {
		if (!_lg_typecheck_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::MakeModal(bool modal = true) function, expected prototype:\nvoid wxWindow::MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::MakeModal(bool)");
		}
		self->MakeModal(modal);

		return 0;
	}

	// void wxWindow::OnInternalIdle()
	static int _bind_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::OnInternalIdle() function, expected prototype:\nvoid wxWindow::OnInternalIdle()\nClass arguments details:\n");
		}


		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::OnInternalIdle()");
		}
		self->OnInternalIdle();

		return 0;
	}

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::RegisterHotKey(int, int, int)");
		}
		bool lret = self->RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	static int _bind_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWindow::UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxWindow::UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWindow::UnregisterHotKey(int)");
		}
		bool lret = self->UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::UpdateWindowUI(long flags = wxUPDATE_UI_NONE)
	static int _bind_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWindow::UpdateWindowUI(long flags = wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxWindow::UpdateWindowUI(long flags = wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : wxUPDATE_UI_NONE;

		wxWindow* self=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWindow::UpdateWindowUI(long)");
		}
		self->UpdateWindowUI(flags);

		return 0;
	}

	// static wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL)
	static int _bind_GetClassDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_GetClassDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL) function, expected prototype:\nstatic wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxWindowVariant variant=luatop>0 ? (wxWindowVariant)lua_tointeger(L,1) : wxWINDOW_VARIANT_NORMAL;

		wxVisualAttributes stack_lret = wxWindow::GetClassDefaultAttributes(variant);
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// static wxWindow * wxWindow::FindFocus()
	static int _bind_FindFocus(lua_State *L) {
		if (!_lg_typecheck_FindFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindFocus() function, expected prototype:\nstatic wxWindow * wxWindow::FindFocus()\nClass arguments details:\n");
		}


		wxWindow * lret = wxWindow::FindFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0)
	static int _bind_FindWindowById(lua_State *L) {
		if (!_lg_typecheck_FindWindowById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		long id=(long)lua_tointeger(L,1);
		const wxWindow* parent=luatop>1 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowById(id, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0)
	static int _bind_FindWindowByLabel(lua_State *L) {
		if (!_lg_typecheck_FindWindowByLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,1),lua_objlen(L,1));
		const wxWindow* parent=luatop>1 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowByLabel(label, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0)
	static int _bind_FindWindowByName(lua_State *L) {
		if (!_lg_typecheck_FindWindowByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		const wxWindow* parent=luatop>1 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowByName(name, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::GetCapture()
	static int _bind_GetCapture(lua_State *L) {
		if (!_lg_typecheck_GetCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::GetCapture() function, expected prototype:\nstatic wxWindow * wxWindow::GetCapture()\nClass arguments details:\n");
		}


		wxWindow * lret = wxWindow::GetCapture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static int wxWindow::NewControlId(int count = 1)
	static int _bind_NewControlId(lua_State *L) {
		if (!_lg_typecheck_NewControlId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxWindow::NewControlId(int count = 1) function, expected prototype:\nstatic int wxWindow::NewControlId(int count = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int count=luatop>0 ? (int)lua_tointeger(L,1) : 1;

		int lret = wxWindow::NewControlId(count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxWindow::UnreserveControlId(int id, int count = 1)
	static int _bind_UnreserveControlId(lua_State *L) {
		if (!_lg_typecheck_UnreserveControlId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxWindow::UnreserveControlId(int id, int count = 1) function, expected prototype:\nstatic void wxWindow::UnreserveControlId(int id, int count = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int count=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxWindow::UnreserveControlId(id, count);

		return 0;
	}


	// Operator binds:

};

wxWindow* LunaTraits< wxWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindow::_bind_ctor(L);
}

void LunaTraits< wxWindow >::_bind_dtor(wxWindow* obj) {
	delete obj;
}

const char LunaTraits< wxWindow >::className[] = "wxWindow";
const char LunaTraits< wxWindow >::fullName[] = "wxWindow";
const char LunaTraits< wxWindow >::moduleName[] = "wx";
const char* LunaTraits< wxWindow >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxWindow >::hash = 92430048;
const int LunaTraits< wxWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWindow >::methods[] = {
	{"Create", &luna_wrapper_wxWindow::_bind_Create},
	{"AcceptsFocus", &luna_wrapper_wxWindow::_bind_AcceptsFocus},
	{"AcceptsFocusFromKeyboard", &luna_wrapper_wxWindow::_bind_AcceptsFocusFromKeyboard},
	{"AcceptsFocusRecursively", &luna_wrapper_wxWindow::_bind_AcceptsFocusRecursively},
	{"HasFocus", &luna_wrapper_wxWindow::_bind_HasFocus},
	{"SetCanFocus", &luna_wrapper_wxWindow::_bind_SetCanFocus},
	{"SetFocus", &luna_wrapper_wxWindow::_bind_SetFocus},
	{"SetFocusFromKbd", &luna_wrapper_wxWindow::_bind_SetFocusFromKbd},
	{"AddChild", &luna_wrapper_wxWindow::_bind_AddChild},
	{"DestroyChildren", &luna_wrapper_wxWindow::_bind_DestroyChildren},
	{"FindWindow", &luna_wrapper_wxWindow::_bind_FindWindow},
	{"GetChildren", &luna_wrapper_wxWindow::_bind_GetChildren},
	{"RemoveChild", &luna_wrapper_wxWindow::_bind_RemoveChild},
	{"GetGrandParent", &luna_wrapper_wxWindow::_bind_GetGrandParent},
	{"GetNextSibling", &luna_wrapper_wxWindow::_bind_GetNextSibling},
	{"GetParent", &luna_wrapper_wxWindow::_bind_GetParent},
	{"GetPrevSibling", &luna_wrapper_wxWindow::_bind_GetPrevSibling},
	{"Reparent", &luna_wrapper_wxWindow::_bind_Reparent},
	{"AlwaysShowScrollbars", &luna_wrapper_wxWindow::_bind_AlwaysShowScrollbars},
	{"GetScrollPos", &luna_wrapper_wxWindow::_bind_GetScrollPos},
	{"GetScrollRange", &luna_wrapper_wxWindow::_bind_GetScrollRange},
	{"GetScrollThumb", &luna_wrapper_wxWindow::_bind_GetScrollThumb},
	{"CanScroll", &luna_wrapper_wxWindow::_bind_CanScroll},
	{"HasScrollbar", &luna_wrapper_wxWindow::_bind_HasScrollbar},
	{"IsScrollbarAlwaysShown", &luna_wrapper_wxWindow::_bind_IsScrollbarAlwaysShown},
	{"ScrollLines", &luna_wrapper_wxWindow::_bind_ScrollLines},
	{"ScrollPages", &luna_wrapper_wxWindow::_bind_ScrollPages},
	{"ScrollWindow", &luna_wrapper_wxWindow::_bind_ScrollWindow},
	{"LineUp", &luna_wrapper_wxWindow::_bind_LineUp},
	{"LineDown", &luna_wrapper_wxWindow::_bind_LineDown},
	{"PageUp", &luna_wrapper_wxWindow::_bind_PageUp},
	{"PageDown", &luna_wrapper_wxWindow::_bind_PageDown},
	{"SetScrollPos", &luna_wrapper_wxWindow::_bind_SetScrollPos},
	{"SetScrollbar", &luna_wrapper_wxWindow::_bind_SetScrollbar},
	{"CacheBestSize", &luna_wrapper_wxWindow::_bind_CacheBestSize},
	{"ClientToWindowSize", &luna_wrapper_wxWindow::_bind_ClientToWindowSize},
	{"WindowToClientSize", &luna_wrapper_wxWindow::_bind_WindowToClientSize},
	{"Fit", &luna_wrapper_wxWindow::_bind_Fit},
	{"FitInside", &luna_wrapper_wxWindow::_bind_FitInside},
	{"GetBestSize", &luna_wrapper_wxWindow::_bind_GetBestSize},
	{"GetClientSize", &luna_wrapper_wxWindow::_bind_GetClientSize},
	{"GetEffectiveMinSize", &luna_wrapper_wxWindow::_bind_GetEffectiveMinSize},
	{"GetMaxClientSize", &luna_wrapper_wxWindow::_bind_GetMaxClientSize},
	{"GetMaxSize", &luna_wrapper_wxWindow::_bind_GetMaxSize},
	{"GetMinClientSize", &luna_wrapper_wxWindow::_bind_GetMinClientSize},
	{"GetMinSize", &luna_wrapper_wxWindow::_bind_GetMinSize},
	{"GetMinWidth", &luna_wrapper_wxWindow::_bind_GetMinWidth},
	{"GetMinHeight", &luna_wrapper_wxWindow::_bind_GetMinHeight},
	{"GetMaxWidth", &luna_wrapper_wxWindow::_bind_GetMaxWidth},
	{"GetMaxHeight", &luna_wrapper_wxWindow::_bind_GetMaxHeight},
	{"GetSize", &luna_wrapper_wxWindow::_bind_GetSize},
	{"GetVirtualSize", &luna_wrapper_wxWindow::_bind_GetVirtualSize},
	{"GetBestVirtualSize", &luna_wrapper_wxWindow::_bind_GetBestVirtualSize},
	{"GetWindowBorderSize", &luna_wrapper_wxWindow::_bind_GetWindowBorderSize},
	{"InformFirstDirection", &luna_wrapper_wxWindow::_bind_InformFirstDirection},
	{"InvalidateBestSize", &luna_wrapper_wxWindow::_bind_InvalidateBestSize},
	{"PostSizeEvent", &luna_wrapper_wxWindow::_bind_PostSizeEvent},
	{"PostSizeEventToParent", &luna_wrapper_wxWindow::_bind_PostSizeEventToParent},
	{"SendSizeEvent", &luna_wrapper_wxWindow::_bind_SendSizeEvent},
	{"SendSizeEventToParent", &luna_wrapper_wxWindow::_bind_SendSizeEventToParent},
	{"SetClientSize", &luna_wrapper_wxWindow::_bind_SetClientSize},
	{"SetContainingSizer", &luna_wrapper_wxWindow::_bind_SetContainingSizer},
	{"SetInitialSize", &luna_wrapper_wxWindow::_bind_SetInitialSize},
	{"SetMaxClientSize", &luna_wrapper_wxWindow::_bind_SetMaxClientSize},
	{"SetMaxSize", &luna_wrapper_wxWindow::_bind_SetMaxSize},
	{"SetMinClientSize", &luna_wrapper_wxWindow::_bind_SetMinClientSize},
	{"SetMinSize", &luna_wrapper_wxWindow::_bind_SetMinSize},
	{"SetSize", &luna_wrapper_wxWindow::_bind_SetSize},
	{"SetSizeHints", &luna_wrapper_wxWindow::_bind_SetSizeHints},
	{"SetVirtualSize", &luna_wrapper_wxWindow::_bind_SetVirtualSize},
	{"Center", &luna_wrapper_wxWindow::_bind_Center},
	{"CenterOnParent", &luna_wrapper_wxWindow::_bind_CenterOnParent},
	{"Centre", &luna_wrapper_wxWindow::_bind_Centre},
	{"CentreOnParent", &luna_wrapper_wxWindow::_bind_CentreOnParent},
	{"GetPosition", &luna_wrapper_wxWindow::_bind_GetPosition},
	{"GetRect", &luna_wrapper_wxWindow::_bind_GetRect},
	{"GetScreenPosition", &luna_wrapper_wxWindow::_bind_GetScreenPosition},
	{"GetScreenRect", &luna_wrapper_wxWindow::_bind_GetScreenRect},
	{"GetClientAreaOrigin", &luna_wrapper_wxWindow::_bind_GetClientAreaOrigin},
	{"GetClientRect", &luna_wrapper_wxWindow::_bind_GetClientRect},
	{"Move", &luna_wrapper_wxWindow::_bind_Move},
	{"SetPosition", &luna_wrapper_wxWindow::_bind_SetPosition},
	{"ClientToScreen", &luna_wrapper_wxWindow::_bind_ClientToScreen},
	{"ConvertDialogToPixels", &luna_wrapper_wxWindow::_bind_ConvertDialogToPixels},
	{"ConvertPixelsToDialog", &luna_wrapper_wxWindow::_bind_ConvertPixelsToDialog},
	{"ScreenToClient", &luna_wrapper_wxWindow::_bind_ScreenToClient},
	{"ClearBackground", &luna_wrapper_wxWindow::_bind_ClearBackground},
	{"Freeze", &luna_wrapper_wxWindow::_bind_Freeze},
	{"Thaw", &luna_wrapper_wxWindow::_bind_Thaw},
	{"IsFrozen", &luna_wrapper_wxWindow::_bind_IsFrozen},
	{"GetBackgroundColour", &luna_wrapper_wxWindow::_bind_GetBackgroundColour},
	{"GetBackgroundStyle", &luna_wrapper_wxWindow::_bind_GetBackgroundStyle},
	{"GetCharHeight", &luna_wrapper_wxWindow::_bind_GetCharHeight},
	{"GetCharWidth", &luna_wrapper_wxWindow::_bind_GetCharWidth},
	{"GetDefaultAttributes", &luna_wrapper_wxWindow::_bind_GetDefaultAttributes},
	{"GetFont", &luna_wrapper_wxWindow::_bind_GetFont},
	{"GetForegroundColour", &luna_wrapper_wxWindow::_bind_GetForegroundColour},
	{"GetTextExtent", &luna_wrapper_wxWindow::_bind_GetTextExtent},
	{"GetUpdateRegion", &luna_wrapper_wxWindow::_bind_GetUpdateRegion},
	{"GetUpdateClientRect", &luna_wrapper_wxWindow::_bind_GetUpdateClientRect},
	{"HasTransparentBackground", &luna_wrapper_wxWindow::_bind_HasTransparentBackground},
	{"Refresh", &luna_wrapper_wxWindow::_bind_Refresh},
	{"RefreshRect", &luna_wrapper_wxWindow::_bind_RefreshRect},
	{"Update", &luna_wrapper_wxWindow::_bind_Update},
	{"SetBackgroundColour", &luna_wrapper_wxWindow::_bind_SetBackgroundColour},
	{"SetBackgroundStyle", &luna_wrapper_wxWindow::_bind_SetBackgroundStyle},
	{"SetFont", &luna_wrapper_wxWindow::_bind_SetFont},
	{"SetForegroundColour", &luna_wrapper_wxWindow::_bind_SetForegroundColour},
	{"SetOwnBackgroundColour", &luna_wrapper_wxWindow::_bind_SetOwnBackgroundColour},
	{"SetOwnFont", &luna_wrapper_wxWindow::_bind_SetOwnFont},
	{"SetOwnForegroundColour", &luna_wrapper_wxWindow::_bind_SetOwnForegroundColour},
	{"SetPalette", &luna_wrapper_wxWindow::_bind_SetPalette},
	{"ShouldInheritColours", &luna_wrapper_wxWindow::_bind_ShouldInheritColours},
	{"SetThemeEnabled", &luna_wrapper_wxWindow::_bind_SetThemeEnabled},
	{"GetThemeEnabled", &luna_wrapper_wxWindow::_bind_GetThemeEnabled},
	{"CanSetTransparent", &luna_wrapper_wxWindow::_bind_CanSetTransparent},
	{"SetTransparent", &luna_wrapper_wxWindow::_bind_SetTransparent},
	{"GetEventHandler", &luna_wrapper_wxWindow::_bind_GetEventHandler},
	{"HandleAsNavigationKey", &luna_wrapper_wxWindow::_bind_HandleAsNavigationKey},
	{"HandleWindowEvent", &luna_wrapper_wxWindow::_bind_HandleWindowEvent},
	{"ProcessWindowEvent", &luna_wrapper_wxWindow::_bind_ProcessWindowEvent},
	{"ProcessWindowEventLocally", &luna_wrapper_wxWindow::_bind_ProcessWindowEventLocally},
	{"PopEventHandler", &luna_wrapper_wxWindow::_bind_PopEventHandler},
	{"PushEventHandler", &luna_wrapper_wxWindow::_bind_PushEventHandler},
	{"RemoveEventHandler", &luna_wrapper_wxWindow::_bind_RemoveEventHandler},
	{"SetEventHandler", &luna_wrapper_wxWindow::_bind_SetEventHandler},
	{"SetNextHandler", &luna_wrapper_wxWindow::_bind_SetNextHandler},
	{"SetPreviousHandler", &luna_wrapper_wxWindow::_bind_SetPreviousHandler},
	{"GetExtraStyle", &luna_wrapper_wxWindow::_bind_GetExtraStyle},
	{"GetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_GetWindowStyleFlag},
	{"GetWindowStyle", &luna_wrapper_wxWindow::_bind_GetWindowStyle},
	{"HasExtraStyle", &luna_wrapper_wxWindow::_bind_HasExtraStyle},
	{"HasFlag", &luna_wrapper_wxWindow::_bind_HasFlag},
	{"SetExtraStyle", &luna_wrapper_wxWindow::_bind_SetExtraStyle},
	{"SetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_SetWindowStyleFlag},
	{"SetWindowStyle", &luna_wrapper_wxWindow::_bind_SetWindowStyle},
	{"ToggleWindowStyle", &luna_wrapper_wxWindow::_bind_ToggleWindowStyle},
	{"MoveAfterInTabOrder", &luna_wrapper_wxWindow::_bind_MoveAfterInTabOrder},
	{"MoveBeforeInTabOrder", &luna_wrapper_wxWindow::_bind_MoveBeforeInTabOrder},
	{"Navigate", &luna_wrapper_wxWindow::_bind_Navigate},
	{"NavigateIn", &luna_wrapper_wxWindow::_bind_NavigateIn},
	{"Lower", &luna_wrapper_wxWindow::_bind_Lower},
	{"Raise", &luna_wrapper_wxWindow::_bind_Raise},
	{"Hide", &luna_wrapper_wxWindow::_bind_Hide},
	{"HideWithEffect", &luna_wrapper_wxWindow::_bind_HideWithEffect},
	{"IsEnabled", &luna_wrapper_wxWindow::_bind_IsEnabled},
	{"IsExposed", &luna_wrapper_wxWindow::_bind_IsExposed},
	{"IsShown", &luna_wrapper_wxWindow::_bind_IsShown},
	{"IsShownOnScreen", &luna_wrapper_wxWindow::_bind_IsShownOnScreen},
	{"Disable", &luna_wrapper_wxWindow::_bind_Disable},
	{"Enable", &luna_wrapper_wxWindow::_bind_Enable},
	{"Show", &luna_wrapper_wxWindow::_bind_Show},
	{"ShowWithEffect", &luna_wrapper_wxWindow::_bind_ShowWithEffect},
	{"GetHelpText", &luna_wrapper_wxWindow::_bind_GetHelpText},
	{"SetHelpText", &luna_wrapper_wxWindow::_bind_SetHelpText},
	{"GetHelpTextAtPoint", &luna_wrapper_wxWindow::_bind_GetHelpTextAtPoint},
	{"GetToolTip", &luna_wrapper_wxWindow::_bind_GetToolTip},
	{"GetToolTipText", &luna_wrapper_wxWindow::_bind_GetToolTipText},
	{"SetToolTip", &luna_wrapper_wxWindow::_bind_SetToolTip},
	{"UnsetToolTip", &luna_wrapper_wxWindow::_bind_UnsetToolTip},
	{"GetPopupMenuSelectionFromUser", &luna_wrapper_wxWindow::_bind_GetPopupMenuSelectionFromUser},
	{"PopupMenu", &luna_wrapper_wxWindow::_bind_PopupMenu},
	{"GetValidator", &luna_wrapper_wxWindow::_bind_GetValidator},
	{"SetValidator", &luna_wrapper_wxWindow::_bind_SetValidator},
	{"TransferDataFromWindow", &luna_wrapper_wxWindow::_bind_TransferDataFromWindow},
	{"TransferDataToWindow", &luna_wrapper_wxWindow::_bind_TransferDataToWindow},
	{"Validate", &luna_wrapper_wxWindow::_bind_Validate},
	{"GetId", &luna_wrapper_wxWindow::_bind_GetId},
	{"GetLabel", &luna_wrapper_wxWindow::_bind_GetLabel},
	{"GetLayoutDirection", &luna_wrapper_wxWindow::_bind_GetLayoutDirection},
	{"GetName", &luna_wrapper_wxWindow::_bind_GetName},
	{"GetWindowVariant", &luna_wrapper_wxWindow::_bind_GetWindowVariant},
	{"SetId", &luna_wrapper_wxWindow::_bind_SetId},
	{"SetLabel", &luna_wrapper_wxWindow::_bind_SetLabel},
	{"SetLayoutDirection", &luna_wrapper_wxWindow::_bind_SetLayoutDirection},
	{"SetName", &luna_wrapper_wxWindow::_bind_SetName},
	{"SetWindowVariant", &luna_wrapper_wxWindow::_bind_SetWindowVariant},
	{"GetAcceleratorTable", &luna_wrapper_wxWindow::_bind_GetAcceleratorTable},
	{"SetAcceleratorTable", &luna_wrapper_wxWindow::_bind_SetAcceleratorTable},
	{"Close", &luna_wrapper_wxWindow::_bind_Close},
	{"Destroy", &luna_wrapper_wxWindow::_bind_Destroy},
	{"IsBeingDeleted", &luna_wrapper_wxWindow::_bind_IsBeingDeleted},
	{"GetDropTarget", &luna_wrapper_wxWindow::_bind_GetDropTarget},
	{"SetDropTarget", &luna_wrapper_wxWindow::_bind_SetDropTarget},
	{"DragAcceptFiles", &luna_wrapper_wxWindow::_bind_DragAcceptFiles},
	{"GetContainingSizer", &luna_wrapper_wxWindow::_bind_GetContainingSizer},
	{"GetSizer", &luna_wrapper_wxWindow::_bind_GetSizer},
	{"SetSizer", &luna_wrapper_wxWindow::_bind_SetSizer},
	{"SetSizerAndFit", &luna_wrapper_wxWindow::_bind_SetSizerAndFit},
	{"GetConstraints", &luna_wrapper_wxWindow::_bind_GetConstraints},
	{"SetConstraints", &luna_wrapper_wxWindow::_bind_SetConstraints},
	{"Layout", &luna_wrapper_wxWindow::_bind_Layout},
	{"SetAutoLayout", &luna_wrapper_wxWindow::_bind_SetAutoLayout},
	{"GetAutoLayout", &luna_wrapper_wxWindow::_bind_GetAutoLayout},
	{"CaptureMouse", &luna_wrapper_wxWindow::_bind_CaptureMouse},
	{"GetCaret", &luna_wrapper_wxWindow::_bind_GetCaret},
	{"GetCursor", &luna_wrapper_wxWindow::_bind_GetCursor},
	{"HasCapture", &luna_wrapper_wxWindow::_bind_HasCapture},
	{"ReleaseMouse", &luna_wrapper_wxWindow::_bind_ReleaseMouse},
	{"SetCaret", &luna_wrapper_wxWindow::_bind_SetCaret},
	{"SetCursor", &luna_wrapper_wxWindow::_bind_SetCursor},
	{"WarpPointer", &luna_wrapper_wxWindow::_bind_WarpPointer},
	{"HitTest", &luna_wrapper_wxWindow::_bind_HitTest},
	{"GetBorder", &luna_wrapper_wxWindow::_bind_GetBorder},
	{"DoUpdateWindowUI", &luna_wrapper_wxWindow::_bind_DoUpdateWindowUI},
	{"GetHandle", &luna_wrapper_wxWindow::_bind_GetHandle},
	{"HasMultiplePages", &luna_wrapper_wxWindow::_bind_HasMultiplePages},
	{"InheritAttributes", &luna_wrapper_wxWindow::_bind_InheritAttributes},
	{"InitDialog", &luna_wrapper_wxWindow::_bind_InitDialog},
	{"IsRetained", &luna_wrapper_wxWindow::_bind_IsRetained},
	{"IsThisEnabled", &luna_wrapper_wxWindow::_bind_IsThisEnabled},
	{"IsTopLevel", &luna_wrapper_wxWindow::_bind_IsTopLevel},
	{"MakeModal", &luna_wrapper_wxWindow::_bind_MakeModal},
	{"OnInternalIdle", &luna_wrapper_wxWindow::_bind_OnInternalIdle},
	{"RegisterHotKey", &luna_wrapper_wxWindow::_bind_RegisterHotKey},
	{"UnregisterHotKey", &luna_wrapper_wxWindow::_bind_UnregisterHotKey},
	{"UpdateWindowUI", &luna_wrapper_wxWindow::_bind_UpdateWindowUI},
	{"GetClassDefaultAttributes", &luna_wrapper_wxWindow::_bind_GetClassDefaultAttributes},
	{"FindFocus", &luna_wrapper_wxWindow::_bind_FindFocus},
	{"FindWindowById", &luna_wrapper_wxWindow::_bind_FindWindowById},
	{"FindWindowByLabel", &luna_wrapper_wxWindow::_bind_FindWindowByLabel},
	{"FindWindowByName", &luna_wrapper_wxWindow::_bind_FindWindowByName},
	{"GetCapture", &luna_wrapper_wxWindow::_bind_GetCapture},
	{"NewControlId", &luna_wrapper_wxWindow::_bind_NewControlId},
	{"UnreserveControlId", &luna_wrapper_wxWindow::_bind_UnreserveControlId},
	{"__eq", &luna_wrapper_wxWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindow >::enumValues[] = {
	{0,0}
};


