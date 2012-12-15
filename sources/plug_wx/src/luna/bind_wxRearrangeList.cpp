#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRearrangeList.h>

class luna_wrapper_wxRearrangeList {
public:
	typedef Luna< wxRearrangeList > luna_t;

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
		//wxRearrangeList* ptr= dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		wxRearrangeList* ptr= luna_caster< wxObject, wxRearrangeList >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRearrangeList >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxRearrangeList* ptr= dynamic_cast< wxRearrangeList* >(Luna< wxItemContainerImmutable >::check(L,1));
		wxRearrangeList* ptr= luna_caster< wxItemContainerImmutable, wxRearrangeList >::cast(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRearrangeList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47342076) ) return false;
		if( (!dynamic_cast< wxArrayInt* >(Luna< wxArrayInt >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47342076) ) return false;
		if( (!dynamic_cast< wxArrayInt* >(Luna< wxArrayInt >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47342076) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanMoveCurrentUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanMoveCurrentDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MoveCurrentUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MoveCurrentDown(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSorted(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRearrangeList::wxRearrangeList()
	static wxRearrangeList* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList() function, expected prototype:\nwxRearrangeList::wxRearrangeList()\nClass arguments details:\n");
		}


		return new wxRearrangeList();
	}

	// wxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static wxRearrangeList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nwxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeList::wxRearrangeList function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::wxRearrangeList function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,5));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,6));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::wxRearrangeList function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxRearrangeList(parent, id, pos, size, order, items, style, validator, name);
	}

	// wxRearrangeList::wxRearrangeList(lua_Table * data)
	static wxRearrangeList* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList(lua_Table * data) function, expected prototype:\nwxRearrangeList::wxRearrangeList(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxRearrangeList(L,NULL);
	}

	// wxRearrangeList::wxRearrangeList(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static wxRearrangeList* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nwxRearrangeList::wxRearrangeList(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 47342076\narg 7 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeList::wxRearrangeList function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::wxRearrangeList function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,6));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,7));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::wxRearrangeList function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxRearrangeList(L,NULL, parent, id, pos, size, order, items, style, validator, name);
	}

	// Overload binder for wxRearrangeList::wxRearrangeList
	static wxRearrangeList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxRearrangeList, cannot match any of the overloads for function wxRearrangeList:\n  wxRearrangeList()\n  wxRearrangeList(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)\n  wxRearrangeList(lua_Table *)\n  wxRearrangeList(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nbool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeList::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,6));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeList::Create function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,7));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeList::Create function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, order, items, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxArrayInt & wxRearrangeList::GetCurrentOrder() const
	static int _bind_GetCurrentOrder(lua_State *L) {
		if (!_lg_typecheck_GetCurrentOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayInt & wxRearrangeList::GetCurrentOrder() const function, expected prototype:\nconst wxArrayInt & wxRearrangeList::GetCurrentOrder() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayInt & wxRearrangeList::GetCurrentOrder() const");
		}
		const wxArrayInt* lret = &self->GetCurrentOrder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,false);

		return 1;
	}

	// bool wxRearrangeList::CanMoveCurrentUp() const
	static int _bind_CanMoveCurrentUp(lua_State *L) {
		if (!_lg_typecheck_CanMoveCurrentUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::CanMoveCurrentUp() const function, expected prototype:\nbool wxRearrangeList::CanMoveCurrentUp() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::CanMoveCurrentUp() const");
		}
		bool lret = self->CanMoveCurrentUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::CanMoveCurrentDown() const
	static int _bind_CanMoveCurrentDown(lua_State *L) {
		if (!_lg_typecheck_CanMoveCurrentDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::CanMoveCurrentDown() const function, expected prototype:\nbool wxRearrangeList::CanMoveCurrentDown() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::CanMoveCurrentDown() const");
		}
		bool lret = self->CanMoveCurrentDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::MoveCurrentUp()
	static int _bind_MoveCurrentUp(lua_State *L) {
		if (!_lg_typecheck_MoveCurrentUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::MoveCurrentUp() function, expected prototype:\nbool wxRearrangeList::MoveCurrentUp()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::MoveCurrentUp()");
		}
		bool lret = self->MoveCurrentUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::MoveCurrentDown()
	static int _bind_MoveCurrentDown(lua_State *L) {
		if (!_lg_typecheck_MoveCurrentDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::MoveCurrentDown() function, expected prototype:\nbool wxRearrangeList::MoveCurrentDown()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::MoveCurrentDown()");
		}
		bool lret = self->MoveCurrentDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxRearrangeList::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRearrangeList::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRearrangeList::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRearrangeList::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxRearrangeList::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxRearrangeList::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_AcceptsFocus() const function, expected prototype:\nbool wxRearrangeList::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_AcceptsFocus() const");
		}
		bool lret = self->wxRearrangeList::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxRearrangeList::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxRearrangeList::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxRearrangeList::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxRearrangeList::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_HasFocus() const function, expected prototype:\nbool wxRearrangeList::base_HasFocus() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_HasFocus() const");
		}
		bool lret = self->wxRearrangeList::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxRearrangeList::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetCanFocus(bool)");
		}
		self->wxRearrangeList::SetCanFocus(canFocus);

		return 0;
	}

	// void wxRearrangeList::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetFocus() function, expected prototype:\nvoid wxRearrangeList::base_SetFocus()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetFocus()");
		}
		self->wxRearrangeList::SetFocus();

		return 0;
	}

	// void wxRearrangeList::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetFocusFromKbd() function, expected prototype:\nvoid wxRearrangeList::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetFocusFromKbd()");
		}
		self->wxRearrangeList::SetFocusFromKbd();

		return 0;
	}

	// void wxRearrangeList::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxRearrangeList::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_AddChild(wxWindow *)");
		}
		self->wxRearrangeList::AddChild(child);

		return 0;
	}

	// void wxRearrangeList::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxRearrangeList::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_RemoveChild(wxWindow *)");
		}
		self->wxRearrangeList::RemoveChild(child);

		return 0;
	}

	// bool wxRearrangeList::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxRearrangeList::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxRearrangeList::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxRearrangeList::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxRearrangeList::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxRearrangeList::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxRearrangeList::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetScrollPos(int) const");
		}
		int lret = self->wxRearrangeList::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRearrangeList::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxRearrangeList::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetScrollRange(int) const");
		}
		int lret = self->wxRearrangeList::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRearrangeList::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxRearrangeList::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetScrollThumb(int) const");
		}
		int lret = self->wxRearrangeList::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRearrangeList::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxRearrangeList::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxRearrangeList::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_ScrollLines(int lines) function, expected prototype:\nbool wxRearrangeList::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_ScrollLines(int)");
		}
		bool lret = self->wxRearrangeList::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_ScrollPages(int pages) function, expected prototype:\nbool wxRearrangeList::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_ScrollPages(int)");
		}
		bool lret = self->wxRearrangeList::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRearrangeList::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxRearrangeList::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxRearrangeList::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxRearrangeList::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetScrollPos(int, int, bool)");
		}
		self->wxRearrangeList::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxRearrangeList::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxRearrangeList::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxRearrangeList::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxRearrangeList::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxRearrangeList::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxRearrangeList::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxRearrangeList::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxRearrangeList::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxRearrangeList::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Fit() function, expected prototype:\nvoid wxRearrangeList::base_Fit()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Fit()");
		}
		self->wxRearrangeList::Fit();

		return 0;
	}

	// void wxRearrangeList::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_FitInside() function, expected prototype:\nvoid wxRearrangeList::base_FitInside()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_FitInside()");
		}
		self->wxRearrangeList::FitInside();

		return 0;
	}

	// wxSize wxRearrangeList::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetMaxSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetMinClientSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetMinSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRearrangeList::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRearrangeList::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxRearrangeList::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRearrangeList::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxRearrangeList::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxRearrangeList::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxRearrangeList::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxRearrangeList::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxRearrangeList::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SendSizeEvent(int)");
		}
		self->wxRearrangeList::SendSizeEvent(flags);

		return 0;
	}

	// void wxRearrangeList::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxRearrangeList::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxRearrangeList::SetMaxClientSize(size);

		return 0;
	}

	// void wxRearrangeList::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxRearrangeList::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetMaxSize(const wxSize &)");
		}
		self->wxRearrangeList::SetMaxSize(size);

		return 0;
	}

	// void wxRearrangeList::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxRearrangeList::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetMinClientSize(const wxSize &)");
		}
		self->wxRearrangeList::SetMinClientSize(size);

		return 0;
	}

	// void wxRearrangeList::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxRearrangeList::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetMinSize(const wxSize &)");
		}
		self->wxRearrangeList::SetMinSize(size);

		return 0;
	}

	// void wxRearrangeList::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxRearrangeList::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxRearrangeList::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxRearrangeList::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxRearrangeList::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxRearrangeList::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxRearrangeList::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxRearrangeList::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxRearrangeList::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxRearrangeList::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxRearrangeList::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRearrangeList::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxRearrangeList::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRearrangeList::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxRearrangeList::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxRearrangeList::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_ClearBackground() function, expected prototype:\nvoid wxRearrangeList::base_ClearBackground()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_ClearBackground()");
		}
		self->wxRearrangeList::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxRearrangeList::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxRearrangeList::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxRearrangeList::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxRearrangeList::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxRearrangeList::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRearrangeList::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetCharHeight() const function, expected prototype:\nint wxRearrangeList::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetCharHeight() const");
		}
		int lret = self->wxRearrangeList::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRearrangeList::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetCharWidth() const function, expected prototype:\nint wxRearrangeList::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetCharWidth() const");
		}
		int lret = self->wxRearrangeList::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxRearrangeList::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxRearrangeList::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxRearrangeList::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxRearrangeList::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxRearrangeList::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxRearrangeList::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Update() function, expected prototype:\nvoid wxRearrangeList::base_Update()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Update()");
		}
		self->wxRearrangeList::Update();

		return 0;
	}

	// bool wxRearrangeList::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxRearrangeList::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxRearrangeList::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxRearrangeList::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxRearrangeList::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxRearrangeList::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_ShouldInheritColours() const function, expected prototype:\nbool wxRearrangeList::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_ShouldInheritColours() const");
		}
		bool lret = self->wxRearrangeList::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxRearrangeList::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetThemeEnabled(bool)");
		}
		self->wxRearrangeList::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxRearrangeList::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_GetThemeEnabled() const function, expected prototype:\nbool wxRearrangeList::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_GetThemeEnabled() const");
		}
		bool lret = self->wxRearrangeList::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_CanSetTransparent() function, expected prototype:\nbool wxRearrangeList::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_CanSetTransparent()");
		}
		bool lret = self->wxRearrangeList::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxRearrangeList::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxRearrangeList::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRearrangeList::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxRearrangeList::SetNextHandler(handler);

		return 0;
	}

	// void wxRearrangeList::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRearrangeList::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxRearrangeList::SetPreviousHandler(handler);

		return 0;
	}

	// long wxRearrangeList::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxRearrangeList::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxRearrangeList::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxRearrangeList::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxRearrangeList::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRearrangeList::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxRearrangeList::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetExtraStyle(long)");
		}
		self->wxRearrangeList::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxRearrangeList::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxRearrangeList::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetWindowStyleFlag(long)");
		}
		self->wxRearrangeList::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxRearrangeList::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Lower() function, expected prototype:\nvoid wxRearrangeList::base_Lower()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Lower()");
		}
		self->wxRearrangeList::Lower();

		return 0;
	}

	// void wxRearrangeList::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Raise() function, expected prototype:\nvoid wxRearrangeList::base_Raise()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Raise()");
		}
		self->wxRearrangeList::Raise();

		return 0;
	}

	// bool wxRearrangeList::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRearrangeList::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxRearrangeList::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsShown() const function, expected prototype:\nbool wxRearrangeList::base_IsShown() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsShown() const");
		}
		bool lret = self->wxRearrangeList::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsShownOnScreen() const function, expected prototype:\nbool wxRearrangeList::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsShownOnScreen() const");
		}
		bool lret = self->wxRearrangeList::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Enable(bool enable = true) function, expected prototype:\nbool wxRearrangeList::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Enable(bool)");
		}
		bool lret = self->wxRearrangeList::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Show(bool show = true) function, expected prototype:\nbool wxRearrangeList::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Show(bool)");
		}
		bool lret = self->wxRearrangeList::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRearrangeList::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxRearrangeList::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxRearrangeList::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRearrangeList::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxRearrangeList::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxRearrangeList::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRearrangeList::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxRearrangeList::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxRearrangeList::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxRearrangeList::base_GetValidator() function, expected prototype:\nwxValidator * wxRearrangeList::base_GetValidator()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxRearrangeList::base_GetValidator()");
		}
		wxValidator * lret = self->wxRearrangeList::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxRearrangeList::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxRearrangeList::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetValidator(const wxValidator &)");
		}
		self->wxRearrangeList::SetValidator(validator);

		return 0;
	}

	// bool wxRearrangeList::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_TransferDataFromWindow() function, expected prototype:\nbool wxRearrangeList::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_TransferDataFromWindow()");
		}
		bool lret = self->wxRearrangeList::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_TransferDataToWindow() function, expected prototype:\nbool wxRearrangeList::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_TransferDataToWindow()");
		}
		bool lret = self->wxRearrangeList::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Validate() function, expected prototype:\nbool wxRearrangeList::base_Validate()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Validate()");
		}
		bool lret = self->wxRearrangeList::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxRearrangeList::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxRearrangeList::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxRearrangeList::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxRearrangeList::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxRearrangeList::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRearrangeList::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRearrangeList::base_GetName() const function, expected prototype:\nwxString wxRearrangeList::base_GetName() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRearrangeList::base_GetName() const");
		}
		wxString lret = self->wxRearrangeList::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRearrangeList::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxRearrangeList::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxRearrangeList::SetLayoutDirection(dir);

		return 0;
	}

	// void wxRearrangeList::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetName(const wxString & name) function, expected prototype:\nvoid wxRearrangeList::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetName(const wxString &)");
		}
		self->wxRearrangeList::SetName(name);

		return 0;
	}

	// void wxRearrangeList::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxRearrangeList::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxRearrangeList::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxRearrangeList::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxRearrangeList::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Destroy() function, expected prototype:\nbool wxRearrangeList::base_Destroy()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Destroy()");
		}
		bool lret = self->wxRearrangeList::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxRearrangeList::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxRearrangeList::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxRearrangeList::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxRearrangeList::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxRearrangeList::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxRearrangeList::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxRearrangeList::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxRearrangeList::SetDropTarget(target);

		return 0;
	}

	// void wxRearrangeList::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxRearrangeList::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_DragAcceptFiles(bool)");
		}
		self->wxRearrangeList::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxRearrangeList::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_Layout() function, expected prototype:\nbool wxRearrangeList::base_Layout()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_Layout()");
		}
		bool lret = self->wxRearrangeList::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_HasCapture() const function, expected prototype:\nbool wxRearrangeList::base_HasCapture() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_HasCapture() const");
		}
		bool lret = self->wxRearrangeList::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxRearrangeList::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxRearrangeList::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxRearrangeList::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxRearrangeList::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_WarpPointer(int, int)");
		}
		self->wxRearrangeList::WarpPointer(x, y);

		return 0;
	}

	// void wxRearrangeList::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxRearrangeList::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRearrangeList::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxRearrangeList::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxRearrangeList::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_HasMultiplePages() const function, expected prototype:\nbool wxRearrangeList::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_HasMultiplePages() const");
		}
		bool lret = self->wxRearrangeList::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_InheritAttributes() function, expected prototype:\nvoid wxRearrangeList::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_InheritAttributes()");
		}
		self->wxRearrangeList::InheritAttributes();

		return 0;
	}

	// void wxRearrangeList::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_InitDialog() function, expected prototype:\nvoid wxRearrangeList::base_InitDialog()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_InitDialog()");
		}
		self->wxRearrangeList::InitDialog();

		return 0;
	}

	// bool wxRearrangeList::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsRetained() const function, expected prototype:\nbool wxRearrangeList::base_IsRetained() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsRetained() const");
		}
		bool lret = self->wxRearrangeList::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsTopLevel() const function, expected prototype:\nbool wxRearrangeList::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsTopLevel() const");
		}
		bool lret = self->wxRearrangeList::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxRearrangeList::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_MakeModal(bool)");
		}
		self->wxRearrangeList::MakeModal(modal);

		return 0;
	}

	// void wxRearrangeList::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_OnInternalIdle() function, expected prototype:\nvoid wxRearrangeList::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_OnInternalIdle()");
		}
		self->wxRearrangeList::OnInternalIdle();

		return 0;
	}

	// bool wxRearrangeList::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxRearrangeList::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxRearrangeList::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxRearrangeList::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxRearrangeList::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxRearrangeList::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_UpdateWindowUI(long)");
		}
		self->wxRearrangeList::UpdateWindowUI(flags);

		return 0;
	}

	// void wxRearrangeList::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxRearrangeList::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRearrangeList::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Command(wxCommandEvent &)");
		}
		self->wxRearrangeList::Command(event);

		return 0;
	}

	// wxString wxRearrangeList::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRearrangeList::base_GetLabel() const function, expected prototype:\nwxString wxRearrangeList::base_GetLabel() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRearrangeList::base_GetLabel() const");
		}
		wxString lret = self->wxRearrangeList::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRearrangeList::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxRearrangeList::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_SetLabel(const wxString &)");
		}
		self->wxRearrangeList::SetLabel(label);

		return 0;
	}

	// wxString wxRearrangeList::base_GetStringSelection() const
	static int _bind_base_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRearrangeList::base_GetStringSelection() const function, expected prototype:\nwxString wxRearrangeList::base_GetStringSelection() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRearrangeList::base_GetStringSelection() const");
		}
		wxString lret = self->wxRearrangeList::GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxRearrangeList::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetSelection() const function, expected prototype:\nint wxRearrangeList::base_GetSelection() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetSelection() const");
		}
		int lret = self->wxRearrangeList::GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRearrangeList::base_GetSelections(wxArrayInt & selections) const
	static int _bind_base_GetSelections(lua_State *L) {
		if (!_lg_typecheck_base_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_GetSelections(wxArrayInt & selections) const function, expected prototype:\nint wxRearrangeList::base_GetSelections(wxArrayInt & selections) const\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		wxArrayInt* selections_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !selections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selections in wxRearrangeList::base_GetSelections function");
		}
		wxArrayInt & selections=*selections_ptr;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_GetSelections(wxArrayInt &) const");
		}
		int lret = self->wxRearrangeList::GetSelections(selections);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRearrangeList::base_IsSelected(int n) const
	static int _bind_base_IsSelected(lua_State *L) {
		if (!_lg_typecheck_base_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsSelected(int n) const function, expected prototype:\nbool wxRearrangeList::base_IsSelected(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsSelected(int) const");
		}
		bool lret = self->wxRearrangeList::IsSelected(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_EnsureVisible(int n)
	static int _bind_base_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_base_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_EnsureVisible(int n) function, expected prototype:\nvoid wxRearrangeList::base_EnsureVisible(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_EnsureVisible(int)");
		}
		self->wxRearrangeList::EnsureVisible(n);

		return 0;
	}

	// bool wxRearrangeList::base_IsSorted() const
	static int _bind_base_IsSorted(lua_State *L) {
		if (!_lg_typecheck_base_IsSorted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::base_IsSorted() const function, expected prototype:\nbool wxRearrangeList::base_IsSorted() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::base_IsSorted() const");
		}
		bool lret = self->wxRearrangeList::IsSorted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeList::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRearrangeList::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRearrangeList::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRearrangeList::base_Refresh(bool, const wxRect *)");
		}
		self->wxRearrangeList::Refresh(eraseBackground, rect);

		return 0;
	}

	// unsigned int wxRearrangeList::base_GetCount() const
	static int _bind_base_GetCount(lua_State *L) {
		if (!_lg_typecheck_base_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxRearrangeList::base_GetCount() const function, expected prototype:\nunsigned int wxRearrangeList::base_GetCount() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxRearrangeList::base_GetCount() const");
		}
		unsigned int lret = self->wxRearrangeList::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRearrangeList::base_GetString(unsigned int n) const
	static int _bind_base_GetString(lua_State *L) {
		if (!_lg_typecheck_base_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRearrangeList::base_GetString(unsigned int n) const function, expected prototype:\nwxString wxRearrangeList::base_GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRearrangeList::base_GetString(unsigned int) const");
		}
		wxString lret = self->wxRearrangeList::GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxRearrangeList::base_FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_base_FindString(lua_State *L) {
		if (!_lg_typecheck_base_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRearrangeList::base_FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxRearrangeList::base_FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxRearrangeList* self=Luna< wxObject >::checkSubType< wxRearrangeList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRearrangeList::base_FindString(const wxString &, bool) const");
		}
		int lret = self->wxRearrangeList::FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRearrangeList* LunaTraits< wxRearrangeList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRearrangeList::_bind_ctor(L);
}

void LunaTraits< wxRearrangeList >::_bind_dtor(wxRearrangeList* obj) {
	delete obj;
}

const char LunaTraits< wxRearrangeList >::className[] = "wxRearrangeList";
const char LunaTraits< wxRearrangeList >::fullName[] = "wxRearrangeList";
const char LunaTraits< wxRearrangeList >::moduleName[] = "wx";
const char* LunaTraits< wxRearrangeList >::parents[] = {"wx.wxCheckListBox", 0};
const int LunaTraits< wxRearrangeList >::hash = 9863658;
const int LunaTraits< wxRearrangeList >::uniqueIDs[] = {56813631, 53506535, 69784830,0};

luna_RegType LunaTraits< wxRearrangeList >::methods[] = {
	{"Create", &luna_wrapper_wxRearrangeList::_bind_Create},
	{"GetCurrentOrder", &luna_wrapper_wxRearrangeList::_bind_GetCurrentOrder},
	{"CanMoveCurrentUp", &luna_wrapper_wxRearrangeList::_bind_CanMoveCurrentUp},
	{"CanMoveCurrentDown", &luna_wrapper_wxRearrangeList::_bind_CanMoveCurrentDown},
	{"MoveCurrentUp", &luna_wrapper_wxRearrangeList::_bind_MoveCurrentUp},
	{"MoveCurrentDown", &luna_wrapper_wxRearrangeList::_bind_MoveCurrentDown},
	{"base_GetClassInfo", &luna_wrapper_wxRearrangeList::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxRearrangeList::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxRearrangeList::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxRearrangeList::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxRearrangeList::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxRearrangeList::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxRearrangeList::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxRearrangeList::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxRearrangeList::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxRearrangeList::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxRearrangeList::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxRearrangeList::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxRearrangeList::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxRearrangeList::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxRearrangeList::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxRearrangeList::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxRearrangeList::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxRearrangeList::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxRearrangeList::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxRearrangeList::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxRearrangeList::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxRearrangeList::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxRearrangeList::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxRearrangeList::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxRearrangeList::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxRearrangeList::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxRearrangeList::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxRearrangeList::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxRearrangeList::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxRearrangeList::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxRearrangeList::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxRearrangeList::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxRearrangeList::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxRearrangeList::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxRearrangeList::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxRearrangeList::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxRearrangeList::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxRearrangeList::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxRearrangeList::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxRearrangeList::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxRearrangeList::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxRearrangeList::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxRearrangeList::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxRearrangeList::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxRearrangeList::_bind_base_GetDefaultAttributes},
	{"base_Update", &luna_wrapper_wxRearrangeList::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxRearrangeList::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxRearrangeList::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxRearrangeList::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxRearrangeList::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxRearrangeList::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxRearrangeList::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxRearrangeList::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxRearrangeList::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxRearrangeList::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxRearrangeList::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxRearrangeList::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxRearrangeList::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxRearrangeList::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxRearrangeList::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxRearrangeList::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxRearrangeList::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxRearrangeList::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxRearrangeList::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxRearrangeList::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxRearrangeList::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxRearrangeList::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxRearrangeList::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxRearrangeList::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxRearrangeList::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxRearrangeList::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxRearrangeList::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxRearrangeList::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxRearrangeList::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxRearrangeList::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxRearrangeList::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxRearrangeList::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxRearrangeList::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxRearrangeList::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxRearrangeList::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxRearrangeList::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxRearrangeList::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxRearrangeList::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxRearrangeList::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxRearrangeList::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxRearrangeList::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxRearrangeList::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxRearrangeList::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxRearrangeList::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxRearrangeList::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxRearrangeList::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxRearrangeList::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxRearrangeList::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxRearrangeList::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxRearrangeList::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxRearrangeList::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxRearrangeList::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxRearrangeList::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxRearrangeList::_bind_base_SetLabel},
	{"base_GetStringSelection", &luna_wrapper_wxRearrangeList::_bind_base_GetStringSelection},
	{"base_GetSelection", &luna_wrapper_wxRearrangeList::_bind_base_GetSelection},
	{"base_GetSelections", &luna_wrapper_wxRearrangeList::_bind_base_GetSelections},
	{"base_IsSelected", &luna_wrapper_wxRearrangeList::_bind_base_IsSelected},
	{"base_EnsureVisible", &luna_wrapper_wxRearrangeList::_bind_base_EnsureVisible},
	{"base_IsSorted", &luna_wrapper_wxRearrangeList::_bind_base_IsSorted},
	{"base_Refresh", &luna_wrapper_wxRearrangeList::_bind_base_Refresh},
	{"base_GetCount", &luna_wrapper_wxRearrangeList::_bind_base_GetCount},
	{"base_GetString", &luna_wrapper_wxRearrangeList::_bind_base_GetString},
	{"base_FindString", &luna_wrapper_wxRearrangeList::_bind_base_FindString},
	{"__eq", &luna_wrapper_wxRearrangeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRearrangeList >::converters[] = {
	{"wxObject", &luna_wrapper_wxRearrangeList::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxRearrangeList::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRearrangeList >::enumValues[] = {
	{0,0}
};


