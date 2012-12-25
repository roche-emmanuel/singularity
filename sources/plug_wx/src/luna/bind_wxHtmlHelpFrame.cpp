#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlHelpFrame.h>

class luna_wrapper_wxHtmlHelpFrame {
public:
	typedef Luna< wxHtmlHelpFrame > luna_t;

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
		//wxHtmlHelpFrame* ptr= dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		wxHtmlHelpFrame* ptr= luna_caster< wxObject, wxHtmlHelpFrame >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,5)) ) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxConfigBase >(L,6)) ) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,6)) ) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::checkSubType< wxConfigBase >(L,7)) ) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddToolbarButtons(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetController(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,14199711)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitleFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_AddToolbarButtons(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL)
	static wxHtmlHelpFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>0 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpFrame(data);
	}

	// wxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)
	static wxHtmlHelpFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int wxWindowID=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>4 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,5)) : (wxHtmlHelpData*)NULL;
		wxConfigBase* config=luatop>5 ? (Luna< wxObject >::checkSubType< wxConfigBase >(L,6)) : (wxConfigBase*)NULL;
		wxString rootpath(lua_tostring(L,7),lua_objlen(L,7));

		return new wxHtmlHelpFrame(parent, wxWindowID, title, style, data, config, rootpath);
	}

	// wxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxHtmlHelpData * data = NULL)
	static wxHtmlHelpFrame* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>1 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,2)) : (wxHtmlHelpData*)NULL;

		return new wrapper_wxHtmlHelpFrame(L,NULL, data);
	}

	// wxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)
	static wxHtmlHelpFrame* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 6 ID = 56813631\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int wxWindowID=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>5 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,6)) : (wxHtmlHelpData*)NULL;
		wxConfigBase* config=luatop>6 ? (Luna< wxObject >::checkSubType< wxConfigBase >(L,7)) : (wxConfigBase*)NULL;
		wxString rootpath(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxHtmlHelpFrame(L,NULL, parent, wxWindowID, title, style, data, config, rootpath);
	}

	// Overload binder for wxHtmlHelpFrame::wxHtmlHelpFrame
	static wxHtmlHelpFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHtmlHelpFrame, cannot match any of the overloads for function wxHtmlHelpFrame:\n  wxHtmlHelpFrame(wxHtmlHelpData *)\n  wxHtmlHelpFrame(wxWindow *, int, const wxString &, int, wxHtmlHelpData *, wxConfigBase *, const wxString &)\n  wxHtmlHelpFrame(lua_Table *, wxHtmlHelpData *)\n  wxHtmlHelpFrame(lua_Table *, wxWindow *, int, const wxString &, int, wxHtmlHelpData *, wxConfigBase *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style)
	static int _bind_AddToolbarButtons(lua_State *L) {
		if (!_lg_typecheck_AddToolbarButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style) function, expected prototype:\nvoid wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));
		int style=(int)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar *, int)");
		}
		self->AddToolbarButtons(toolBar, style);

		return 0;
	}

	// bool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString) function, expected prototype:\nbool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : wxHF_DEFAULT_STYLE;
		wxConfigBase* config=luatop>5 ? (Luna< wxObject >::checkSubType< wxConfigBase >(L,6)) : (wxConfigBase*)NULL;
		wxString rootpath(lua_tostring(L,7),lua_objlen(L,7));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::Create(wxWindow *, int, const wxString &, int, wxConfigBase *, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, style, config, rootpath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlHelpController * wxHtmlHelpFrame::GetController() const
	static int _bind_GetController(lua_State *L) {
		if (!_lg_typecheck_GetController(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpController * wxHtmlHelpFrame::GetController() const function, expected prototype:\nwxHtmlHelpController * wxHtmlHelpFrame::GetController() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlHelpController * wxHtmlHelpFrame::GetController() const");
		}
		wxHtmlHelpController * lret = self->GetController();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpController >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller)
	static int _bind_SetController(lua_State *L) {
		if (!_lg_typecheck_SetController(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller) function, expected prototype:\nvoid wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller)\nClass arguments details:\narg 1 ID = 14199711\n");
		}

		wxHtmlHelpController* controller=(Luna< wxHtmlHelpController >::check(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::SetController(wxHtmlHelpController *)");
		}
		self->SetController(controller);

		return 0;
	}

	// void wxHtmlHelpFrame::SetTitleFormat(const wxString & format)
	static int _bind_SetTitleFormat(lua_State *L) {
		if (!_lg_typecheck_SetTitleFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::SetTitleFormat(const wxString & format) function, expected prototype:\nvoid wxHtmlHelpFrame::SetTitleFormat(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString format(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::SetTitleFormat(const wxString &)");
		}
		self->SetTitleFormat(format);

		return 0;
	}

	// wxClassInfo * wxHtmlHelpFrame::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlHelpFrame::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlHelpFrame::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlHelpFrame::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlHelpFrame::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_AcceptsFocus() const function, expected prototype:\nbool wxHtmlHelpFrame::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_AcceptsFocus() const");
		}
		bool lret = self->wxHtmlHelpFrame::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxHtmlHelpFrame::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxHtmlHelpFrame::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxHtmlHelpFrame::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxHtmlHelpFrame::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_HasFocus() const function, expected prototype:\nbool wxHtmlHelpFrame::base_HasFocus() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_HasFocus() const");
		}
		bool lret = self->wxHtmlHelpFrame::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetCanFocus(bool)");
		}
		self->wxHtmlHelpFrame::SetCanFocus(canFocus);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetFocus() function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetFocus()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetFocus()");
		}
		self->wxHtmlHelpFrame::SetFocus();

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetFocusFromKbd() function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetFocusFromKbd()");
		}
		self->wxHtmlHelpFrame::SetFocusFromKbd();

		return 0;
	}

	// void wxHtmlHelpFrame::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxHtmlHelpFrame::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_AddChild(wxWindow *)");
		}
		self->wxHtmlHelpFrame::AddChild(child);

		return 0;
	}

	// void wxHtmlHelpFrame::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxHtmlHelpFrame::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_RemoveChild(wxWindow *)");
		}
		self->wxHtmlHelpFrame::RemoveChild(child);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxHtmlHelpFrame::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxHtmlHelpFrame::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxHtmlHelpFrame::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxHtmlHelpFrame::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlHelpFrame::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxHtmlHelpFrame::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlHelpFrame::base_GetScrollPos(int) const");
		}
		int lret = self->wxHtmlHelpFrame::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlHelpFrame::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlHelpFrame::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxHtmlHelpFrame::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlHelpFrame::base_GetScrollRange(int) const");
		}
		int lret = self->wxHtmlHelpFrame::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlHelpFrame::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlHelpFrame::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxHtmlHelpFrame::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlHelpFrame::base_GetScrollThumb(int) const");
		}
		int lret = self->wxHtmlHelpFrame::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxHtmlHelpFrame::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ScrollLines(int lines) function, expected prototype:\nbool wxHtmlHelpFrame::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ScrollLines(int)");
		}
		bool lret = self->wxHtmlHelpFrame::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ScrollPages(int pages) function, expected prototype:\nbool wxHtmlHelpFrame::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ScrollPages(int)");
		}
		bool lret = self->wxHtmlHelpFrame::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHtmlHelpFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxHtmlHelpFrame::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetScrollPos(int, int, bool)");
		}
		self->wxHtmlHelpFrame::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxHtmlHelpFrame::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxHtmlHelpFrame::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlHelpFrame::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Fit() function, expected prototype:\nvoid wxHtmlHelpFrame::base_Fit()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Fit()");
		}
		self->wxHtmlHelpFrame::Fit();

		return 0;
	}

	// void wxHtmlHelpFrame::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_FitInside() function, expected prototype:\nvoid wxHtmlHelpFrame::base_FitInside()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_FitInside()");
		}
		self->wxHtmlHelpFrame::FitInside();

		return 0;
	}

	// wxSize wxHtmlHelpFrame::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetMaxSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetMinClientSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetMinSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlHelpFrame::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlHelpFrame::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxHtmlHelpFrame::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxHtmlHelpFrame::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxHtmlHelpFrame::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxHtmlHelpFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxHtmlHelpFrame::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SendSizeEvent(int)");
		}
		self->wxHtmlHelpFrame::SendSizeEvent(flags);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxHtmlHelpFrame::SetMaxClientSize(size);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetMinClientSize(const wxSize &)");
		}
		self->wxHtmlHelpFrame::SetMinClientSize(size);

		return 0;
	}

	// void wxHtmlHelpFrame::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_ClearBackground() function, expected prototype:\nvoid wxHtmlHelpFrame::base_ClearBackground()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_ClearBackground()");
		}
		self->wxHtmlHelpFrame::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxHtmlHelpFrame::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxHtmlHelpFrame::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxHtmlHelpFrame::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxHtmlHelpFrame::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxHtmlHelpFrame::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlHelpFrame::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlHelpFrame::base_GetCharHeight() const function, expected prototype:\nint wxHtmlHelpFrame::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlHelpFrame::base_GetCharHeight() const");
		}
		int lret = self->wxHtmlHelpFrame::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlHelpFrame::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlHelpFrame::base_GetCharWidth() const function, expected prototype:\nint wxHtmlHelpFrame::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlHelpFrame::base_GetCharWidth() const");
		}
		int lret = self->wxHtmlHelpFrame::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxHtmlHelpFrame::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxHtmlHelpFrame::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxHtmlHelpFrame::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxHtmlHelpFrame::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxHtmlHelpFrame::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlHelpFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHtmlHelpFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Refresh(bool, const wxRect *)");
		}
		self->wxHtmlHelpFrame::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxHtmlHelpFrame::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Update() function, expected prototype:\nvoid wxHtmlHelpFrame::base_Update()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Update()");
		}
		self->wxHtmlHelpFrame::Update();

		return 0;
	}

	// bool wxHtmlHelpFrame::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxHtmlHelpFrame::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxHtmlHelpFrame::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxHtmlHelpFrame::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxHtmlHelpFrame::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxHtmlHelpFrame::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ShouldInheritColours() const function, expected prototype:\nbool wxHtmlHelpFrame::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ShouldInheritColours() const");
		}
		bool lret = self->wxHtmlHelpFrame::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetThemeEnabled(bool)");
		}
		self->wxHtmlHelpFrame::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_GetThemeEnabled() const function, expected prototype:\nbool wxHtmlHelpFrame::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_GetThemeEnabled() const");
		}
		bool lret = self->wxHtmlHelpFrame::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxHtmlHelpFrame::SetNextHandler(handler);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxHtmlHelpFrame::SetPreviousHandler(handler);

		return 0;
	}

	// long wxHtmlHelpFrame::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxHtmlHelpFrame::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxHtmlHelpFrame::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxHtmlHelpFrame::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxHtmlHelpFrame::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetExtraStyle(long)");
		}
		self->wxHtmlHelpFrame::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetWindowStyleFlag(long)");
		}
		self->wxHtmlHelpFrame::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxHtmlHelpFrame::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Lower() function, expected prototype:\nvoid wxHtmlHelpFrame::base_Lower()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Lower()");
		}
		self->wxHtmlHelpFrame::Lower();

		return 0;
	}

	// void wxHtmlHelpFrame::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Raise() function, expected prototype:\nvoid wxHtmlHelpFrame::base_Raise()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Raise()");
		}
		self->wxHtmlHelpFrame::Raise();

		return 0;
	}

	// bool wxHtmlHelpFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHtmlHelpFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxHtmlHelpFrame::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsShown() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsShown() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsShown() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsShownOnScreen() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsShownOnScreen() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Enable(bool enable = true) function, expected prototype:\nbool wxHtmlHelpFrame::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Enable(bool)");
		}
		bool lret = self->wxHtmlHelpFrame::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Show(bool show = true) function, expected prototype:\nbool wxHtmlHelpFrame::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Show(bool)");
		}
		bool lret = self->wxHtmlHelpFrame::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHtmlHelpFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxHtmlHelpFrame::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlHelpFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxHtmlHelpFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHtmlHelpFrame::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpFrame::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxHtmlHelpFrame::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxHtmlHelpFrame::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxHtmlHelpFrame::base_GetValidator() function, expected prototype:\nwxValidator * wxHtmlHelpFrame::base_GetValidator()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxHtmlHelpFrame::base_GetValidator()");
		}
		wxValidator * lret = self->wxHtmlHelpFrame::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxHtmlHelpFrame::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetValidator(const wxValidator &)");
		}
		self->wxHtmlHelpFrame::SetValidator(validator);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_TransferDataFromWindow() function, expected prototype:\nbool wxHtmlHelpFrame::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_TransferDataFromWindow()");
		}
		bool lret = self->wxHtmlHelpFrame::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_TransferDataToWindow() function, expected prototype:\nbool wxHtmlHelpFrame::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_TransferDataToWindow()");
		}
		bool lret = self->wxHtmlHelpFrame::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Validate() function, expected prototype:\nbool wxHtmlHelpFrame::base_Validate()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Validate()");
		}
		bool lret = self->wxHtmlHelpFrame::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlHelpFrame::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpFrame::base_GetLabel() const function, expected prototype:\nwxString wxHtmlHelpFrame::base_GetLabel() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpFrame::base_GetLabel() const");
		}
		wxString lret = self->wxHtmlHelpFrame::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxHtmlHelpFrame::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxHtmlHelpFrame::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxHtmlHelpFrame::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxHtmlHelpFrame::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxHtmlHelpFrame::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHtmlHelpFrame::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpFrame::base_GetName() const function, expected prototype:\nwxString wxHtmlHelpFrame::base_GetName() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpFrame::base_GetName() const");
		}
		wxString lret = self->wxHtmlHelpFrame::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetLabel(const wxString &)");
		}
		self->wxHtmlHelpFrame::SetLabel(label);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxHtmlHelpFrame::SetLayoutDirection(dir);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetName(const wxString & name) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetName(const wxString &)");
		}
		self->wxHtmlHelpFrame::SetName(name);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxHtmlHelpFrame::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxHtmlHelpFrame::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Destroy() function, expected prototype:\nbool wxHtmlHelpFrame::base_Destroy()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Destroy()");
		}
		bool lret = self->wxHtmlHelpFrame::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxHtmlHelpFrame::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxHtmlHelpFrame::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxHtmlHelpFrame::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxHtmlHelpFrame::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxHtmlHelpFrame::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxHtmlHelpFrame::SetDropTarget(target);

		return 0;
	}

	// void wxHtmlHelpFrame::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxHtmlHelpFrame::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_DragAcceptFiles(bool)");
		}
		self->wxHtmlHelpFrame::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_HasCapture() const function, expected prototype:\nbool wxHtmlHelpFrame::base_HasCapture() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_HasCapture() const");
		}
		bool lret = self->wxHtmlHelpFrame::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxHtmlHelpFrame::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxHtmlHelpFrame::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxHtmlHelpFrame::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxHtmlHelpFrame::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_WarpPointer(int, int)");
		}
		self->wxHtmlHelpFrame::WarpPointer(x, y);

		return 0;
	}

	// void wxHtmlHelpFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxHtmlHelpFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHtmlHelpFrame::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxHtmlHelpFrame::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_HasMultiplePages() const function, expected prototype:\nbool wxHtmlHelpFrame::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_HasMultiplePages() const");
		}
		bool lret = self->wxHtmlHelpFrame::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_InheritAttributes() function, expected prototype:\nvoid wxHtmlHelpFrame::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_InheritAttributes()");
		}
		self->wxHtmlHelpFrame::InheritAttributes();

		return 0;
	}

	// void wxHtmlHelpFrame::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_InitDialog() function, expected prototype:\nvoid wxHtmlHelpFrame::base_InitDialog()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_InitDialog()");
		}
		self->wxHtmlHelpFrame::InitDialog();

		return 0;
	}

	// bool wxHtmlHelpFrame::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsRetained() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsRetained() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsRetained() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsTopLevel() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsTopLevel() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_MakeModal(bool)");
		}
		self->wxHtmlHelpFrame::MakeModal(modal);

		return 0;
	}

	// void wxHtmlHelpFrame::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_OnInternalIdle() function, expected prototype:\nvoid wxHtmlHelpFrame::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_OnInternalIdle()");
		}
		self->wxHtmlHelpFrame::OnInternalIdle();

		return 0;
	}

	// bool wxHtmlHelpFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxHtmlHelpFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxHtmlHelpFrame::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxHtmlHelpFrame::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxHtmlHelpFrame::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxHtmlHelpFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_UpdateWindowUI(long)");
		}
		self->wxHtmlHelpFrame::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_CanSetTransparent() function, expected prototype:\nbool wxHtmlHelpFrame::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_CanSetTransparent()");
		}
		bool lret = self->wxHtmlHelpFrame::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxHtmlHelpFrame::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_EnableCloseButton(bool)");
		}
		bool lret = self->wxHtmlHelpFrame::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlHelpFrame::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpFrame::base_GetTitle() const function, expected prototype:\nwxString wxHtmlHelpFrame::base_GetTitle() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpFrame::base_GetTitle() const");
		}
		wxString lret = self->wxHtmlHelpFrame::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlHelpFrame::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Iconize(bool)");
		}
		self->wxHtmlHelpFrame::Iconize(iconize);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsActive() function, expected prototype:\nbool wxHtmlHelpFrame::base_IsActive()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsActive()");
		}
		bool lret = self->wxHtmlHelpFrame::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsAlwaysMaximized() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsFullScreen() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsFullScreen() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsFullScreen() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsIconized() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsIconized() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsIconized() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_IsMaximized() const function, expected prototype:\nbool wxHtmlHelpFrame::base_IsMaximized() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_IsMaximized() const");
		}
		bool lret = self->wxHtmlHelpFrame::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_Layout() function, expected prototype:\nbool wxHtmlHelpFrame::base_Layout()\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_Layout()");
		}
		bool lret = self->wxHtmlHelpFrame::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxHtmlHelpFrame::base_Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_Maximize(bool)");
		}
		self->wxHtmlHelpFrame::Maximize(maximize);

		return 0;
	}

	// void wxHtmlHelpFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxHtmlHelpFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_RequestUserAttention(int)");
		}
		self->wxHtmlHelpFrame::RequestUserAttention(flags);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxHtmlHelpFrame::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetIcons(const wxIconBundle &)");
		}
		self->wxHtmlHelpFrame::SetIcons(icons);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetMaxSize(const wxSize &)");
		}
		self->wxHtmlHelpFrame::SetMaxSize(size);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpFrame::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetMinSize(const wxSize &)");
		}
		self->wxHtmlHelpFrame::SetMinSize(size);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxHtmlHelpFrame::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxHtmlHelpFrame::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxHtmlHelpFrame::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxHtmlHelpFrame::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxHtmlHelpFrame::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxHtmlHelpFrame::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxHtmlHelpFrame::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetTitle(const wxString &)");
		}
		self->wxHtmlHelpFrame::SetTitle(title);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxHtmlHelpFrame::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxHtmlHelpFrame::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxHtmlHelpFrame::base_ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ShouldPreventAppExit() const");
		}
		bool lret = self->wxHtmlHelpFrame::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpFrame::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxHtmlHelpFrame::base_OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_OSXSetModified(bool)");
		}
		self->wxHtmlHelpFrame::OSXSetModified(modified);

		return 0;
	}

	// bool wxHtmlHelpFrame::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_OSXIsModified() const function, expected prototype:\nbool wxHtmlHelpFrame::base_OSXIsModified() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_OSXIsModified() const");
		}
		bool lret = self->wxHtmlHelpFrame::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxHtmlHelpFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::base_ShowFullScreen(bool, long)");
		}
		bool lret = self->wxHtmlHelpFrame::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxStatusBar * wxHtmlHelpFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	static int _bind_base_CreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxHtmlHelpFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) function, expected prototype:\nwxStatusBar * wxHtmlHelpFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		long style=luatop>2 ? (long)lua_tointeger(L,3) : wxSTB_DEFAULT_STYLE;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxHtmlHelpFrame::base_CreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->wxHtmlHelpFrame::CreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxHtmlHelpFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	static int _bind_base_CreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxHtmlHelpFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar * wxHtmlHelpFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tointeger(L,2) : ::wxBORDER_NONE | ::wxTB_HORIZONTAL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxHtmlHelpFrame::base_CreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->wxHtmlHelpFrame::CreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxHtmlHelpFrame::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxHtmlHelpFrame::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxHtmlHelpFrame::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxHtmlHelpFrame::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxHtmlHelpFrame::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxMenuBar * wxHtmlHelpFrame::base_GetMenuBar() const
	static int _bind_base_GetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxHtmlHelpFrame::base_GetMenuBar() const function, expected prototype:\nwxMenuBar * wxHtmlHelpFrame::base_GetMenuBar() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenuBar * wxHtmlHelpFrame::base_GetMenuBar() const");
		}
		wxMenuBar * lret = self->wxHtmlHelpFrame::GetMenuBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxHtmlHelpFrame::base_GetStatusBar() const
	static int _bind_base_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxHtmlHelpFrame::base_GetStatusBar() const function, expected prototype:\nwxStatusBar * wxHtmlHelpFrame::base_GetStatusBar() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxHtmlHelpFrame::base_GetStatusBar() const");
		}
		wxStatusBar * lret = self->wxHtmlHelpFrame::GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxHtmlHelpFrame::base_GetToolBar() const
	static int _bind_base_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxHtmlHelpFrame::base_GetToolBar() const function, expected prototype:\nwxToolBar * wxHtmlHelpFrame::base_GetToolBar() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxHtmlHelpFrame::base_GetToolBar() const");
		}
		wxToolBar * lret = self->wxHtmlHelpFrame::GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxHtmlHelpFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)
	static int _bind_base_OnCreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxHtmlHelpFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name) function, expected prototype:\nwxStatusBar * wxHtmlHelpFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int number=(int)lua_tointeger(L,2);
		long style=(long)lua_tointeger(L,3);
		int id=(int)lua_tointeger(L,4);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxHtmlHelpFrame::base_OnCreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->wxHtmlHelpFrame::OnCreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxHtmlHelpFrame::base_OnCreateToolBar(long style, int id, const wxString & name)
	static int _bind_base_OnCreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxHtmlHelpFrame::base_OnCreateToolBar(long style, int id, const wxString & name) function, expected prototype:\nwxToolBar * wxHtmlHelpFrame::base_OnCreateToolBar(long style, int id, const wxString & name)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long style=(long)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxHtmlHelpFrame::base_OnCreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->wxHtmlHelpFrame::OnCreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpFrame::base_SetMenuBar(wxMenuBar * menuBar)
	static int _bind_base_SetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_SetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetMenuBar(wxMenuBar * menuBar) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetMenuBar(wxMenuBar * menuBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenuBar* menuBar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetMenuBar(wxMenuBar *)");
		}
		self->wxHtmlHelpFrame::SetMenuBar(menuBar);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetStatusBar(wxStatusBar * statusBar)
	static int _bind_base_SetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetStatusBar(wxStatusBar * statusBar) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetStatusBar(wxStatusBar * statusBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStatusBar* statusBar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetStatusBar(wxStatusBar *)");
		}
		self->wxHtmlHelpFrame::SetStatusBar(statusBar);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetStatusText(const wxString & text, int number = 0)
	static int _bind_base_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetStatusText(const wxString &, int)");
		}
		self->wxHtmlHelpFrame::SetStatusText(text, number);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetStatusWidths(int n, const int * widths_field)
	static int _bind_base_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusWidths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int widths_field=(int)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetStatusWidths(int, const int *)");
		}
		self->wxHtmlHelpFrame::SetStatusWidths(n, &widths_field);

		return 0;
	}

	// void wxHtmlHelpFrame::base_SetToolBar(wxToolBar * toolBar)
	static int _bind_base_SetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_SetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_SetToolBar(wxToolBar * toolBar) function, expected prototype:\nvoid wxHtmlHelpFrame::base_SetToolBar(wxToolBar * toolBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_SetToolBar(wxToolBar *)");
		}
		self->wxHtmlHelpFrame::SetToolBar(toolBar);

		return 0;
	}

	// void wxHtmlHelpFrame::base_AddToolbarButtons(wxToolBar * toolBar, int style)
	static int _bind_base_AddToolbarButtons(lua_State *L) {
		if (!_lg_typecheck_base_AddToolbarButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::base_AddToolbarButtons(wxToolBar * toolBar, int style) function, expected prototype:\nvoid wxHtmlHelpFrame::base_AddToolbarButtons(wxToolBar * toolBar, int style)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));
		int style=(int)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=Luna< wxObject >::checkSubType< wxHtmlHelpFrame >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::base_AddToolbarButtons(wxToolBar *, int)");
		}
		self->wxHtmlHelpFrame::AddToolbarButtons(toolBar, style);

		return 0;
	}


	// Operator binds:

};

wxHtmlHelpFrame* LunaTraits< wxHtmlHelpFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpFrame::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxHtmlHelpFrame >::_bind_dtor(wxHtmlHelpFrame* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpFrame >::className[] = "wxHtmlHelpFrame";
const char LunaTraits< wxHtmlHelpFrame >::fullName[] = "wxHtmlHelpFrame";
const char LunaTraits< wxHtmlHelpFrame >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxHtmlHelpFrame >::hash = 66698628;
const int LunaTraits< wxHtmlHelpFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHtmlHelpFrame >::methods[] = {
	{"AddToolbarButtons", &luna_wrapper_wxHtmlHelpFrame::_bind_AddToolbarButtons},
	{"Create", &luna_wrapper_wxHtmlHelpFrame::_bind_Create},
	{"GetController", &luna_wrapper_wxHtmlHelpFrame::_bind_GetController},
	{"SetController", &luna_wrapper_wxHtmlHelpFrame::_bind_SetController},
	{"SetTitleFormat", &luna_wrapper_wxHtmlHelpFrame::_bind_SetTitleFormat},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxHtmlHelpFrame::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxHtmlHelpFrame::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxHtmlHelpFrame::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxHtmlHelpFrame::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetMinClientSize},
	{"base_ClearBackground", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxHtmlHelpFrame::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxHtmlHelpFrame::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxHtmlHelpFrame::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxHtmlHelpFrame::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxHtmlHelpFrame::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxHtmlHelpFrame::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxHtmlHelpFrame::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxHtmlHelpFrame::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxHtmlHelpFrame::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxHtmlHelpFrame::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxHtmlHelpFrame::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxHtmlHelpFrame::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxHtmlHelpFrame::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxHtmlHelpFrame::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxHtmlHelpFrame::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxHtmlHelpFrame::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetTitle},
	{"base_Iconize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Iconize},
	{"base_IsActive", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsFullScreen},
	{"base_IsIconized", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsIconized},
	{"base_IsMaximized", &luna_wrapper_wxHtmlHelpFrame::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxHtmlHelpFrame::_bind_base_RequestUserAttention},
	{"base_SetIcons", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetIcons},
	{"base_SetMaxSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxHtmlHelpFrame::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxHtmlHelpFrame::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxHtmlHelpFrame::_bind_base_ShowFullScreen},
	{"base_CreateStatusBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_CreateStatusBar},
	{"base_CreateToolBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_CreateToolBar},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetClientAreaOrigin},
	{"base_GetMenuBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetMenuBar},
	{"base_GetStatusBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetStatusBar},
	{"base_GetToolBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_GetToolBar},
	{"base_OnCreateStatusBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_OnCreateStatusBar},
	{"base_OnCreateToolBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_OnCreateToolBar},
	{"base_SetMenuBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetMenuBar},
	{"base_SetStatusBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetStatusBar},
	{"base_SetStatusText", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetStatusText},
	{"base_SetStatusWidths", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetStatusWidths},
	{"base_SetToolBar", &luna_wrapper_wxHtmlHelpFrame::_bind_base_SetToolBar},
	{"base_AddToolbarButtons", &luna_wrapper_wxHtmlHelpFrame::_bind_base_AddToolbarButtons},
	{"__eq", &luna_wrapper_wxHtmlHelpFrame::_bind___eq},
	{"getTable", &luna_wrapper_wxHtmlHelpFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpFrame >::enumValues[] = {
	{0,0}
};


