#include <plug_common.h>

#include <luna/wrappers/wrapper_wxListbook.h>

class luna_wrapper_wxListbook {
public:
	typedef Luna< wxListbook > luna_t;

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
		//wxListbook* ptr= dynamic_cast< wxListbook* >(Luna< wxObject >::check(L,1));
		wxListbook* ptr= luna_caster< wxObject, wxListbook >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListbook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxListbook* ptr= dynamic_cast< wxListbook* >(Luna< wxWithImages >::check(L,1));
		wxListbook* ptr= luna_caster< wxWithImages, wxListbook >::cast(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListbook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetListView(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HitTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteAllPages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeletePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxListView * wxListbook::GetListView() const
	static int _bind_GetListView(lua_State *L) {
		if (!_lg_typecheck_GetListView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListView * wxListbook::GetListView() const function, expected prototype:\nwxListView * wxListbook::GetListView() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxListView * wxListbook::GetListView() const");
		}
		wxListView * lret = self->GetListView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxListView >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxListbook::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxListbook::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxListbook::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxListbook::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxListbook::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxListbook::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_AcceptsFocus() const function, expected prototype:\nbool wxListbook::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_AcceptsFocus() const");
		}
		bool lret = self->wxListbook::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxListbook::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxListbook::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxListbook::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxListbook::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_HasFocus() const function, expected prototype:\nbool wxListbook::base_HasFocus() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_HasFocus() const");
		}
		bool lret = self->wxListbook::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxListbook::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetCanFocus(bool)");
		}
		self->wxListbook::SetCanFocus(canFocus);

		return 0;
	}

	// void wxListbook::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetFocus() function, expected prototype:\nvoid wxListbook::base_SetFocus()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetFocus()");
		}
		self->wxListbook::SetFocus();

		return 0;
	}

	// void wxListbook::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetFocusFromKbd() function, expected prototype:\nvoid wxListbook::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetFocusFromKbd()");
		}
		self->wxListbook::SetFocusFromKbd();

		return 0;
	}

	// void wxListbook::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxListbook::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_AddChild(wxWindow *)");
		}
		self->wxListbook::AddChild(child);

		return 0;
	}

	// void wxListbook::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxListbook::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_RemoveChild(wxWindow *)");
		}
		self->wxListbook::RemoveChild(child);

		return 0;
	}

	// bool wxListbook::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxListbook::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxListbook::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxListbook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxListbook::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxListbook::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxListbook::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_GetScrollPos(int) const");
		}
		int lret = self->wxListbook::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListbook::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxListbook::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_GetScrollRange(int) const");
		}
		int lret = self->wxListbook::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListbook::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxListbook::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_GetScrollThumb(int) const");
		}
		int lret = self->wxListbook::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListbook::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxListbook::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxListbook::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_ScrollLines(int lines) function, expected prototype:\nbool wxListbook::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_ScrollLines(int)");
		}
		bool lret = self->wxListbook::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_ScrollPages(int pages) function, expected prototype:\nbool wxListbook::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_ScrollPages(int)");
		}
		bool lret = self->wxListbook::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxListbook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxListbook::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxListbook::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxListbook::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetScrollPos(int, int, bool)");
		}
		self->wxListbook::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxListbook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxListbook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxListbook::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxListbook::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxListbook::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxListbook::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxListbook::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxListbook::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxListbook::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Fit() function, expected prototype:\nvoid wxListbook::base_Fit()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Fit()");
		}
		self->wxListbook::Fit();

		return 0;
	}

	// void wxListbook::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_FitInside() function, expected prototype:\nvoid wxListbook::base_FitInside()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_FitInside()");
		}
		self->wxListbook::FitInside();

		return 0;
	}

	// wxSize wxListbook::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxListbook::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxListbook::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetMaxSize() const function, expected prototype:\nwxSize wxListbook::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetMinClientSize() const function, expected prototype:\nwxSize wxListbook::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetMinSize() const function, expected prototype:\nwxSize wxListbook::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxListbook::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListbook::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxListbook::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxListbook::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxListbook::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxListbook::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxListbook::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxListbook::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxListbook::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxListbook::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SendSizeEvent(int)");
		}
		self->wxListbook::SendSizeEvent(flags);

		return 0;
	}

	// void wxListbook::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxListbook::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxListbook::SetMaxClientSize(size);

		return 0;
	}

	// void wxListbook::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxListbook::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetMaxSize(const wxSize &)");
		}
		self->wxListbook::SetMaxSize(size);

		return 0;
	}

	// void wxListbook::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxListbook::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetMinClientSize(const wxSize &)");
		}
		self->wxListbook::SetMinClientSize(size);

		return 0;
	}

	// void wxListbook::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxListbook::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetMinSize(const wxSize &)");
		}
		self->wxListbook::SetMinSize(size);

		return 0;
	}

	// void wxListbook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxListbook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxListbook::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxListbook::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxListbook::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxListbook::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxListbook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxListbook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxListbook::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxListbook::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxListbook::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxListbook::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxListbook::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxListbook::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxListbook::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxListbook::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_ClearBackground() function, expected prototype:\nvoid wxListbook::base_ClearBackground()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_ClearBackground()");
		}
		self->wxListbook::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxListbook::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxListbook::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxListbook::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxListbook::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxListbook::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListbook::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_GetCharHeight() const function, expected prototype:\nint wxListbook::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_GetCharHeight() const");
		}
		int lret = self->wxListbook::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListbook::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_GetCharWidth() const function, expected prototype:\nint wxListbook::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_GetCharWidth() const");
		}
		int lret = self->wxListbook::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxListbook::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxListbook::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxListbook::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxListbook::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxListbook::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxListbook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxListbook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Refresh(bool, const wxRect *)");
		}
		self->wxListbook::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxListbook::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Update() function, expected prototype:\nvoid wxListbook::base_Update()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Update()");
		}
		self->wxListbook::Update();

		return 0;
	}

	// bool wxListbook::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxListbook::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxListbook::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxListbook::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListbook::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxListbook::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_ShouldInheritColours() const function, expected prototype:\nbool wxListbook::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_ShouldInheritColours() const");
		}
		bool lret = self->wxListbook::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxListbook::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetThemeEnabled(bool)");
		}
		self->wxListbook::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxListbook::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_GetThemeEnabled() const function, expected prototype:\nbool wxListbook::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_GetThemeEnabled() const");
		}
		bool lret = self->wxListbook::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_CanSetTransparent() function, expected prototype:\nbool wxListbook::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_CanSetTransparent()");
		}
		bool lret = self->wxListbook::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxListbook::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxListbook::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxListbook::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxListbook::SetNextHandler(handler);

		return 0;
	}

	// void wxListbook::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxListbook::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxListbook::SetPreviousHandler(handler);

		return 0;
	}

	// long wxListbook::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListbook::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxListbook::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListbook::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxListbook::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxListbook::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxListbook::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetExtraStyle(long)");
		}
		self->wxListbook::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxListbook::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxListbook::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetWindowStyleFlag(long)");
		}
		self->wxListbook::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxListbook::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Lower() function, expected prototype:\nvoid wxListbook::base_Lower()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Lower()");
		}
		self->wxListbook::Lower();

		return 0;
	}

	// void wxListbook::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Raise() function, expected prototype:\nvoid wxListbook::base_Raise()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Raise()");
		}
		self->wxListbook::Raise();

		return 0;
	}

	// bool wxListbook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxListbook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxListbook::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_IsShown() const function, expected prototype:\nbool wxListbook::base_IsShown() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_IsShown() const");
		}
		bool lret = self->wxListbook::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_IsShownOnScreen() const function, expected prototype:\nbool wxListbook::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_IsShownOnScreen() const");
		}
		bool lret = self->wxListbook::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Enable(bool enable = true) function, expected prototype:\nbool wxListbook::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Enable(bool)");
		}
		bool lret = self->wxListbook::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Show(bool show = true) function, expected prototype:\nbool wxListbook::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Show(bool)");
		}
		bool lret = self->wxListbook::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxListbook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxListbook::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxListbook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxListbook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxListbook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxListbook::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxListbook::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxListbook::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxListbook::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxListbook::base_GetValidator() function, expected prototype:\nwxValidator * wxListbook::base_GetValidator()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxListbook::base_GetValidator()");
		}
		wxValidator * lret = self->wxListbook::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxListbook::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxListbook::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListbook::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetValidator(const wxValidator &)");
		}
		self->wxListbook::SetValidator(validator);

		return 0;
	}

	// bool wxListbook::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_TransferDataFromWindow() function, expected prototype:\nbool wxListbook::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_TransferDataFromWindow()");
		}
		bool lret = self->wxListbook::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_TransferDataToWindow() function, expected prototype:\nbool wxListbook::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_TransferDataToWindow()");
		}
		bool lret = self->wxListbook::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Validate() function, expected prototype:\nbool wxListbook::base_Validate()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Validate()");
		}
		bool lret = self->wxListbook::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxListbook::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxListbook::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxListbook::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxListbook::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxListbook::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxListbook::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxListbook::base_GetName() const function, expected prototype:\nwxString wxListbook::base_GetName() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxListbook::base_GetName() const");
		}
		wxString lret = self->wxListbook::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxListbook::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxListbook::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxListbook::SetLayoutDirection(dir);

		return 0;
	}

	// void wxListbook::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetName(const wxString & name) function, expected prototype:\nvoid wxListbook::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetName(const wxString &)");
		}
		self->wxListbook::SetName(name);

		return 0;
	}

	// void wxListbook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxListbook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxListbook::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxListbook::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxListbook::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Destroy() function, expected prototype:\nbool wxListbook::base_Destroy()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Destroy()");
		}
		bool lret = self->wxListbook::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxListbook::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxListbook::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxListbook::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxListbook::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxListbook::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxListbook::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxListbook::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxListbook::SetDropTarget(target);

		return 0;
	}

	// void wxListbook::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxListbook::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_DragAcceptFiles(bool)");
		}
		self->wxListbook::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxListbook::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_Layout() function, expected prototype:\nbool wxListbook::base_Layout()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_Layout()");
		}
		bool lret = self->wxListbook::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_HasCapture() const function, expected prototype:\nbool wxListbook::base_HasCapture() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_HasCapture() const");
		}
		bool lret = self->wxListbook::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxListbook::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxListbook::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxListbook::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxListbook::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_WarpPointer(int, int)");
		}
		self->wxListbook::WarpPointer(x, y);

		return 0;
	}

	// void wxListbook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxListbook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxListbook::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxListbook::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxListbook::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_HasMultiplePages() const function, expected prototype:\nbool wxListbook::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_HasMultiplePages() const");
		}
		bool lret = self->wxListbook::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_InheritAttributes() function, expected prototype:\nvoid wxListbook::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_InheritAttributes()");
		}
		self->wxListbook::InheritAttributes();

		return 0;
	}

	// void wxListbook::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_InitDialog() function, expected prototype:\nvoid wxListbook::base_InitDialog()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_InitDialog()");
		}
		self->wxListbook::InitDialog();

		return 0;
	}

	// bool wxListbook::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_IsRetained() const function, expected prototype:\nbool wxListbook::base_IsRetained() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_IsRetained() const");
		}
		bool lret = self->wxListbook::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_IsTopLevel() const function, expected prototype:\nbool wxListbook::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_IsTopLevel() const");
		}
		bool lret = self->wxListbook::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxListbook::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_MakeModal(bool)");
		}
		self->wxListbook::MakeModal(modal);

		return 0;
	}

	// void wxListbook::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_OnInternalIdle() function, expected prototype:\nvoid wxListbook::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_OnInternalIdle()");
		}
		self->wxListbook::OnInternalIdle();

		return 0;
	}

	// bool wxListbook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxListbook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxListbook::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxListbook::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxListbook::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListbook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxListbook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_UpdateWindowUI(long)");
		}
		self->wxListbook::UpdateWindowUI(flags);

		return 0;
	}

	// void wxListbook::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxListbook::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxListbook::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_Command(wxCommandEvent &)");
		}
		self->wxListbook::Command(event);

		return 0;
	}

	// wxString wxListbook::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxListbook::base_GetLabel() const function, expected prototype:\nwxString wxListbook::base_GetLabel() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxListbook::base_GetLabel() const");
		}
		wxString lret = self->wxListbook::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxListbook::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxListbook::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetLabel(const wxString &)");
		}
		self->wxListbook::SetLabel(label);

		return 0;
	}

	// void wxListbook::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxListbook::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetImageList(wxImageList *)");
		}
		self->wxListbook::SetImageList(imageList);

		return 0;
	}

	// void wxListbook::base_SetPageSize(const wxSize & size)
	static int _bind_base_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListbook::base_SetPageSize(const wxSize & size) function, expected prototype:\nvoid wxListbook::base_SetPageSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListbook::base_SetPageSize function");
		}
		const wxSize & size=*size_ptr;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListbook::base_SetPageSize(const wxSize &)");
		}
		self->wxListbook::SetPageSize(size);

		return 0;
	}

	// int wxListbook::base_HitTest(const wxPoint & pt, long * flags = NULL) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListbook::base_HitTest(const wxPoint & pt, long * flags = NULL) const function, expected prototype:\nint wxListbook::base_HitTest(const wxPoint & pt, long * flags = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxListbook::base_HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : NULL;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListbook::base_HitTest(const wxPoint &, long *) const");
		}
		int lret = self->wxListbook::HitTest(pt, &flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListbook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_base_AddPage(lua_State *L) {
		if (!_lg_typecheck_base_AddPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxListbook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : wxBookCtrlBase::NO_IMAGE;

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_AddPage(wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->wxListbook::AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_DeleteAllPages()
	static int _bind_base_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAllPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_DeleteAllPages() function, expected prototype:\nbool wxListbook::base_DeleteAllPages()\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_DeleteAllPages()");
		}
		bool lret = self->wxListbook::DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_DeletePage(size_t page)
	static int _bind_base_DeletePage(lua_State *L) {
		if (!_lg_typecheck_base_DeletePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_DeletePage(size_t page) function, expected prototype:\nbool wxListbook::base_DeletePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_DeletePage(size_t)");
		}
		bool lret = self->wxListbook::DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListbook::base_RemovePage(size_t page)
	static int _bind_base_RemovePage(lua_State *L) {
		if (!_lg_typecheck_base_RemovePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListbook::base_RemovePage(size_t page) function, expected prototype:\nbool wxListbook::base_RemovePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListbook::base_RemovePage(size_t)");
		}
		bool lret = self->wxListbook::RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxListbook::base_GetPageCount() const
	static int _bind_base_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_base_GetPageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxListbook::base_GetPageCount() const function, expected prototype:\nsize_t wxListbook::base_GetPageCount() const\nClass arguments details:\n");
		}


		wxListbook* self=Luna< wxObject >::checkSubType< wxListbook >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxListbook::base_GetPageCount() const");
		}
		size_t lret = self->wxListbook::GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxListbook* LunaTraits< wxListbook >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	// bool wxBookCtrlBase::SetPageImage(size_t page, int image)
	// wxString wxBookCtrlBase::GetPageText(size_t nPage) const
	// bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)
	// int wxBookCtrlBase::GetSelection() const
	// int wxBookCtrlBase::SetSelection(size_t page)
	// int wxBookCtrlBase::ChangeSelection(size_t page)
	// bool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
}

void LunaTraits< wxListbook >::_bind_dtor(wxListbook* obj) {
	delete obj;
}

const char LunaTraits< wxListbook >::className[] = "wxListbook";
const char LunaTraits< wxListbook >::fullName[] = "wxListbook";
const char LunaTraits< wxListbook >::moduleName[] = "wx";
const char* LunaTraits< wxListbook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxListbook >::hash = 44067923;
const int LunaTraits< wxListbook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxListbook >::methods[] = {
	{"GetListView", &luna_wrapper_wxListbook::_bind_GetListView},
	{"base_GetClassInfo", &luna_wrapper_wxListbook::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxListbook::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxListbook::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxListbook::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxListbook::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxListbook::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxListbook::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxListbook::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxListbook::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxListbook::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxListbook::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxListbook::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxListbook::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxListbook::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxListbook::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxListbook::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxListbook::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxListbook::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxListbook::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxListbook::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxListbook::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxListbook::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxListbook::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxListbook::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxListbook::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxListbook::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxListbook::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxListbook::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxListbook::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxListbook::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxListbook::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxListbook::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxListbook::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxListbook::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxListbook::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxListbook::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxListbook::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxListbook::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxListbook::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxListbook::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxListbook::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxListbook::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxListbook::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxListbook::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxListbook::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxListbook::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxListbook::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxListbook::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxListbook::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxListbook::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxListbook::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxListbook::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxListbook::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxListbook::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxListbook::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxListbook::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxListbook::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxListbook::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxListbook::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxListbook::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxListbook::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxListbook::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxListbook::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxListbook::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxListbook::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxListbook::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxListbook::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxListbook::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxListbook::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxListbook::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxListbook::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxListbook::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxListbook::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxListbook::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxListbook::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxListbook::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxListbook::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxListbook::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxListbook::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxListbook::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxListbook::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxListbook::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxListbook::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxListbook::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxListbook::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxListbook::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxListbook::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxListbook::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxListbook::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxListbook::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxListbook::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxListbook::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxListbook::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxListbook::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxListbook::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxListbook::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxListbook::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxListbook::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxListbook::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxListbook::_bind_base_SetLabel},
	{"base_SetImageList", &luna_wrapper_wxListbook::_bind_base_SetImageList},
	{"base_SetPageSize", &luna_wrapper_wxListbook::_bind_base_SetPageSize},
	{"base_HitTest", &luna_wrapper_wxListbook::_bind_base_HitTest},
	{"base_AddPage", &luna_wrapper_wxListbook::_bind_base_AddPage},
	{"base_DeleteAllPages", &luna_wrapper_wxListbook::_bind_base_DeleteAllPages},
	{"base_DeletePage", &luna_wrapper_wxListbook::_bind_base_DeletePage},
	{"base_RemovePage", &luna_wrapper_wxListbook::_bind_base_RemovePage},
	{"base_GetPageCount", &luna_wrapper_wxListbook::_bind_base_GetPageCount},
	{"__eq", &luna_wrapper_wxListbook::_bind___eq},
	{"getTable", &luna_wrapper_wxListbook::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxListbook >::converters[] = {
	{"wxObject", &luna_wrapper_wxListbook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxListbook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListbook >::enumValues[] = {
	{0,0}
};


