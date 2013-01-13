#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMediaCtrl.h>

class luna_wrapper_wxMediaCtrl {
public:
	typedef Luna< wxMediaCtrl > luna_t;

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
		//wxMediaCtrl* ptr= dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		wxMediaCtrl* ptr= luna_caster< wxObject, wxMediaCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMediaCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,8))) ) return false;
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
		if( luatop<3 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Load_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxURI >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Load_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxURI >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxURI >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadURI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadURIWithProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Seek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPlaybackRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPlayerControls(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Tell(lua_State *L) {
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
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
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
	// wxMediaCtrl::wxMediaCtrl()
	static wxMediaCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl() function, expected prototype:\nwxMediaCtrl::wxMediaCtrl()\nClass arguments details:\n");
		}


		return new wxMediaCtrl();
	}

	// wxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl")
	static wxMediaCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\") function, expected prototype:\nwxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString fileName(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString szBackend(lua_tostring(L,7),lua_objlen(L,7));
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxMediaCtrl(parent, id, fileName, pos, size, style, szBackend, validator, name);
	}

	// wxMediaCtrl::wxMediaCtrl(lua_Table * data)
	static wxMediaCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl(lua_Table * data) function, expected prototype:\nwxMediaCtrl::wxMediaCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxMediaCtrl(L,NULL);
	}

	// wxMediaCtrl::wxMediaCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl")
	static wxMediaCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\") function, expected prototype:\nwxMediaCtrl::wxMediaCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\")\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString fileName(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString szBackend(lua_tostring(L,8),lua_objlen(L,8));
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxMediaCtrl(L,NULL, parent, id, fileName, pos, size, style, szBackend, validator, name);
	}

	// Overload binder for wxMediaCtrl::wxMediaCtrl
	static wxMediaCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxMediaCtrl, cannot match any of the overloads for function wxMediaCtrl:\n  wxMediaCtrl()\n  wxMediaCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, const wxValidator &, const wxString &)\n  wxMediaCtrl(lua_Table *)\n  wxMediaCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\") function, expected prototype:\nbool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString fileName(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMediaCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString szBackend(lua_tostring(L,8),lua_objlen(L,8));
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, const wxValidator &, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Create(parent, id, fileName, pos, size, style, szBackend, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxMediaCtrl::GetBestSize() const
	static int _bind_GetBestSize(lua_State *L) {
		if (!_lg_typecheck_GetBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::GetBestSize() const function, expected prototype:\nwxSize wxMediaCtrl::GetBestSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::GetBestSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->GetBestSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxMediaState wxMediaCtrl::GetState()
	static int _bind_GetState(lua_State *L) {
		if (!_lg_typecheck_GetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaState wxMediaCtrl::GetState() function, expected prototype:\nwxMediaState wxMediaCtrl::GetState()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMediaState wxMediaCtrl::GetState(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxMediaState lret = self->GetState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMediaCtrl::GetVolume()
	static int _bind_GetVolume(lua_State *L) {
		if (!_lg_typecheck_GetVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMediaCtrl::GetVolume() function, expected prototype:\ndouble wxMediaCtrl::GetVolume()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMediaCtrl::GetVolume(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		double lret = self->GetVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxMediaCtrl::Length()
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMediaCtrl::Length() function, expected prototype:\nlong long wxMediaCtrl::Length()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMediaCtrl::Length(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxString & fileName)
	static int _bind_Load_overload_1(lua_State *L) {
		if (!_lg_typecheck_Load_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxString & fileName) function, expected prototype:\nbool wxMediaCtrl::Load(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Load(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxURI & uri)
	static int _bind_Load_overload_2(lua_State *L) {
		if (!_lg_typecheck_Load_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxURI & uri) function, expected prototype:\nbool wxMediaCtrl::Load(const wxURI & uri)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxURI* uri_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,2));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxMediaCtrl::Load function");
		}
		const wxURI & uri=*uri_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxURI &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Load(uri);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy)
	static int _bind_Load_overload_3(lua_State *L) {
		if (!_lg_typecheck_Load_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy) function, expected prototype:\nbool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxURI* uri_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,2));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxMediaCtrl::Load function");
		}
		const wxURI & uri=*uri_ptr;
		const wxURI* proxy_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,3));
		if( !proxy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proxy in wxMediaCtrl::Load function");
		}
		const wxURI & proxy=*proxy_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxURI &, const wxURI &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Load(uri, proxy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMediaCtrl::Load
	static int _bind_Load(lua_State *L) {
		if (_lg_typecheck_Load_overload_1(L)) return _bind_Load_overload_1(L);
		if (_lg_typecheck_Load_overload_2(L)) return _bind_Load_overload_2(L);
		if (_lg_typecheck_Load_overload_3(L)) return _bind_Load_overload_3(L);

		luaL_error(L, "error in function Load, cannot match any of the overloads for function Load:\n  Load(const wxString &)\n  Load(const wxURI &)\n  Load(const wxURI &, const wxURI &)\n");
		return 0;
	}

	// bool wxMediaCtrl::LoadURI(const wxString & fileName)
	static int _bind_LoadURI(lua_State *L) {
		if (!_lg_typecheck_LoadURI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::LoadURI(const wxString & fileName) function, expected prototype:\nbool wxMediaCtrl::LoadURI(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::LoadURI(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->LoadURI(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy)
	static int _bind_LoadURIWithProxy(lua_State *L) {
		if (!_lg_typecheck_LoadURIWithProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy) function, expected prototype:\nbool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));
		wxString proxy(lua_tostring(L,3),lua_objlen(L,3));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::LoadURIWithProxy(const wxString &, const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->LoadURIWithProxy(fileName, proxy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Pause()
	static int _bind_Pause(lua_State *L) {
		if (!_lg_typecheck_Pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Pause() function, expected prototype:\nbool wxMediaCtrl::Pause()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Pause(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Pause();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Play()
	static int _bind_Play(lua_State *L) {
		if (!_lg_typecheck_Play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Play() function, expected prototype:\nbool wxMediaCtrl::Play()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Play(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Play();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxMediaCtrl::Seek(long long where, wxSeekMode mode = ::wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMediaCtrl::Seek(long long where, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxMediaCtrl::Seek(long long where, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long where=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMediaCtrl::Seek(long long, wxSeekMode). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->Seek(where, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMediaCtrl::SetPlaybackRate(double dRate)
	static int _bind_SetPlaybackRate(lua_State *L) {
		if (!_lg_typecheck_SetPlaybackRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::SetPlaybackRate(double dRate) function, expected prototype:\nbool wxMediaCtrl::SetPlaybackRate(double dRate)\nClass arguments details:\n");
		}

		double dRate=(double)lua_tonumber(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::SetPlaybackRate(double). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->SetPlaybackRate(dRate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::SetVolume(double dVolume)
	static int _bind_SetVolume(lua_State *L) {
		if (!_lg_typecheck_SetVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::SetVolume(double dVolume) function, expected prototype:\nbool wxMediaCtrl::SetVolume(double dVolume)\nClass arguments details:\n");
		}

		double dVolume=(double)lua_tonumber(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::SetVolume(double). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->SetVolume(dVolume);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = ::wxMEDIACTRLPLAYERCONTROLS_DEFAULT)
	static int _bind_ShowPlayerControls(lua_State *L) {
		if (!_lg_typecheck_ShowPlayerControls(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = ::wxMEDIACTRLPLAYERCONTROLS_DEFAULT) function, expected prototype:\nbool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = ::wxMEDIACTRLPLAYERCONTROLS_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxMediaCtrlPlayerControls flags=luatop>1 ? (wxMediaCtrlPlayerControls)lua_tointeger(L,2) : ::wxMEDIACTRLPLAYERCONTROLS_DEFAULT;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->ShowPlayerControls(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Stop() function, expected prototype:\nbool wxMediaCtrl::Stop()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Stop(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Stop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxMediaCtrl::Tell()
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMediaCtrl::Tell() function, expected prototype:\nlong long wxMediaCtrl::Tell()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMediaCtrl::Tell(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxMediaCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMediaCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMediaCtrl::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMediaCtrl::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxMediaCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxMediaCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxMediaCtrl::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_AcceptsFocus() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxMediaCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxMediaCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_AcceptsFocusRecursively() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_HasFocus() const function, expected prototype:\nbool wxMediaCtrl::base_HasFocus() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_HasFocus() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxMediaCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetCanFocus(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxMediaCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetFocus() function, expected prototype:\nvoid wxMediaCtrl::base_SetFocus()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetFocus(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetFocus();

		return 0;
	}

	// void wxMediaCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxMediaCtrl::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetFocusFromKbd(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxMediaCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxMediaCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_AddChild(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::AddChild(child);

		return 0;
	}

	// void wxMediaCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxMediaCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_RemoveChild(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxMediaCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxMediaCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Reparent(wxWindow *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxMediaCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxMediaCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMediaCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxMediaCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMediaCtrl::base_GetScrollPos(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxMediaCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMediaCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMediaCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxMediaCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMediaCtrl::base_GetScrollRange(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxMediaCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMediaCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMediaCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxMediaCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMediaCtrl::base_GetScrollThumb(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxMediaCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMediaCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxMediaCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxMediaCtrl::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_ScrollLines(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxMediaCtrl::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_ScrollPages(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMediaCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxMediaCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxMediaCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetScrollPos(int, int, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxMediaCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxMediaCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxMediaCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxMediaCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxMediaCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxMediaCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Fit() function, expected prototype:\nvoid wxMediaCtrl::base_Fit()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Fit(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Fit();

		return 0;
	}

	// void wxMediaCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_FitInside() function, expected prototype:\nvoid wxMediaCtrl::base_FitInside()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_FitInside(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::FitInside();

		return 0;
	}

	// wxSize wxMediaCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetEffectiveMinSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetMaxClientSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetMaxSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetMinClientSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetMinSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetBestVirtualSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMediaCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxMediaCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::base_GetWindowBorderSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSize stack_lret = self->wxMediaCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxMediaCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxMediaCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_InformFirstDirection(int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxMediaCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SendSizeEvent(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxMediaCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxMediaCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxMediaCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxMediaCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetMaxSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxMediaCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxMediaCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxMediaCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxMediaCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetMinSize(const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetMinSize(size);

		return 0;
	}

	// void wxMediaCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxMediaCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxMediaCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxMediaCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxMediaCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxMediaCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxMediaCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxMediaCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxMediaCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxMediaCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxMediaCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxMediaCtrl::base_GetClientAreaOrigin() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxPoint stack_lret = self->wxMediaCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxMediaCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_ClearBackground() function, expected prototype:\nvoid wxMediaCtrl::base_ClearBackground()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_ClearBackground(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxMediaCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxMediaCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxMediaCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxMediaCtrl::base_GetBackgroundStyle() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxBackgroundStyle lret = self->wxMediaCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMediaCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMediaCtrl::base_GetCharHeight() const function, expected prototype:\nint wxMediaCtrl::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMediaCtrl::base_GetCharHeight() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxMediaCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMediaCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMediaCtrl::base_GetCharWidth() const function, expected prototype:\nint wxMediaCtrl::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMediaCtrl::base_GetCharWidth() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxMediaCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxMediaCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxMediaCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxMediaCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxMediaCtrl::base_GetDefaultAttributes() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxVisualAttributes stack_lret = self->wxMediaCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxMediaCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMediaCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Refresh(bool, const wxRect *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxMediaCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Update() function, expected prototype:\nvoid wxMediaCtrl::base_Update()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Update(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Update();

		return 0;
	}

	// bool wxMediaCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxMediaCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxMediaCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxMediaCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_SetFont(const wxFont &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxMediaCtrl::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_ShouldInheritColours() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxMediaCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetThemeEnabled(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxMediaCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxMediaCtrl::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_GetThemeEnabled() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxMediaCtrl::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_CanSetTransparent(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxMediaCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_SetTransparent(unsigned char). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMediaCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxMediaCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMediaCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxMediaCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMediaCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxMediaCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMediaCtrl::base_GetWindowStyleFlag() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long lret = self->wxMediaCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMediaCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxMediaCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetExtraStyle(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxMediaCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxMediaCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetWindowStyleFlag(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxMediaCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Lower() function, expected prototype:\nvoid wxMediaCtrl::base_Lower()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Lower(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Lower();

		return 0;
	}

	// void wxMediaCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Raise() function, expected prototype:\nvoid wxMediaCtrl::base_Raise()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Raise(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Raise();

		return 0;
	}

	// bool wxMediaCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMediaCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_IsShown() const function, expected prototype:\nbool wxMediaCtrl::base_IsShown() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_IsShown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxMediaCtrl::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_IsShownOnScreen() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxMediaCtrl::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Enable(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxMediaCtrl::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Show(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMediaCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMediaCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMediaCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxMediaCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxMediaCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMediaCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxMediaCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxMediaCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxMediaCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxMediaCtrl::base_GetValidator()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxMediaCtrl::base_GetValidator(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxValidator * lret = self->wxMediaCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxMediaCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxMediaCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetValidator(const wxValidator &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxMediaCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxMediaCtrl::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_TransferDataFromWindow(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxMediaCtrl::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_TransferDataToWindow(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Validate() function, expected prototype:\nbool wxMediaCtrl::base_Validate()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Validate(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxMediaCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxMediaCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxMediaCtrl::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxMediaCtrl::base_GetLayoutDirection() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxLayoutDirection lret = self->wxMediaCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMediaCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMediaCtrl::base_GetName() const function, expected prototype:\nwxString wxMediaCtrl::base_GetName() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMediaCtrl::base_GetName() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxMediaCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMediaCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxMediaCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxMediaCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxMediaCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetName(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetName(name);

		return 0;
	}

	// void wxMediaCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxMediaCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxMediaCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxMediaCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Destroy() function, expected prototype:\nbool wxMediaCtrl::base_Destroy()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Destroy(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxMediaCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxMediaCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxMediaCtrl::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxMediaCtrl::base_GetDropTarget() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxDropTarget * lret = self->wxMediaCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxMediaCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxMediaCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxMediaCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxMediaCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_DragAcceptFiles(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxMediaCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_Layout() function, expected prototype:\nbool wxMediaCtrl::base_Layout()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_Layout(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_HasCapture() const function, expected prototype:\nbool wxMediaCtrl::base_HasCapture() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_HasCapture() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxMediaCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxMediaCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_SetCursor(const wxCursor &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxMediaCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_WarpPointer(int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxMediaCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxMediaCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMediaCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxMediaCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxMediaCtrl::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_HasMultiplePages() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxMediaCtrl::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_InheritAttributes(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::InheritAttributes();

		return 0;
	}

	// void wxMediaCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_InitDialog() function, expected prototype:\nvoid wxMediaCtrl::base_InitDialog()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_InitDialog(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::InitDialog();

		return 0;
	}

	// bool wxMediaCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_IsRetained() const function, expected prototype:\nbool wxMediaCtrl::base_IsRetained() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_IsRetained() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxMediaCtrl::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_IsTopLevel() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxMediaCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_MakeModal(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::MakeModal(modal);

		return 0;
	}

	// void wxMediaCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxMediaCtrl::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_OnInternalIdle(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxMediaCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxMediaCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_RegisterHotKey(int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxMediaCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::base_UnregisterHotKey(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxMediaCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMediaCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxMediaCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_UpdateWindowUI(long). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxMediaCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxMediaCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMediaCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_Command(wxCommandEvent &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::Command(event);

		return 0;
	}

	// wxString wxMediaCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMediaCtrl::base_GetLabel() const function, expected prototype:\nwxString wxMediaCtrl::base_GetLabel() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMediaCtrl::base_GetLabel() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->wxMediaCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMediaCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMediaCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxMediaCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=Luna< wxObject >::checkSubType< wxMediaCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMediaCtrl::base_SetLabel(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxMediaCtrl::SetLabel(label);

		return 0;
	}


	// Operator binds:

};

wxMediaCtrl* LunaTraits< wxMediaCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMediaCtrl::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxMediaCtrl >::_bind_dtor(wxMediaCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxMediaCtrl >::className[] = "wxMediaCtrl";
const char LunaTraits< wxMediaCtrl >::fullName[] = "wxMediaCtrl";
const char LunaTraits< wxMediaCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxMediaCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxMediaCtrl >::hash = 76944987;
const int LunaTraits< wxMediaCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMediaCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxMediaCtrl::_bind_Create},
	{"GetBestSize", &luna_wrapper_wxMediaCtrl::_bind_GetBestSize},
	{"GetState", &luna_wrapper_wxMediaCtrl::_bind_GetState},
	{"GetVolume", &luna_wrapper_wxMediaCtrl::_bind_GetVolume},
	{"Length", &luna_wrapper_wxMediaCtrl::_bind_Length},
	{"Load", &luna_wrapper_wxMediaCtrl::_bind_Load},
	{"LoadURI", &luna_wrapper_wxMediaCtrl::_bind_LoadURI},
	{"LoadURIWithProxy", &luna_wrapper_wxMediaCtrl::_bind_LoadURIWithProxy},
	{"Pause", &luna_wrapper_wxMediaCtrl::_bind_Pause},
	{"Play", &luna_wrapper_wxMediaCtrl::_bind_Play},
	{"Seek", &luna_wrapper_wxMediaCtrl::_bind_Seek},
	{"SetPlaybackRate", &luna_wrapper_wxMediaCtrl::_bind_SetPlaybackRate},
	{"SetVolume", &luna_wrapper_wxMediaCtrl::_bind_SetVolume},
	{"ShowPlayerControls", &luna_wrapper_wxMediaCtrl::_bind_ShowPlayerControls},
	{"Stop", &luna_wrapper_wxMediaCtrl::_bind_Stop},
	{"Tell", &luna_wrapper_wxMediaCtrl::_bind_Tell},
	{"base_GetClassInfo", &luna_wrapper_wxMediaCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxMediaCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxMediaCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxMediaCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxMediaCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxMediaCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxMediaCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxMediaCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxMediaCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxMediaCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxMediaCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxMediaCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxMediaCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxMediaCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxMediaCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxMediaCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxMediaCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxMediaCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxMediaCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxMediaCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxMediaCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxMediaCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxMediaCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxMediaCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxMediaCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxMediaCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxMediaCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxMediaCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxMediaCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxMediaCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxMediaCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxMediaCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxMediaCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxMediaCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxMediaCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxMediaCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxMediaCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxMediaCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxMediaCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxMediaCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxMediaCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxMediaCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxMediaCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxMediaCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxMediaCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxMediaCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxMediaCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxMediaCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxMediaCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMediaCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxMediaCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxMediaCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxMediaCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxMediaCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxMediaCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxMediaCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxMediaCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxMediaCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxMediaCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxMediaCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxMediaCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxMediaCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxMediaCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxMediaCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxMediaCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxMediaCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxMediaCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxMediaCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxMediaCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxMediaCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxMediaCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxMediaCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxMediaCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxMediaCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxMediaCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxMediaCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxMediaCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxMediaCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxMediaCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxMediaCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxMediaCtrl::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxMediaCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxMediaCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxMediaCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxMediaCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxMediaCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxMediaCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxMediaCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxMediaCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxMediaCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxMediaCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxMediaCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxMediaCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxMediaCtrl::_bind_base_SetLabel},
	{"__eq", &luna_wrapper_wxMediaCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxMediaCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMediaCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxMediaCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMediaCtrl >::enumValues[] = {
	{0,0}
};


