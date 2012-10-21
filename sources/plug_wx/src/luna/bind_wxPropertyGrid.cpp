#include <plug_common.h>

class luna_wrapper_wxPropertyGrid {
public:
	typedef Luna< wxPropertyGrid > luna_t;

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
		wxPropertyGrid* ptr= dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGrid >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGrid* ptr= dynamic_cast< wxPropertyGrid* >(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGrid >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddActionTrigger(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeginLabelEdit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CenterSplitter(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearActionTriggers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CommitChangesFromEditor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DedicateKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableCategories(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndLabelEdit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPanel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellDisabledTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEmptySpaceColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImageRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEditorTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUnspecifiedValueAppearance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUnspecifiedValueText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVerticalSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAnyModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditorFocused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeColumnEditable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnTLPChanging(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetColumnSizes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaptionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaptionTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellDisabledTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEmptySpaceColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterLeft(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUnspecifiedValueAppearance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVerticalSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoShowPropertyError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoHidePropertyError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditorsValueWasModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditorsValueWasNotModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditorsValueModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WasValueChangedInEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoGetTranslation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertyGrid::wxPropertyGrid()
	static wxPropertyGrid* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid() function, expected prototype:\nwxPropertyGrid::wxPropertyGrid()\nClass arguments details:\n");
		}


		return new wxPropertyGrid();
	}

	// wxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)
	static wxPropertyGrid* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr) function, expected prototype:\nwxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : (0);
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxPropertyGrid(parent, id, pos, size, style, name);
	}

	// Overload binder for wxPropertyGrid::wxPropertyGrid
	static wxPropertyGrid* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPropertyGrid, cannot match any of the overloads for function wxPropertyGrid:\n  wxPropertyGrid()\n  wxPropertyGrid(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0)
	static int _bind_AddActionTrigger(lua_State *L) {
		if (!_lg_typecheck_AddActionTrigger(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0) function, expected prototype:\nvoid wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int action=(int)lua_tointeger(L,2);
		int keycode=(int)lua_tointeger(L,3);
		int modifiers=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::AddActionTrigger(int, int, int)");
		}
		self->AddActionTrigger(action, keycode, modifiers);

		return 0;
	}

	// void wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0)
	static int _bind_BeginLabelEdit(lua_State *L) {
		if (!_lg_typecheck_BeginLabelEdit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0) function, expected prototype:\nvoid wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int colIndex=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::BeginLabelEdit(unsigned int)");
		}
		self->BeginLabelEdit(colIndex);

		return 0;
	}

	// void wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false)
	static int _bind_CenterSplitter(lua_State *L) {
		if (!_lg_typecheck_CenterSplitter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false) function, expected prototype:\nvoid wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enableAutoResizing=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::CenterSplitter(bool)");
		}
		self->CenterSplitter(enableAutoResizing);

		return 0;
	}

	// void wxPropertyGrid::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::Clear() function, expected prototype:\nvoid wxPropertyGrid::Clear()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxPropertyGrid::ClearActionTriggers(int action)
	static int _bind_ClearActionTriggers(lua_State *L) {
		if (!_lg_typecheck_ClearActionTriggers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ClearActionTriggers(int action) function, expected prototype:\nvoid wxPropertyGrid::ClearActionTriggers(int action)\nClass arguments details:\n");
		}

		int action=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ClearActionTriggers(int)");
		}
		self->ClearActionTriggers(action);

		return 0;
	}

	// bool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0)
	static int _bind_CommitChangesFromEditor(lua_State *L) {
		if (!_lg_typecheck_CommitChangesFromEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0) function, expected prototype:\nbool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::CommitChangesFromEditor(unsigned int)");
		}
		bool lret = self->CommitChangesFromEditor(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::DedicateKey(int keycode)
	static int _bind_DedicateKey(lua_State *L) {
		if (!_lg_typecheck_DedicateKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DedicateKey(int keycode) function, expected prototype:\nvoid wxPropertyGrid::DedicateKey(int keycode)\nClass arguments details:\n");
		}

		int keycode=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DedicateKey(int)");
		}
		self->DedicateKey(keycode);

		return 0;
	}

	// bool wxPropertyGrid::EnableCategories(bool enable)
	static int _bind_EnableCategories(lua_State *L) {
		if (!_lg_typecheck_EnableCategories(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::EnableCategories(bool enable) function, expected prototype:\nbool wxPropertyGrid::EnableCategories(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::EnableCategories(bool)");
		}
		bool lret = self->EnableCategories(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::EndLabelEdit(bool commit = true)
	static int _bind_EndLabelEdit(lua_State *L) {
		if (!_lg_typecheck_EndLabelEdit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EndLabelEdit(bool commit = true) function, expected prototype:\nvoid wxPropertyGrid::EndLabelEdit(bool commit = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool commit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EndLabelEdit(bool)");
		}
		self->EndLabelEdit(commit);

		return 0;
	}

	// wxSize wxPropertyGrid::FitColumns()
	static int _bind_FitColumns(lua_State *L) {
		if (!_lg_typecheck_FitColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::FitColumns() function, expected prototype:\nwxSize wxPropertyGrid::FitColumns()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::FitColumns()");
		}
		wxSize stack_lret = self->FitColumns();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxTextCtrl * wxPropertyGrid::GetLabelEditor() const
	static int _bind_GetLabelEditor(lua_State *L) {
		if (!_lg_typecheck_GetLabelEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxPropertyGrid::GetLabelEditor() const function, expected prototype:\nwxTextCtrl * wxPropertyGrid::GetLabelEditor() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxPropertyGrid::GetLabelEditor() const");
		}
		wxTextCtrl * lret = self->GetLabelEditor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxPropertyGrid::GetPanel()
	static int _bind_GetPanel(lua_State *L) {
		if (!_lg_typecheck_GetPanel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxPropertyGrid::GetPanel() function, expected prototype:\nwxWindow * wxPropertyGrid::GetPanel()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxPropertyGrid::GetPanel()");
		}
		wxWindow * lret = self->GetPanel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCaptionBackgroundColour() const
	static int _bind_GetCaptionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCaptionBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCaptionBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCaptionBackgroundColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCaptionBackgroundColour() const");
		}
		wxColour stack_lret = self->GetCaptionBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont & wxPropertyGrid::GetCaptionFont()
	static int _bind_GetCaptionFont(lua_State *L) {
		if (!_lg_typecheck_GetCaptionFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont & wxPropertyGrid::GetCaptionFont() function, expected prototype:\nwxFont & wxPropertyGrid::GetCaptionFont()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont & wxPropertyGrid::GetCaptionFont()");
		}
		const wxFont* lret = &self->GetCaptionFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCaptionForegroundColour() const
	static int _bind_GetCaptionForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCaptionForegroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCaptionForegroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCaptionForegroundColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCaptionForegroundColour() const");
		}
		wxColour stack_lret = self->GetCaptionForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellBackgroundColour() const
	static int _bind_GetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCellBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellBackgroundColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellBackgroundColour() const");
		}
		wxColour stack_lret = self->GetCellBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellDisabledTextColour() const
	static int _bind_GetCellDisabledTextColour(lua_State *L) {
		if (!_lg_typecheck_GetCellDisabledTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellDisabledTextColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellDisabledTextColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellDisabledTextColour() const");
		}
		wxColour stack_lret = self->GetCellDisabledTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellTextColour() const
	static int _bind_GetCellTextColour(lua_State *L) {
		if (!_lg_typecheck_GetCellTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellTextColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellTextColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellTextColour() const");
		}
		wxColour stack_lret = self->GetCellTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxPropertyGrid::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxPropertyGrid::GetColumnCount() const function, expected prototype:\nunsigned int wxPropertyGrid::GetColumnCount() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxPropertyGrid::GetColumnCount() const");
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxPropertyGrid::GetEmptySpaceColour() const
	static int _bind_GetEmptySpaceColour(lua_State *L) {
		if (!_lg_typecheck_GetEmptySpaceColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetEmptySpaceColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetEmptySpaceColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetEmptySpaceColour() const");
		}
		wxColour stack_lret = self->GetEmptySpaceColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGrid::GetFontHeight() const
	static int _bind_GetFontHeight(lua_State *L) {
		if (!_lg_typecheck_GetFontHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetFontHeight() const function, expected prototype:\nint wxPropertyGrid::GetFontHeight() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetFontHeight() const");
		}
		int lret = self->GetFontHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGrid * wxPropertyGrid::GetGrid()
	static int _bind_GetGrid(lua_State *L) {
		if (!_lg_typecheck_GetGrid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPropertyGrid::GetGrid() function, expected prototype:\nwxPropertyGrid * wxPropertyGrid::GetGrid()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPropertyGrid::GetGrid()");
		}
		wxPropertyGrid * lret = self->GetGrid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// wxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const
	static int _bind_GetImageRect(lua_State *L) {
		if (!_lg_typecheck_GetImageRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const function, expected prototype:\nwxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		int item=(int)lua_tointeger(L,3);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxPropertyGrid::GetImageRect(wxPGProperty *, int) const");
		}
		wxRect stack_lret = self->GetImageRect(property, item);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const
	static int _bind_GetImageSize(lua_State *L) {
		if (!_lg_typecheck_GetImageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const function, expected prototype:\nwxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxPGProperty* property=luatop>1 ? dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2)) : (wxPGProperty*)NULL;
		int item=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::GetImageSize(wxPGProperty *, int) const");
		}
		wxSize stack_lret = self->GetImageSize(property, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetLastItem(int flags = wxPG_ITERATE_DEFAULT)
	static int _bind_GetLastItem(lua_State *L) {
		if (!_lg_typecheck_GetLastItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetLastItem(int flags = wxPG_ITERATE_DEFAULT) function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetLastItem(int flags = wxPG_ITERATE_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxPG_ITERATE_DEFAULT;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetLastItem(int)");
		}
		wxPGProperty * lret = self->GetLastItem(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetLineColour() const
	static int _bind_GetLineColour(lua_State *L) {
		if (!_lg_typecheck_GetLineColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetLineColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetLineColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetLineColour() const");
		}
		wxColour stack_lret = self->GetLineColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetMarginColour() const
	static int _bind_GetMarginColour(lua_State *L) {
		if (!_lg_typecheck_GetMarginColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetMarginColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetMarginColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetMarginColour() const");
		}
		wxColour stack_lret = self->GetMarginColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetRoot() const
	static int _bind_GetRoot(lua_State *L) {
		if (!_lg_typecheck_GetRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetRoot() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetRoot() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetRoot() const");
		}
		wxPGProperty * lret = self->GetRoot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGrid::GetRowHeight() const
	static int _bind_GetRowHeight(lua_State *L) {
		if (!_lg_typecheck_GetRowHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetRowHeight() const function, expected prototype:\nint wxPropertyGrid::GetRowHeight() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetRowHeight() const");
		}
		int lret = self->GetRowHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetSelectedProperty() const
	static int _bind_GetSelectedProperty(lua_State *L) {
		if (!_lg_typecheck_GetSelectedProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetSelectedProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetSelectedProperty() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetSelectedProperty() const");
		}
		wxPGProperty * lret = self->GetSelectedProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetSelection() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetSelection() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetSelection() const");
		}
		wxPGProperty * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetSelectionBackgroundColour() const
	static int _bind_GetSelectionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectionBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetSelectionBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetSelectionBackgroundColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetSelectionBackgroundColour() const");
		}
		wxColour stack_lret = self->GetSelectionBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetSelectionForegroundColour() const
	static int _bind_GetSelectionForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectionForegroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetSelectionForegroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetSelectionForegroundColour() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetSelectionForegroundColour() const");
		}
		wxColour stack_lret = self->GetSelectionForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const
	static int _bind_GetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_GetSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const function, expected prototype:\nint wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int splitterIndex=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetSplitterPosition(unsigned int) const");
		}
		int lret = self->GetSplitterPosition(splitterIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const
	static int _bind_GetEditorTextCtrl(lua_State *L) {
		if (!_lg_typecheck_GetEditorTextCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const function, expected prototype:\nwxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const");
		}
		wxTextCtrl * lret = self->GetEditorTextCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const
	static int _bind_GetUnspecifiedValueAppearance(lua_State *L) {
		if (!_lg_typecheck_GetUnspecifiedValueAppearance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const function, expected prototype:\nconst wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const");
		}
		const wxPGCell* lret = &self->GetUnspecifiedValueAppearance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}

	// wxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const
	static int _bind_GetUnspecifiedValueText(lua_State *L) {
		if (!_lg_typecheck_GetUnspecifiedValueText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const function, expected prototype:\nwxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int argFlags=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPropertyGrid::GetUnspecifiedValueText(int) const");
		}
		wxString lret = self->GetUnspecifiedValueText(argFlags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxPropertyGrid::GetVerticalSpacing() const
	static int _bind_GetVerticalSpacing(lua_State *L) {
		if (!_lg_typecheck_GetVerticalSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetVerticalSpacing() const function, expected prototype:\nint wxPropertyGrid::GetVerticalSpacing() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetVerticalSpacing() const");
		}
		int lret = self->GetVerticalSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const function, expected prototype:\nwxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPropertyGrid::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint &) const");
		}
		wxPropertyGridHitTestResult stack_lret = self->HitTest(pt);
		wxPropertyGridHitTestResult* lret = new wxPropertyGridHitTestResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridHitTestResult >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGrid::IsAnyModified() const
	static int _bind_IsAnyModified(lua_State *L) {
		if (!_lg_typecheck_IsAnyModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsAnyModified() const function, expected prototype:\nbool wxPropertyGrid::IsAnyModified() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsAnyModified() const");
		}
		bool lret = self->IsAnyModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::IsEditorFocused() const
	static int _bind_IsEditorFocused(lua_State *L) {
		if (!_lg_typecheck_IsEditorFocused(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsEditorFocused() const function, expected prototype:\nbool wxPropertyGrid::IsEditorFocused() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsEditorFocused() const");
		}
		bool lret = self->IsEditorFocused();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsFrozen() const function, expected prototype:\nbool wxPropertyGrid::IsFrozen() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsFrozen() const");
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true)
	static int _bind_MakeColumnEditable(lua_State *L) {
		if (!_lg_typecheck_MakeColumnEditable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true) function, expected prototype:\nvoid wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int column=(unsigned int)lua_tointeger(L,2);
		bool editable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::MakeColumnEditable(unsigned int, bool)");
		}
		self->MakeColumnEditable(column, editable);

		return 0;
	}

	// void wxPropertyGrid::OnTLPChanging(wxWindow * newTLP)
	static int _bind_OnTLPChanging(lua_State *L) {
		if (!_lg_typecheck_OnTLPChanging(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::OnTLPChanging(wxWindow * newTLP) function, expected prototype:\nvoid wxPropertyGrid::OnTLPChanging(wxWindow * newTLP)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* newTLP=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::OnTLPChanging(wxWindow *)");
		}
		self->OnTLPChanging(newTLP);

		return 0;
	}

	// void wxPropertyGrid::RefreshEditor()
	static int _bind_RefreshEditor(lua_State *L) {
		if (!_lg_typecheck_RefreshEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::RefreshEditor() function, expected prototype:\nvoid wxPropertyGrid::RefreshEditor()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::RefreshEditor()");
		}
		self->RefreshEditor();

		return 0;
	}

	// void wxPropertyGrid::RefreshProperty(wxPGProperty * p)
	static int _bind_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_RefreshProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGrid::RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPGProperty* p=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::RefreshProperty(wxPGProperty *)");
		}
		self->RefreshProperty(p);

		return 0;
	}

	// void wxPropertyGrid::ResetColours()
	static int _bind_ResetColours(lua_State *L) {
		if (!_lg_typecheck_ResetColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ResetColours() function, expected prototype:\nvoid wxPropertyGrid::ResetColours()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ResetColours()");
		}
		self->ResetColours();

		return 0;
	}

	// void wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false)
	static int _bind_ResetColumnSizes(lua_State *L) {
		if (!_lg_typecheck_ResetColumnSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false) function, expected prototype:\nvoid wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enableAutoResizing=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ResetColumnSizes(bool)");
		}
		self->ResetColumnSizes(enableAutoResizing);

		return 0;
	}

	// void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col)
	static int _bind_SetCaptionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetCaptionBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCaptionBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour &)");
		}
		self->SetCaptionBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCaptionTextColour(const wxColour & col)
	static int _bind_SetCaptionTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCaptionTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCaptionTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCaptionTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCaptionTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCaptionTextColour(const wxColour &)");
		}
		self->SetCaptionTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellBackgroundColour(const wxColour & col)
	static int _bind_SetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetCellBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellBackgroundColour(const wxColour &)");
		}
		self->SetCellBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col)
	static int _bind_SetCellDisabledTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCellDisabledTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellDisabledTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellDisabledTextColour(const wxColour &)");
		}
		self->SetCellDisabledTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellTextColour(const wxColour & col)
	static int _bind_SetCellTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCellTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellTextColour(const wxColour &)");
		}
		self->SetCellTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetColumnCount(int colCount)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetColumnCount(int colCount) function, expected prototype:\nvoid wxPropertyGrid::SetColumnCount(int colCount)\nClass arguments details:\n");
		}

		int colCount=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetColumnCount(int)");
		}
		self->SetColumnCount(colCount);

		return 0;
	}

	// void wxPropertyGrid::SetEmptySpaceColour(const wxColour & col)
	static int _bind_SetEmptySpaceColour(lua_State *L) {
		if (!_lg_typecheck_SetEmptySpaceColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetEmptySpaceColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetEmptySpaceColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetEmptySpaceColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetEmptySpaceColour(const wxColour &)");
		}
		self->SetEmptySpaceColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetLineColour(const wxColour & col)
	static int _bind_SetLineColour(lua_State *L) {
		if (!_lg_typecheck_SetLineColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetLineColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetLineColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetLineColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetLineColour(const wxColour &)");
		}
		self->SetLineColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetMarginColour(const wxColour & col)
	static int _bind_SetMarginColour(lua_State *L) {
		if (!_lg_typecheck_SetMarginColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetMarginColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetMarginColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetMarginColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetMarginColour(const wxColour &)");
		}
		self->SetMarginColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col)
	static int _bind_SetSelectionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetSelectionBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetSelectionBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour &)");
		}
		self->SetSelectionBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSelectionTextColour(const wxColour & col)
	static int _bind_SetSelectionTextColour(lua_State *L) {
		if (!_lg_typecheck_SetSelectionTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSelectionTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetSelectionTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetSelectionTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSelectionTextColour(const wxColour &)");
		}
		self->SetSelectionTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0) function, expected prototype:\nvoid wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int newxpos=(int)lua_tointeger(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSplitterPosition(int, int)");
		}
		self->SetSplitterPosition(newxpos, col);

		return 0;
	}

	// void wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false)
	static int _bind_SetSplitterLeft(lua_State *L) {
		if (!_lg_typecheck_SetSplitterLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false) function, expected prototype:\nvoid wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool privateChildrenToo=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSplitterLeft(bool)");
		}
		self->SetSplitterLeft(privateChildrenToo);

		return 0;
	}

	// void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell)
	static int _bind_SetUnspecifiedValueAppearance(lua_State *L) {
		if (!_lg_typecheck_SetUnspecifiedValueAppearance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell) function, expected prototype:\nvoid wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPGCell* cell_ptr=dynamic_cast< wxPGCell* >(Luna< wxObject >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxPropertyGrid::SetUnspecifiedValueAppearance function");
		}
		const wxPGCell & cell=*cell_ptr;

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell &)");
		}
		self->SetUnspecifiedValueAppearance(cell);

		return 0;
	}

	// void wxPropertyGrid::SetVerticalSpacing(int vspacing)
	static int _bind_SetVerticalSpacing(lua_State *L) {
		if (!_lg_typecheck_SetVerticalSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetVerticalSpacing(int vspacing) function, expected prototype:\nvoid wxPropertyGrid::SetVerticalSpacing(int vspacing)\nClass arguments details:\n");
		}

		int vspacing=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetVerticalSpacing(int)");
		}
		self->SetVerticalSpacing(vspacing);

		return 0;
	}

	// void wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg)
	static int _bind_DoShowPropertyError(lua_State *L) {
		if (!_lg_typecheck_DoShowPropertyError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg) function, expected prototype:\nvoid wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxString msg(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DoShowPropertyError(wxPGProperty *, const wxString &)");
		}
		self->DoShowPropertyError(property, msg);

		return 0;
	}

	// void wxPropertyGrid::DoHidePropertyError(wxPGProperty * property)
	static int _bind_DoHidePropertyError(lua_State *L) {
		if (!_lg_typecheck_DoHidePropertyError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DoHidePropertyError(wxPGProperty * property) function, expected prototype:\nvoid wxPropertyGrid::DoHidePropertyError(wxPGProperty * property)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));

		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DoHidePropertyError(wxPGProperty *)");
		}
		self->DoHidePropertyError(property);

		return 0;
	}

	// wxStatusBar * wxPropertyGrid::GetStatusBar()
	static int _bind_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_GetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPropertyGrid::GetStatusBar() function, expected prototype:\nwxStatusBar * wxPropertyGrid::GetStatusBar()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPropertyGrid::GetStatusBar()");
		}
		wxStatusBar * lret = self->GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGrid::EditorsValueWasModified()
	static int _bind_EditorsValueWasModified(lua_State *L) {
		if (!_lg_typecheck_EditorsValueWasModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EditorsValueWasModified() function, expected prototype:\nvoid wxPropertyGrid::EditorsValueWasModified()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EditorsValueWasModified()");
		}
		self->EditorsValueWasModified();

		return 0;
	}

	// void wxPropertyGrid::EditorsValueWasNotModified()
	static int _bind_EditorsValueWasNotModified(lua_State *L) {
		if (!_lg_typecheck_EditorsValueWasNotModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EditorsValueWasNotModified() function, expected prototype:\nvoid wxPropertyGrid::EditorsValueWasNotModified()\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EditorsValueWasNotModified()");
		}
		self->EditorsValueWasNotModified();

		return 0;
	}

	// bool wxPropertyGrid::IsEditorsValueModified() const
	static int _bind_IsEditorsValueModified(lua_State *L) {
		if (!_lg_typecheck_IsEditorsValueModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsEditorsValueModified() const function, expected prototype:\nbool wxPropertyGrid::IsEditorsValueModified() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsEditorsValueModified() const");
		}
		bool lret = self->IsEditorsValueModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::WasValueChangedInEvent() const
	static int _bind_WasValueChangedInEvent(lua_State *L) {
		if (!_lg_typecheck_WasValueChangedInEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::WasValueChangedInEvent() const function, expected prototype:\nbool wxPropertyGrid::WasValueChangedInEvent() const\nClass arguments details:\n");
		}


		wxPropertyGrid* self=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::WasValueChangedInEvent() const");
		}
		bool lret = self->WasValueChangedInEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxPropertyGrid::AutoGetTranslation(bool enable)
	static int _bind_AutoGetTranslation(lua_State *L) {
		if (!_lg_typecheck_AutoGetTranslation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxPropertyGrid::AutoGetTranslation(bool enable) function, expected prototype:\nstatic void wxPropertyGrid::AutoGetTranslation(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,1)==1);

		wxPropertyGrid::AutoGetTranslation(enable);

		return 0;
	}


	// Operator binds:

};

wxPropertyGrid* LunaTraits< wxPropertyGrid >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertyGrid::_bind_ctor(L);
}

void LunaTraits< wxPropertyGrid >::_bind_dtor(wxPropertyGrid* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGrid >::className[] = "wxPropertyGrid";
const char LunaTraits< wxPropertyGrid >::fullName[] = "wxPropertyGrid";
const char LunaTraits< wxPropertyGrid >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGrid >::parents[] = {"wx.wxControl", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGrid >::hash = 94710697;
const int LunaTraits< wxPropertyGrid >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGrid >::methods[] = {
	{"AddActionTrigger", &luna_wrapper_wxPropertyGrid::_bind_AddActionTrigger},
	{"BeginLabelEdit", &luna_wrapper_wxPropertyGrid::_bind_BeginLabelEdit},
	{"CenterSplitter", &luna_wrapper_wxPropertyGrid::_bind_CenterSplitter},
	{"Clear", &luna_wrapper_wxPropertyGrid::_bind_Clear},
	{"ClearActionTriggers", &luna_wrapper_wxPropertyGrid::_bind_ClearActionTriggers},
	{"CommitChangesFromEditor", &luna_wrapper_wxPropertyGrid::_bind_CommitChangesFromEditor},
	{"DedicateKey", &luna_wrapper_wxPropertyGrid::_bind_DedicateKey},
	{"EnableCategories", &luna_wrapper_wxPropertyGrid::_bind_EnableCategories},
	{"EndLabelEdit", &luna_wrapper_wxPropertyGrid::_bind_EndLabelEdit},
	{"FitColumns", &luna_wrapper_wxPropertyGrid::_bind_FitColumns},
	{"GetLabelEditor", &luna_wrapper_wxPropertyGrid::_bind_GetLabelEditor},
	{"GetPanel", &luna_wrapper_wxPropertyGrid::_bind_GetPanel},
	{"GetCaptionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionBackgroundColour},
	{"GetCaptionFont", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionFont},
	{"GetCaptionForegroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionForegroundColour},
	{"GetCellBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellBackgroundColour},
	{"GetCellDisabledTextColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellDisabledTextColour},
	{"GetCellTextColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellTextColour},
	{"GetColumnCount", &luna_wrapper_wxPropertyGrid::_bind_GetColumnCount},
	{"GetEmptySpaceColour", &luna_wrapper_wxPropertyGrid::_bind_GetEmptySpaceColour},
	{"GetFontHeight", &luna_wrapper_wxPropertyGrid::_bind_GetFontHeight},
	{"GetGrid", &luna_wrapper_wxPropertyGrid::_bind_GetGrid},
	{"GetImageRect", &luna_wrapper_wxPropertyGrid::_bind_GetImageRect},
	{"GetImageSize", &luna_wrapper_wxPropertyGrid::_bind_GetImageSize},
	{"GetLastItem", &luna_wrapper_wxPropertyGrid::_bind_GetLastItem},
	{"GetLineColour", &luna_wrapper_wxPropertyGrid::_bind_GetLineColour},
	{"GetMarginColour", &luna_wrapper_wxPropertyGrid::_bind_GetMarginColour},
	{"GetRoot", &luna_wrapper_wxPropertyGrid::_bind_GetRoot},
	{"GetRowHeight", &luna_wrapper_wxPropertyGrid::_bind_GetRowHeight},
	{"GetSelectedProperty", &luna_wrapper_wxPropertyGrid::_bind_GetSelectedProperty},
	{"GetSelection", &luna_wrapper_wxPropertyGrid::_bind_GetSelection},
	{"GetSelectionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetSelectionBackgroundColour},
	{"GetSelectionForegroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetSelectionForegroundColour},
	{"GetSplitterPosition", &luna_wrapper_wxPropertyGrid::_bind_GetSplitterPosition},
	{"GetEditorTextCtrl", &luna_wrapper_wxPropertyGrid::_bind_GetEditorTextCtrl},
	{"GetUnspecifiedValueAppearance", &luna_wrapper_wxPropertyGrid::_bind_GetUnspecifiedValueAppearance},
	{"GetUnspecifiedValueText", &luna_wrapper_wxPropertyGrid::_bind_GetUnspecifiedValueText},
	{"GetVerticalSpacing", &luna_wrapper_wxPropertyGrid::_bind_GetVerticalSpacing},
	{"HitTest", &luna_wrapper_wxPropertyGrid::_bind_HitTest},
	{"IsAnyModified", &luna_wrapper_wxPropertyGrid::_bind_IsAnyModified},
	{"IsEditorFocused", &luna_wrapper_wxPropertyGrid::_bind_IsEditorFocused},
	{"IsFrozen", &luna_wrapper_wxPropertyGrid::_bind_IsFrozen},
	{"MakeColumnEditable", &luna_wrapper_wxPropertyGrid::_bind_MakeColumnEditable},
	{"OnTLPChanging", &luna_wrapper_wxPropertyGrid::_bind_OnTLPChanging},
	{"RefreshEditor", &luna_wrapper_wxPropertyGrid::_bind_RefreshEditor},
	{"RefreshProperty", &luna_wrapper_wxPropertyGrid::_bind_RefreshProperty},
	{"ResetColours", &luna_wrapper_wxPropertyGrid::_bind_ResetColours},
	{"ResetColumnSizes", &luna_wrapper_wxPropertyGrid::_bind_ResetColumnSizes},
	{"SetCaptionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetCaptionBackgroundColour},
	{"SetCaptionTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCaptionTextColour},
	{"SetCellBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellBackgroundColour},
	{"SetCellDisabledTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellDisabledTextColour},
	{"SetCellTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellTextColour},
	{"SetColumnCount", &luna_wrapper_wxPropertyGrid::_bind_SetColumnCount},
	{"SetEmptySpaceColour", &luna_wrapper_wxPropertyGrid::_bind_SetEmptySpaceColour},
	{"SetLineColour", &luna_wrapper_wxPropertyGrid::_bind_SetLineColour},
	{"SetMarginColour", &luna_wrapper_wxPropertyGrid::_bind_SetMarginColour},
	{"SetSelectionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetSelectionBackgroundColour},
	{"SetSelectionTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetSelectionTextColour},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGrid::_bind_SetSplitterPosition},
	{"SetSplitterLeft", &luna_wrapper_wxPropertyGrid::_bind_SetSplitterLeft},
	{"SetUnspecifiedValueAppearance", &luna_wrapper_wxPropertyGrid::_bind_SetUnspecifiedValueAppearance},
	{"SetVerticalSpacing", &luna_wrapper_wxPropertyGrid::_bind_SetVerticalSpacing},
	{"DoShowPropertyError", &luna_wrapper_wxPropertyGrid::_bind_DoShowPropertyError},
	{"DoHidePropertyError", &luna_wrapper_wxPropertyGrid::_bind_DoHidePropertyError},
	{"GetStatusBar", &luna_wrapper_wxPropertyGrid::_bind_GetStatusBar},
	{"EditorsValueWasModified", &luna_wrapper_wxPropertyGrid::_bind_EditorsValueWasModified},
	{"EditorsValueWasNotModified", &luna_wrapper_wxPropertyGrid::_bind_EditorsValueWasNotModified},
	{"IsEditorsValueModified", &luna_wrapper_wxPropertyGrid::_bind_IsEditorsValueModified},
	{"WasValueChangedInEvent", &luna_wrapper_wxPropertyGrid::_bind_WasValueChangedInEvent},
	{"AutoGetTranslation", &luna_wrapper_wxPropertyGrid::_bind_AutoGetTranslation},
	{"__eq", &luna_wrapper_wxPropertyGrid::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGrid >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGrid::_cast_from_wxObject},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGrid::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGrid >::enumValues[] = {
	{0,0}
};


