#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFontDialog.h>

class luna_wrapper_wxFontDialog {
public:
	typedef Luna< wxFontDialog > luna_t;

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
		//wxFontDialog* ptr= dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		wxFontDialog* ptr= luna_caster< wxObject, wxFontDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// wxFontDialog::wxFontDialog()
	static wxFontDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog() function, expected prototype:\nwxFontDialog::wxFontDialog()\nClass arguments details:\n");
		}


		return new wxFontDialog();
	}

	// wxFontDialog::wxFontDialog(wxWindow * parent)
	static wxFontDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(wxWindow * parent) function, expected prototype:\nwxFontDialog::wxFontDialog(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		return new wxFontDialog(parent);
	}

	// wxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data)
	static wxFontDialog* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data) function, expected prototype:\nwxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		const wxFontData* data_ptr=(Luna< wxObject >::checkSubType< wxFontData >(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontDialog::wxFontDialog function");
		}
		const wxFontData & data=*data_ptr;

		return new wxFontDialog(parent, data);
	}

	// wxFontDialog::wxFontDialog(lua_Table * data)
	static wxFontDialog* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(lua_Table * data) function, expected prototype:\nwxFontDialog::wxFontDialog(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxFontDialog(L,NULL);
	}

	// wxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent)
	static wxFontDialog* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent) function, expected prototype:\nwxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxFontDialog(L,NULL, parent);
	}

	// wxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent, const wxFontData & data)
	static wxFontDialog* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent, const wxFontData & data) function, expected prototype:\nwxFontDialog::wxFontDialog(lua_Table * data, wxWindow * parent, const wxFontData & data)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxFontData* data_ptr=(Luna< wxObject >::checkSubType< wxFontData >(L,3));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontDialog::wxFontDialog function");
		}
		const wxFontData & data=*data_ptr;

		return new wrapper_wxFontDialog(L,NULL, parent, data);
	}

	// Overload binder for wxFontDialog::wxFontDialog
	static wxFontDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxFontDialog, cannot match any of the overloads for function wxFontDialog:\n  wxFontDialog()\n  wxFontDialog(wxWindow *)\n  wxFontDialog(wxWindow *, const wxFontData &)\n  wxFontDialog(lua_Table *)\n  wxFontDialog(lua_Table *, wxWindow *)\n  wxFontDialog(lua_Table *, wxWindow *, const wxFontData &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFontDialog::Create(wxWindow * parent)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::Create(wxWindow * parent) function, expected prototype:\nbool wxFontDialog::Create(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::Create(wxWindow *)");
		}
		bool lret = self->Create(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::Create(wxWindow * parent, const wxFontData & data)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::Create(wxWindow * parent, const wxFontData & data) function, expected prototype:\nbool wxFontDialog::Create(wxWindow * parent, const wxFontData & data)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxFontData* data_ptr=(Luna< wxObject >::checkSubType< wxFontData >(L,3));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontDialog::Create function");
		}
		const wxFontData & data=*data_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::Create(wxWindow *, const wxFontData &)");
		}
		bool lret = self->Create(parent, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFontDialog::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(wxWindow *)\n  Create(wxWindow *, const wxFontData &)\n");
		return 0;
	}

	// const wxFontData & wxFontDialog::GetFontData() const
	static int _bind_GetFontData_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFontData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFontData & wxFontDialog::GetFontData() const function, expected prototype:\nconst wxFontData & wxFontDialog::GetFontData() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFontData & wxFontDialog::GetFontData() const");
		}
		const wxFontData* lret = &self->GetFontData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontData >::push(L,lret,false);

		return 1;
	}

	// wxFontData & wxFontDialog::GetFontData()
	static int _bind_GetFontData_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFontData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontData & wxFontDialog::GetFontData() function, expected prototype:\nwxFontData & wxFontDialog::GetFontData()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontData & wxFontDialog::GetFontData()");
		}
		const wxFontData* lret = &self->GetFontData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxFontDialog::GetFontData
	static int _bind_GetFontData(lua_State *L) {
		if (_lg_typecheck_GetFontData_overload_1(L)) return _bind_GetFontData_overload_1(L);
		if (_lg_typecheck_GetFontData_overload_2(L)) return _bind_GetFontData_overload_2(L);

		luaL_error(L, "error in function GetFontData, cannot match any of the overloads for function GetFontData:\n  GetFontData()\n  GetFontData()\n");
		return 0;
	}

	// int wxFontDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::ShowModal() function, expected prototype:\nint wxFontDialog::ShowModal()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxFontDialog::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFontDialog::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFontDialog::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFontDialog::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxFontDialog::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxFontDialog::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_AcceptsFocus() const function, expected prototype:\nbool wxFontDialog::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_AcceptsFocus() const");
		}
		bool lret = self->wxFontDialog::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxFontDialog::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxFontDialog::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxFontDialog::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxFontDialog::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_HasFocus() const function, expected prototype:\nbool wxFontDialog::base_HasFocus() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_HasFocus() const");
		}
		bool lret = self->wxFontDialog::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxFontDialog::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetCanFocus(bool)");
		}
		self->wxFontDialog::SetCanFocus(canFocus);

		return 0;
	}

	// void wxFontDialog::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetFocus() function, expected prototype:\nvoid wxFontDialog::base_SetFocus()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetFocus()");
		}
		self->wxFontDialog::SetFocus();

		return 0;
	}

	// void wxFontDialog::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetFocusFromKbd() function, expected prototype:\nvoid wxFontDialog::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetFocusFromKbd()");
		}
		self->wxFontDialog::SetFocusFromKbd();

		return 0;
	}

	// void wxFontDialog::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxFontDialog::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_AddChild(wxWindow *)");
		}
		self->wxFontDialog::AddChild(child);

		return 0;
	}

	// void wxFontDialog::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxFontDialog::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_RemoveChild(wxWindow *)");
		}
		self->wxFontDialog::RemoveChild(child);

		return 0;
	}

	// bool wxFontDialog::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxFontDialog::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxFontDialog::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxFontDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxFontDialog::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxFontDialog::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxFontDialog::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_GetScrollPos(int) const");
		}
		int lret = self->wxFontDialog::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontDialog::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxFontDialog::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_GetScrollRange(int) const");
		}
		int lret = self->wxFontDialog::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontDialog::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxFontDialog::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_GetScrollThumb(int) const");
		}
		int lret = self->wxFontDialog::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFontDialog::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxFontDialog::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxFontDialog::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ScrollLines(int lines) function, expected prototype:\nbool wxFontDialog::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ScrollLines(int)");
		}
		bool lret = self->wxFontDialog::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ScrollPages(int pages) function, expected prototype:\nbool wxFontDialog::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ScrollPages(int)");
		}
		bool lret = self->wxFontDialog::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxFontDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxFontDialog::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxFontDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxFontDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetScrollPos(int, int, bool)");
		}
		self->wxFontDialog::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxFontDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxFontDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxFontDialog::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxFontDialog::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxFontDialog::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxFontDialog::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxFontDialog::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxFontDialog::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxFontDialog::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Fit() function, expected prototype:\nvoid wxFontDialog::base_Fit()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Fit()");
		}
		self->wxFontDialog::Fit();

		return 0;
	}

	// void wxFontDialog::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_FitInside() function, expected prototype:\nvoid wxFontDialog::base_FitInside()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_FitInside()");
		}
		self->wxFontDialog::FitInside();

		return 0;
	}

	// wxSize wxFontDialog::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetMaxSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetMinClientSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetMinSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFontDialog::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFontDialog::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxFontDialog::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFontDialog::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxFontDialog::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxFontDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxFontDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxFontDialog::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxFontDialog::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SendSizeEvent(int)");
		}
		self->wxFontDialog::SendSizeEvent(flags);

		return 0;
	}

	// void wxFontDialog::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxFontDialog::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxFontDialog::SetMaxClientSize(size);

		return 0;
	}

	// void wxFontDialog::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxFontDialog::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetMinClientSize(const wxSize &)");
		}
		self->wxFontDialog::SetMinClientSize(size);

		return 0;
	}

	// wxPoint wxFontDialog::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxFontDialog::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxFontDialog::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxFontDialog::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxFontDialog::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxFontDialog::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_ClearBackground() function, expected prototype:\nvoid wxFontDialog::base_ClearBackground()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_ClearBackground()");
		}
		self->wxFontDialog::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxFontDialog::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxFontDialog::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxFontDialog::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxFontDialog::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxFontDialog::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontDialog::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_GetCharHeight() const function, expected prototype:\nint wxFontDialog::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_GetCharHeight() const");
		}
		int lret = self->wxFontDialog::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontDialog::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_GetCharWidth() const function, expected prototype:\nint wxFontDialog::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_GetCharWidth() const");
		}
		int lret = self->wxFontDialog::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxFontDialog::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxFontDialog::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxFontDialog::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxFontDialog::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxFontDialog::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxFontDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxFontDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Refresh(bool, const wxRect *)");
		}
		self->wxFontDialog::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxFontDialog::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Update() function, expected prototype:\nvoid wxFontDialog::base_Update()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Update()");
		}
		self->wxFontDialog::Update();

		return 0;
	}

	// bool wxFontDialog::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxFontDialog::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxFontDialog::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxFontDialog::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontDialog::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxFontDialog::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ShouldInheritColours() const function, expected prototype:\nbool wxFontDialog::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ShouldInheritColours() const");
		}
		bool lret = self->wxFontDialog::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxFontDialog::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetThemeEnabled(bool)");
		}
		self->wxFontDialog::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxFontDialog::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_GetThemeEnabled() const function, expected prototype:\nbool wxFontDialog::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_GetThemeEnabled() const");
		}
		bool lret = self->wxFontDialog::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxFontDialog::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxFontDialog::SetNextHandler(handler);

		return 0;
	}

	// void wxFontDialog::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxFontDialog::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxFontDialog::SetPreviousHandler(handler);

		return 0;
	}

	// long wxFontDialog::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFontDialog::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxFontDialog::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFontDialog::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxFontDialog::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFontDialog::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxFontDialog::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetExtraStyle(long)");
		}
		self->wxFontDialog::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxFontDialog::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxFontDialog::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetWindowStyleFlag(long)");
		}
		self->wxFontDialog::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxFontDialog::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Lower() function, expected prototype:\nvoid wxFontDialog::base_Lower()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Lower()");
		}
		self->wxFontDialog::Lower();

		return 0;
	}

	// void wxFontDialog::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Raise() function, expected prototype:\nvoid wxFontDialog::base_Raise()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Raise()");
		}
		self->wxFontDialog::Raise();

		return 0;
	}

	// bool wxFontDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxFontDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxFontDialog::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsShown() const function, expected prototype:\nbool wxFontDialog::base_IsShown() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsShown() const");
		}
		bool lret = self->wxFontDialog::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsShownOnScreen() const function, expected prototype:\nbool wxFontDialog::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsShownOnScreen() const");
		}
		bool lret = self->wxFontDialog::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Enable(bool enable = true) function, expected prototype:\nbool wxFontDialog::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Enable(bool)");
		}
		bool lret = self->wxFontDialog::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxFontDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxFontDialog::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFontDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFontDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxFontDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxFontDialog::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFontDialog::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxFontDialog::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxFontDialog::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxFontDialog::base_GetValidator() function, expected prototype:\nwxValidator * wxFontDialog::base_GetValidator()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxFontDialog::base_GetValidator()");
		}
		wxValidator * lret = self->wxFontDialog::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxFontDialog::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxFontDialog::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFontDialog::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetValidator(const wxValidator &)");
		}
		self->wxFontDialog::SetValidator(validator);

		return 0;
	}

	// bool wxFontDialog::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_TransferDataFromWindow() function, expected prototype:\nbool wxFontDialog::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_TransferDataFromWindow()");
		}
		bool lret = self->wxFontDialog::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_TransferDataToWindow() function, expected prototype:\nbool wxFontDialog::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_TransferDataToWindow()");
		}
		bool lret = self->wxFontDialog::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Validate() function, expected prototype:\nbool wxFontDialog::base_Validate()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Validate()");
		}
		bool lret = self->wxFontDialog::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFontDialog::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFontDialog::base_GetLabel() const function, expected prototype:\nwxString wxFontDialog::base_GetLabel() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFontDialog::base_GetLabel() const");
		}
		wxString lret = self->wxFontDialog::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxFontDialog::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxFontDialog::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxFontDialog::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxFontDialog::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxFontDialog::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFontDialog::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFontDialog::base_GetName() const function, expected prototype:\nwxString wxFontDialog::base_GetName() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFontDialog::base_GetName() const");
		}
		wxString lret = self->wxFontDialog::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFontDialog::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxFontDialog::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetLabel(const wxString &)");
		}
		self->wxFontDialog::SetLabel(label);

		return 0;
	}

	// void wxFontDialog::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxFontDialog::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxFontDialog::SetLayoutDirection(dir);

		return 0;
	}

	// void wxFontDialog::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetName(const wxString & name) function, expected prototype:\nvoid wxFontDialog::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetName(const wxString &)");
		}
		self->wxFontDialog::SetName(name);

		return 0;
	}

	// void wxFontDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxFontDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxFontDialog::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxFontDialog::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxFontDialog::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Destroy() function, expected prototype:\nbool wxFontDialog::base_Destroy()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Destroy()");
		}
		bool lret = self->wxFontDialog::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxFontDialog::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxFontDialog::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxFontDialog::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxFontDialog::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxFontDialog::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxFontDialog::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxFontDialog::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxFontDialog::SetDropTarget(target);

		return 0;
	}

	// void wxFontDialog::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxFontDialog::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_DragAcceptFiles(bool)");
		}
		self->wxFontDialog::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxFontDialog::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_HasCapture() const function, expected prototype:\nbool wxFontDialog::base_HasCapture() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_HasCapture() const");
		}
		bool lret = self->wxFontDialog::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxFontDialog::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxFontDialog::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxFontDialog::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxFontDialog::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_WarpPointer(int, int)");
		}
		self->wxFontDialog::WarpPointer(x, y);

		return 0;
	}

	// void wxFontDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxFontDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxFontDialog::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxFontDialog::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxFontDialog::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_HasMultiplePages() const function, expected prototype:\nbool wxFontDialog::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_HasMultiplePages() const");
		}
		bool lret = self->wxFontDialog::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_InheritAttributes() function, expected prototype:\nvoid wxFontDialog::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_InheritAttributes()");
		}
		self->wxFontDialog::InheritAttributes();

		return 0;
	}

	// void wxFontDialog::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_InitDialog() function, expected prototype:\nvoid wxFontDialog::base_InitDialog()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_InitDialog()");
		}
		self->wxFontDialog::InitDialog();

		return 0;
	}

	// bool wxFontDialog::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsRetained() const function, expected prototype:\nbool wxFontDialog::base_IsRetained() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsRetained() const");
		}
		bool lret = self->wxFontDialog::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsTopLevel() const function, expected prototype:\nbool wxFontDialog::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsTopLevel() const");
		}
		bool lret = self->wxFontDialog::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxFontDialog::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_MakeModal(bool)");
		}
		self->wxFontDialog::MakeModal(modal);

		return 0;
	}

	// void wxFontDialog::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_OnInternalIdle() function, expected prototype:\nvoid wxFontDialog::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_OnInternalIdle()");
		}
		self->wxFontDialog::OnInternalIdle();

		return 0;
	}

	// bool wxFontDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxFontDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxFontDialog::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxFontDialog::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxFontDialog::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxFontDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_UpdateWindowUI(long)");
		}
		self->wxFontDialog::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxFontDialog::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_CanSetTransparent() function, expected prototype:\nbool wxFontDialog::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_CanSetTransparent()");
		}
		bool lret = self->wxFontDialog::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxFontDialog::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_EnableCloseButton(bool)");
		}
		bool lret = self->wxFontDialog::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFontDialog::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFontDialog::base_GetTitle() const function, expected prototype:\nwxString wxFontDialog::base_GetTitle() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFontDialog::base_GetTitle() const");
		}
		wxString lret = self->wxFontDialog::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFontDialog::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsActive() function, expected prototype:\nbool wxFontDialog::base_IsActive()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsActive()");
		}
		bool lret = self->wxFontDialog::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxFontDialog::base_IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsAlwaysMaximized() const");
		}
		bool lret = self->wxFontDialog::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsFullScreen() const function, expected prototype:\nbool wxFontDialog::base_IsFullScreen() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsFullScreen() const");
		}
		bool lret = self->wxFontDialog::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsMaximized() const function, expected prototype:\nbool wxFontDialog::base_IsMaximized() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsMaximized() const");
		}
		bool lret = self->wxFontDialog::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Layout() function, expected prototype:\nbool wxFontDialog::base_Layout()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Layout()");
		}
		bool lret = self->wxFontDialog::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxFontDialog::base_Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Maximize(bool)");
		}
		self->wxFontDialog::Maximize(maximize);

		return 0;
	}

	// void wxFontDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxFontDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_RequestUserAttention(int)");
		}
		self->wxFontDialog::RequestUserAttention(flags);

		return 0;
	}

	// void wxFontDialog::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxFontDialog::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetMaxSize(const wxSize &)");
		}
		self->wxFontDialog::SetMaxSize(size);

		return 0;
	}

	// void wxFontDialog::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxFontDialog::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFontDialog::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetMinSize(const wxSize &)");
		}
		self->wxFontDialog::SetMinSize(size);

		return 0;
	}

	// void wxFontDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxFontDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxFontDialog::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxFontDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxFontDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxFontDialog::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxFontDialog::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxFontDialog::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxFontDialog::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxFontDialog::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxFontDialog::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxFontDialog::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetTitle(const wxString &)");
		}
		self->wxFontDialog::SetTitle(title);

		return 0;
	}

	// bool wxFontDialog::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxFontDialog::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxFontDialog::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxFontDialog::base_ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ShouldPreventAppExit() const");
		}
		bool lret = self->wxFontDialog::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxFontDialog::base_OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_OSXSetModified(bool)");
		}
		self->wxFontDialog::OSXSetModified(modified);

		return 0;
	}

	// bool wxFontDialog::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_OSXIsModified() const function, expected prototype:\nbool wxFontDialog::base_OSXIsModified() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_OSXIsModified() const");
		}
		bool lret = self->wxFontDialog::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxFontDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_ShowFullScreen(bool, long)");
		}
		bool lret = self->wxFontDialog::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_CanDoLayoutAdaptation()
	static int _bind_base_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_CanDoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_CanDoLayoutAdaptation() function, expected prototype:\nbool wxFontDialog::base_CanDoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_CanDoLayoutAdaptation()");
		}
		bool lret = self->wxFontDialog::CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_DoLayoutAdaptation()
	static int _bind_base_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_DoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_DoLayoutAdaptation() function, expected prototype:\nbool wxFontDialog::base_DoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_DoLayoutAdaptation()");
		}
		bool lret = self->wxFontDialog::DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_EndModal(int retCode)
	static int _bind_base_EndModal(lua_State *L) {
		if (!_lg_typecheck_base_EndModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_EndModal(int retCode) function, expected prototype:\nvoid wxFontDialog::base_EndModal(int retCode)\nClass arguments details:\n");
		}

		int retCode=(int)lua_tointeger(L,2);

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_EndModal(int)");
		}
		self->wxFontDialog::EndModal(retCode);

		return 0;
	}

	// wxWindow * wxFontDialog::base_GetContentWindow() const
	static int _bind_base_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetContentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxFontDialog::base_GetContentWindow() const function, expected prototype:\nwxWindow * wxFontDialog::base_GetContentWindow() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxFontDialog::base_GetContentWindow() const");
		}
		wxWindow * lret = self->wxFontDialog::GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxFontDialog::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxFontDialog::base_Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_Iconize(bool)");
		}
		self->wxFontDialog::Iconize(iconize);

		return 0;
	}

	// bool wxFontDialog::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsIconized() const function, expected prototype:\nbool wxFontDialog::base_IsIconized() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsIconized() const");
		}
		bool lret = self->wxFontDialog::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::base_IsModal() const
	static int _bind_base_IsModal(lua_State *L) {
		if (!_lg_typecheck_base_IsModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_IsModal() const function, expected prototype:\nbool wxFontDialog::base_IsModal() const\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_IsModal() const");
		}
		bool lret = self->wxFontDialog::IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontDialog::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontDialog::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxFontDialog::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxFontDialog::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontDialog::base_SetIcons(const wxIconBundle &)");
		}
		self->wxFontDialog::SetIcons(icons);

		return 0;
	}

	// bool wxFontDialog::base_Show(bool show = 1)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::base_Show(bool show = 1) function, expected prototype:\nbool wxFontDialog::base_Show(bool show = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : 1;

		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::base_Show(bool)");
		}
		bool lret = self->wxFontDialog::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxFontDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::base_ShowModal() function, expected prototype:\nint wxFontDialog::base_ShowModal()\nClass arguments details:\n");
		}


		wxFontDialog* self=Luna< wxObject >::checkSubType< wxFontDialog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::base_ShowModal()");
		}
		int lret = self->wxFontDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFontDialog* LunaTraits< wxFontDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontDialog::_bind_ctor(L);
}

void LunaTraits< wxFontDialog >::_bind_dtor(wxFontDialog* obj) {
	delete obj;
}

const char LunaTraits< wxFontDialog >::className[] = "wxFontDialog";
const char LunaTraits< wxFontDialog >::fullName[] = "wxFontDialog";
const char LunaTraits< wxFontDialog >::moduleName[] = "wx";
const char* LunaTraits< wxFontDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxFontDialog >::hash = 47524357;
const int LunaTraits< wxFontDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFontDialog >::methods[] = {
	{"Create", &luna_wrapper_wxFontDialog::_bind_Create},
	{"GetFontData", &luna_wrapper_wxFontDialog::_bind_GetFontData},
	{"ShowModal", &luna_wrapper_wxFontDialog::_bind_ShowModal},
	{"base_GetClassInfo", &luna_wrapper_wxFontDialog::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxFontDialog::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxFontDialog::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxFontDialog::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxFontDialog::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxFontDialog::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxFontDialog::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxFontDialog::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxFontDialog::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxFontDialog::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxFontDialog::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxFontDialog::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxFontDialog::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxFontDialog::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxFontDialog::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxFontDialog::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxFontDialog::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxFontDialog::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxFontDialog::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxFontDialog::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxFontDialog::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxFontDialog::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxFontDialog::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxFontDialog::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxFontDialog::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxFontDialog::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxFontDialog::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxFontDialog::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxFontDialog::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxFontDialog::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxFontDialog::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxFontDialog::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxFontDialog::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxFontDialog::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxFontDialog::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxFontDialog::_bind_base_SetMinClientSize},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxFontDialog::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxFontDialog::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxFontDialog::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxFontDialog::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxFontDialog::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxFontDialog::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxFontDialog::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxFontDialog::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxFontDialog::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxFontDialog::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxFontDialog::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxFontDialog::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxFontDialog::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxFontDialog::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxFontDialog::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxFontDialog::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxFontDialog::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxFontDialog::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxFontDialog::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxFontDialog::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxFontDialog::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxFontDialog::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxFontDialog::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxFontDialog::_bind_base_Enable},
	{"base_ShowWithEffect", &luna_wrapper_wxFontDialog::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxFontDialog::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxFontDialog::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxFontDialog::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxFontDialog::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxFontDialog::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxFontDialog::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxFontDialog::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxFontDialog::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxFontDialog::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxFontDialog::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxFontDialog::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxFontDialog::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxFontDialog::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxFontDialog::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxFontDialog::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxFontDialog::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxFontDialog::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxFontDialog::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxFontDialog::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxFontDialog::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxFontDialog::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxFontDialog::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxFontDialog::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxFontDialog::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxFontDialog::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxFontDialog::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxFontDialog::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxFontDialog::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxFontDialog::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxFontDialog::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxFontDialog::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxFontDialog::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxFontDialog::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxFontDialog::_bind_base_GetTitle},
	{"base_IsActive", &luna_wrapper_wxFontDialog::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxFontDialog::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxFontDialog::_bind_base_IsFullScreen},
	{"base_IsMaximized", &luna_wrapper_wxFontDialog::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxFontDialog::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxFontDialog::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxFontDialog::_bind_base_RequestUserAttention},
	{"base_SetMaxSize", &luna_wrapper_wxFontDialog::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxFontDialog::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxFontDialog::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxFontDialog::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxFontDialog::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxFontDialog::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxFontDialog::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxFontDialog::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxFontDialog::_bind_base_ShowFullScreen},
	{"base_CanDoLayoutAdaptation", &luna_wrapper_wxFontDialog::_bind_base_CanDoLayoutAdaptation},
	{"base_DoLayoutAdaptation", &luna_wrapper_wxFontDialog::_bind_base_DoLayoutAdaptation},
	{"base_EndModal", &luna_wrapper_wxFontDialog::_bind_base_EndModal},
	{"base_GetContentWindow", &luna_wrapper_wxFontDialog::_bind_base_GetContentWindow},
	{"base_Iconize", &luna_wrapper_wxFontDialog::_bind_base_Iconize},
	{"base_IsIconized", &luna_wrapper_wxFontDialog::_bind_base_IsIconized},
	{"base_IsModal", &luna_wrapper_wxFontDialog::_bind_base_IsModal},
	{"base_SetIcons", &luna_wrapper_wxFontDialog::_bind_base_SetIcons},
	{"base_Show", &luna_wrapper_wxFontDialog::_bind_base_Show},
	{"base_ShowModal", &luna_wrapper_wxFontDialog::_bind_base_ShowModal},
	{"__eq", &luna_wrapper_wxFontDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontDialog >::enumValues[] = {
	{0,0}
};


