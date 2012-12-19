#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiToolBar.h>

class luna_wrapper_wxAuiToolBar {
public:
	typedef Luna< wxAuiToolBar > luna_t;

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
		//wxAuiToolBar* ptr= dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
		wxAuiToolBar* ptr= luna_caster< wxObject, wxAuiToolBar >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiToolBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19206291)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5))) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( lua_isstring(L,8)==0 ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,56813631)) ) return false;
		if( (lua_isnil(L,9)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,9)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,6)) ) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindToolByPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindToolByIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearTools(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteByIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolFits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolFitsByIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolBarFits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOverflowVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOverflowVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGripperVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGripperVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolToggled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolDropDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolDropDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBorderPadding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolBorderPadding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolProportion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolSticky(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSticky(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCustomOverflowItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29562974) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,29562974) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHintSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsPaneValid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42930508) ) return false;
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

	inline static bool _lg_typecheck_base_SetExtraStyle(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE)
	static wxAuiToolBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE) function, expected prototype:\nwxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		const wxPoint* position_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in wxAuiToolBar::wxAuiToolBar function");
		}
		const wxPoint & position=luatop>2 ? *position_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::wxAuiToolBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : ::wxAUI_TB_DEFAULT_STYLE;

		return new wxAuiToolBar(parent, id, position, size, style);
	}

	// wxAuiToolBar::wxAuiToolBar(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE)
	static wxAuiToolBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBar::wxAuiToolBar(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE) function, expected prototype:\nwxAuiToolBar::wxAuiToolBar(lua_Table * data, wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_TB_DEFAULT_STYLE)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		const wxPoint* position_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in wxAuiToolBar::wxAuiToolBar function");
		}
		const wxPoint & position=luatop>3 ? *position_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::wxAuiToolBar function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : ::wxAUI_TB_DEFAULT_STYLE;

		return new wrapper_wxAuiToolBar(L,NULL, parent, id, position, size, style);
	}

	// Overload binder for wxAuiToolBar::wxAuiToolBar
	static wxAuiToolBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAuiToolBar, cannot match any of the overloads for function wxAuiToolBar:\n  wxAuiToolBar(wxWindow *, int, const wxPoint &, const wxSize &, long)\n  wxAuiToolBar(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// void wxAuiToolBar::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxAuiToolBar::SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetWindowStyleFlag(long)");
		}
		self->SetWindowStyleFlag(style);

		return 0;
	}

	// long wxAuiToolBar::GetWindowStyleFlag() const
	static int _bind_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxAuiToolBar::GetWindowStyleFlag() const function, expected prototype:\nlong wxAuiToolBar::GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxAuiToolBar::GetWindowStyleFlag() const");
		}
		long lret = self->GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetArtProvider(wxAuiToolBarArt * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetArtProvider(wxAuiToolBarArt * art) function, expected prototype:\nvoid wxAuiToolBar::SetArtProvider(wxAuiToolBarArt * art)\nClass arguments details:\narg 1 ID = 19206291\n");
		}

		wxAuiToolBarArt* art=(Luna< wxAuiToolBarArt >::check(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetArtProvider(wxAuiToolBarArt *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// wxAuiToolBarArt * wxAuiToolBar::GetArtProvider() const
	static int _bind_GetArtProvider(lua_State *L) {
		if (!_lg_typecheck_GetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarArt * wxAuiToolBar::GetArtProvider() const function, expected prototype:\nwxAuiToolBarArt * wxAuiToolBar::GetArtProvider() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarArt * wxAuiToolBar::GetArtProvider() const");
		}
		wxAuiToolBarArt * lret = self->GetArtProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarArt >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiToolBar::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::SetFont(const wxFont & font) function, expected prototype:\nbool wxAuiToolBar::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiToolBar::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::SetFont(const wxFont &)");
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)
	static int _bind_AddTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString short_help_string(lua_tostring(L,5),lua_objlen(L,5));
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : ::wxITEM_NORMAL;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind)");
		}
		wxAuiToolBarItem * lret = self->AddTool(tool_id, label, bitmap, short_help_string, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, wxItemKind kind, const wxString & short_help_string, const wxString & long_help_string, wxObject * client_data)
	static int _bind_AddTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, wxItemKind kind, const wxString & short_help_string, const wxString & long_help_string, wxObject * client_data) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, wxItemKind kind, const wxString & short_help_string, const wxString & long_help_string, wxObject * client_data)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 56813631\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* disabled_bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,5));
		if( !disabled_bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg disabled_bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & disabled_bitmap=*disabled_bitmap_ptr;
		wxItemKind kind=(wxItemKind)lua_tointeger(L,6);
		wxString short_help_string(lua_tostring(L,7),lua_objlen(L,7));
		wxString long_help_string(lua_tostring(L,8),lua_objlen(L,8));
		wxObject* client_data=(Luna< wxObject >::check(L,9));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *)");
		}
		wxAuiToolBarItem * lret = self->AddTool(tool_id, label, bitmap, disabled_bitmap, kind, short_help_string, long_help_string, client_data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, bool toggle = false, wxObject * client_data = NULL, const wxString & short_help_string = wxEmptyString, const wxString & long_help_string = wxEmptyString)
	static int _bind_AddTool_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, bool toggle = false, wxObject * client_data = NULL, const wxString & short_help_string = wxEmptyString, const wxString & long_help_string = wxEmptyString) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & disabled_bitmap, bool toggle = false, wxObject * client_data = NULL, const wxString & short_help_string = wxEmptyString, const wxString & long_help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* disabled_bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !disabled_bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg disabled_bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & disabled_bitmap=*disabled_bitmap_ptr;
		bool toggle=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		wxObject* client_data=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;
		wxString short_help_string(lua_tostring(L,7),lua_objlen(L,7));
		wxString long_help_string(lua_tostring(L,8),lua_objlen(L,8));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddTool(int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &)");
		}
		wxAuiToolBarItem * lret = self->AddTool(tool_id, bitmap, disabled_bitmap, toggle, client_data, short_help_string, long_help_string);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiToolBar::AddTool
	static int _bind_AddTool(lua_State *L) {
		if (_lg_typecheck_AddTool_overload_1(L)) return _bind_AddTool_overload_1(L);
		if (_lg_typecheck_AddTool_overload_2(L)) return _bind_AddTool_overload_2(L);
		if (_lg_typecheck_AddTool_overload_3(L)) return _bind_AddTool_overload_3(L);

		luaL_error(L, "error in function AddTool, cannot match any of the overloads for function AddTool:\n  AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind)\n  AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *)\n  AddTool(int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &)\n");
		return 0;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddLabel(int tool_id, const wxString & label = wxEmptyString, const int width = -1)
	static int _bind_AddLabel(lua_State *L) {
		if (!_lg_typecheck_AddLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddLabel(int tool_id, const wxString & label = wxEmptyString, const int width = -1) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddLabel(int tool_id, const wxString & label = wxEmptyString, const int width = -1)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int width=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddLabel(int, const wxString &, const int)");
		}
		wxAuiToolBarItem * lret = self->AddLabel(tool_id, label, width);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_AddControl(lua_State *L) {
		if (!_lg_typecheck_AddControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxControl* control=(Luna< wxObject >::checkSubType< wxControl >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddControl(wxControl *, const wxString &)");
		}
		wxAuiToolBarItem * lret = self->AddControl(control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddSeparator()
	static int _bind_AddSeparator(lua_State *L) {
		if (!_lg_typecheck_AddSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddSeparator() function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddSeparator()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddSeparator()");
		}
		wxAuiToolBarItem * lret = self->AddSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddSpacer(int pixels)
	static int _bind_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddSpacer(int pixels) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddSpacer(int pixels)\nClass arguments details:\n");
		}

		int pixels=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddSpacer(int)");
		}
		wxAuiToolBarItem * lret = self->AddSpacer(pixels);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddStretchSpacer(int proportion = 1)
	static int _bind_AddStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_AddStretchSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddStretchSpacer(int proportion = 1) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddStretchSpacer(int proportion = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int proportion=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::AddStretchSpacer(int)");
		}
		wxAuiToolBarItem * lret = self->AddStretchSpacer(proportion);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiToolBar::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::Realize() function, expected prototype:\nbool wxAuiToolBar::Realize()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxControl * wxAuiToolBar::FindControl(int window_id)
	static int _bind_FindControl(lua_State *L) {
		if (!_lg_typecheck_FindControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl * wxAuiToolBar::FindControl(int window_id) function, expected prototype:\nwxControl * wxAuiToolBar::FindControl(int window_id)\nClass arguments details:\n");
		}

		int window_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxControl * wxAuiToolBar::FindControl(int)");
		}
		wxControl * lret = self->FindControl(window_id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::FindToolByPosition(int x, int y) const
	static int _bind_FindToolByPosition(lua_State *L) {
		if (!_lg_typecheck_FindToolByPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::FindToolByPosition(int x, int y) const function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::FindToolByPosition(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::FindToolByPosition(int, int) const");
		}
		wxAuiToolBarItem * lret = self->FindToolByPosition(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::FindToolByIndex(int idx) const
	static int _bind_FindToolByIndex(lua_State *L) {
		if (!_lg_typecheck_FindToolByIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::FindToolByIndex(int idx) const function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::FindToolByIndex(int idx) const\nClass arguments details:\n");
		}

		int idx=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::FindToolByIndex(int) const");
		}
		wxAuiToolBarItem * lret = self->FindToolByIndex(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::FindTool(int tool_id) const
	static int _bind_FindTool(lua_State *L) {
		if (!_lg_typecheck_FindTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::FindTool(int tool_id) const function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::FindTool(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarItem * wxAuiToolBar::FindTool(int) const");
		}
		wxAuiToolBarItem * lret = self->FindTool(tool_id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarItem >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBar::ClearTools()
	static int _bind_ClearTools(lua_State *L) {
		if (!_lg_typecheck_ClearTools(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::ClearTools() function, expected prototype:\nvoid wxAuiToolBar::ClearTools()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::ClearTools()");
		}
		self->ClearTools();

		return 0;
	}

	// void wxAuiToolBar::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::Clear() function, expected prototype:\nvoid wxAuiToolBar::Clear()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::Clear()");
		}
		self->Clear();

		return 0;
	}

	// bool wxAuiToolBar::DeleteTool(int tool_id)
	static int _bind_DeleteTool(lua_State *L) {
		if (!_lg_typecheck_DeleteTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::DeleteTool(int tool_id) function, expected prototype:\nbool wxAuiToolBar::DeleteTool(int tool_id)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::DeleteTool(int)");
		}
		bool lret = self->DeleteTool(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::DeleteByIndex(int tool_id)
	static int _bind_DeleteByIndex(lua_State *L) {
		if (!_lg_typecheck_DeleteByIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::DeleteByIndex(int tool_id) function, expected prototype:\nbool wxAuiToolBar::DeleteByIndex(int tool_id)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::DeleteByIndex(int)");
		}
		bool lret = self->DeleteByIndex(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxAuiToolBar::GetToolCount() const
	static int _bind_GetToolCount(lua_State *L) {
		if (!_lg_typecheck_GetToolCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxAuiToolBar::GetToolCount() const function, expected prototype:\nsize_t wxAuiToolBar::GetToolCount() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxAuiToolBar::GetToolCount() const");
		}
		size_t lret = self->GetToolCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::GetToolPos(int tool_id) const
	static int _bind_GetToolPos(lua_State *L) {
		if (!_lg_typecheck_GetToolPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolPos(int tool_id) const function, expected prototype:\nint wxAuiToolBar::GetToolPos(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolPos(int) const");
		}
		int lret = self->GetToolPos(tool_id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::GetToolIndex(int tool_id) const
	static int _bind_GetToolIndex(lua_State *L) {
		if (!_lg_typecheck_GetToolIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolIndex(int tool_id) const function, expected prototype:\nint wxAuiToolBar::GetToolIndex(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolIndex(int) const");
		}
		int lret = self->GetToolIndex(tool_id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiToolBar::GetToolFits(int tool_id) const
	static int _bind_GetToolFits(lua_State *L) {
		if (!_lg_typecheck_GetToolFits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolFits(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolFits(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolFits(int) const");
		}
		bool lret = self->GetToolFits(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRect wxAuiToolBar::GetToolRect(int tool_id) const
	static int _bind_GetToolRect(lua_State *L) {
		if (!_lg_typecheck_GetToolRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxAuiToolBar::GetToolRect(int tool_id) const function, expected prototype:\nwxRect wxAuiToolBar::GetToolRect(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxAuiToolBar::GetToolRect(int) const");
		}
		wxRect stack_lret = self->GetToolRect(tool_id);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiToolBar::GetToolFitsByIndex(int tool_id) const
	static int _bind_GetToolFitsByIndex(lua_State *L) {
		if (!_lg_typecheck_GetToolFitsByIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolFitsByIndex(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolFitsByIndex(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolFitsByIndex(int) const");
		}
		bool lret = self->GetToolFitsByIndex(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::GetToolBarFits() const
	static int _bind_GetToolBarFits(lua_State *L) {
		if (!_lg_typecheck_GetToolBarFits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolBarFits() const function, expected prototype:\nbool wxAuiToolBar::GetToolBarFits() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolBarFits() const");
		}
		bool lret = self->GetToolBarFits();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::SetMargins(const wxSize & size)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetMargins(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::SetMargins(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::SetMargins function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetMargins(const wxSize &)");
		}
		self->SetMargins(size);

		return 0;
	}

	// void wxAuiToolBar::SetMargins(int x, int y)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetMargins(int x, int y) function, expected prototype:\nvoid wxAuiToolBar::SetMargins(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetMargins(int, int)");
		}
		self->SetMargins(x, y);

		return 0;
	}

	// void wxAuiToolBar::SetMargins(int left, int right, int top, int bottom)
	static int _bind_SetMargins_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetMargins(int left, int right, int top, int bottom) function, expected prototype:\nvoid wxAuiToolBar::SetMargins(int left, int right, int top, int bottom)\nClass arguments details:\n");
		}

		int left=(int)lua_tointeger(L,2);
		int right=(int)lua_tointeger(L,3);
		int top=(int)lua_tointeger(L,4);
		int bottom=(int)lua_tointeger(L,5);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetMargins(int, int, int, int)");
		}
		self->SetMargins(left, right, top, bottom);

		return 0;
	}

	// Overload binder for wxAuiToolBar::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);
		if (_lg_typecheck_SetMargins_overload_3(L)) return _bind_SetMargins_overload_3(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(const wxSize &)\n  SetMargins(int, int)\n  SetMargins(int, int, int, int)\n");
		return 0;
	}

	// void wxAuiToolBar::SetToolBitmapSize(const wxSize & size)
	static int _bind_SetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_SetToolBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::SetToolBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::SetToolBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolBitmapSize(const wxSize &)");
		}
		self->SetToolBitmapSize(size);

		return 0;
	}

	// wxSize wxAuiToolBar::GetToolBitmapSize() const
	static int _bind_GetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_GetToolBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::GetToolBitmapSize() const function, expected prototype:\nwxSize wxAuiToolBar::GetToolBitmapSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::GetToolBitmapSize() const");
		}
		wxSize stack_lret = self->GetToolBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiToolBar::GetOverflowVisible() const
	static int _bind_GetOverflowVisible(lua_State *L) {
		if (!_lg_typecheck_GetOverflowVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetOverflowVisible() const function, expected prototype:\nbool wxAuiToolBar::GetOverflowVisible() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetOverflowVisible() const");
		}
		bool lret = self->GetOverflowVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::SetOverflowVisible(bool visible)
	static int _bind_SetOverflowVisible(lua_State *L) {
		if (!_lg_typecheck_SetOverflowVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetOverflowVisible(bool visible) function, expected prototype:\nvoid wxAuiToolBar::SetOverflowVisible(bool visible)\nClass arguments details:\n");
		}

		bool visible=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetOverflowVisible(bool)");
		}
		self->SetOverflowVisible(visible);

		return 0;
	}

	// bool wxAuiToolBar::GetGripperVisible() const
	static int _bind_GetGripperVisible(lua_State *L) {
		if (!_lg_typecheck_GetGripperVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetGripperVisible() const function, expected prototype:\nbool wxAuiToolBar::GetGripperVisible() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetGripperVisible() const");
		}
		bool lret = self->GetGripperVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::SetGripperVisible(bool visible)
	static int _bind_SetGripperVisible(lua_State *L) {
		if (!_lg_typecheck_SetGripperVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetGripperVisible(bool visible) function, expected prototype:\nvoid wxAuiToolBar::SetGripperVisible(bool visible)\nClass arguments details:\n");
		}

		bool visible=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetGripperVisible(bool)");
		}
		self->SetGripperVisible(visible);

		return 0;
	}

	// void wxAuiToolBar::ToggleTool(int tool_id, bool state)
	static int _bind_ToggleTool(lua_State *L) {
		if (!_lg_typecheck_ToggleTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::ToggleTool(int tool_id, bool state) function, expected prototype:\nvoid wxAuiToolBar::ToggleTool(int tool_id, bool state)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		bool state=(bool)(lua_toboolean(L,3)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::ToggleTool(int, bool)");
		}
		self->ToggleTool(tool_id, state);

		return 0;
	}

	// bool wxAuiToolBar::GetToolToggled(int tool_id) const
	static int _bind_GetToolToggled(lua_State *L) {
		if (!_lg_typecheck_GetToolToggled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolToggled(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolToggled(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolToggled(int) const");
		}
		bool lret = self->GetToolToggled(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::EnableTool(int tool_id, bool state)
	static int _bind_EnableTool(lua_State *L) {
		if (!_lg_typecheck_EnableTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::EnableTool(int tool_id, bool state) function, expected prototype:\nvoid wxAuiToolBar::EnableTool(int tool_id, bool state)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		bool state=(bool)(lua_toboolean(L,3)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::EnableTool(int, bool)");
		}
		self->EnableTool(tool_id, state);

		return 0;
	}

	// bool wxAuiToolBar::GetToolEnabled(int tool_id) const
	static int _bind_GetToolEnabled(lua_State *L) {
		if (!_lg_typecheck_GetToolEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolEnabled(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolEnabled(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolEnabled(int) const");
		}
		bool lret = self->GetToolEnabled(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::SetToolDropDown(int tool_id, bool dropdown)
	static int _bind_SetToolDropDown(lua_State *L) {
		if (!_lg_typecheck_SetToolDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolDropDown(int tool_id, bool dropdown) function, expected prototype:\nvoid wxAuiToolBar::SetToolDropDown(int tool_id, bool dropdown)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		bool dropdown=(bool)(lua_toboolean(L,3)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolDropDown(int, bool)");
		}
		self->SetToolDropDown(tool_id, dropdown);

		return 0;
	}

	// bool wxAuiToolBar::GetToolDropDown(int tool_id) const
	static int _bind_GetToolDropDown(lua_State *L) {
		if (!_lg_typecheck_GetToolDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolDropDown(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolDropDown(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolDropDown(int) const");
		}
		bool lret = self->GetToolDropDown(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::SetToolBorderPadding(int padding)
	static int _bind_SetToolBorderPadding(lua_State *L) {
		if (!_lg_typecheck_SetToolBorderPadding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolBorderPadding(int padding) function, expected prototype:\nvoid wxAuiToolBar::SetToolBorderPadding(int padding)\nClass arguments details:\n");
		}

		int padding=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolBorderPadding(int)");
		}
		self->SetToolBorderPadding(padding);

		return 0;
	}

	// int wxAuiToolBar::GetToolBorderPadding() const
	static int _bind_GetToolBorderPadding(lua_State *L) {
		if (!_lg_typecheck_GetToolBorderPadding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolBorderPadding() const function, expected prototype:\nint wxAuiToolBar::GetToolBorderPadding() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolBorderPadding() const");
		}
		int lret = self->GetToolBorderPadding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetToolTextOrientation(int orientation)
	static int _bind_SetToolTextOrientation(lua_State *L) {
		if (!_lg_typecheck_SetToolTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolTextOrientation(int orientation) function, expected prototype:\nvoid wxAuiToolBar::SetToolTextOrientation(int orientation)\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolTextOrientation(int)");
		}
		self->SetToolTextOrientation(orientation);

		return 0;
	}

	// int wxAuiToolBar::GetToolTextOrientation() const
	static int _bind_GetToolTextOrientation(lua_State *L) {
		if (!_lg_typecheck_GetToolTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolTextOrientation() const function, expected prototype:\nint wxAuiToolBar::GetToolTextOrientation() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolTextOrientation() const");
		}
		int lret = self->GetToolTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetToolPacking(int packing)
	static int _bind_SetToolPacking(lua_State *L) {
		if (!_lg_typecheck_SetToolPacking(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolPacking(int packing) function, expected prototype:\nvoid wxAuiToolBar::SetToolPacking(int packing)\nClass arguments details:\n");
		}

		int packing=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolPacking(int)");
		}
		self->SetToolPacking(packing);

		return 0;
	}

	// int wxAuiToolBar::GetToolPacking() const
	static int _bind_GetToolPacking(lua_State *L) {
		if (!_lg_typecheck_GetToolPacking(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolPacking() const function, expected prototype:\nint wxAuiToolBar::GetToolPacking() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolPacking() const");
		}
		int lret = self->GetToolPacking();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetToolProportion(int tool_id, int proportion)
	static int _bind_SetToolProportion(lua_State *L) {
		if (!_lg_typecheck_SetToolProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolProportion(int tool_id, int proportion) function, expected prototype:\nvoid wxAuiToolBar::SetToolProportion(int tool_id, int proportion)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		int proportion=(int)lua_tointeger(L,3);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolProportion(int, int)");
		}
		self->SetToolProportion(tool_id, proportion);

		return 0;
	}

	// int wxAuiToolBar::GetToolProportion(int tool_id) const
	static int _bind_GetToolProportion(lua_State *L) {
		if (!_lg_typecheck_GetToolProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolProportion(int tool_id) const function, expected prototype:\nint wxAuiToolBar::GetToolProportion(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolProportion(int) const");
		}
		int lret = self->GetToolProportion(tool_id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetToolSeparation(int separation)
	static int _bind_SetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_SetToolSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolSeparation(int separation) function, expected prototype:\nvoid wxAuiToolBar::SetToolSeparation(int separation)\nClass arguments details:\n");
		}

		int separation=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolSeparation(int)");
		}
		self->SetToolSeparation(separation);

		return 0;
	}

	// int wxAuiToolBar::GetToolSeparation() const
	static int _bind_GetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_GetToolSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::GetToolSeparation() const function, expected prototype:\nint wxAuiToolBar::GetToolSeparation() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::GetToolSeparation() const");
		}
		int lret = self->GetToolSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBar::SetToolSticky(int tool_id, bool sticky)
	static int _bind_SetToolSticky(lua_State *L) {
		if (!_lg_typecheck_SetToolSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolSticky(int tool_id, bool sticky) function, expected prototype:\nvoid wxAuiToolBar::SetToolSticky(int tool_id, bool sticky)\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		bool sticky=(bool)(lua_toboolean(L,3)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolSticky(int, bool)");
		}
		self->SetToolSticky(tool_id, sticky);

		return 0;
	}

	// bool wxAuiToolBar::GetToolSticky(int tool_id) const
	static int _bind_GetToolSticky(lua_State *L) {
		if (!_lg_typecheck_GetToolSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::GetToolSticky(int tool_id) const function, expected prototype:\nbool wxAuiToolBar::GetToolSticky(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::GetToolSticky(int) const");
		}
		bool lret = self->GetToolSticky(tool_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAuiToolBar::GetToolLabel(int tool_id) const
	static int _bind_GetToolLabel(lua_State *L) {
		if (!_lg_typecheck_GetToolLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::GetToolLabel(int tool_id) const function, expected prototype:\nwxString wxAuiToolBar::GetToolLabel(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::GetToolLabel(int) const");
		}
		wxString lret = self->GetToolLabel(tool_id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBar::SetToolLabel(int tool_id, const wxString & label)
	static int _bind_SetToolLabel(lua_State *L) {
		if (!_lg_typecheck_SetToolLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolLabel(int tool_id, const wxString & label) function, expected prototype:\nvoid wxAuiToolBar::SetToolLabel(int tool_id, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolLabel(int, const wxString &)");
		}
		self->SetToolLabel(tool_id, label);

		return 0;
	}

	// wxBitmap wxAuiToolBar::GetToolBitmap(int tool_id) const
	static int _bind_GetToolBitmap(lua_State *L) {
		if (!_lg_typecheck_GetToolBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAuiToolBar::GetToolBitmap(int tool_id) const function, expected prototype:\nwxBitmap wxAuiToolBar::GetToolBitmap(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAuiToolBar::GetToolBitmap(int) const");
		}
		wxBitmap stack_lret = self->GetToolBitmap(tool_id);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxAuiToolBar::SetToolBitmap(int tool_id, const wxBitmap & bitmap)
	static int _bind_SetToolBitmap(lua_State *L) {
		if (!_lg_typecheck_SetToolBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolBitmap(int tool_id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxAuiToolBar::SetToolBitmap(int tool_id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::SetToolBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolBitmap(int, const wxBitmap &)");
		}
		self->SetToolBitmap(tool_id, bitmap);

		return 0;
	}

	// wxString wxAuiToolBar::GetToolShortHelp(int tool_id) const
	static int _bind_GetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::GetToolShortHelp(int tool_id) const function, expected prototype:\nwxString wxAuiToolBar::GetToolShortHelp(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::GetToolShortHelp(int) const");
		}
		wxString lret = self->GetToolShortHelp(tool_id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBar::SetToolShortHelp(int tool_id, const wxString & help_string)
	static int _bind_SetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolShortHelp(int tool_id, const wxString & help_string) function, expected prototype:\nvoid wxAuiToolBar::SetToolShortHelp(int tool_id, const wxString & help_string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		wxString help_string(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolShortHelp(int, const wxString &)");
		}
		self->SetToolShortHelp(tool_id, help_string);

		return 0;
	}

	// wxString wxAuiToolBar::GetToolLongHelp(int tool_id) const
	static int _bind_GetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::GetToolLongHelp(int tool_id) const function, expected prototype:\nwxString wxAuiToolBar::GetToolLongHelp(int tool_id) const\nClass arguments details:\n");
		}

		int tool_id=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::GetToolLongHelp(int) const");
		}
		wxString lret = self->GetToolLongHelp(tool_id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBar::SetToolLongHelp(int tool_id, const wxString & help_string)
	static int _bind_SetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetToolLongHelp(int tool_id, const wxString & help_string) function, expected prototype:\nvoid wxAuiToolBar::SetToolLongHelp(int tool_id, const wxString & help_string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int tool_id=(int)lua_tointeger(L,2);
		wxString help_string(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetToolLongHelp(int, const wxString &)");
		}
		self->SetToolLongHelp(tool_id, help_string);

		return 0;
	}

	// void wxAuiToolBar::SetCustomOverflowItems(const wxAuiToolBarItemArray & prepend, const wxAuiToolBarItemArray & append)
	static int _bind_SetCustomOverflowItems(lua_State *L) {
		if (!_lg_typecheck_SetCustomOverflowItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetCustomOverflowItems(const wxAuiToolBarItemArray & prepend, const wxAuiToolBarItemArray & append) function, expected prototype:\nvoid wxAuiToolBar::SetCustomOverflowItems(const wxAuiToolBarItemArray & prepend, const wxAuiToolBarItemArray & append)\nClass arguments details:\narg 1 ID = 29562974\narg 2 ID = 29562974\n");
		}

		const wxAuiToolBarItemArray* prepend_ptr=(Luna< wxAuiToolBarItemArray >::check(L,2));
		if( !prepend_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prepend in wxAuiToolBar::SetCustomOverflowItems function");
		}
		const wxAuiToolBarItemArray & prepend=*prepend_ptr;
		const wxAuiToolBarItemArray* append_ptr=(Luna< wxAuiToolBarItemArray >::check(L,3));
		if( !append_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg append in wxAuiToolBar::SetCustomOverflowItems function");
		}
		const wxAuiToolBarItemArray & append=*append_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::SetCustomOverflowItems(const wxAuiToolBarItemArray &, const wxAuiToolBarItemArray &)");
		}
		self->SetCustomOverflowItems(prepend, append);

		return 0;
	}

	// wxSize wxAuiToolBar::GetHintSize(int dock_direction) const
	static int _bind_GetHintSize(lua_State *L) {
		if (!_lg_typecheck_GetHintSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::GetHintSize(int dock_direction) const function, expected prototype:\nwxSize wxAuiToolBar::GetHintSize(int dock_direction) const\nClass arguments details:\n");
		}

		int dock_direction=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::GetHintSize(int) const");
		}
		wxSize stack_lret = self->GetHintSize(dock_direction);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiToolBar::IsPaneValid(const wxAuiPaneInfo & pane) const
	static int _bind_IsPaneValid(lua_State *L) {
		if (!_lg_typecheck_IsPaneValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::IsPaneValid(const wxAuiPaneInfo & pane) const function, expected prototype:\nbool wxAuiToolBar::IsPaneValid(const wxAuiPaneInfo & pane) const\nClass arguments details:\narg 1 ID = 42930508\n");
		}

		const wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,2));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiToolBar::IsPaneValid function");
		}
		const wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::IsPaneValid(const wxAuiPaneInfo &) const");
		}
		bool lret = self->IsPaneValid(pane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxAuiToolBar::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAuiToolBar::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAuiToolBar::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAuiToolBar::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxAuiToolBar::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiToolBar::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_AcceptsFocus() const function, expected prototype:\nbool wxAuiToolBar::base_AcceptsFocus() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_AcceptsFocus() const");
		}
		bool lret = self->wxAuiToolBar::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxAuiToolBar::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_AcceptsFocusFromKeyboard() const");
		}
		bool lret = self->wxAuiToolBar::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxAuiToolBar::base_AcceptsFocusRecursively() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_AcceptsFocusRecursively() const");
		}
		bool lret = self->wxAuiToolBar::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_HasFocus() const function, expected prototype:\nbool wxAuiToolBar::base_HasFocus() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_HasFocus() const");
		}
		bool lret = self->wxAuiToolBar::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxAuiToolBar::base_SetCanFocus(bool canFocus)\nClass arguments details:\n");
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetCanFocus(bool)");
		}
		self->wxAuiToolBar::SetCanFocus(canFocus);

		return 0;
	}

	// void wxAuiToolBar::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetFocus() function, expected prototype:\nvoid wxAuiToolBar::base_SetFocus()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetFocus()");
		}
		self->wxAuiToolBar::SetFocus();

		return 0;
	}

	// void wxAuiToolBar::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetFocusFromKbd() function, expected prototype:\nvoid wxAuiToolBar::base_SetFocusFromKbd()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetFocusFromKbd()");
		}
		self->wxAuiToolBar::SetFocusFromKbd();

		return 0;
	}

	// void wxAuiToolBar::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxAuiToolBar::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_AddChild(wxWindow *)");
		}
		self->wxAuiToolBar::AddChild(child);

		return 0;
	}

	// void wxAuiToolBar::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxAuiToolBar::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_RemoveChild(wxWindow *)");
		}
		self->wxAuiToolBar::RemoveChild(child);

		return 0;
	}

	// bool wxAuiToolBar::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxAuiToolBar::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Reparent(wxWindow *)");
		}
		bool lret = self->wxAuiToolBar::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxAuiToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_AlwaysShowScrollbars(bool, bool)");
		}
		self->wxAuiToolBar::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxAuiToolBar::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxAuiToolBar::base_GetScrollPos(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::base_GetScrollPos(int) const");
		}
		int lret = self->wxAuiToolBar::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxAuiToolBar::base_GetScrollRange(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::base_GetScrollRange(int) const");
		}
		int lret = self->wxAuiToolBar::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxAuiToolBar::base_GetScrollThumb(int orientation) const\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::base_GetScrollThumb(int) const");
		}
		int lret = self->wxAuiToolBar::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiToolBar::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxAuiToolBar::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_IsScrollbarAlwaysShown(int) const");
		}
		bool lret = self->wxAuiToolBar::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_ScrollLines(int lines) function, expected prototype:\nbool wxAuiToolBar::base_ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_ScrollLines(int)");
		}
		bool lret = self->wxAuiToolBar::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_ScrollPages(int pages) function, expected prototype:\nbool wxAuiToolBar::base_ScrollPages(int pages)\nClass arguments details:\n");
		}

		int pages=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_ScrollPages(int)");
		}
		bool lret = self->wxAuiToolBar::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAuiToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_ScrollWindow(int, int, const wxRect *)");
		}
		self->wxAuiToolBar::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxAuiToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxAuiToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetScrollPos(int, int, bool)");
		}
		self->wxAuiToolBar::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxAuiToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxAuiToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetScrollbar(int, int, int, int, bool)");
		}
		self->wxAuiToolBar::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxAuiToolBar::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxAuiToolBar::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_ClientToWindowSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxAuiToolBar::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxAuiToolBar::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_WindowToClientSize(const wxSize &) const");
		}
		wxSize stack_lret = self->wxAuiToolBar::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAuiToolBar::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Fit() function, expected prototype:\nvoid wxAuiToolBar::base_Fit()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Fit()");
		}
		self->wxAuiToolBar::Fit();

		return 0;
	}

	// void wxAuiToolBar::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_FitInside() function, expected prototype:\nvoid wxAuiToolBar::base_FitInside()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_FitInside()");
		}
		self->wxAuiToolBar::FitInside();

		return 0;
	}

	// wxSize wxAuiToolBar::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetEffectiveMinSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetEffectiveMinSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetMaxClientSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetMaxClientSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetMaxSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetMaxSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetMaxSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetMinClientSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetMinClientSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetMinClientSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetMinSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetMinSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetMinSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetBestVirtualSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetBestVirtualSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBar::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBar::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxAuiToolBar::base_GetWindowBorderSize() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBar::base_GetWindowBorderSize() const");
		}
		wxSize stack_lret = self->wxAuiToolBar::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxAuiToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxAuiToolBar::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxAuiToolBar::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SendSizeEvent(int)");
		}
		self->wxAuiToolBar::SendSizeEvent(flags);

		return 0;
	}

	// void wxAuiToolBar::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetMaxClientSize(const wxSize &)");
		}
		self->wxAuiToolBar::SetMaxClientSize(size);

		return 0;
	}

	// void wxAuiToolBar::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetMaxSize(const wxSize &)");
		}
		self->wxAuiToolBar::SetMaxSize(size);

		return 0;
	}

	// void wxAuiToolBar::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetMinClientSize(const wxSize &)");
		}
		self->wxAuiToolBar::SetMinClientSize(size);

		return 0;
	}

	// void wxAuiToolBar::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxAuiToolBar::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiToolBar::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetMinSize(const wxSize &)");
		}
		self->wxAuiToolBar::SetMinSize(size);

		return 0;
	}

	// void wxAuiToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxAuiToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxAuiToolBar::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxAuiToolBar::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxAuiToolBar::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->wxAuiToolBar::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxAuiToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxAuiToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetSizeHints(int, int, int, int, int, int)");
		}
		self->wxAuiToolBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxAuiToolBar::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxAuiToolBar::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxAuiToolBar::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxAuiToolBar::base_GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxAuiToolBar::base_GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->wxAuiToolBar::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxAuiToolBar::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_ClearBackground() function, expected prototype:\nvoid wxAuiToolBar::base_ClearBackground()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_ClearBackground()");
		}
		self->wxAuiToolBar::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxAuiToolBar::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxAuiToolBar::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxAuiToolBar::base_GetBackgroundStyle() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxAuiToolBar::base_GetBackgroundStyle() const");
		}
		wxBackgroundStyle lret = self->wxAuiToolBar::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::base_GetCharHeight() const function, expected prototype:\nint wxAuiToolBar::base_GetCharHeight() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::base_GetCharHeight() const");
		}
		int lret = self->wxAuiToolBar::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiToolBar::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBar::base_GetCharWidth() const function, expected prototype:\nint wxAuiToolBar::base_GetCharWidth() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBar::base_GetCharWidth() const");
		}
		int lret = self->wxAuiToolBar::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxAuiToolBar::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxAuiToolBar::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxAuiToolBar::base_GetDefaultAttributes() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxAuiToolBar::base_GetDefaultAttributes() const");
		}
		wxVisualAttributes stack_lret = self->wxAuiToolBar::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxAuiToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAuiToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Refresh(bool, const wxRect *)");
		}
		self->wxAuiToolBar::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxAuiToolBar::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Update() function, expected prototype:\nvoid wxAuiToolBar::base_Update()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Update()");
		}
		self->wxAuiToolBar::Update();

		return 0;
	}

	// bool wxAuiToolBar::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxAuiToolBar::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n");
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_SetBackgroundStyle(wxBackgroundStyle)");
		}
		bool lret = self->wxAuiToolBar::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_ShouldInheritColours() const function, expected prototype:\nbool wxAuiToolBar::base_ShouldInheritColours() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_ShouldInheritColours() const");
		}
		bool lret = self->wxAuiToolBar::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxAuiToolBar::base_SetThemeEnabled(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetThemeEnabled(bool)");
		}
		self->wxAuiToolBar::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxAuiToolBar::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_GetThemeEnabled() const function, expected prototype:\nbool wxAuiToolBar::base_GetThemeEnabled() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_GetThemeEnabled() const");
		}
		bool lret = self->wxAuiToolBar::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_CanSetTransparent() function, expected prototype:\nbool wxAuiToolBar::base_CanSetTransparent()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_CanSetTransparent()");
		}
		bool lret = self->wxAuiToolBar::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxAuiToolBar::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_SetTransparent(unsigned char)");
		}
		bool lret = self->wxAuiToolBar::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAuiToolBar::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxAuiToolBar::SetNextHandler(handler);

		return 0;
	}

	// void wxAuiToolBar::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAuiToolBar::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxAuiToolBar::SetPreviousHandler(handler);

		return 0;
	}

	// void wxAuiToolBar::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxAuiToolBar::base_SetExtraStyle(long exStyle)\nClass arguments details:\n");
		}

		long exStyle=(long)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetExtraStyle(long)");
		}
		self->wxAuiToolBar::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxAuiToolBar::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Lower() function, expected prototype:\nvoid wxAuiToolBar::base_Lower()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Lower()");
		}
		self->wxAuiToolBar::Lower();

		return 0;
	}

	// void wxAuiToolBar::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Raise() function, expected prototype:\nvoid wxAuiToolBar::base_Raise()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Raise()");
		}
		self->wxAuiToolBar::Raise();

		return 0;
	}

	// bool wxAuiToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAuiToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_HideWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxAuiToolBar::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_IsShown() const function, expected prototype:\nbool wxAuiToolBar::base_IsShown() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_IsShown() const");
		}
		bool lret = self->wxAuiToolBar::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_IsShownOnScreen() const function, expected prototype:\nbool wxAuiToolBar::base_IsShownOnScreen() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_IsShownOnScreen() const");
		}
		bool lret = self->wxAuiToolBar::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Enable(bool enable = true) function, expected prototype:\nbool wxAuiToolBar::base_Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Enable(bool)");
		}
		bool lret = self->wxAuiToolBar::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Show(bool show = true) function, expected prototype:\nbool wxAuiToolBar::base_Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Show(bool)");
		}
		bool lret = self->wxAuiToolBar::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAuiToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_ShowWithEffect(wxShowEffect, unsigned int)");
		}
		bool lret = self->wxAuiToolBar::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAuiToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxAuiToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxAuiToolBar::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const");
		}
		wxString lret = self->wxAuiToolBar::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxAuiToolBar::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator * wxAuiToolBar::base_GetValidator() function, expected prototype:\nwxValidator * wxAuiToolBar::base_GetValidator()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxValidator * wxAuiToolBar::base_GetValidator()");
		}
		wxValidator * lret = self->wxAuiToolBar::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBar::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxAuiToolBar::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxAuiToolBar::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetValidator(const wxValidator &)");
		}
		self->wxAuiToolBar::SetValidator(validator);

		return 0;
	}

	// bool wxAuiToolBar::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_TransferDataFromWindow() function, expected prototype:\nbool wxAuiToolBar::base_TransferDataFromWindow()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_TransferDataFromWindow()");
		}
		bool lret = self->wxAuiToolBar::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_TransferDataToWindow() function, expected prototype:\nbool wxAuiToolBar::base_TransferDataToWindow()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_TransferDataToWindow()");
		}
		bool lret = self->wxAuiToolBar::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Validate() function, expected prototype:\nbool wxAuiToolBar::base_Validate()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Validate()");
		}
		bool lret = self->wxAuiToolBar::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxAuiToolBar::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxAuiToolBar::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxAuiToolBar::base_GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxAuiToolBar::base_GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->wxAuiToolBar::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAuiToolBar::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::base_GetName() const function, expected prototype:\nwxString wxAuiToolBar::base_GetName() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::base_GetName() const");
		}
		wxString lret = self->wxAuiToolBar::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBar::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxAuiToolBar::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n");
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetLayoutDirection(wxLayoutDirection)");
		}
		self->wxAuiToolBar::SetLayoutDirection(dir);

		return 0;
	}

	// void wxAuiToolBar::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetName(const wxString & name) function, expected prototype:\nvoid wxAuiToolBar::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetName(const wxString &)");
		}
		self->wxAuiToolBar::SetName(name);

		return 0;
	}

	// void wxAuiToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxAuiToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxAuiToolBar::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetAcceleratorTable(const wxAcceleratorTable &)");
		}
		self->wxAuiToolBar::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxAuiToolBar::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Destroy() function, expected prototype:\nbool wxAuiToolBar::base_Destroy()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Destroy()");
		}
		bool lret = self->wxAuiToolBar::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxAuiToolBar::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxAuiToolBar::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxAuiToolBar::base_GetDropTarget() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDropTarget * wxAuiToolBar::base_GetDropTarget() const");
		}
		wxDropTarget * lret = self->wxAuiToolBar::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBar::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxAuiToolBar::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n");
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetDropTarget(wxDropTarget *)");
		}
		self->wxAuiToolBar::SetDropTarget(target);

		return 0;
	}

	// void wxAuiToolBar::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxAuiToolBar::base_DragAcceptFiles(bool accept)\nClass arguments details:\n");
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_DragAcceptFiles(bool)");
		}
		self->wxAuiToolBar::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxAuiToolBar::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_Layout() function, expected prototype:\nbool wxAuiToolBar::base_Layout()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_Layout()");
		}
		bool lret = self->wxAuiToolBar::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_HasCapture() const function, expected prototype:\nbool wxAuiToolBar::base_HasCapture() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_HasCapture() const");
		}
		bool lret = self->wxAuiToolBar::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxAuiToolBar::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxAuiToolBar::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_SetCursor(const wxCursor &)");
		}
		bool lret = self->wxAuiToolBar::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxAuiToolBar::base_WarpPointer(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_WarpPointer(int, int)");
		}
		self->wxAuiToolBar::WarpPointer(x, y);

		return 0;
	}

	// void wxAuiToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxAuiToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAuiToolBar::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent &)");
		}
		self->wxAuiToolBar::DoUpdateWindowUI(event);

		return 0;
	}

	// bool wxAuiToolBar::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_HasMultiplePages() const function, expected prototype:\nbool wxAuiToolBar::base_HasMultiplePages() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_HasMultiplePages() const");
		}
		bool lret = self->wxAuiToolBar::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_InheritAttributes() function, expected prototype:\nvoid wxAuiToolBar::base_InheritAttributes()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_InheritAttributes()");
		}
		self->wxAuiToolBar::InheritAttributes();

		return 0;
	}

	// void wxAuiToolBar::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_InitDialog() function, expected prototype:\nvoid wxAuiToolBar::base_InitDialog()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_InitDialog()");
		}
		self->wxAuiToolBar::InitDialog();

		return 0;
	}

	// bool wxAuiToolBar::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_IsRetained() const function, expected prototype:\nbool wxAuiToolBar::base_IsRetained() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_IsRetained() const");
		}
		bool lret = self->wxAuiToolBar::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_IsTopLevel() const function, expected prototype:\nbool wxAuiToolBar::base_IsTopLevel() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_IsTopLevel() const");
		}
		bool lret = self->wxAuiToolBar::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxAuiToolBar::base_MakeModal(bool modal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_MakeModal(bool)");
		}
		self->wxAuiToolBar::MakeModal(modal);

		return 0;
	}

	// void wxAuiToolBar::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_OnInternalIdle() function, expected prototype:\nvoid wxAuiToolBar::base_OnInternalIdle()\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_OnInternalIdle()");
		}
		self->wxAuiToolBar::OnInternalIdle();

		return 0;
	}

	// bool wxAuiToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxAuiToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_RegisterHotKey(int, int, int)");
		}
		bool lret = self->wxAuiToolBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiToolBar::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxAuiToolBar::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n");
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_UnregisterHotKey(int)");
		}
		bool lret = self->wxAuiToolBar::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxAuiToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : ::wxUPDATE_UI_NONE;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_UpdateWindowUI(long)");
		}
		self->wxAuiToolBar::UpdateWindowUI(flags);

		return 0;
	}

	// void wxAuiToolBar::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxAuiToolBar::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAuiToolBar::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_Command(wxCommandEvent &)");
		}
		self->wxAuiToolBar::Command(event);

		return 0;
	}

	// wxString wxAuiToolBar::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiToolBar::base_GetLabel() const function, expected prototype:\nwxString wxAuiToolBar::base_GetLabel() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiToolBar::base_GetLabel() const");
		}
		wxString lret = self->wxAuiToolBar::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBar::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxAuiToolBar::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetLabel(const wxString &)");
		}
		self->wxAuiToolBar::SetLabel(label);

		return 0;
	}

	// void wxAuiToolBar::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxAuiToolBar::base_SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBar::base_SetWindowStyleFlag(long)");
		}
		self->wxAuiToolBar::SetWindowStyleFlag(style);

		return 0;
	}

	// long wxAuiToolBar::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxAuiToolBar::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxAuiToolBar::base_GetWindowStyleFlag() const\nClass arguments details:\n");
		}


		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxAuiToolBar::base_GetWindowStyleFlag() const");
		}
		long lret = self->wxAuiToolBar::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiToolBar::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBar::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxAuiToolBar::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiToolBar::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiToolBar* self=Luna< wxObject >::checkSubType< wxAuiToolBar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::base_SetFont(const wxFont &)");
		}
		bool lret = self->wxAuiToolBar::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBar* LunaTraits< wxAuiToolBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiToolBar::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxAuiToolBar >::_bind_dtor(wxAuiToolBar* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBar >::className[] = "wxAuiToolBar";
const char LunaTraits< wxAuiToolBar >::fullName[] = "wxAuiToolBar";
const char LunaTraits< wxAuiToolBar >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxAuiToolBar >::hash = 66235420;
const int LunaTraits< wxAuiToolBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxAuiToolBar >::methods[] = {
	{"SetWindowStyleFlag", &luna_wrapper_wxAuiToolBar::_bind_SetWindowStyleFlag},
	{"GetWindowStyleFlag", &luna_wrapper_wxAuiToolBar::_bind_GetWindowStyleFlag},
	{"SetArtProvider", &luna_wrapper_wxAuiToolBar::_bind_SetArtProvider},
	{"GetArtProvider", &luna_wrapper_wxAuiToolBar::_bind_GetArtProvider},
	{"SetFont", &luna_wrapper_wxAuiToolBar::_bind_SetFont},
	{"AddTool", &luna_wrapper_wxAuiToolBar::_bind_AddTool},
	{"AddLabel", &luna_wrapper_wxAuiToolBar::_bind_AddLabel},
	{"AddControl", &luna_wrapper_wxAuiToolBar::_bind_AddControl},
	{"AddSeparator", &luna_wrapper_wxAuiToolBar::_bind_AddSeparator},
	{"AddSpacer", &luna_wrapper_wxAuiToolBar::_bind_AddSpacer},
	{"AddStretchSpacer", &luna_wrapper_wxAuiToolBar::_bind_AddStretchSpacer},
	{"Realize", &luna_wrapper_wxAuiToolBar::_bind_Realize},
	{"FindControl", &luna_wrapper_wxAuiToolBar::_bind_FindControl},
	{"FindToolByPosition", &luna_wrapper_wxAuiToolBar::_bind_FindToolByPosition},
	{"FindToolByIndex", &luna_wrapper_wxAuiToolBar::_bind_FindToolByIndex},
	{"FindTool", &luna_wrapper_wxAuiToolBar::_bind_FindTool},
	{"ClearTools", &luna_wrapper_wxAuiToolBar::_bind_ClearTools},
	{"Clear", &luna_wrapper_wxAuiToolBar::_bind_Clear},
	{"DeleteTool", &luna_wrapper_wxAuiToolBar::_bind_DeleteTool},
	{"DeleteByIndex", &luna_wrapper_wxAuiToolBar::_bind_DeleteByIndex},
	{"GetToolCount", &luna_wrapper_wxAuiToolBar::_bind_GetToolCount},
	{"GetToolPos", &luna_wrapper_wxAuiToolBar::_bind_GetToolPos},
	{"GetToolIndex", &luna_wrapper_wxAuiToolBar::_bind_GetToolIndex},
	{"GetToolFits", &luna_wrapper_wxAuiToolBar::_bind_GetToolFits},
	{"GetToolRect", &luna_wrapper_wxAuiToolBar::_bind_GetToolRect},
	{"GetToolFitsByIndex", &luna_wrapper_wxAuiToolBar::_bind_GetToolFitsByIndex},
	{"GetToolBarFits", &luna_wrapper_wxAuiToolBar::_bind_GetToolBarFits},
	{"SetMargins", &luna_wrapper_wxAuiToolBar::_bind_SetMargins},
	{"SetToolBitmapSize", &luna_wrapper_wxAuiToolBar::_bind_SetToolBitmapSize},
	{"GetToolBitmapSize", &luna_wrapper_wxAuiToolBar::_bind_GetToolBitmapSize},
	{"GetOverflowVisible", &luna_wrapper_wxAuiToolBar::_bind_GetOverflowVisible},
	{"SetOverflowVisible", &luna_wrapper_wxAuiToolBar::_bind_SetOverflowVisible},
	{"GetGripperVisible", &luna_wrapper_wxAuiToolBar::_bind_GetGripperVisible},
	{"SetGripperVisible", &luna_wrapper_wxAuiToolBar::_bind_SetGripperVisible},
	{"ToggleTool", &luna_wrapper_wxAuiToolBar::_bind_ToggleTool},
	{"GetToolToggled", &luna_wrapper_wxAuiToolBar::_bind_GetToolToggled},
	{"EnableTool", &luna_wrapper_wxAuiToolBar::_bind_EnableTool},
	{"GetToolEnabled", &luna_wrapper_wxAuiToolBar::_bind_GetToolEnabled},
	{"SetToolDropDown", &luna_wrapper_wxAuiToolBar::_bind_SetToolDropDown},
	{"GetToolDropDown", &luna_wrapper_wxAuiToolBar::_bind_GetToolDropDown},
	{"SetToolBorderPadding", &luna_wrapper_wxAuiToolBar::_bind_SetToolBorderPadding},
	{"GetToolBorderPadding", &luna_wrapper_wxAuiToolBar::_bind_GetToolBorderPadding},
	{"SetToolTextOrientation", &luna_wrapper_wxAuiToolBar::_bind_SetToolTextOrientation},
	{"GetToolTextOrientation", &luna_wrapper_wxAuiToolBar::_bind_GetToolTextOrientation},
	{"SetToolPacking", &luna_wrapper_wxAuiToolBar::_bind_SetToolPacking},
	{"GetToolPacking", &luna_wrapper_wxAuiToolBar::_bind_GetToolPacking},
	{"SetToolProportion", &luna_wrapper_wxAuiToolBar::_bind_SetToolProportion},
	{"GetToolProportion", &luna_wrapper_wxAuiToolBar::_bind_GetToolProportion},
	{"SetToolSeparation", &luna_wrapper_wxAuiToolBar::_bind_SetToolSeparation},
	{"GetToolSeparation", &luna_wrapper_wxAuiToolBar::_bind_GetToolSeparation},
	{"SetToolSticky", &luna_wrapper_wxAuiToolBar::_bind_SetToolSticky},
	{"GetToolSticky", &luna_wrapper_wxAuiToolBar::_bind_GetToolSticky},
	{"GetToolLabel", &luna_wrapper_wxAuiToolBar::_bind_GetToolLabel},
	{"SetToolLabel", &luna_wrapper_wxAuiToolBar::_bind_SetToolLabel},
	{"GetToolBitmap", &luna_wrapper_wxAuiToolBar::_bind_GetToolBitmap},
	{"SetToolBitmap", &luna_wrapper_wxAuiToolBar::_bind_SetToolBitmap},
	{"GetToolShortHelp", &luna_wrapper_wxAuiToolBar::_bind_GetToolShortHelp},
	{"SetToolShortHelp", &luna_wrapper_wxAuiToolBar::_bind_SetToolShortHelp},
	{"GetToolLongHelp", &luna_wrapper_wxAuiToolBar::_bind_GetToolLongHelp},
	{"SetToolLongHelp", &luna_wrapper_wxAuiToolBar::_bind_SetToolLongHelp},
	{"SetCustomOverflowItems", &luna_wrapper_wxAuiToolBar::_bind_SetCustomOverflowItems},
	{"GetHintSize", &luna_wrapper_wxAuiToolBar::_bind_GetHintSize},
	{"IsPaneValid", &luna_wrapper_wxAuiToolBar::_bind_IsPaneValid},
	{"base_GetClassInfo", &luna_wrapper_wxAuiToolBar::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxAuiToolBar::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxAuiToolBar::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxAuiToolBar::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxAuiToolBar::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxAuiToolBar::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxAuiToolBar::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxAuiToolBar::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxAuiToolBar::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxAuiToolBar::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxAuiToolBar::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxAuiToolBar::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxAuiToolBar::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxAuiToolBar::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxAuiToolBar::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxAuiToolBar::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxAuiToolBar::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxAuiToolBar::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxAuiToolBar::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxAuiToolBar::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxAuiToolBar::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxAuiToolBar::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxAuiToolBar::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxAuiToolBar::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxAuiToolBar::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxAuiToolBar::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxAuiToolBar::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxAuiToolBar::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxAuiToolBar::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxAuiToolBar::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxAuiToolBar::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxAuiToolBar::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxAuiToolBar::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxAuiToolBar::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxAuiToolBar::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxAuiToolBar::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxAuiToolBar::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxAuiToolBar::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxAuiToolBar::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxAuiToolBar::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxAuiToolBar::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxAuiToolBar::_bind_base_SetBackgroundStyle},
	{"base_ShouldInheritColours", &luna_wrapper_wxAuiToolBar::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxAuiToolBar::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxAuiToolBar::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxAuiToolBar::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxAuiToolBar::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxAuiToolBar::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxAuiToolBar::_bind_base_SetPreviousHandler},
	{"base_SetExtraStyle", &luna_wrapper_wxAuiToolBar::_bind_base_SetExtraStyle},
	{"base_Lower", &luna_wrapper_wxAuiToolBar::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxAuiToolBar::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxAuiToolBar::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxAuiToolBar::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxAuiToolBar::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxAuiToolBar::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxAuiToolBar::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxAuiToolBar::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxAuiToolBar::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxAuiToolBar::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxAuiToolBar::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxAuiToolBar::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxAuiToolBar::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxAuiToolBar::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxAuiToolBar::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxAuiToolBar::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxAuiToolBar::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxAuiToolBar::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxAuiToolBar::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxAuiToolBar::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxAuiToolBar::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxAuiToolBar::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxAuiToolBar::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxAuiToolBar::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxAuiToolBar::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxAuiToolBar::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxAuiToolBar::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxAuiToolBar::_bind_base_DoUpdateWindowUI},
	{"base_HasMultiplePages", &luna_wrapper_wxAuiToolBar::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxAuiToolBar::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxAuiToolBar::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxAuiToolBar::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxAuiToolBar::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxAuiToolBar::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxAuiToolBar::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxAuiToolBar::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxAuiToolBar::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxAuiToolBar::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxAuiToolBar::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxAuiToolBar::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxAuiToolBar::_bind_base_SetLabel},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxAuiToolBar::_bind_base_SetWindowStyleFlag},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxAuiToolBar::_bind_base_GetWindowStyleFlag},
	{"base_SetFont", &luna_wrapper_wxAuiToolBar::_bind_base_SetFont},
	{"__eq", &luna_wrapper_wxAuiToolBar::_bind___eq},
	{"getTable", &luna_wrapper_wxAuiToolBar::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiToolBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBar >::enumValues[] = {
	{0,0}
};


