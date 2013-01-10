#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPreviewFrame.h>

class luna_wrapper_wxPreviewFrame {
public:
	typedef Luna< wxPreviewFrame > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//wxPreviewFrame* ptr= dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		wxPreviewFrame* ptr= luna_caster< wxObject, wxPreviewFrame >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPreviewFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateCanvas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateControlBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitializeWithModality(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCloseWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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

	inline static bool _lg_typecheck_base_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_IsIconized(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
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

	inline static bool _lg_typecheck_base_CreateStatusBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateToolBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateStatusBar(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateToolBar(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusWidths(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateCanvas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CreateControlBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitializeWithModality(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxPreviewFrame::CreateCanvas()
	static int _bind_CreateCanvas(lua_State *L) {
		if (!_lg_typecheck_CreateCanvas(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::CreateCanvas() function, expected prototype:\nvoid wxPreviewFrame::CreateCanvas()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::CreateCanvas(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->CreateCanvas();

		return 0;
	}

	// void wxPreviewFrame::CreateControlBar()
	static int _bind_CreateControlBar(lua_State *L) {
		if (!_lg_typecheck_CreateControlBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::CreateControlBar() function, expected prototype:\nvoid wxPreviewFrame::CreateControlBar()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::CreateControlBar(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->CreateControlBar();

		return 0;
	}

	// void wxPreviewFrame::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::Initialize() function, expected prototype:\nvoid wxPreviewFrame::Initialize()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::Initialize(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->Initialize();

		return 0;
	}

	// void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind)
	static int _bind_InitializeWithModality(lua_State *L) {
		if (!_lg_typecheck_InitializeWithModality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind) function, expected prototype:\nvoid wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind)\nClass arguments details:\n");
		}

		wxPreviewFrameModalityKind kind=(wxPreviewFrameModalityKind)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->InitializeWithModality(kind);

		return 0;
	}

	// void wxPreviewFrame::OnCloseWindow(wxCloseEvent & event)
	static int _bind_OnCloseWindow(lua_State *L) {
		if (!_lg_typecheck_OnCloseWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::OnCloseWindow(wxCloseEvent & event) function, expected prototype:\nvoid wxPreviewFrame::OnCloseWindow(wxCloseEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCloseEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCloseEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPreviewFrame::OnCloseWindow function");
		}
		wxCloseEvent & event=*event_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::OnCloseWindow(wxCloseEvent &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->OnCloseWindow(event);

		return 0;
	}

	// wxClassInfo * wxPreviewFrame::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPreviewFrame::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPreviewFrame::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPreviewFrame::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxPreviewFrame::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxPreviewFrame::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_AcceptsFocus() const function, expected prototype:\nbool wxPreviewFrame::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_AcceptsFocus() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxPreviewFrame::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_AcceptsFocusFromKeyboard() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxPreviewFrame::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_AcceptsFocusRecursively() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_HasFocus() const function, expected prototype:\nbool wxPreviewFrame::base_HasFocus() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_HasFocus() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxPreviewFrame::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetCanFocus(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetCanFocus(canFocus);

		return 0;
	}

	// void wxPreviewFrame::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetFocus() function, expected prototype:\nvoid wxPreviewFrame::base_SetFocus()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetFocus(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetFocus();

		return 0;
	}

	// void wxPreviewFrame::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetFocusFromKbd() function, expected prototype:\nvoid wxPreviewFrame::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetFocusFromKbd(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetFocusFromKbd();

		return 0;
	}

	// void wxPreviewFrame::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxPreviewFrame::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_AddChild(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::AddChild(child);

		return 0;
	}

	// void wxPreviewFrame::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxPreviewFrame::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_RemoveChild(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::RemoveChild(child);

		return 0;
	}

	// bool wxPreviewFrame::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxPreviewFrame::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Reparent(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxPreviewFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_AlwaysShowScrollbars(bool, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxPreviewFrame::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewFrame::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxPreviewFrame::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewFrame::base_GetScrollPos(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxPreviewFrame::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPreviewFrame::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewFrame::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxPreviewFrame::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewFrame::base_GetScrollRange(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxPreviewFrame::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPreviewFrame::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewFrame::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxPreviewFrame::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewFrame::base_GetScrollThumb(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxPreviewFrame::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPreviewFrame::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxPreviewFrame::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsScrollbarAlwaysShown(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ScrollLines(int lines) function, expected prototype:\nbool wxPreviewFrame::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ScrollLines(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ScrollPages(int pages) function, expected prototype:\nbool wxPreviewFrame::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ScrollPages(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPreviewFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_ScrollWindow(int, int, const wxRect *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxPreviewFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxPreviewFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetScrollPos(int, int, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxPreviewFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxPreviewFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetScrollbar(int, int, int, int, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxPreviewFrame::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxPreviewFrame::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_ClientToWindowSize(const wxSize &) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxPreviewFrame::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_WindowToClientSize(const wxSize &) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxPreviewFrame::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Fit() function, expected prototype:\nvoid wxPreviewFrame::base_Fit()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Fit(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Fit();

		return 0;
	}

	// void wxPreviewFrame::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_FitInside() function, expected prototype:\nvoid wxPreviewFrame::base_FitInside()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_FitInside(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::FitInside();

		return 0;
	}

	// wxSize wxPreviewFrame::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetEffectiveMinSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetMaxClientSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetMaxSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetMaxSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetMinClientSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetMinClientSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetMinSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetMinSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetBestVirtualSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPreviewFrame::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPreviewFrame::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxPreviewFrame::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPreviewFrame::base_GetWindowBorderSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxPreviewFrame::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPreviewFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxPreviewFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_InformFirstDirection(int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxPreviewFrame::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SendSizeEvent(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SendSizeEvent(flags);

		return 0;
	}

	// void wxPreviewFrame::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxPreviewFrame::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetMaxClientSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetMaxClientSize(size);

		return 0;
	}

	// void wxPreviewFrame::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxPreviewFrame::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetMinClientSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetMinClientSize(size);

		return 0;
	}

	// void wxPreviewFrame::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_ClearBackground() function, expected prototype:\nvoid wxPreviewFrame::base_ClearBackground()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_ClearBackground(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxPreviewFrame::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxPreviewFrame::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxPreviewFrame::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxPreviewFrame::base_GetBackgroundStyle() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxBackgroundStyle lret = self->wxPreviewFrame::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPreviewFrame::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewFrame::base_GetCharHeight() const function, expected prototype:\nint wxPreviewFrame::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewFrame::base_GetCharHeight() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxPreviewFrame::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPreviewFrame::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewFrame::base_GetCharWidth() const function, expected prototype:\nint wxPreviewFrame::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewFrame::base_GetCharWidth() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxPreviewFrame::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxPreviewFrame::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxPreviewFrame::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxPreviewFrame::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxPreviewFrame::base_GetDefaultAttributes() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxVisualAttributes stack_lret = self->wxPreviewFrame::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxPreviewFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPreviewFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Refresh(bool, const wxRect *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxPreviewFrame::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Update() function, expected prototype:\nvoid wxPreviewFrame::base_Update()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Update(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Update();

		return 0;
	}

	// bool wxPreviewFrame::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxPreviewFrame::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxPreviewFrame::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxPreviewFrame::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_SetFont(const wxFont &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ShouldInheritColours() const function, expected prototype:\nbool wxPreviewFrame::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ShouldInheritColours() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxPreviewFrame::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetThemeEnabled(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxPreviewFrame::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_GetThemeEnabled() const function, expected prototype:\nbool wxPreviewFrame::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_GetThemeEnabled() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPreviewFrame::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetNextHandler(wxEvtHandler *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetNextHandler(handler);

		return 0;
	}

	// void wxPreviewFrame::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPreviewFrame::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetPreviousHandler(handler);

		return 0;
	}

	// long wxPreviewFrame::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxPreviewFrame::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxPreviewFrame::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxPreviewFrame::base_GetWindowStyleFlag() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long lret = self->wxPreviewFrame::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPreviewFrame::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxPreviewFrame::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetExtraStyle(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxPreviewFrame::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxPreviewFrame::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetWindowStyleFlag(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxPreviewFrame::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Lower() function, expected prototype:\nvoid wxPreviewFrame::base_Lower()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Lower(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Lower();

		return 0;
	}

	// void wxPreviewFrame::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Raise() function, expected prototype:\nvoid wxPreviewFrame::base_Raise()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Raise(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Raise();

		return 0;
	}

	// bool wxPreviewFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPreviewFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsShown() const function, expected prototype:\nbool wxPreviewFrame::base_IsShown() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsShown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsShownOnScreen() const function, expected prototype:\nbool wxPreviewFrame::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsShownOnScreen() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Enable(bool enable = true) function, expected prototype:\nbool wxPreviewFrame::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Enable(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Show(bool show = true) function, expected prototype:\nbool wxPreviewFrame::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Show(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPreviewFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPreviewFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPreviewFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxPreviewFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxPreviewFrame::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPreviewFrame::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxPreviewFrame::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxPreviewFrame::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxPreviewFrame::base_GetValidator() function, expected prototype:\nwxValidator * wxPreviewFrame::base_GetValidator()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxPreviewFrame::base_GetValidator(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxValidator * lret = self->wxPreviewFrame::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxPreviewFrame::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxPreviewFrame::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxPreviewFrame::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetValidator(const wxValidator &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetValidator(validator);

		return 0;
	}

	// bool wxPreviewFrame::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_TransferDataFromWindow() function, expected prototype:\nbool wxPreviewFrame::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_TransferDataFromWindow(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_TransferDataToWindow() function, expected prototype:\nbool wxPreviewFrame::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_TransferDataToWindow(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Validate() function, expected prototype:\nbool wxPreviewFrame::base_Validate()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Validate(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPreviewFrame::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPreviewFrame::base_GetLabel() const function, expected prototype:\nwxString wxPreviewFrame::base_GetLabel() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPreviewFrame::base_GetLabel() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxPreviewFrame::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxPreviewFrame::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxPreviewFrame::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxPreviewFrame::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxPreviewFrame::base_GetLayoutDirection() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxLayoutDirection lret = self->wxPreviewFrame::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxPreviewFrame::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPreviewFrame::base_GetName() const function, expected prototype:\nwxString wxPreviewFrame::base_GetName() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPreviewFrame::base_GetName() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxPreviewFrame::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPreviewFrame::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxPreviewFrame::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetLabel(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetLabel(label);

		return 0;
	}

	// void wxPreviewFrame::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxPreviewFrame::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetLayoutDirection(dir);

		return 0;
	}

	// void wxPreviewFrame::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetName(const wxString & name) function, expected prototype:\nvoid wxPreviewFrame::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetName(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetName(name);

		return 0;
	}

	// void wxPreviewFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxPreviewFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxPreviewFrame::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxPreviewFrame::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Destroy() function, expected prototype:\nbool wxPreviewFrame::base_Destroy()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Destroy(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxPreviewFrame::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxPreviewFrame::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxPreviewFrame::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxPreviewFrame::base_GetDropTarget() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxDropTarget * lret = self->wxPreviewFrame::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxPreviewFrame::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxPreviewFrame::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetDropTarget(wxDropTarget *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetDropTarget(target);

		return 0;
	}

	// void wxPreviewFrame::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxPreviewFrame::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_DragAcceptFiles(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxPreviewFrame::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_HasCapture() const function, expected prototype:\nbool wxPreviewFrame::base_HasCapture() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_HasCapture() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxPreviewFrame::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxPreviewFrame::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_SetCursor(const wxCursor &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxPreviewFrame::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_WarpPointer(int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::WarpPointer(x, y);

		return 0;
	}

	// void wxPreviewFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxPreviewFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPreviewFrame::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxPreviewFrame::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_HasMultiplePages() const function, expected prototype:\nbool wxPreviewFrame::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_HasMultiplePages() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_InheritAttributes() function, expected prototype:\nvoid wxPreviewFrame::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_InheritAttributes(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::InheritAttributes();

		return 0;
	}

	// void wxPreviewFrame::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_InitDialog() function, expected prototype:\nvoid wxPreviewFrame::base_InitDialog()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_InitDialog(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::InitDialog();

		return 0;
	}

	// bool wxPreviewFrame::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsRetained() const function, expected prototype:\nbool wxPreviewFrame::base_IsRetained() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsRetained() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsTopLevel() const function, expected prototype:\nbool wxPreviewFrame::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsTopLevel() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxPreviewFrame::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_MakeModal(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::MakeModal(modal);

		return 0;
	}

	// void wxPreviewFrame::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_OnInternalIdle() function, expected prototype:\nvoid wxPreviewFrame::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_OnInternalIdle(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::OnInternalIdle();

		return 0;
	}

	// bool wxPreviewFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxPreviewFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_RegisterHotKey(int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxPreviewFrame::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_UnregisterHotKey(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxPreviewFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_UpdateWindowUI(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxPreviewFrame::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_CanSetTransparent() function, expected prototype:\nbool wxPreviewFrame::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_CanSetTransparent(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxPreviewFrame::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_EnableCloseButton(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPreviewFrame::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPreviewFrame::base_GetTitle() const function, expected prototype:\nwxString wxPreviewFrame::base_GetTitle() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPreviewFrame::base_GetTitle() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxPreviewFrame::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPreviewFrame::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxPreviewFrame::base_Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Iconize(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Iconize(iconize);

		return 0;
	}

	// bool wxPreviewFrame::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsActive() function, expected prototype:\nbool wxPreviewFrame::base_IsActive()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsActive(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxPreviewFrame::base_IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsAlwaysMaximized() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsFullScreen() const function, expected prototype:\nbool wxPreviewFrame::base_IsFullScreen() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsFullScreen() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsIconized() const function, expected prototype:\nbool wxPreviewFrame::base_IsIconized() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsIconized() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_IsMaximized() const function, expected prototype:\nbool wxPreviewFrame::base_IsMaximized() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_IsMaximized() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_Layout() function, expected prototype:\nbool wxPreviewFrame::base_Layout()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_Layout(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxPreviewFrame::base_Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Maximize(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Maximize(maximize);

		return 0;
	}

	// void wxPreviewFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxPreviewFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_RequestUserAttention(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::RequestUserAttention(flags);

		return 0;
	}

	// void wxPreviewFrame::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxPreviewFrame::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxPreviewFrame::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetIcons(const wxIconBundle &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetIcons(icons);

		return 0;
	}

	// void wxPreviewFrame::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxPreviewFrame::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetMaxSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetMaxSize(size);

		return 0;
	}

	// void wxPreviewFrame::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxPreviewFrame::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPreviewFrame::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetMinSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetMinSize(size);

		return 0;
	}

	// void wxPreviewFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxPreviewFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxPreviewFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxPreviewFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxPreviewFrame::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxPreviewFrame::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxPreviewFrame::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxPreviewFrame::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxPreviewFrame::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxPreviewFrame::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetTitle(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetTitle(title);

		return 0;
	}

	// bool wxPreviewFrame::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxPreviewFrame::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_SetTransparent(unsigned char). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxPreviewFrame::base_ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ShouldPreventAppExit() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPreviewFrame::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxPreviewFrame::base_OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_OSXSetModified(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::OSXSetModified(modified);

		return 0;
	}

	// bool wxPreviewFrame::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_OSXIsModified() const function, expected prototype:\nbool wxPreviewFrame::base_OSXIsModified() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_OSXIsModified() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPreviewFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPreviewFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxPreviewFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPreviewFrame::base_ShowFullScreen(bool, long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxPreviewFrame::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxStatusBar * wxPreviewFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	static int _bind_base_CreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPreviewFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) function, expected prototype:\nwxStatusBar * wxPreviewFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		long style=luatop>2 ? (long)lua_tointeger(L,3) : wxSTB_DEFAULT_STYLE;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPreviewFrame::base_CreateStatusBar(int, long, int, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxStatusBar * lret = self->wxPreviewFrame::CreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxPreviewFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	static int _bind_base_CreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxPreviewFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar * wxPreviewFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tointeger(L,2) : ::wxBORDER_NONE | ::wxTB_HORIZONTAL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxPreviewFrame::base_CreateToolBar(long, int, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxToolBar * lret = self->wxPreviewFrame::CreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxPreviewFrame::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxPreviewFrame::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxPreviewFrame::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxPreviewFrame::base_GetClientAreaOrigin() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxPoint stack_lret = self->wxPreviewFrame::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxMenuBar * wxPreviewFrame::base_GetMenuBar() const
	static int _bind_base_GetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxPreviewFrame::base_GetMenuBar() const function, expected prototype:\nwxMenuBar * wxPreviewFrame::base_GetMenuBar() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenuBar * wxPreviewFrame::base_GetMenuBar() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxMenuBar * lret = self->wxPreviewFrame::GetMenuBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxPreviewFrame::base_GetStatusBar() const
	static int _bind_base_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPreviewFrame::base_GetStatusBar() const function, expected prototype:\nwxStatusBar * wxPreviewFrame::base_GetStatusBar() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPreviewFrame::base_GetStatusBar() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxStatusBar * lret = self->wxPreviewFrame::GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxPreviewFrame::base_GetToolBar() const
	static int _bind_base_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxPreviewFrame::base_GetToolBar() const function, expected prototype:\nwxToolBar * wxPreviewFrame::base_GetToolBar() const\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxPreviewFrame::base_GetToolBar() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxToolBar * lret = self->wxPreviewFrame::GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxPreviewFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)
	static int _bind_base_OnCreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPreviewFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name) function, expected prototype:\nwxStatusBar * wxPreviewFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int number=(int)lua_tointeger(L,2);
		long style=(long)lua_tointeger(L,3);
		int id=(int)lua_tointeger(L,4);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPreviewFrame::base_OnCreateStatusBar(int, long, int, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxStatusBar * lret = self->wxPreviewFrame::OnCreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxPreviewFrame::base_OnCreateToolBar(long style, int id, const wxString & name)
	static int _bind_base_OnCreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxPreviewFrame::base_OnCreateToolBar(long style, int id, const wxString & name) function, expected prototype:\nwxToolBar * wxPreviewFrame::base_OnCreateToolBar(long style, int id, const wxString & name)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long style=(long)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxPreviewFrame::base_OnCreateToolBar(long, int, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxToolBar * lret = self->wxPreviewFrame::OnCreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// void wxPreviewFrame::base_SetMenuBar(wxMenuBar * menuBar)
	static int _bind_base_SetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_SetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetMenuBar(wxMenuBar * menuBar) function, expected prototype:\nvoid wxPreviewFrame::base_SetMenuBar(wxMenuBar * menuBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenuBar* menuBar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetMenuBar(wxMenuBar *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetMenuBar(menuBar);

		return 0;
	}

	// void wxPreviewFrame::base_SetStatusBar(wxStatusBar * statusBar)
	static int _bind_base_SetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetStatusBar(wxStatusBar * statusBar) function, expected prototype:\nvoid wxPreviewFrame::base_SetStatusBar(wxStatusBar * statusBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStatusBar* statusBar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetStatusBar(wxStatusBar *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetStatusBar(statusBar);

		return 0;
	}

	// void wxPreviewFrame::base_SetStatusText(const wxString & text, int number = 0)
	static int _bind_base_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxPreviewFrame::base_SetStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetStatusText(const wxString &, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetStatusText(text, number);

		return 0;
	}

	// void wxPreviewFrame::base_SetStatusWidths(int n, const int * widths_field)
	static int _bind_base_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusWidths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxPreviewFrame::base_SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int widths_field=(int)lua_tointeger(L,3);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetStatusWidths(int, const int *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetStatusWidths(n, &widths_field);

		return 0;
	}

	// void wxPreviewFrame::base_SetToolBar(wxToolBar * toolBar)
	static int _bind_base_SetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_SetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_SetToolBar(wxToolBar * toolBar) function, expected prototype:\nvoid wxPreviewFrame::base_SetToolBar(wxToolBar * toolBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_SetToolBar(wxToolBar *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::SetToolBar(toolBar);

		return 0;
	}

	// void wxPreviewFrame::base_CreateCanvas()
	static int _bind_base_CreateCanvas(lua_State *L) {
		if (!_lg_typecheck_base_CreateCanvas(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_CreateCanvas() function, expected prototype:\nvoid wxPreviewFrame::base_CreateCanvas()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_CreateCanvas(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::CreateCanvas();

		return 0;
	}

	// void wxPreviewFrame::base_CreateControlBar()
	static int _bind_base_CreateControlBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateControlBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_CreateControlBar() function, expected prototype:\nvoid wxPreviewFrame::base_CreateControlBar()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_CreateControlBar(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::CreateControlBar();

		return 0;
	}

	// void wxPreviewFrame::base_Initialize()
	static int _bind_base_Initialize(lua_State *L) {
		if (!_lg_typecheck_base_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_Initialize() function, expected prototype:\nvoid wxPreviewFrame::base_Initialize()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_Initialize(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::Initialize();

		return 0;
	}

	// void wxPreviewFrame::base_InitializeWithModality(wxPreviewFrameModalityKind kind)
	static int _bind_base_InitializeWithModality(lua_State *L) {
		if (!_lg_typecheck_base_InitializeWithModality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::base_InitializeWithModality(wxPreviewFrameModalityKind kind) function, expected prototype:\nvoid wxPreviewFrame::base_InitializeWithModality(wxPreviewFrameModalityKind kind)\nClass arguments details:\n");
		}

		wxPreviewFrameModalityKind kind=(wxPreviewFrameModalityKind)lua_tointeger(L,2);

		wxPreviewFrame* self=Luna< wxObject >::checkSubType< wxPreviewFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::base_InitializeWithModality(wxPreviewFrameModalityKind). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxPreviewFrame::InitializeWithModality(kind);

		return 0;
	}


	// Operator binds:

};

wxPreviewFrame* LunaTraits< wxPreviewFrame >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxPreviewFrame >::_bind_dtor(wxPreviewFrame* obj) {
	delete obj;
}

const char LunaTraits< wxPreviewFrame >::className[] = "wxPreviewFrame";
const char LunaTraits< wxPreviewFrame >::fullName[] = "wxPreviewFrame";
const char LunaTraits< wxPreviewFrame >::moduleName[] = "wx";
const char* LunaTraits< wxPreviewFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxPreviewFrame >::hash = 98029135;
const int LunaTraits< wxPreviewFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPreviewFrame >::methods[] = {
	{"CreateCanvas", &luna_wrapper_wxPreviewFrame::_bind_CreateCanvas},
	{"CreateControlBar", &luna_wrapper_wxPreviewFrame::_bind_CreateControlBar},
	{"Initialize", &luna_wrapper_wxPreviewFrame::_bind_Initialize},
	{"InitializeWithModality", &luna_wrapper_wxPreviewFrame::_bind_InitializeWithModality},
	{"OnCloseWindow", &luna_wrapper_wxPreviewFrame::_bind_OnCloseWindow},
	{"base_GetClassInfo", &luna_wrapper_wxPreviewFrame::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxPreviewFrame::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxPreviewFrame::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxPreviewFrame::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxPreviewFrame::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxPreviewFrame::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxPreviewFrame::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxPreviewFrame::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxPreviewFrame::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxPreviewFrame::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxPreviewFrame::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxPreviewFrame::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxPreviewFrame::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxPreviewFrame::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxPreviewFrame::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxPreviewFrame::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxPreviewFrame::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxPreviewFrame::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxPreviewFrame::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxPreviewFrame::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxPreviewFrame::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxPreviewFrame::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxPreviewFrame::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxPreviewFrame::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxPreviewFrame::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxPreviewFrame::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxPreviewFrame::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxPreviewFrame::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxPreviewFrame::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxPreviewFrame::_bind_base_SetMinClientSize},
	{"base_ClearBackground", &luna_wrapper_wxPreviewFrame::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxPreviewFrame::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxPreviewFrame::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxPreviewFrame::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxPreviewFrame::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxPreviewFrame::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxPreviewFrame::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxPreviewFrame::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxPreviewFrame::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxPreviewFrame::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxPreviewFrame::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxPreviewFrame::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxPreviewFrame::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxPreviewFrame::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxPreviewFrame::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxPreviewFrame::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxPreviewFrame::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxPreviewFrame::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxPreviewFrame::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxPreviewFrame::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxPreviewFrame::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxPreviewFrame::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxPreviewFrame::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxPreviewFrame::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxPreviewFrame::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxPreviewFrame::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxPreviewFrame::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxPreviewFrame::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxPreviewFrame::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxPreviewFrame::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxPreviewFrame::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxPreviewFrame::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxPreviewFrame::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxPreviewFrame::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxPreviewFrame::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxPreviewFrame::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxPreviewFrame::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxPreviewFrame::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxPreviewFrame::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxPreviewFrame::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxPreviewFrame::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxPreviewFrame::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxPreviewFrame::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxPreviewFrame::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxPreviewFrame::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxPreviewFrame::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxPreviewFrame::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxPreviewFrame::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxPreviewFrame::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxPreviewFrame::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxPreviewFrame::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxPreviewFrame::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxPreviewFrame::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxPreviewFrame::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxPreviewFrame::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxPreviewFrame::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxPreviewFrame::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxPreviewFrame::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxPreviewFrame::_bind_base_GetTitle},
	{"base_Iconize", &luna_wrapper_wxPreviewFrame::_bind_base_Iconize},
	{"base_IsActive", &luna_wrapper_wxPreviewFrame::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxPreviewFrame::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxPreviewFrame::_bind_base_IsFullScreen},
	{"base_IsIconized", &luna_wrapper_wxPreviewFrame::_bind_base_IsIconized},
	{"base_IsMaximized", &luna_wrapper_wxPreviewFrame::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxPreviewFrame::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxPreviewFrame::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxPreviewFrame::_bind_base_RequestUserAttention},
	{"base_SetIcons", &luna_wrapper_wxPreviewFrame::_bind_base_SetIcons},
	{"base_SetMaxSize", &luna_wrapper_wxPreviewFrame::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxPreviewFrame::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxPreviewFrame::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxPreviewFrame::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxPreviewFrame::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxPreviewFrame::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxPreviewFrame::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxPreviewFrame::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxPreviewFrame::_bind_base_ShowFullScreen},
	{"base_CreateStatusBar", &luna_wrapper_wxPreviewFrame::_bind_base_CreateStatusBar},
	{"base_CreateToolBar", &luna_wrapper_wxPreviewFrame::_bind_base_CreateToolBar},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxPreviewFrame::_bind_base_GetClientAreaOrigin},
	{"base_GetMenuBar", &luna_wrapper_wxPreviewFrame::_bind_base_GetMenuBar},
	{"base_GetStatusBar", &luna_wrapper_wxPreviewFrame::_bind_base_GetStatusBar},
	{"base_GetToolBar", &luna_wrapper_wxPreviewFrame::_bind_base_GetToolBar},
	{"base_OnCreateStatusBar", &luna_wrapper_wxPreviewFrame::_bind_base_OnCreateStatusBar},
	{"base_OnCreateToolBar", &luna_wrapper_wxPreviewFrame::_bind_base_OnCreateToolBar},
	{"base_SetMenuBar", &luna_wrapper_wxPreviewFrame::_bind_base_SetMenuBar},
	{"base_SetStatusBar", &luna_wrapper_wxPreviewFrame::_bind_base_SetStatusBar},
	{"base_SetStatusText", &luna_wrapper_wxPreviewFrame::_bind_base_SetStatusText},
	{"base_SetStatusWidths", &luna_wrapper_wxPreviewFrame::_bind_base_SetStatusWidths},
	{"base_SetToolBar", &luna_wrapper_wxPreviewFrame::_bind_base_SetToolBar},
	{"base_CreateCanvas", &luna_wrapper_wxPreviewFrame::_bind_base_CreateCanvas},
	{"base_CreateControlBar", &luna_wrapper_wxPreviewFrame::_bind_base_CreateControlBar},
	{"base_Initialize", &luna_wrapper_wxPreviewFrame::_bind_base_Initialize},
	{"base_InitializeWithModality", &luna_wrapper_wxPreviewFrame::_bind_base_InitializeWithModality},
	{"__eq", &luna_wrapper_wxPreviewFrame::_bind___eq},
	{"getTable", &luna_wrapper_wxPreviewFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPreviewFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxPreviewFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPreviewFrame >::enumValues[] = {
	{0,0}
};


