#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDocMDIParentFrame.h>

class luna_wrapper_wxDocMDIParentFrame {
public:
	typedef Luna< wxDocMDIParentFrame > luna_t;

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
		//wxDocMDIParentFrame* ptr= dynamic_cast< wxDocMDIParentFrame* >(Luna< wxObject >::check(L,1));
		wxDocMDIParentFrame* ptr= luna_caster< wxObject, wxDocMDIParentFrame >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocMDIParentFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>6 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
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

	inline static bool _lg_typecheck_base_ActivateNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ActivatePrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ArrangeIcons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Cascade(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetActiveChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateClient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Tile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocMDIParentFrame::wxDocMDIParentFrame()
	static wxDocMDIParentFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame() function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame()\nClass arguments details:\n");
		}


		return new wxDocMDIParentFrame();
	}

	// wxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocMDIParentFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,1));
		wxFrame* parent=(Luna< wxObject >::checkSubType< wxFrame >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxDocMDIParentFrame(manager, parent, id, title, pos, size, style, name);
	}

	// wxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data)
	static wxDocMDIParentFrame* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data) function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxDocMDIParentFrame(L,NULL);
	}

	// wxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data, wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocMDIParentFrame* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data, wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame(lua_Table * data, wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,2));
		wxFrame* parent=(Luna< wxObject >::checkSubType< wxFrame >(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxDocMDIParentFrame(L,NULL, manager, parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxDocMDIParentFrame::wxDocMDIParentFrame
	static wxDocMDIParentFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDocMDIParentFrame, cannot match any of the overloads for function wxDocMDIParentFrame:\n  wxDocMDIParentFrame()\n  wxDocMDIParentFrame(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n  wxDocMDIParentFrame(lua_Table *)\n  wxDocMDIParentFrame(lua_Table *, wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,2));
		wxFrame* parent=(Luna< wxObject >::checkSubType< wxFrame >(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIParentFrame::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::Create(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(manager, parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDocMDIParentFrame::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocMDIParentFrame::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDocMDIParentFrame::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocMDIParentFrame::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDocMDIParentFrame::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_AcceptsFocus() const function, expected prototype:\nbool wxDocMDIParentFrame::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_AcceptsFocus() const");
		}
		bool lret = self->wxDocMDIParentFrame::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxDocMDIParentFrame::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxDocMDIParentFrame::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxDocMDIParentFrame::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxDocMDIParentFrame::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_HasFocus() const function, expected prototype:\nbool wxDocMDIParentFrame::base_HasFocus() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_HasFocus() const");
		}
		bool lret = self->wxDocMDIParentFrame::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetCanFocus(bool)");
		}
		self->wxDocMDIParentFrame::SetCanFocus(canFocus);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetFocus() function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetFocus()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetFocus()");
		}
		self->wxDocMDIParentFrame::SetFocus();

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetFocusFromKbd() function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetFocusFromKbd()");
		}
		self->wxDocMDIParentFrame::SetFocusFromKbd();

		return 0;
	}

	// void wxDocMDIParentFrame::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxDocMDIParentFrame::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_AddChild(wxWindow *)");
		}
		self->wxDocMDIParentFrame::AddChild(child);

		return 0;
	}

	// void wxDocMDIParentFrame::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxDocMDIParentFrame::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_RemoveChild(wxWindow *)");
		}
		self->wxDocMDIParentFrame::RemoveChild(child);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxDocMDIParentFrame::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxDocMDIParentFrame::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxDocMDIParentFrame::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxDocMDIParentFrame::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocMDIParentFrame::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxDocMDIParentFrame::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocMDIParentFrame::base_GetScrollPos(int) const");
		}
		int lret = self->wxDocMDIParentFrame::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDocMDIParentFrame::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocMDIParentFrame::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxDocMDIParentFrame::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocMDIParentFrame::base_GetScrollRange(int) const");
		}
		int lret = self->wxDocMDIParentFrame::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDocMDIParentFrame::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocMDIParentFrame::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxDocMDIParentFrame::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocMDIParentFrame::base_GetScrollThumb(int) const");
		}
		int lret = self->wxDocMDIParentFrame::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxDocMDIParentFrame::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ScrollLines(int lines) function, expected prototype:\nbool wxDocMDIParentFrame::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ScrollLines(int)");
		}
		bool lret = self->wxDocMDIParentFrame::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ScrollPages(int pages) function, expected prototype:\nbool wxDocMDIParentFrame::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ScrollPages(int)");
		}
		bool lret = self->wxDocMDIParentFrame::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDocMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxDocMDIParentFrame::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetScrollPos(int, int, bool)");
		}
		self->wxDocMDIParentFrame::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxDocMDIParentFrame::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxDocMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDocMDIParentFrame::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Fit() function, expected prototype:\nvoid wxDocMDIParentFrame::base_Fit()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Fit()");
		}
		self->wxDocMDIParentFrame::Fit();

		return 0;
	}

	// void wxDocMDIParentFrame::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_FitInside() function, expected prototype:\nvoid wxDocMDIParentFrame::base_FitInside()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_FitInside()");
		}
		self->wxDocMDIParentFrame::FitInside();

		return 0;
	}

	// wxSize wxDocMDIParentFrame::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetMaxSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetMinClientSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetMinSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDocMDIParentFrame::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDocMDIParentFrame::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxDocMDIParentFrame::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDocMDIParentFrame::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxDocMDIParentFrame::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxDocMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxDocMDIParentFrame::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SendSizeEvent(int)");
		}
		self->wxDocMDIParentFrame::SendSizeEvent(flags);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxDocMDIParentFrame::SetMaxClientSize(size);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetMinClientSize(const wxSize &)");
		}
		self->wxDocMDIParentFrame::SetMinClientSize(size);

		return 0;
	}

	// void wxDocMDIParentFrame::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_ClearBackground() function, expected prototype:\nvoid wxDocMDIParentFrame::base_ClearBackground()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_ClearBackground()");
		}
		self->wxDocMDIParentFrame::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxDocMDIParentFrame::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxDocMDIParentFrame::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxDocMDIParentFrame::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxDocMDIParentFrame::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxDocMDIParentFrame::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDocMDIParentFrame::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocMDIParentFrame::base_GetCharHeight() const function, expected prototype:\nint wxDocMDIParentFrame::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocMDIParentFrame::base_GetCharHeight() const");
		}
		int lret = self->wxDocMDIParentFrame::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDocMDIParentFrame::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocMDIParentFrame::base_GetCharWidth() const function, expected prototype:\nint wxDocMDIParentFrame::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocMDIParentFrame::base_GetCharWidth() const");
		}
		int lret = self->wxDocMDIParentFrame::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxDocMDIParentFrame::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxDocMDIParentFrame::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxDocMDIParentFrame::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxDocMDIParentFrame::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxDocMDIParentFrame::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxDocMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDocMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Refresh(bool, const wxRect *)");
		}
		self->wxDocMDIParentFrame::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxDocMDIParentFrame::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Update() function, expected prototype:\nvoid wxDocMDIParentFrame::base_Update()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Update()");
		}
		self->wxDocMDIParentFrame::Update();

		return 0;
	}

	// bool wxDocMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxDocMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxDocMDIParentFrame::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxDocMDIParentFrame::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDocMDIParentFrame::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxDocMDIParentFrame::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ShouldInheritColours() const function, expected prototype:\nbool wxDocMDIParentFrame::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ShouldInheritColours() const");
		}
		bool lret = self->wxDocMDIParentFrame::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetThemeEnabled(bool)");
		}
		self->wxDocMDIParentFrame::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_GetThemeEnabled() const function, expected prototype:\nbool wxDocMDIParentFrame::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_GetThemeEnabled() const");
		}
		bool lret = self->wxDocMDIParentFrame::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxDocMDIParentFrame::SetNextHandler(handler);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxDocMDIParentFrame::SetPreviousHandler(handler);

		return 0;
	}

	// long wxDocMDIParentFrame::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxDocMDIParentFrame::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxDocMDIParentFrame::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxDocMDIParentFrame::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxDocMDIParentFrame::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetExtraStyle(long)");
		}
		self->wxDocMDIParentFrame::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetWindowStyleFlag(long)");
		}
		self->wxDocMDIParentFrame::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxDocMDIParentFrame::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Lower() function, expected prototype:\nvoid wxDocMDIParentFrame::base_Lower()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Lower()");
		}
		self->wxDocMDIParentFrame::Lower();

		return 0;
	}

	// void wxDocMDIParentFrame::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Raise() function, expected prototype:\nvoid wxDocMDIParentFrame::base_Raise()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Raise()");
		}
		self->wxDocMDIParentFrame::Raise();

		return 0;
	}

	// bool wxDocMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDocMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDocMDIParentFrame::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsShown() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsShown() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsShown() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsShownOnScreen() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsShownOnScreen() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Enable(bool enable = true) function, expected prototype:\nbool wxDocMDIParentFrame::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Enable(bool)");
		}
		bool lret = self->wxDocMDIParentFrame::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Show(bool show = true) function, expected prototype:\nbool wxDocMDIParentFrame::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Show(bool)");
		}
		bool lret = self->wxDocMDIParentFrame::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDocMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxDocMDIParentFrame::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxDocMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDocMDIParentFrame::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxDocMDIParentFrame::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxDocMDIParentFrame::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxDocMDIParentFrame::base_GetValidator() function, expected prototype:\nwxValidator * wxDocMDIParentFrame::base_GetValidator()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxDocMDIParentFrame::base_GetValidator()");
		}
		wxValidator * lret = self->wxDocMDIParentFrame::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDocMDIParentFrame::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetValidator(const wxValidator &)");
		}
		self->wxDocMDIParentFrame::SetValidator(validator);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_TransferDataFromWindow() function, expected prototype:\nbool wxDocMDIParentFrame::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_TransferDataFromWindow()");
		}
		bool lret = self->wxDocMDIParentFrame::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_TransferDataToWindow() function, expected prototype:\nbool wxDocMDIParentFrame::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_TransferDataToWindow()");
		}
		bool lret = self->wxDocMDIParentFrame::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Validate() function, expected prototype:\nbool wxDocMDIParentFrame::base_Validate()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Validate()");
		}
		bool lret = self->wxDocMDIParentFrame::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocMDIParentFrame::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocMDIParentFrame::base_GetLabel() const function, expected prototype:\nwxString wxDocMDIParentFrame::base_GetLabel() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocMDIParentFrame::base_GetLabel() const");
		}
		wxString lret = self->wxDocMDIParentFrame::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxDocMDIParentFrame::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxDocMDIParentFrame::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxDocMDIParentFrame::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxDocMDIParentFrame::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxDocMDIParentFrame::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDocMDIParentFrame::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocMDIParentFrame::base_GetName() const function, expected prototype:\nwxString wxDocMDIParentFrame::base_GetName() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocMDIParentFrame::base_GetName() const");
		}
		wxString lret = self->wxDocMDIParentFrame::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetLabel(const wxString &)");
		}
		self->wxDocMDIParentFrame::SetLabel(label);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxDocMDIParentFrame::SetLayoutDirection(dir);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetName(const wxString & name) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetName(const wxString &)");
		}
		self->wxDocMDIParentFrame::SetName(name);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxDocMDIParentFrame::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxDocMDIParentFrame::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Destroy() function, expected prototype:\nbool wxDocMDIParentFrame::base_Destroy()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Destroy()");
		}
		bool lret = self->wxDocMDIParentFrame::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxDocMDIParentFrame::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxDocMDIParentFrame::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxDocMDIParentFrame::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxDocMDIParentFrame::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxDocMDIParentFrame::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxDocMDIParentFrame::SetDropTarget(target);

		return 0;
	}

	// void wxDocMDIParentFrame::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxDocMDIParentFrame::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_DragAcceptFiles(bool)");
		}
		self->wxDocMDIParentFrame::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_HasCapture() const function, expected prototype:\nbool wxDocMDIParentFrame::base_HasCapture() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_HasCapture() const");
		}
		bool lret = self->wxDocMDIParentFrame::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxDocMDIParentFrame::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDocMDIParentFrame::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxDocMDIParentFrame::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxDocMDIParentFrame::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_WarpPointer(int, int)");
		}
		self->wxDocMDIParentFrame::WarpPointer(x, y);

		return 0;
	}

	// void wxDocMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxDocMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocMDIParentFrame::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxDocMDIParentFrame::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_HasMultiplePages() const function, expected prototype:\nbool wxDocMDIParentFrame::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_HasMultiplePages() const");
		}
		bool lret = self->wxDocMDIParentFrame::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_InheritAttributes() function, expected prototype:\nvoid wxDocMDIParentFrame::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_InheritAttributes()");
		}
		self->wxDocMDIParentFrame::InheritAttributes();

		return 0;
	}

	// void wxDocMDIParentFrame::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_InitDialog() function, expected prototype:\nvoid wxDocMDIParentFrame::base_InitDialog()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_InitDialog()");
		}
		self->wxDocMDIParentFrame::InitDialog();

		return 0;
	}

	// bool wxDocMDIParentFrame::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsRetained() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsRetained() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsRetained() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsTopLevel() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsTopLevel() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_MakeModal(bool)");
		}
		self->wxDocMDIParentFrame::MakeModal(modal);

		return 0;
	}

	// void wxDocMDIParentFrame::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_OnInternalIdle() function, expected prototype:\nvoid wxDocMDIParentFrame::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_OnInternalIdle()");
		}
		self->wxDocMDIParentFrame::OnInternalIdle();

		return 0;
	}

	// bool wxDocMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxDocMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxDocMDIParentFrame::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxDocMDIParentFrame::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxDocMDIParentFrame::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxDocMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_UpdateWindowUI(long)");
		}
		self->wxDocMDIParentFrame::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_CanSetTransparent() function, expected prototype:\nbool wxDocMDIParentFrame::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_CanSetTransparent()");
		}
		bool lret = self->wxDocMDIParentFrame::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxDocMDIParentFrame::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_EnableCloseButton(bool)");
		}
		bool lret = self->wxDocMDIParentFrame::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocMDIParentFrame::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocMDIParentFrame::base_GetTitle() const function, expected prototype:\nwxString wxDocMDIParentFrame::base_GetTitle() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocMDIParentFrame::base_GetTitle() const");
		}
		wxString lret = self->wxDocMDIParentFrame::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDocMDIParentFrame::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Iconize(bool)");
		}
		self->wxDocMDIParentFrame::Iconize(iconize);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsActive() function, expected prototype:\nbool wxDocMDIParentFrame::base_IsActive()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsActive()");
		}
		bool lret = self->wxDocMDIParentFrame::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsAlwaysMaximized() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsFullScreen() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsFullScreen() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsFullScreen() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsIconized() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsIconized() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsIconized() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_IsMaximized() const function, expected prototype:\nbool wxDocMDIParentFrame::base_IsMaximized() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_IsMaximized() const");
		}
		bool lret = self->wxDocMDIParentFrame::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_Layout() function, expected prototype:\nbool wxDocMDIParentFrame::base_Layout()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_Layout()");
		}
		bool lret = self->wxDocMDIParentFrame::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxDocMDIParentFrame::base_Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Maximize(bool)");
		}
		self->wxDocMDIParentFrame::Maximize(maximize);

		return 0;
	}

	// void wxDocMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxDocMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_RequestUserAttention(int)");
		}
		self->wxDocMDIParentFrame::RequestUserAttention(flags);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxDocMDIParentFrame::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetIcons(const wxIconBundle &)");
		}
		self->wxDocMDIParentFrame::SetIcons(icons);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetMaxSize(const wxSize &)");
		}
		self->wxDocMDIParentFrame::SetMaxSize(size);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetMinSize(const wxSize &)");
		}
		self->wxDocMDIParentFrame::SetMinSize(size);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxDocMDIParentFrame::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxDocMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxDocMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxDocMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxDocMDIParentFrame::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxDocMDIParentFrame::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxDocMDIParentFrame::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetTitle(const wxString &)");
		}
		self->wxDocMDIParentFrame::SetTitle(title);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxDocMDIParentFrame::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxDocMDIParentFrame::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxDocMDIParentFrame::base_ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ShouldPreventAppExit() const");
		}
		bool lret = self->wxDocMDIParentFrame::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocMDIParentFrame::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxDocMDIParentFrame::base_OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_OSXSetModified(bool)");
		}
		self->wxDocMDIParentFrame::OSXSetModified(modified);

		return 0;
	}

	// bool wxDocMDIParentFrame::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_OSXIsModified() const function, expected prototype:\nbool wxDocMDIParentFrame::base_OSXIsModified() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_OSXIsModified() const");
		}
		bool lret = self->wxDocMDIParentFrame::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxDocMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::base_ShowFullScreen(bool, long)");
		}
		bool lret = self->wxDocMDIParentFrame::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxStatusBar * wxDocMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	static int _bind_base_CreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxDocMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) function, expected prototype:\nwxStatusBar * wxDocMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		long style=luatop>2 ? (long)lua_tointeger(L,3) : wxSTB_DEFAULT_STYLE;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxDocMDIParentFrame::base_CreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->wxDocMDIParentFrame::CreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxDocMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	static int _bind_base_CreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxDocMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar * wxDocMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tointeger(L,2) : ::wxBORDER_NONE | ::wxTB_HORIZONTAL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxDocMDIParentFrame::base_CreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->wxDocMDIParentFrame::CreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxDocMDIParentFrame::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxDocMDIParentFrame::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxDocMDIParentFrame::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDocMDIParentFrame::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxDocMDIParentFrame::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxMenuBar * wxDocMDIParentFrame::base_GetMenuBar() const
	static int _bind_base_GetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxDocMDIParentFrame::base_GetMenuBar() const function, expected prototype:\nwxMenuBar * wxDocMDIParentFrame::base_GetMenuBar() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenuBar * wxDocMDIParentFrame::base_GetMenuBar() const");
		}
		wxMenuBar * lret = self->wxDocMDIParentFrame::GetMenuBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxDocMDIParentFrame::base_GetStatusBar() const
	static int _bind_base_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxDocMDIParentFrame::base_GetStatusBar() const function, expected prototype:\nwxStatusBar * wxDocMDIParentFrame::base_GetStatusBar() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxDocMDIParentFrame::base_GetStatusBar() const");
		}
		wxStatusBar * lret = self->wxDocMDIParentFrame::GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxDocMDIParentFrame::base_GetToolBar() const
	static int _bind_base_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxDocMDIParentFrame::base_GetToolBar() const function, expected prototype:\nwxToolBar * wxDocMDIParentFrame::base_GetToolBar() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxDocMDIParentFrame::base_GetToolBar() const");
		}
		wxToolBar * lret = self->wxDocMDIParentFrame::GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxDocMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)
	static int _bind_base_OnCreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxDocMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name) function, expected prototype:\nwxStatusBar * wxDocMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int number=(int)lua_tointeger(L,2);
		long style=(long)lua_tointeger(L,3);
		int id=(int)lua_tointeger(L,4);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxDocMDIParentFrame::base_OnCreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->wxDocMDIParentFrame::OnCreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxDocMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name)
	static int _bind_base_OnCreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxDocMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name) function, expected prototype:\nwxToolBar * wxDocMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long style=(long)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxDocMDIParentFrame::base_OnCreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->wxDocMDIParentFrame::OnCreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar)
	static int _bind_base_SetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_SetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenuBar* menuBar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetMenuBar(wxMenuBar *)");
		}
		self->wxDocMDIParentFrame::SetMenuBar(menuBar);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar)
	static int _bind_base_SetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStatusBar* statusBar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetStatusBar(wxStatusBar *)");
		}
		self->wxDocMDIParentFrame::SetStatusBar(statusBar);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0)
	static int _bind_base_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetStatusText(const wxString &, int)");
		}
		self->wxDocMDIParentFrame::SetStatusText(text, number);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field)
	static int _bind_base_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusWidths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int widths_field=(int)lua_tointeger(L,3);

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetStatusWidths(int, const int *)");
		}
		self->wxDocMDIParentFrame::SetStatusWidths(n, &widths_field);

		return 0;
	}

	// void wxDocMDIParentFrame::base_SetToolBar(wxToolBar * toolBar)
	static int _bind_base_SetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_SetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetToolBar(wxToolBar * toolBar) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetToolBar(wxToolBar * toolBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetToolBar(wxToolBar *)");
		}
		self->wxDocMDIParentFrame::SetToolBar(toolBar);

		return 0;
	}

	// void wxDocMDIParentFrame::base_ActivateNext()
	static int _bind_base_ActivateNext(lua_State *L) {
		if (!_lg_typecheck_base_ActivateNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_ActivateNext() function, expected prototype:\nvoid wxDocMDIParentFrame::base_ActivateNext()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_ActivateNext()");
		}
		self->wxDocMDIParentFrame::ActivateNext();

		return 0;
	}

	// void wxDocMDIParentFrame::base_ActivatePrevious()
	static int _bind_base_ActivatePrevious(lua_State *L) {
		if (!_lg_typecheck_base_ActivatePrevious(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_ActivatePrevious() function, expected prototype:\nvoid wxDocMDIParentFrame::base_ActivatePrevious()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_ActivatePrevious()");
		}
		self->wxDocMDIParentFrame::ActivatePrevious();

		return 0;
	}

	// void wxDocMDIParentFrame::base_ArrangeIcons()
	static int _bind_base_ArrangeIcons(lua_State *L) {
		if (!_lg_typecheck_base_ArrangeIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_ArrangeIcons() function, expected prototype:\nvoid wxDocMDIParentFrame::base_ArrangeIcons()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_ArrangeIcons()");
		}
		self->wxDocMDIParentFrame::ArrangeIcons();

		return 0;
	}

	// void wxDocMDIParentFrame::base_Cascade()
	static int _bind_base_Cascade(lua_State *L) {
		if (!_lg_typecheck_base_Cascade(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Cascade() function, expected prototype:\nvoid wxDocMDIParentFrame::base_Cascade()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Cascade()");
		}
		self->wxDocMDIParentFrame::Cascade();

		return 0;
	}

	// wxMDIChildFrame * wxDocMDIParentFrame::base_GetActiveChild() const
	static int _bind_base_GetActiveChild(lua_State *L) {
		if (!_lg_typecheck_base_GetActiveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame * wxDocMDIParentFrame::base_GetActiveChild() const function, expected prototype:\nwxMDIChildFrame * wxDocMDIParentFrame::base_GetActiveChild() const\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIChildFrame * wxDocMDIParentFrame::base_GetActiveChild() const");
		}
		wxMDIChildFrame * lret = self->wxDocMDIParentFrame::GetActiveChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIChildFrame >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindow * wxDocMDIParentFrame::base_OnCreateClient()
	static int _bind_base_OnCreateClient(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateClient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow * wxDocMDIParentFrame::base_OnCreateClient() function, expected prototype:\nwxMDIClientWindow * wxDocMDIParentFrame::base_OnCreateClient()\nClass arguments details:\n");
		}


		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIClientWindow * wxDocMDIParentFrame::base_OnCreateClient()");
		}
		wxMDIClientWindow * lret = self->wxDocMDIParentFrame::OnCreateClient();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIClientWindow >::push(L,lret,false);

		return 1;
	}

	// void wxDocMDIParentFrame::base_SetWindowMenu(wxMenu * menu)
	static int _bind_base_SetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_SetWindowMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocMDIParentFrame::base_SetWindowMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_SetWindowMenu(wxMenu *)");
		}
		self->wxDocMDIParentFrame::SetWindowMenu(menu);

		return 0;
	}

	// void wxDocMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL)
	static int _bind_base_Tile(lua_State *L) {
		if (!_lg_typecheck_base_Tile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL) function, expected prototype:\nvoid wxDocMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxOrientation orient=luatop>1 ? (wxOrientation)lua_tointeger(L,2) : ::wxHORIZONTAL;

		wxDocMDIParentFrame* self=Luna< wxObject >::checkSubType< wxDocMDIParentFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIParentFrame::base_Tile(wxOrientation)");
		}
		self->wxDocMDIParentFrame::Tile(orient);

		return 0;
	}


	// Operator binds:

};

wxDocMDIParentFrame* LunaTraits< wxDocMDIParentFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocMDIParentFrame::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDocMDIParentFrame >::_bind_dtor(wxDocMDIParentFrame* obj) {
	delete obj;
}

const char LunaTraits< wxDocMDIParentFrame >::className[] = "wxDocMDIParentFrame";
const char LunaTraits< wxDocMDIParentFrame >::fullName[] = "wxDocMDIParentFrame";
const char LunaTraits< wxDocMDIParentFrame >::moduleName[] = "wx";
const char* LunaTraits< wxDocMDIParentFrame >::parents[] = {"wx.wxMDIParentFrame", 0};
const int LunaTraits< wxDocMDIParentFrame >::hash = 510409;
const int LunaTraits< wxDocMDIParentFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocMDIParentFrame >::methods[] = {
	{"Create", &luna_wrapper_wxDocMDIParentFrame::_bind_Create},
	{"base_GetClassInfo", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxDocMDIParentFrame::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxDocMDIParentFrame::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxDocMDIParentFrame::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxDocMDIParentFrame::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxDocMDIParentFrame::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxDocMDIParentFrame::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxDocMDIParentFrame::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxDocMDIParentFrame::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxDocMDIParentFrame::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetMinClientSize},
	{"base_ClearBackground", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxDocMDIParentFrame::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxDocMDIParentFrame::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxDocMDIParentFrame::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxDocMDIParentFrame::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxDocMDIParentFrame::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxDocMDIParentFrame::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxDocMDIParentFrame::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxDocMDIParentFrame::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxDocMDIParentFrame::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxDocMDIParentFrame::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxDocMDIParentFrame::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxDocMDIParentFrame::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxDocMDIParentFrame::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxDocMDIParentFrame::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxDocMDIParentFrame::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxDocMDIParentFrame::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetTitle},
	{"base_Iconize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Iconize},
	{"base_IsActive", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsFullScreen},
	{"base_IsIconized", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsIconized},
	{"base_IsMaximized", &luna_wrapper_wxDocMDIParentFrame::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxDocMDIParentFrame::_bind_base_RequestUserAttention},
	{"base_SetIcons", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetIcons},
	{"base_SetMaxSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ShowFullScreen},
	{"base_CreateStatusBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_CreateStatusBar},
	{"base_CreateToolBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_CreateToolBar},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetClientAreaOrigin},
	{"base_GetMenuBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetMenuBar},
	{"base_GetStatusBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetStatusBar},
	{"base_GetToolBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetToolBar},
	{"base_OnCreateStatusBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OnCreateStatusBar},
	{"base_OnCreateToolBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OnCreateToolBar},
	{"base_SetMenuBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetMenuBar},
	{"base_SetStatusBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetStatusBar},
	{"base_SetStatusText", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetStatusText},
	{"base_SetStatusWidths", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetStatusWidths},
	{"base_SetToolBar", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetToolBar},
	{"base_ActivateNext", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ActivateNext},
	{"base_ActivatePrevious", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ActivatePrevious},
	{"base_ArrangeIcons", &luna_wrapper_wxDocMDIParentFrame::_bind_base_ArrangeIcons},
	{"base_Cascade", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Cascade},
	{"base_GetActiveChild", &luna_wrapper_wxDocMDIParentFrame::_bind_base_GetActiveChild},
	{"base_OnCreateClient", &luna_wrapper_wxDocMDIParentFrame::_bind_base_OnCreateClient},
	{"base_SetWindowMenu", &luna_wrapper_wxDocMDIParentFrame::_bind_base_SetWindowMenu},
	{"base_Tile", &luna_wrapper_wxDocMDIParentFrame::_bind_base_Tile},
	{"__eq", &luna_wrapper_wxDocMDIParentFrame::_bind___eq},
	{"getTable", &luna_wrapper_wxDocMDIParentFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocMDIParentFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocMDIParentFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocMDIParentFrame >::enumValues[] = {
	{0,0}
};


