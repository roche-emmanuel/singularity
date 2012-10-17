#include <plug_common.h>

class luna_wrapper_wxAuiToolBar {
public:
	typedef Luna< wxAuiToolBar > luna_t;

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
		wxAuiToolBar* ptr= dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiToolBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( lua_isstring(L,8)==0 ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAUI_TB_DEFAULT_STYLE)
	static wxAuiToolBar* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAUI_TB_DEFAULT_STYLE) function, expected prototype:\nwxAuiToolBar::wxAuiToolBar(wxWindow * parent, int id = -1, const wxPoint & position = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAUI_TB_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
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
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxAUI_TB_DEFAULT_STYLE;

		return new wxAuiToolBar(parent, id, position, size, style);
	}


	// Function binds:
	// void wxAuiToolBar::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBar::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxAuiToolBar::SetWindowStyleFlag(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiToolBar::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::SetFont(const wxFont &)");
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = wxITEM_NORMAL)
	static int _bind_AddTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = wxITEM_NORMAL) function, expected prototype:\nwxAuiToolBarItem * wxAuiToolBar::AddTool(int tool_id, const wxString & label, const wxBitmap & bitmap, const wxString & short_help_string = wxEmptyString, wxItemKind kind = wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString short_help_string(lua_tostring(L,5),lua_objlen(L,5));
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : wxITEM_NORMAL;

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* disabled_bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5));
		if( !disabled_bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg disabled_bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & disabled_bitmap=*disabled_bitmap_ptr;
		wxItemKind kind=(wxItemKind)lua_tointeger(L,6);
		wxString short_help_string(lua_tostring(L,7),lua_objlen(L,7));
		wxString long_help_string(lua_tostring(L,8),lua_objlen(L,8));
		wxObject* client_data=(Luna< wxObject >::check(L,9));

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* disabled_bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !disabled_bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg disabled_bitmap in wxAuiToolBar::AddTool function");
		}
		const wxBitmap & disabled_bitmap=*disabled_bitmap_ptr;
		bool toggle=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		wxObject* client_data=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;
		wxString short_help_string(lua_tostring(L,7),lua_objlen(L,7));
		wxString long_help_string(lua_tostring(L,8),lua_objlen(L,8));

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxControl* control=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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


		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiToolBar::SetToolBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
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

		wxAuiToolBar* self=dynamic_cast< wxAuiToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBar::IsPaneValid(const wxAuiPaneInfo &) const");
		}
		bool lret = self->IsPaneValid(pane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBar* LunaTraits< wxAuiToolBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiToolBar::_bind_ctor(L);
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
	{"__eq", &luna_wrapper_wxAuiToolBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiToolBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBar >::enumValues[] = {
	{0,0}
};


