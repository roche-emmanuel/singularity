#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSingleChoiceDialog.h>

class luna_wrapper_wxSingleChoiceDialog {
public:
	typedef Luna< wxSingleChoiceDialog > luna_t;

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
		//wxSingleChoiceDialog* ptr= dynamic_cast< wxSingleChoiceDialog* >(Luna< wxObject >::check(L,1));
		wxSingleChoiceDialog* ptr= luna_caster< wxObject, wxSingleChoiceDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSingleChoiceDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EnableCloseButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsAlwaysMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsFullScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Maximize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RequestUserAttention(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
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
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldPreventAppExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OSXSetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OSXIsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ShowFullScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EndModal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetContentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxSingleChoiceDialog::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::GetSelection() const function, expected prototype:\nint wxSingleChoiceDialog::GetSelection() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char * wxSingleChoiceDialog::GetSelectionClientData() const
	static int _bind_GetSelectionClientData(lua_State *L) {
		if (!_lg_typecheck_GetSelectionClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * wxSingleChoiceDialog::GetSelectionClientData() const function, expected prototype:\nchar * wxSingleChoiceDialog::GetSelectionClientData() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * wxSingleChoiceDialog::GetSelectionClientData() const");
		}
		char * lret = self->GetSelectionClientData();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// wxString wxSingleChoiceDialog::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::GetStringSelection() const function, expected prototype:\nwxString wxSingleChoiceDialog::GetStringSelection() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::GetStringSelection() const");
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSingleChoiceDialog::SetSelection(int selection)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::SetSelection(int selection) function, expected prototype:\nvoid wxSingleChoiceDialog::SetSelection(int selection)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::SetSelection(int)");
		}
		self->SetSelection(selection);

		return 0;
	}

	// int wxSingleChoiceDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::ShowModal() function, expected prototype:\nint wxSingleChoiceDialog::ShowModal()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxSingleChoiceDialog::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSingleChoiceDialog::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSingleChoiceDialog::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSingleChoiceDialog::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxSingleChoiceDialog::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_AcceptsFocus() const function, expected prototype:\nbool wxSingleChoiceDialog::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_AcceptsFocus() const");
		}
		bool lret = self->wxSingleChoiceDialog::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxSingleChoiceDialog::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxSingleChoiceDialog::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxSingleChoiceDialog::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxSingleChoiceDialog::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_HasFocus() const function, expected prototype:\nbool wxSingleChoiceDialog::base_HasFocus() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_HasFocus() const");
		}
		bool lret = self->wxSingleChoiceDialog::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetCanFocus(bool)");
		}
		self->wxSingleChoiceDialog::SetCanFocus(canFocus);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetFocus() function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetFocus()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetFocus()");
		}
		self->wxSingleChoiceDialog::SetFocus();

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetFocusFromKbd() function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetFocusFromKbd()");
		}
		self->wxSingleChoiceDialog::SetFocusFromKbd();

		return 0;
	}

	// void wxSingleChoiceDialog::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxSingleChoiceDialog::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_AddChild(wxWindow *)");
		}
		self->wxSingleChoiceDialog::AddChild(child);

		return 0;
	}

	// void wxSingleChoiceDialog::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxSingleChoiceDialog::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_RemoveChild(wxWindow *)");
		}
		self->wxSingleChoiceDialog::RemoveChild(child);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxSingleChoiceDialog::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxSingleChoiceDialog::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxSingleChoiceDialog::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxSingleChoiceDialog::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxSingleChoiceDialog::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_GetScrollPos(int) const");
		}
		int lret = self->wxSingleChoiceDialog::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSingleChoiceDialog::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxSingleChoiceDialog::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_GetScrollRange(int) const");
		}
		int lret = self->wxSingleChoiceDialog::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSingleChoiceDialog::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxSingleChoiceDialog::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_GetScrollThumb(int) const");
		}
		int lret = self->wxSingleChoiceDialog::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxSingleChoiceDialog::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ScrollLines(int lines) function, expected prototype:\nbool wxSingleChoiceDialog::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ScrollLines(int)");
		}
		bool lret = self->wxSingleChoiceDialog::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ScrollPages(int pages) function, expected prototype:\nbool wxSingleChoiceDialog::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ScrollPages(int)");
		}
		bool lret = self->wxSingleChoiceDialog::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSingleChoiceDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxSingleChoiceDialog::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetScrollPos(int, int, bool)");
		}
		self->wxSingleChoiceDialog::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxSingleChoiceDialog::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxSingleChoiceDialog::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSingleChoiceDialog::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Fit() function, expected prototype:\nvoid wxSingleChoiceDialog::base_Fit()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Fit()");
		}
		self->wxSingleChoiceDialog::Fit();

		return 0;
	}

	// void wxSingleChoiceDialog::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_FitInside() function, expected prototype:\nvoid wxSingleChoiceDialog::base_FitInside()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_FitInside()");
		}
		self->wxSingleChoiceDialog::FitInside();

		return 0;
	}

	// wxSize wxSingleChoiceDialog::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetMaxSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetMinClientSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetMinSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSingleChoiceDialog::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSingleChoiceDialog::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxSingleChoiceDialog::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSingleChoiceDialog::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxSingleChoiceDialog::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSingleChoiceDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxSingleChoiceDialog::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SendSizeEvent(int)");
		}
		self->wxSingleChoiceDialog::SendSizeEvent(flags);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxSingleChoiceDialog::SetMaxClientSize(size);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetMinClientSize(const wxSize &)");
		}
		self->wxSingleChoiceDialog::SetMinClientSize(size);

		return 0;
	}

	// wxPoint wxSingleChoiceDialog::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxSingleChoiceDialog::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxSingleChoiceDialog::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxSingleChoiceDialog::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxSingleChoiceDialog::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxSingleChoiceDialog::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_ClearBackground() function, expected prototype:\nvoid wxSingleChoiceDialog::base_ClearBackground()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_ClearBackground()");
		}
		self->wxSingleChoiceDialog::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxSingleChoiceDialog::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxSingleChoiceDialog::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxSingleChoiceDialog::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxSingleChoiceDialog::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxSingleChoiceDialog::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSingleChoiceDialog::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_GetCharHeight() const function, expected prototype:\nint wxSingleChoiceDialog::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_GetCharHeight() const");
		}
		int lret = self->wxSingleChoiceDialog::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSingleChoiceDialog::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_GetCharWidth() const function, expected prototype:\nint wxSingleChoiceDialog::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_GetCharWidth() const");
		}
		int lret = self->wxSingleChoiceDialog::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxSingleChoiceDialog::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxSingleChoiceDialog::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxSingleChoiceDialog::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxSingleChoiceDialog::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxSingleChoiceDialog::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxSingleChoiceDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSingleChoiceDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Refresh(bool, const wxRect *)");
		}
		self->wxSingleChoiceDialog::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxSingleChoiceDialog::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Update() function, expected prototype:\nvoid wxSingleChoiceDialog::base_Update()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Update()");
		}
		self->wxSingleChoiceDialog::Update();

		return 0;
	}

	// bool wxSingleChoiceDialog::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxSingleChoiceDialog::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxSingleChoiceDialog::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxSingleChoiceDialog::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxSingleChoiceDialog::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxSingleChoiceDialog::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ShouldInheritColours() const function, expected prototype:\nbool wxSingleChoiceDialog::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ShouldInheritColours() const");
		}
		bool lret = self->wxSingleChoiceDialog::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetThemeEnabled(bool)");
		}
		self->wxSingleChoiceDialog::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_GetThemeEnabled() const function, expected prototype:\nbool wxSingleChoiceDialog::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_GetThemeEnabled() const");
		}
		bool lret = self->wxSingleChoiceDialog::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxSingleChoiceDialog::SetNextHandler(handler);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxSingleChoiceDialog::SetPreviousHandler(handler);

		return 0;
	}

	// long wxSingleChoiceDialog::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxSingleChoiceDialog::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxSingleChoiceDialog::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxSingleChoiceDialog::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxSingleChoiceDialog::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetExtraStyle(long)");
		}
		self->wxSingleChoiceDialog::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetWindowStyleFlag(long)");
		}
		self->wxSingleChoiceDialog::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxSingleChoiceDialog::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Lower() function, expected prototype:\nvoid wxSingleChoiceDialog::base_Lower()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Lower()");
		}
		self->wxSingleChoiceDialog::Lower();

		return 0;
	}

	// void wxSingleChoiceDialog::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Raise() function, expected prototype:\nvoid wxSingleChoiceDialog::base_Raise()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Raise()");
		}
		self->wxSingleChoiceDialog::Raise();

		return 0;
	}

	// bool wxSingleChoiceDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSingleChoiceDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxSingleChoiceDialog::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsShown() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsShown() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsShown() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsShownOnScreen() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsShownOnScreen() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Enable(bool enable = true) function, expected prototype:\nbool wxSingleChoiceDialog::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Enable(bool)");
		}
		bool lret = self->wxSingleChoiceDialog::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSingleChoiceDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxSingleChoiceDialog::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSingleChoiceDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxSingleChoiceDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSingleChoiceDialog::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxSingleChoiceDialog::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxSingleChoiceDialog::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxSingleChoiceDialog::base_GetValidator() function, expected prototype:\nwxValidator * wxSingleChoiceDialog::base_GetValidator()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxSingleChoiceDialog::base_GetValidator()");
		}
		wxValidator * lret = self->wxSingleChoiceDialog::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSingleChoiceDialog::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetValidator(const wxValidator &)");
		}
		self->wxSingleChoiceDialog::SetValidator(validator);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_TransferDataFromWindow() function, expected prototype:\nbool wxSingleChoiceDialog::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_TransferDataFromWindow()");
		}
		bool lret = self->wxSingleChoiceDialog::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_TransferDataToWindow() function, expected prototype:\nbool wxSingleChoiceDialog::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_TransferDataToWindow()");
		}
		bool lret = self->wxSingleChoiceDialog::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Validate() function, expected prototype:\nbool wxSingleChoiceDialog::base_Validate()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Validate()");
		}
		bool lret = self->wxSingleChoiceDialog::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSingleChoiceDialog::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::base_GetLabel() const function, expected prototype:\nwxString wxSingleChoiceDialog::base_GetLabel() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::base_GetLabel() const");
		}
		wxString lret = self->wxSingleChoiceDialog::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxSingleChoiceDialog::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxSingleChoiceDialog::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxSingleChoiceDialog::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxSingleChoiceDialog::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxSingleChoiceDialog::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxSingleChoiceDialog::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::base_GetName() const function, expected prototype:\nwxString wxSingleChoiceDialog::base_GetName() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::base_GetName() const");
		}
		wxString lret = self->wxSingleChoiceDialog::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetLabel(const wxString &)");
		}
		self->wxSingleChoiceDialog::SetLabel(label);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxSingleChoiceDialog::SetLayoutDirection(dir);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetName(const wxString & name) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetName(const wxString &)");
		}
		self->wxSingleChoiceDialog::SetName(name);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxSingleChoiceDialog::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxSingleChoiceDialog::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Destroy() function, expected prototype:\nbool wxSingleChoiceDialog::base_Destroy()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Destroy()");
		}
		bool lret = self->wxSingleChoiceDialog::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxSingleChoiceDialog::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxSingleChoiceDialog::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxSingleChoiceDialog::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxSingleChoiceDialog::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxSingleChoiceDialog::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxSingleChoiceDialog::SetDropTarget(target);

		return 0;
	}

	// void wxSingleChoiceDialog::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxSingleChoiceDialog::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_DragAcceptFiles(bool)");
		}
		self->wxSingleChoiceDialog::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_HasCapture() const function, expected prototype:\nbool wxSingleChoiceDialog::base_HasCapture() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_HasCapture() const");
		}
		bool lret = self->wxSingleChoiceDialog::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxSingleChoiceDialog::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSingleChoiceDialog::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxSingleChoiceDialog::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxSingleChoiceDialog::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_WarpPointer(int, int)");
		}
		self->wxSingleChoiceDialog::WarpPointer(x, y);

		return 0;
	}

	// void wxSingleChoiceDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxSingleChoiceDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSingleChoiceDialog::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxSingleChoiceDialog::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_HasMultiplePages() const function, expected prototype:\nbool wxSingleChoiceDialog::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_HasMultiplePages() const");
		}
		bool lret = self->wxSingleChoiceDialog::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_InheritAttributes() function, expected prototype:\nvoid wxSingleChoiceDialog::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_InheritAttributes()");
		}
		self->wxSingleChoiceDialog::InheritAttributes();

		return 0;
	}

	// void wxSingleChoiceDialog::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_InitDialog() function, expected prototype:\nvoid wxSingleChoiceDialog::base_InitDialog()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_InitDialog()");
		}
		self->wxSingleChoiceDialog::InitDialog();

		return 0;
	}

	// bool wxSingleChoiceDialog::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsRetained() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsRetained() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsRetained() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsTopLevel() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsTopLevel() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_MakeModal(bool)");
		}
		self->wxSingleChoiceDialog::MakeModal(modal);

		return 0;
	}

	// void wxSingleChoiceDialog::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_OnInternalIdle() function, expected prototype:\nvoid wxSingleChoiceDialog::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_OnInternalIdle()");
		}
		self->wxSingleChoiceDialog::OnInternalIdle();

		return 0;
	}

	// bool wxSingleChoiceDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxSingleChoiceDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxSingleChoiceDialog::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxSingleChoiceDialog::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxSingleChoiceDialog::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxSingleChoiceDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_UpdateWindowUI(long)");
		}
		self->wxSingleChoiceDialog::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_CanSetTransparent() function, expected prototype:\nbool wxSingleChoiceDialog::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_CanSetTransparent()");
		}
		bool lret = self->wxSingleChoiceDialog::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxSingleChoiceDialog::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_EnableCloseButton(bool)");
		}
		bool lret = self->wxSingleChoiceDialog::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSingleChoiceDialog::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSingleChoiceDialog::base_GetTitle() const function, expected prototype:\nwxString wxSingleChoiceDialog::base_GetTitle() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSingleChoiceDialog::base_GetTitle() const");
		}
		wxString lret = self->wxSingleChoiceDialog::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsActive() function, expected prototype:\nbool wxSingleChoiceDialog::base_IsActive()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsActive()");
		}
		bool lret = self->wxSingleChoiceDialog::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsAlwaysMaximized() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsFullScreen() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsFullScreen() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsFullScreen() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsMaximized() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsMaximized() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsMaximized() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Layout() function, expected prototype:\nbool wxSingleChoiceDialog::base_Layout()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Layout()");
		}
		bool lret = self->wxSingleChoiceDialog::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Maximize(bool)");
		}
		self->wxSingleChoiceDialog::Maximize(maximize);

		return 0;
	}

	// void wxSingleChoiceDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxSingleChoiceDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_RequestUserAttention(int)");
		}
		self->wxSingleChoiceDialog::RequestUserAttention(flags);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetMaxSize(const wxSize &)");
		}
		self->wxSingleChoiceDialog::SetMaxSize(size);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSingleChoiceDialog::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetMinSize(const wxSize &)");
		}
		self->wxSingleChoiceDialog::SetMinSize(size);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxSingleChoiceDialog::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxSingleChoiceDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxSingleChoiceDialog::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxSingleChoiceDialog::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxSingleChoiceDialog::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxSingleChoiceDialog::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxSingleChoiceDialog::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxSingleChoiceDialog::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetTitle(const wxString &)");
		}
		self->wxSingleChoiceDialog::SetTitle(title);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxSingleChoiceDialog::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxSingleChoiceDialog::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxSingleChoiceDialog::base_ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ShouldPreventAppExit() const");
		}
		bool lret = self->wxSingleChoiceDialog::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxSingleChoiceDialog::base_OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_OSXSetModified(bool)");
		}
		self->wxSingleChoiceDialog::OSXSetModified(modified);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_OSXIsModified() const function, expected prototype:\nbool wxSingleChoiceDialog::base_OSXIsModified() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_OSXIsModified() const");
		}
		bool lret = self->wxSingleChoiceDialog::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxSingleChoiceDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_ShowFullScreen(bool, long)");
		}
		bool lret = self->wxSingleChoiceDialog::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_CanDoLayoutAdaptation()
	static int _bind_base_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_CanDoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_CanDoLayoutAdaptation() function, expected prototype:\nbool wxSingleChoiceDialog::base_CanDoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_CanDoLayoutAdaptation()");
		}
		bool lret = self->wxSingleChoiceDialog::CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_DoLayoutAdaptation()
	static int _bind_base_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_DoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_DoLayoutAdaptation() function, expected prototype:\nbool wxSingleChoiceDialog::base_DoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_DoLayoutAdaptation()");
		}
		bool lret = self->wxSingleChoiceDialog::DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_EndModal(int retCode)
	static int _bind_base_EndModal(lua_State *L) {
		if (!_lg_typecheck_base_EndModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_EndModal(int retCode) function, expected prototype:\nvoid wxSingleChoiceDialog::base_EndModal(int retCode)\nClass arguments details:\n");
		}

		int retCode=(int)lua_tointeger(L,2);

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_EndModal(int)");
		}
		self->wxSingleChoiceDialog::EndModal(retCode);

		return 0;
	}

	// wxWindow * wxSingleChoiceDialog::base_GetContentWindow() const
	static int _bind_base_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetContentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxSingleChoiceDialog::base_GetContentWindow() const function, expected prototype:\nwxWindow * wxSingleChoiceDialog::base_GetContentWindow() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxSingleChoiceDialog::base_GetContentWindow() const");
		}
		wxWindow * lret = self->wxSingleChoiceDialog::GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxSingleChoiceDialog::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxSingleChoiceDialog::base_Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_Iconize(bool)");
		}
		self->wxSingleChoiceDialog::Iconize(iconize);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsIconized() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsIconized() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsIconized() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleChoiceDialog::base_IsModal() const
	static int _bind_base_IsModal(lua_State *L) {
		if (!_lg_typecheck_base_IsModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_IsModal() const function, expected prototype:\nbool wxSingleChoiceDialog::base_IsModal() const\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_IsModal() const");
		}
		bool lret = self->wxSingleChoiceDialog::IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSingleChoiceDialog::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSingleChoiceDialog::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxSingleChoiceDialog::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxSingleChoiceDialog::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSingleChoiceDialog::base_SetIcons(const wxIconBundle &)");
		}
		self->wxSingleChoiceDialog::SetIcons(icons);

		return 0;
	}

	// bool wxSingleChoiceDialog::base_Show(bool show = 1)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleChoiceDialog::base_Show(bool show = 1) function, expected prototype:\nbool wxSingleChoiceDialog::base_Show(bool show = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : 1;

		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleChoiceDialog::base_Show(bool)");
		}
		bool lret = self->wxSingleChoiceDialog::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxSingleChoiceDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSingleChoiceDialog::base_ShowModal() function, expected prototype:\nint wxSingleChoiceDialog::base_ShowModal()\nClass arguments details:\n");
		}


		wxSingleChoiceDialog* self=Luna< wxObject >::checkSubType< wxSingleChoiceDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSingleChoiceDialog::base_ShowModal()");
		}
		int lret = self->wxSingleChoiceDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSingleChoiceDialog* LunaTraits< wxSingleChoiceDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxSingleChoiceDialog >::_bind_dtor(wxSingleChoiceDialog* obj) {
	delete obj;
}

const char LunaTraits< wxSingleChoiceDialog >::className[] = "wxSingleChoiceDialog";
const char LunaTraits< wxSingleChoiceDialog >::fullName[] = "wxSingleChoiceDialog";
const char LunaTraits< wxSingleChoiceDialog >::moduleName[] = "wx";
const char* LunaTraits< wxSingleChoiceDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxSingleChoiceDialog >::hash = 80919152;
const int LunaTraits< wxSingleChoiceDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSingleChoiceDialog >::methods[] = {
	{"GetSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_GetSelection},
	{"GetSelectionClientData", &luna_wrapper_wxSingleChoiceDialog::_bind_GetSelectionClientData},
	{"GetStringSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_GetStringSelection},
	{"SetSelection", &luna_wrapper_wxSingleChoiceDialog::_bind_SetSelection},
	{"ShowModal", &luna_wrapper_wxSingleChoiceDialog::_bind_ShowModal},
	{"base_GetClassInfo", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxSingleChoiceDialog::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxSingleChoiceDialog::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxSingleChoiceDialog::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxSingleChoiceDialog::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxSingleChoiceDialog::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxSingleChoiceDialog::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxSingleChoiceDialog::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxSingleChoiceDialog::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxSingleChoiceDialog::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetMinClientSize},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxSingleChoiceDialog::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Enable},
	{"base_ShowWithEffect", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxSingleChoiceDialog::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxSingleChoiceDialog::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxSingleChoiceDialog::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxSingleChoiceDialog::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxSingleChoiceDialog::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxSingleChoiceDialog::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxSingleChoiceDialog::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxSingleChoiceDialog::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxSingleChoiceDialog::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxSingleChoiceDialog::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxSingleChoiceDialog::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxSingleChoiceDialog::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxSingleChoiceDialog::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxSingleChoiceDialog::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxSingleChoiceDialog::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetTitle},
	{"base_IsActive", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsFullScreen},
	{"base_IsMaximized", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxSingleChoiceDialog::_bind_base_RequestUserAttention},
	{"base_SetMaxSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxSingleChoiceDialog::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxSingleChoiceDialog::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ShowFullScreen},
	{"base_CanDoLayoutAdaptation", &luna_wrapper_wxSingleChoiceDialog::_bind_base_CanDoLayoutAdaptation},
	{"base_DoLayoutAdaptation", &luna_wrapper_wxSingleChoiceDialog::_bind_base_DoLayoutAdaptation},
	{"base_EndModal", &luna_wrapper_wxSingleChoiceDialog::_bind_base_EndModal},
	{"base_GetContentWindow", &luna_wrapper_wxSingleChoiceDialog::_bind_base_GetContentWindow},
	{"base_Iconize", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Iconize},
	{"base_IsIconized", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsIconized},
	{"base_IsModal", &luna_wrapper_wxSingleChoiceDialog::_bind_base_IsModal},
	{"base_SetIcons", &luna_wrapper_wxSingleChoiceDialog::_bind_base_SetIcons},
	{"base_Show", &luna_wrapper_wxSingleChoiceDialog::_bind_base_Show},
	{"base_ShowModal", &luna_wrapper_wxSingleChoiceDialog::_bind_base_ShowModal},
	{"__eq", &luna_wrapper_wxSingleChoiceDialog::_bind___eq},
	{"getTable", &luna_wrapper_wxSingleChoiceDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSingleChoiceDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxSingleChoiceDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSingleChoiceDialog >::enumValues[] = {
	{0,0}
};


