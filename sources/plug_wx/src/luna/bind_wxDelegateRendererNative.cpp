#include <plug_common.h>

class luna_wrapper_wxDelegateRendererNative {
public:
	typedef Luna< wxDelegateRendererNative > luna_t;

	// Derived class converters:
	static int _cast_from_wxRendererNative(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDelegateRendererNative* ptr= dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDelegateRendererNative >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_DrawHeaderButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawHeaderButtonContents(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeaderButtonHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeaderButtonMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTreeItemButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSplitterBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSplitterSash(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawComboBoxDropButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawDropArrow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckBoxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPushButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawItemSelectionRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawFocusRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButton(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawHeaderButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawHeaderButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::DrawHeaderButton(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *)");
		}
		int lret = self->DrawHeaderButton(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButtonContents(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButtonContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawHeaderButtonContents function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawHeaderButtonContents function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *)");
		}
		int lret = self->DrawHeaderButtonContents(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win)
	static int _bind_GetHeaderButtonHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow *)");
		}
		int lret = self->GetHeaderButtonHeight(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win)
	static int _bind_GetHeaderButtonMargin(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow *)");
		}
		int lret = self->GetHeaderButtonMargin(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawTreeItemButton(lua_State *L) {
		if (!_lg_typecheck_DrawTreeItemButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawTreeItemButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawTreeItemButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawTreeItemButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawTreeItemButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawSplitterBorder(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawSplitterBorder function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawSplitterBorder function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawSplitterBorder(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawSplitterBorder(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	static int _bind_DrawSplitterSash(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterSash(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawSplitterSash function");
		}
		wxDC & dc=*dc_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDelegateRendererNative::DrawSplitterSash function");
		}
		const wxSize & size=*size_ptr;
		int position=(int)lua_tointeger(L,5);
		wxOrientation orient=(wxOrientation)lua_tointeger(L,6);
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawSplitterSash(wxWindow *, wxDC &, const wxSize &, int, wxOrientation, int)");
		}
		self->DrawSplitterSash(win, dc, size, position, orient, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawComboBoxDropButton(lua_State *L) {
		if (!_lg_typecheck_DrawComboBoxDropButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawComboBoxDropButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawComboBoxDropButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawComboBoxDropButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawDropArrow(lua_State *L) {
		if (!_lg_typecheck_DrawDropArrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawDropArrow function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawDropArrow function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawDropArrow(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawDropArrow(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawCheckBox(lua_State *L) {
		if (!_lg_typecheck_DrawCheckBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawCheckBox function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawCheckBox function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawCheckBox(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawCheckBox(win, dc, rect, flags);

		return 0;
	}

	// wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win)
	static int _bind_GetCheckBoxSize(lua_State *L) {
		if (!_lg_typecheck_GetCheckBoxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win) function, expected prototype:\nwxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow *)");
		}
		wxSize stack_lret = self->GetCheckBoxSize(win);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawPushButton(lua_State *L) {
		if (!_lg_typecheck_DrawPushButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawPushButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawPushButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawPushButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawPushButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawItemSelectionRect(lua_State *L) {
		if (!_lg_typecheck_DrawItemSelectionRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawItemSelectionRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawItemSelectionRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawItemSelectionRect(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawFocusRect(lua_State *L) {
		if (!_lg_typecheck_DrawFocusRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawFocusRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawFocusRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawFocusRect(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawFocusRect(win, dc, rect, flags);

		return 0;
	}

	// wxRendererVersion wxDelegateRendererNative::GetVersion() const
	static int _bind_GetVersion(lua_State *L) {
		if (!_lg_typecheck_GetVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRendererVersion wxDelegateRendererNative::GetVersion() const function, expected prototype:\nwxRendererVersion wxDelegateRendererNative::GetVersion() const\nClass arguments details:\n");
		}


		wxDelegateRendererNative* self=dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRendererVersion wxDelegateRendererNative::GetVersion() const");
		}
		wxRendererVersion stack_lret = self->GetVersion();
		wxRendererVersion* lret = new wxRendererVersion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererVersion >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxDelegateRendererNative* LunaTraits< wxDelegateRendererNative >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)

	// Abstract operators:
}

void LunaTraits< wxDelegateRendererNative >::_bind_dtor(wxDelegateRendererNative* obj) {
	delete obj;
}

const char LunaTraits< wxDelegateRendererNative >::className[] = "wxDelegateRendererNative";
const char LunaTraits< wxDelegateRendererNative >::fullName[] = "wxDelegateRendererNative";
const char LunaTraits< wxDelegateRendererNative >::moduleName[] = "wx";
const char* LunaTraits< wxDelegateRendererNative >::parents[] = {"wx.wxRendererNative", 0};
const int LunaTraits< wxDelegateRendererNative >::hash = 10273346;
const int LunaTraits< wxDelegateRendererNative >::uniqueIDs[] = {18398493,0};

luna_RegType LunaTraits< wxDelegateRendererNative >::methods[] = {
	{"DrawHeaderButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawHeaderButton},
	{"DrawHeaderButtonContents", &luna_wrapper_wxDelegateRendererNative::_bind_DrawHeaderButtonContents},
	{"GetHeaderButtonHeight", &luna_wrapper_wxDelegateRendererNative::_bind_GetHeaderButtonHeight},
	{"GetHeaderButtonMargin", &luna_wrapper_wxDelegateRendererNative::_bind_GetHeaderButtonMargin},
	{"DrawTreeItemButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawTreeItemButton},
	{"DrawSplitterBorder", &luna_wrapper_wxDelegateRendererNative::_bind_DrawSplitterBorder},
	{"DrawSplitterSash", &luna_wrapper_wxDelegateRendererNative::_bind_DrawSplitterSash},
	{"DrawComboBoxDropButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawComboBoxDropButton},
	{"DrawDropArrow", &luna_wrapper_wxDelegateRendererNative::_bind_DrawDropArrow},
	{"DrawCheckBox", &luna_wrapper_wxDelegateRendererNative::_bind_DrawCheckBox},
	{"GetCheckBoxSize", &luna_wrapper_wxDelegateRendererNative::_bind_GetCheckBoxSize},
	{"DrawPushButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawPushButton},
	{"DrawItemSelectionRect", &luna_wrapper_wxDelegateRendererNative::_bind_DrawItemSelectionRect},
	{"DrawFocusRect", &luna_wrapper_wxDelegateRendererNative::_bind_DrawFocusRect},
	{"GetVersion", &luna_wrapper_wxDelegateRendererNative::_bind_GetVersion},
	{0,0}
};

luna_ConverterType LunaTraits< wxDelegateRendererNative >::converters[] = {
	{"wxRendererNative", &luna_wrapper_wxDelegateRendererNative::_cast_from_wxRendererNative},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDelegateRendererNative >::enumValues[] = {
	{0,0}
};


