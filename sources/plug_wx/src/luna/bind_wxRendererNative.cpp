#include <plug_common.h>

class luna_wrapper_wxRendererNative {
public:
	typedef Luna< wxRendererNative > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRendererNative");
		
		return luna_dynamicCast(L,converters,"wxRendererNative",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_DrawCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_DrawFocusRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_DrawItemSelectionRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_DrawTreeItemButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawChoice(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawComboBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTextCtrl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRadioBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTitleBarBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckBoxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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

	inline static bool _lg_typecheck_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefault(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGeneric(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,18398493)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawCheckBox(lua_State *L) {
		if (!_lg_typecheck_DrawCheckBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawCheckBox function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawCheckBox function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawCheckBox(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawCheckBox(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawComboBoxDropButton(lua_State *L) {
		if (!_lg_typecheck_DrawComboBoxDropButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawComboBoxDropButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawComboBoxDropButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawComboBoxDropButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawComboBoxDropButton(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawDropArrow(lua_State *L) {
		if (!_lg_typecheck_DrawDropArrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawDropArrow function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawDropArrow function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawDropArrow(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawDropArrow(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawFocusRect(lua_State *L) {
		if (!_lg_typecheck_DrawFocusRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawFocusRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawFocusRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawFocusRect(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawFocusRect(win, dc, rect, flags);

		return 0;
	}

	// int wxRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButton(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawHeaderButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawHeaderButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRendererNative::DrawHeaderButton(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *)");
		}
		int lret = self->DrawHeaderButton(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButtonContents(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButtonContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawHeaderButtonContents function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawHeaderButtonContents function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRendererNative::DrawHeaderButtonContents(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *)");
		}
		int lret = self->DrawHeaderButtonContents(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawItemSelectionRect(lua_State *L) {
		if (!_lg_typecheck_DrawItemSelectionRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawItemSelectionRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawItemSelectionRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawItemSelectionRect(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawItemSelectionRect(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawPushButton(lua_State *L) {
		if (!_lg_typecheck_DrawPushButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawPushButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawPushButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawPushButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawPushButton(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawSplitterBorder(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawSplitterBorder function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawSplitterBorder function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawSplitterBorder(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawSplitterBorder(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	static int _bind_DrawSplitterSash(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterSash(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawSplitterSash function");
		}
		wxDC & dc=*dc_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRendererNative::DrawSplitterSash function");
		}
		const wxSize & size=*size_ptr;
		int position=(int)lua_tointeger(L,5);
		wxOrientation orient=(wxOrientation)lua_tointeger(L,6);
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawSplitterSash(wxWindow *, wxDC &, const wxSize &, int, wxOrientation, int)");
		}
		self->DrawSplitterSash(win, dc, size, position, orient, flags);

		return 0;
	}

	// void wxRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawTreeItemButton(lua_State *L) {
		if (!_lg_typecheck_DrawTreeItemButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawTreeItemButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawTreeItemButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawTreeItemButton(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawTreeItemButton(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawChoice(lua_State *L) {
		if (!_lg_typecheck_DrawChoice(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawChoice function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawChoice function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawChoice(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawChoice(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawComboBox(lua_State *L) {
		if (!_lg_typecheck_DrawComboBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawComboBox function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawComboBox function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawComboBox(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawComboBox(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawTextCtrl(lua_State *L) {
		if (!_lg_typecheck_DrawTextCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawTextCtrl function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawTextCtrl function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawTextCtrl(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawTextCtrl(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawRadioBitmap(lua_State *L) {
		if (!_lg_typecheck_DrawRadioBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawRadioBitmap function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawRadioBitmap function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawRadioBitmap(wxWindow *, wxDC &, const wxRect &, int)");
		}
		self->DrawRadioBitmap(win, dc, rect, flags);

		return 0;
	}

	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)
	static int _bind_DrawTitleBarBitmap(lua_State *L) {
		if (!_lg_typecheck_DrawTitleBarBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0) function, expected prototype:\nvoid wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRendererNative::DrawTitleBarBitmap function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRendererNative::DrawTitleBarBitmap function");
		}
		const wxRect & rect=*rect_ptr;
		wxTitleBarButton button=(wxTitleBarButton)lua_tointeger(L,5);
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : 0;

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRendererNative::DrawTitleBarBitmap(wxWindow *, wxDC &, const wxRect &, wxTitleBarButton, int)");
		}
		self->DrawTitleBarBitmap(win, dc, rect, button, flags);

		return 0;
	}

	// wxSize wxRendererNative::GetCheckBoxSize(wxWindow * win)
	static int _bind_GetCheckBoxSize(lua_State *L) {
		if (!_lg_typecheck_GetCheckBoxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRendererNative::GetCheckBoxSize(wxWindow * win) function, expected prototype:\nwxSize wxRendererNative::GetCheckBoxSize(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRendererNative::GetCheckBoxSize(wxWindow *)");
		}
		wxSize stack_lret = self->GetCheckBoxSize(win);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxRendererNative::GetHeaderButtonHeight(wxWindow * win)
	static int _bind_GetHeaderButtonHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRendererNative::GetHeaderButtonHeight(wxWindow * win) function, expected prototype:\nint wxRendererNative::GetHeaderButtonHeight(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRendererNative::GetHeaderButtonHeight(wxWindow *)");
		}
		int lret = self->GetHeaderButtonHeight(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRendererNative::GetHeaderButtonMargin(wxWindow * win)
	static int _bind_GetHeaderButtonMargin(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRendererNative::GetHeaderButtonMargin(wxWindow * win) function, expected prototype:\nint wxRendererNative::GetHeaderButtonMargin(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRendererNative::GetHeaderButtonMargin(wxWindow *)");
		}
		int lret = self->GetHeaderButtonMargin(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRendererVersion wxRendererNative::GetVersion() const
	static int _bind_GetVersion(lua_State *L) {
		if (!_lg_typecheck_GetVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRendererVersion wxRendererNative::GetVersion() const function, expected prototype:\nwxRendererVersion wxRendererNative::GetVersion() const\nClass arguments details:\n");
		}


		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRendererVersion wxRendererNative::GetVersion() const");
		}
		wxRendererVersion stack_lret = self->GetVersion();
		wxRendererVersion* lret = new wxRendererVersion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererVersion >::push(L,lret,true);

		return 1;
	}

	// static wxRendererNative & wxRendererNative::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxRendererNative & wxRendererNative::Get() function, expected prototype:\nstatic wxRendererNative & wxRendererNative::Get()\nClass arguments details:\n");
		}


		const wxRendererNative* lret = &wxRendererNative::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// static wxRendererNative & wxRendererNative::GetDefault()
	static int _bind_GetDefault(lua_State *L) {
		if (!_lg_typecheck_GetDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxRendererNative & wxRendererNative::GetDefault() function, expected prototype:\nstatic wxRendererNative & wxRendererNative::GetDefault()\nClass arguments details:\n");
		}


		const wxRendererNative* lret = &wxRendererNative::GetDefault();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// static wxRendererNative & wxRendererNative::GetGeneric()
	static int _bind_GetGeneric(lua_State *L) {
		if (!_lg_typecheck_GetGeneric(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxRendererNative & wxRendererNative::GetGeneric() function, expected prototype:\nstatic wxRendererNative & wxRendererNative::GetGeneric()\nClass arguments details:\n");
		}


		const wxRendererNative* lret = &wxRendererNative::GetGeneric();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// static wxRendererNative * wxRendererNative::Load(const wxString & name)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxRendererNative * wxRendererNative::Load(const wxString & name) function, expected prototype:\nstatic wxRendererNative * wxRendererNative::Load(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		wxRendererNative * lret = wxRendererNative::Load(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// static wxRendererNative * wxRendererNative::Set(wxRendererNative * renderer)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxRendererNative * wxRendererNative::Set(wxRendererNative * renderer) function, expected prototype:\nstatic wxRendererNative * wxRendererNative::Set(wxRendererNative * renderer)\nClass arguments details:\narg 1 ID = 18398493\n");
		}

		wxRendererNative* renderer=(Luna< wxRendererNative >::check(L,1));

		wxRendererNative * lret = wxRendererNative::Set(renderer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRendererNative* LunaTraits< wxRendererNative >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// int wxRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	// int wxRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	// void wxRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	// void wxRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)
	// wxSize wxRendererNative::GetCheckBoxSize(wxWindow * win)
	// int wxRendererNative::GetHeaderButtonHeight(wxWindow * win)
	// int wxRendererNative::GetHeaderButtonMargin(wxWindow * win)
	// wxSplitterRenderParams wxRendererNative::GetSplitterParams(const wxWindow * win)
	// wxRendererVersion wxRendererNative::GetVersion() const

	// Abstract operators:
}

void LunaTraits< wxRendererNative >::_bind_dtor(wxRendererNative* obj) {
	delete obj;
}

const char LunaTraits< wxRendererNative >::className[] = "wxRendererNative";
const char LunaTraits< wxRendererNative >::fullName[] = "wxRendererNative";
const char LunaTraits< wxRendererNative >::moduleName[] = "wx";
const char* LunaTraits< wxRendererNative >::parents[] = {0};
const int LunaTraits< wxRendererNative >::hash = 18398493;
const int LunaTraits< wxRendererNative >::uniqueIDs[] = {18398493,0};

luna_RegType LunaTraits< wxRendererNative >::methods[] = {
	{"DrawCheckBox", &luna_wrapper_wxRendererNative::_bind_DrawCheckBox},
	{"DrawComboBoxDropButton", &luna_wrapper_wxRendererNative::_bind_DrawComboBoxDropButton},
	{"DrawDropArrow", &luna_wrapper_wxRendererNative::_bind_DrawDropArrow},
	{"DrawFocusRect", &luna_wrapper_wxRendererNative::_bind_DrawFocusRect},
	{"DrawHeaderButton", &luna_wrapper_wxRendererNative::_bind_DrawHeaderButton},
	{"DrawHeaderButtonContents", &luna_wrapper_wxRendererNative::_bind_DrawHeaderButtonContents},
	{"DrawItemSelectionRect", &luna_wrapper_wxRendererNative::_bind_DrawItemSelectionRect},
	{"DrawPushButton", &luna_wrapper_wxRendererNative::_bind_DrawPushButton},
	{"DrawSplitterBorder", &luna_wrapper_wxRendererNative::_bind_DrawSplitterBorder},
	{"DrawSplitterSash", &luna_wrapper_wxRendererNative::_bind_DrawSplitterSash},
	{"DrawTreeItemButton", &luna_wrapper_wxRendererNative::_bind_DrawTreeItemButton},
	{"DrawChoice", &luna_wrapper_wxRendererNative::_bind_DrawChoice},
	{"DrawComboBox", &luna_wrapper_wxRendererNative::_bind_DrawComboBox},
	{"DrawTextCtrl", &luna_wrapper_wxRendererNative::_bind_DrawTextCtrl},
	{"DrawRadioBitmap", &luna_wrapper_wxRendererNative::_bind_DrawRadioBitmap},
	{"DrawTitleBarBitmap", &luna_wrapper_wxRendererNative::_bind_DrawTitleBarBitmap},
	{"GetCheckBoxSize", &luna_wrapper_wxRendererNative::_bind_GetCheckBoxSize},
	{"GetHeaderButtonHeight", &luna_wrapper_wxRendererNative::_bind_GetHeaderButtonHeight},
	{"GetHeaderButtonMargin", &luna_wrapper_wxRendererNative::_bind_GetHeaderButtonMargin},
	{"GetVersion", &luna_wrapper_wxRendererNative::_bind_GetVersion},
	{"Get", &luna_wrapper_wxRendererNative::_bind_Get},
	{"GetDefault", &luna_wrapper_wxRendererNative::_bind_GetDefault},
	{"GetGeneric", &luna_wrapper_wxRendererNative::_bind_GetGeneric},
	{"Load", &luna_wrapper_wxRendererNative::_bind_Load},
	{"Set", &luna_wrapper_wxRendererNative::_bind_Set},
	{"dynCast", &luna_wrapper_wxRendererNative::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRendererNative >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRendererNative >::enumValues[] = {
	{0,0}
};

