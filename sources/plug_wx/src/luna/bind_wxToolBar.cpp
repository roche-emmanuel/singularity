#include <plug_common.h>

class luna_wrapper_wxToolBar {
public:
	typedef Luna< wxToolBar > luna_t;

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
		wxToolBar* ptr= dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxToolBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddCheckTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddRadioTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddStretchableSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49669417)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxToolBarToolBase* >(Luna< wxToolBarToolBase >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_AddTool_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,56813631)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,9)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearTools(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteToolByPos(lua_State *L) {
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

	inline static bool _lg_typecheck_FindById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindToolForPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolByPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertStretchableSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertTool_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5))) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertTool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,49669417)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxToolBarToolBase* >(Luna< wxToolBarToolBase >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLeftClick(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMouseEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRightClick(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDropdownMenu(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolDisabledBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolNormalBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolSeparation(lua_State *L) {
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

	inline static bool _lg_typecheck_ToggleTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxToolBar::wxToolBar()
	static wxToolBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar() function, expected prototype:\nwxToolBar::wxToolBar()\nClass arguments details:\n");
		}


		return new wxToolBar();
	}

	// wxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)
	static wxToolBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxToolBar::wxToolBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::wxToolBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxTB_HORIZONTAL;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxToolBar(parent, id, pos, size, style, name);
	}

	// Overload binder for wxToolBar::wxToolBar
	static wxToolBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxToolBar, cannot match any of the overloads for function wxToolBar:\n  wxToolBar()\n  wxToolBar(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddCheckTool(lua_State *L) {
		if (!_lg_typecheck_AddCheckTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap1_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::AddCheckTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddCheckTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : wxNullBitmap;
		wxString shortHelp(lua_tostring(L,6),lua_objlen(L,6));
		wxString longHelp(lua_tostring(L,7),lua_objlen(L,7));
		wxObject* clientData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddCheckTool(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxString &, const wxString &, wxObject *)");
		}
		wxToolBarToolBase * lret = self->AddCheckTool(toolId, label, bitmap1, bmpDisabled, shortHelp, longHelp, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_AddControl(lua_State *L) {
		if (!_lg_typecheck_AddControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxControl* control=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddControl(wxControl *, const wxString &)");
		}
		wxToolBarToolBase * lret = self->AddControl(control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddRadioTool(lua_State *L) {
		if (!_lg_typecheck_AddRadioTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap1_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::AddRadioTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddRadioTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : wxNullBitmap;
		wxString shortHelp(lua_tostring(L,6),lua_objlen(L,6));
		wxString longHelp(lua_tostring(L,7),lua_objlen(L,7));
		wxObject* clientData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddRadioTool(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxString &, const wxString &, wxObject *)");
		}
		wxToolBarToolBase * lret = self->AddRadioTool(toolId, label, bitmap1, bmpDisabled, shortHelp, longHelp, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddSeparator()
	static int _bind_AddSeparator(lua_State *L) {
		if (!_lg_typecheck_AddSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddSeparator() function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddSeparator()\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddSeparator()");
		}
		wxToolBarToolBase * lret = self->AddSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddStretchableSpace()
	static int _bind_AddStretchableSpace(lua_State *L) {
		if (!_lg_typecheck_AddStretchableSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddStretchableSpace() function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddStretchableSpace()\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddStretchableSpace()");
		}
		wxToolBarToolBase * lret = self->AddStretchableSpace();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool)
	static int _bind_AddTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool)\nClass arguments details:\narg 1 ID = 49669417\n");
		}

		wxToolBarToolBase* tool=(Luna< wxToolBarToolBase >::check(L,2));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase *)");
		}
		wxToolBarToolBase * lret = self->AddTool(tool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = wxITEM_NORMAL)
	static int _bind_AddTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = wxITEM_NORMAL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString shortHelp(lua_tostring(L,5),lua_objlen(L,5));
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : wxITEM_NORMAL;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind)");
		}
		wxToolBarToolBase * lret = self->AddTool(toolId, label, bitmap, shortHelp, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddTool_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : wxNullBitmap;
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : wxITEM_NORMAL;
		wxString shortHelpString(lua_tostring(L,7),lua_objlen(L,7));
		wxString longHelpString(lua_tostring(L,8),lua_objlen(L,8));
		wxObject* clientData=luatop>8 ? (Luna< wxObject >::check(L,9)) : (wxObject*)NULL;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *)");
		}
		wxToolBarToolBase * lret = self->AddTool(toolId, label, bitmap, bmpDisabled, kind, shortHelpString, longHelpString, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxToolBar::AddTool
	static int _bind_AddTool(lua_State *L) {
		if (_lg_typecheck_AddTool_overload_1(L)) return _bind_AddTool_overload_1(L);
		if (_lg_typecheck_AddTool_overload_2(L)) return _bind_AddTool_overload_2(L);
		if (_lg_typecheck_AddTool_overload_3(L)) return _bind_AddTool_overload_3(L);

		luaL_error(L, "error in function AddTool, cannot match any of the overloads for function AddTool:\n  AddTool(wxToolBarToolBase *)\n  AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind)\n  AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *)\n");
		return 0;
	}

	// void wxToolBar::ClearTools()
	static int _bind_ClearTools(lua_State *L) {
		if (!_lg_typecheck_ClearTools(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::ClearTools() function, expected prototype:\nvoid wxToolBar::ClearTools()\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::ClearTools()");
		}
		self->ClearTools();

		return 0;
	}

	// bool wxToolBar::DeleteTool(int toolId)
	static int _bind_DeleteTool(lua_State *L) {
		if (!_lg_typecheck_DeleteTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::DeleteTool(int toolId) function, expected prototype:\nbool wxToolBar::DeleteTool(int toolId)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::DeleteTool(int)");
		}
		bool lret = self->DeleteTool(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::DeleteToolByPos(size_t pos)
	static int _bind_DeleteToolByPos(lua_State *L) {
		if (!_lg_typecheck_DeleteToolByPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::DeleteToolByPos(size_t pos) function, expected prototype:\nbool wxToolBar::DeleteToolByPos(size_t pos)\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::DeleteToolByPos(size_t)");
		}
		bool lret = self->DeleteToolByPos(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::EnableTool(int toolId, bool enable)
	static int _bind_EnableTool(lua_State *L) {
		if (!_lg_typecheck_EnableTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::EnableTool(int toolId, bool enable) function, expected prototype:\nvoid wxToolBar::EnableTool(int toolId, bool enable)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::EnableTool(int, bool)");
		}
		self->EnableTool(toolId, enable);

		return 0;
	}

	// wxToolBarToolBase * wxToolBar::FindById(int id) const
	static int _bind_FindById(lua_State *L) {
		if (!_lg_typecheck_FindById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::FindById(int id) const function, expected prototype:\nwxToolBarToolBase * wxToolBar::FindById(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::FindById(int) const");
		}
		wxToolBarToolBase * lret = self->FindById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxControl * wxToolBar::FindControl(int id)
	static int _bind_FindControl(lua_State *L) {
		if (!_lg_typecheck_FindControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl * wxToolBar::FindControl(int id) function, expected prototype:\nwxControl * wxToolBar::FindControl(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxControl * wxToolBar::FindControl(int)");
		}
		wxControl * lret = self->FindControl(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const
	static int _bind_FindToolForPosition(lua_State *L) {
		if (!_lg_typecheck_FindToolForPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const function, expected prototype:\nwxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::FindToolForPosition(int, int) const");
		}
		wxToolBarToolBase * lret = self->FindToolForPosition(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxSize wxToolBar::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetMargins() const function, expected prototype:\nwxSize wxToolBar::GetMargins() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetMargins() const");
		}
		wxSize stack_lret = self->GetMargins();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::GetToolBitmapSize() const
	static int _bind_GetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_GetToolBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetToolBitmapSize() const function, expected prototype:\nwxSize wxToolBar::GetToolBitmapSize() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetToolBitmapSize() const");
		}
		wxSize stack_lret = self->GetToolBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// const wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const
	static int _bind_GetToolByPos(lua_State *L) {
		if (!_lg_typecheck_GetToolByPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const function, expected prototype:\nconst wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxToolBarToolBase * wxToolBar::GetToolByPos(int) const");
		}
		const wxToolBarToolBase * lret = self->GetToolByPos(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxToolBar::GetToolClientData(int toolId) const
	static int _bind_GetToolClientData(lua_State *L) {
		if (!_lg_typecheck_GetToolClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxToolBar::GetToolClientData(int toolId) const function, expected prototype:\nwxObject * wxToolBar::GetToolClientData(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxToolBar::GetToolClientData(int) const");
		}
		wxObject * lret = self->GetToolClientData(toolId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::GetToolEnabled(int toolId) const
	static int _bind_GetToolEnabled(lua_State *L) {
		if (!_lg_typecheck_GetToolEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::GetToolEnabled(int toolId) const function, expected prototype:\nbool wxToolBar::GetToolEnabled(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::GetToolEnabled(int) const");
		}
		bool lret = self->GetToolEnabled(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxToolBar::GetToolLongHelp(int toolId) const
	static int _bind_GetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::GetToolLongHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::GetToolLongHelp(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxToolBar::GetToolLongHelp(int) const");
		}
		wxString lret = self->GetToolLongHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxToolBar::GetToolPacking() const
	static int _bind_GetToolPacking(lua_State *L) {
		if (!_lg_typecheck_GetToolPacking(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolPacking() const function, expected prototype:\nint wxToolBar::GetToolPacking() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolPacking() const");
		}
		int lret = self->GetToolPacking();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::GetToolPos(int toolId) const
	static int _bind_GetToolPos(lua_State *L) {
		if (!_lg_typecheck_GetToolPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolPos(int toolId) const function, expected prototype:\nint wxToolBar::GetToolPos(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolPos(int) const");
		}
		int lret = self->GetToolPos(toolId);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::GetToolSeparation() const
	static int _bind_GetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_GetToolSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolSeparation() const function, expected prototype:\nint wxToolBar::GetToolSeparation() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolSeparation() const");
		}
		int lret = self->GetToolSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxToolBar::GetToolShortHelp(int toolId) const
	static int _bind_GetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::GetToolShortHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::GetToolShortHelp(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxToolBar::GetToolShortHelp(int) const");
		}
		wxString lret = self->GetToolShortHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxSize wxToolBar::GetToolSize() const
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetToolSize() const function, expected prototype:\nwxSize wxToolBar::GetToolSize() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetToolSize() const");
		}
		wxSize stack_lret = self->GetToolSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxToolBar::GetToolState(int toolId) const
	static int _bind_GetToolState(lua_State *L) {
		if (!_lg_typecheck_GetToolState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::GetToolState(int toolId) const function, expected prototype:\nbool wxToolBar::GetToolState(int toolId) const\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::GetToolState(int) const");
		}
		bool lret = self->GetToolState(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxToolBar::GetToolsCount() const
	static int _bind_GetToolsCount(lua_State *L) {
		if (!_lg_typecheck_GetToolsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxToolBar::GetToolsCount() const function, expected prototype:\nsize_t wxToolBar::GetToolsCount() const\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxToolBar::GetToolsCount() const");
		}
		size_t lret = self->GetToolsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_InsertControl(lua_State *L) {
		if (!_lg_typecheck_InsertControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		wxControl* control=dynamic_cast< wxControl* >(Luna< wxObject >::check(L,3));
		wxString label(lua_tostring(L,4),lua_objlen(L,4));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertControl(size_t, wxControl *, const wxString &)");
		}
		wxToolBarToolBase * lret = self->InsertControl(pos, control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos)
	static int _bind_InsertSeparator(lua_State *L) {
		if (!_lg_typecheck_InsertSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos)\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertSeparator(size_t)");
		}
		wxToolBarToolBase * lret = self->InsertSeparator(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos)
	static int _bind_InsertStretchableSpace(lua_State *L) {
		if (!_lg_typecheck_InsertStretchableSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos)\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t)");
		}
		wxToolBarToolBase * lret = self->InsertStretchableSpace(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString)
	static int _bind_InsertTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertTool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 56813631\narg 7 ID = 88196105\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		int toolId=(int)lua_tointeger(L,3);
		const wxBitmap* bitmap1_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::InsertTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bitmap2_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bitmap2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap2 in wxToolBar::InsertTool function");
		}
		const wxBitmap & bitmap2=luatop>4 ? *bitmap2_ptr : wxNullBitmap;
		bool isToggle=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : false;
		wxObject* clientData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;
		wxString shortHelpString(lua_tostring(L,8),lua_objlen(L,8));
		wxString longHelpString(lua_tostring(L,9),lua_objlen(L,9));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertTool(size_t, int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &)");
		}
		wxToolBarToolBase * lret = self->InsertTool(pos, toolId, bitmap1, bitmap2, isToggle, clientData, shortHelpString, longHelpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool)
	static int _bind_InsertTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertTool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool)\nClass arguments details:\narg 2 ID = 49669417\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxToolBarToolBase* tool=(Luna< wxToolBarToolBase >::check(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertTool(size_t, wxToolBarToolBase *)");
		}
		wxToolBarToolBase * lret = self->InsertTool(pos, tool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxToolBar::InsertTool
	static int _bind_InsertTool(lua_State *L) {
		if (_lg_typecheck_InsertTool_overload_1(L)) return _bind_InsertTool_overload_1(L);
		if (_lg_typecheck_InsertTool_overload_2(L)) return _bind_InsertTool_overload_2(L);

		luaL_error(L, "error in function InsertTool, cannot match any of the overloads for function InsertTool:\n  InsertTool(size_t, int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &)\n  InsertTool(size_t, wxToolBarToolBase *)\n");
		return 0;
	}

	// bool wxToolBar::OnLeftClick(int toolId, bool toggleDown)
	static int _bind_OnLeftClick(lua_State *L) {
		if (!_lg_typecheck_OnLeftClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::OnLeftClick(int toolId, bool toggleDown) function, expected prototype:\nbool wxToolBar::OnLeftClick(int toolId, bool toggleDown)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggleDown=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::OnLeftClick(int, bool)");
		}
		bool lret = self->OnLeftClick(toolId, toggleDown);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::OnMouseEnter(int toolId)
	static int _bind_OnMouseEnter(lua_State *L) {
		if (!_lg_typecheck_OnMouseEnter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::OnMouseEnter(int toolId) function, expected prototype:\nvoid wxToolBar::OnMouseEnter(int toolId)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::OnMouseEnter(int)");
		}
		self->OnMouseEnter(toolId);

		return 0;
	}

	// void wxToolBar::OnRightClick(int toolId, long x, long y)
	static int _bind_OnRightClick(lua_State *L) {
		if (!_lg_typecheck_OnRightClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::OnRightClick(int toolId, long x, long y) function, expected prototype:\nvoid wxToolBar::OnRightClick(int toolId, long x, long y)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		long x=(long)lua_tointeger(L,3);
		long y=(long)lua_tointeger(L,4);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::OnRightClick(int, long, long)");
		}
		self->OnRightClick(toolId, x, y);

		return 0;
	}

	// bool wxToolBar::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::Realize() function, expected prototype:\nbool wxToolBar::Realize()\nClass arguments details:\n");
		}


		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::RemoveTool(int id)
	static int _bind_RemoveTool(lua_State *L) {
		if (!_lg_typecheck_RemoveTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::RemoveTool(int id) function, expected prototype:\nwxToolBarToolBase * wxToolBar::RemoveTool(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::RemoveTool(int)");
		}
		wxToolBarToolBase * lret = self->RemoveTool(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::SetDropdownMenu(int id, wxMenu * menu)
	static int _bind_SetDropdownMenu(lua_State *L) {
		if (!_lg_typecheck_SetDropdownMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxToolBar::SetDropdownMenu(int id, wxMenu * menu) function, expected prototype:\nbool wxToolBar::SetDropdownMenu(int id, wxMenu * menu)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxToolBar::SetDropdownMenu(int, wxMenu *)");
		}
		bool lret = self->SetDropdownMenu(id, menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::SetMargins(int x, int y)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetMargins(int x, int y) function, expected prototype:\nvoid wxToolBar::SetMargins(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetMargins(int, int)");
		}
		self->SetMargins(x, y);

		return 0;
	}

	// void wxToolBar::SetMargins(const wxSize & size)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetMargins(const wxSize & size) function, expected prototype:\nvoid wxToolBar::SetMargins(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::SetMargins function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetMargins(const wxSize &)");
		}
		self->SetMargins(size);

		return 0;
	}

	// Overload binder for wxToolBar::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(int, int)\n  SetMargins(const wxSize &)\n");
		return 0;
	}

	// void wxToolBar::SetToolBitmapSize(const wxSize & size)
	static int _bind_SetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_SetToolBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::SetToolBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::SetToolBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolBitmapSize(const wxSize &)");
		}
		self->SetToolBitmapSize(size);

		return 0;
	}

	// void wxToolBar::SetToolClientData(int id, wxObject * clientData)
	static int _bind_SetToolClientData(lua_State *L) {
		if (!_lg_typecheck_SetToolClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolClientData(int id, wxObject * clientData) function, expected prototype:\nvoid wxToolBar::SetToolClientData(int id, wxObject * clientData)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxObject* clientData=(Luna< wxObject >::check(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolClientData(int, wxObject *)");
		}
		self->SetToolClientData(id, clientData);

		return 0;
	}

	// void wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap)
	static int _bind_SetToolDisabledBitmap(lua_State *L) {
		if (!_lg_typecheck_SetToolDisabledBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::SetToolDisabledBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolDisabledBitmap(int, const wxBitmap &)");
		}
		self->SetToolDisabledBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString)
	static int _bind_SetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolLongHelp(int, const wxString &)");
		}
		self->SetToolLongHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap)
	static int _bind_SetToolNormalBitmap(lua_State *L) {
		if (!_lg_typecheck_SetToolNormalBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::SetToolNormalBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolNormalBitmap(int, const wxBitmap &)");
		}
		self->SetToolNormalBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::SetToolPacking(int packing)
	static int _bind_SetToolPacking(lua_State *L) {
		if (!_lg_typecheck_SetToolPacking(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolPacking(int packing) function, expected prototype:\nvoid wxToolBar::SetToolPacking(int packing)\nClass arguments details:\n");
		}

		int packing=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolPacking(int)");
		}
		self->SetToolPacking(packing);

		return 0;
	}

	// void wxToolBar::SetToolSeparation(int separation)
	static int _bind_SetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_SetToolSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolSeparation(int separation) function, expected prototype:\nvoid wxToolBar::SetToolSeparation(int separation)\nClass arguments details:\n");
		}

		int separation=(int)lua_tointeger(L,2);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolSeparation(int)");
		}
		self->SetToolSeparation(separation);

		return 0;
	}

	// void wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString)
	static int _bind_SetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolShortHelp(int, const wxString &)");
		}
		self->SetToolShortHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::ToggleTool(int toolId, bool toggle)
	static int _bind_ToggleTool(lua_State *L) {
		if (!_lg_typecheck_ToggleTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxToolBar::ToggleTool(int toolId, bool toggle) function, expected prototype:\nvoid wxToolBar::ToggleTool(int toolId, bool toggle)\nClass arguments details:\n");
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggle=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxToolBar::ToggleTool(int, bool)");
		}
		self->ToggleTool(toolId, toggle);

		return 0;
	}


	// Operator binds:

};

wxToolBar* LunaTraits< wxToolBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxToolBar::_bind_ctor(L);
}

void LunaTraits< wxToolBar >::_bind_dtor(wxToolBar* obj) {
	delete obj;
}

const char LunaTraits< wxToolBar >::className[] = "wxToolBar";
const char LunaTraits< wxToolBar >::fullName[] = "wxToolBar";
const char LunaTraits< wxToolBar >::moduleName[] = "wx";
const char* LunaTraits< wxToolBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxToolBar >::hash = 75713360;
const int LunaTraits< wxToolBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxToolBar >::methods[] = {
	{"AddCheckTool", &luna_wrapper_wxToolBar::_bind_AddCheckTool},
	{"AddControl", &luna_wrapper_wxToolBar::_bind_AddControl},
	{"AddRadioTool", &luna_wrapper_wxToolBar::_bind_AddRadioTool},
	{"AddSeparator", &luna_wrapper_wxToolBar::_bind_AddSeparator},
	{"AddStretchableSpace", &luna_wrapper_wxToolBar::_bind_AddStretchableSpace},
	{"AddTool", &luna_wrapper_wxToolBar::_bind_AddTool},
	{"ClearTools", &luna_wrapper_wxToolBar::_bind_ClearTools},
	{"DeleteTool", &luna_wrapper_wxToolBar::_bind_DeleteTool},
	{"DeleteToolByPos", &luna_wrapper_wxToolBar::_bind_DeleteToolByPos},
	{"EnableTool", &luna_wrapper_wxToolBar::_bind_EnableTool},
	{"FindById", &luna_wrapper_wxToolBar::_bind_FindById},
	{"FindControl", &luna_wrapper_wxToolBar::_bind_FindControl},
	{"FindToolForPosition", &luna_wrapper_wxToolBar::_bind_FindToolForPosition},
	{"GetMargins", &luna_wrapper_wxToolBar::_bind_GetMargins},
	{"GetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_GetToolBitmapSize},
	{"GetToolByPos", &luna_wrapper_wxToolBar::_bind_GetToolByPos},
	{"GetToolClientData", &luna_wrapper_wxToolBar::_bind_GetToolClientData},
	{"GetToolEnabled", &luna_wrapper_wxToolBar::_bind_GetToolEnabled},
	{"GetToolLongHelp", &luna_wrapper_wxToolBar::_bind_GetToolLongHelp},
	{"GetToolPacking", &luna_wrapper_wxToolBar::_bind_GetToolPacking},
	{"GetToolPos", &luna_wrapper_wxToolBar::_bind_GetToolPos},
	{"GetToolSeparation", &luna_wrapper_wxToolBar::_bind_GetToolSeparation},
	{"GetToolShortHelp", &luna_wrapper_wxToolBar::_bind_GetToolShortHelp},
	{"GetToolSize", &luna_wrapper_wxToolBar::_bind_GetToolSize},
	{"GetToolState", &luna_wrapper_wxToolBar::_bind_GetToolState},
	{"GetToolsCount", &luna_wrapper_wxToolBar::_bind_GetToolsCount},
	{"InsertControl", &luna_wrapper_wxToolBar::_bind_InsertControl},
	{"InsertSeparator", &luna_wrapper_wxToolBar::_bind_InsertSeparator},
	{"InsertStretchableSpace", &luna_wrapper_wxToolBar::_bind_InsertStretchableSpace},
	{"InsertTool", &luna_wrapper_wxToolBar::_bind_InsertTool},
	{"OnLeftClick", &luna_wrapper_wxToolBar::_bind_OnLeftClick},
	{"OnMouseEnter", &luna_wrapper_wxToolBar::_bind_OnMouseEnter},
	{"OnRightClick", &luna_wrapper_wxToolBar::_bind_OnRightClick},
	{"Realize", &luna_wrapper_wxToolBar::_bind_Realize},
	{"RemoveTool", &luna_wrapper_wxToolBar::_bind_RemoveTool},
	{"SetDropdownMenu", &luna_wrapper_wxToolBar::_bind_SetDropdownMenu},
	{"SetMargins", &luna_wrapper_wxToolBar::_bind_SetMargins},
	{"SetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_SetToolBitmapSize},
	{"SetToolClientData", &luna_wrapper_wxToolBar::_bind_SetToolClientData},
	{"SetToolDisabledBitmap", &luna_wrapper_wxToolBar::_bind_SetToolDisabledBitmap},
	{"SetToolLongHelp", &luna_wrapper_wxToolBar::_bind_SetToolLongHelp},
	{"SetToolNormalBitmap", &luna_wrapper_wxToolBar::_bind_SetToolNormalBitmap},
	{"SetToolPacking", &luna_wrapper_wxToolBar::_bind_SetToolPacking},
	{"SetToolSeparation", &luna_wrapper_wxToolBar::_bind_SetToolSeparation},
	{"SetToolShortHelp", &luna_wrapper_wxToolBar::_bind_SetToolShortHelp},
	{"ToggleTool", &luna_wrapper_wxToolBar::_bind_ToggleTool},
	{"__eq", &luna_wrapper_wxToolBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxToolBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxToolBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolBar >::enumValues[] = {
	{0,0}
};


