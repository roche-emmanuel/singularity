#include <plug_common.h>

class luna_wrapper_wxAuiToolBarArt {
public:
	typedef Luna< wxAuiToolBarArt > luna_t;

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

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiToolBarArt");
		
		return luna_dynamicCast(L,converters,"wxAuiToolBarArt",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawDropDownButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawControlLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSeparator(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawGripper(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawOverflowButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetElementSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetElementSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowDropDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,29562974) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxAuiToolBarArt * wxAuiToolBarArt::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarArt * wxAuiToolBarArt::Clone() function, expected prototype:\nwxAuiToolBarArt * wxAuiToolBarArt::Clone()\nClass arguments details:\n");
		}


		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarArt * wxAuiToolBarArt::Clone()");
		}
		wxAuiToolBarArt * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarArt::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiToolBarArt::SetFlags(unsigned int flags)\nClass arguments details:\n");
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::SetFlags(unsigned int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// unsigned int wxAuiToolBarArt::GetFlags()
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxAuiToolBarArt::GetFlags() function, expected prototype:\nunsigned int wxAuiToolBarArt::GetFlags()\nClass arguments details:\n");
		}


		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxAuiToolBarArt::GetFlags()");
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarArt::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::SetFont(const wxFont & font) function, expected prototype:\nvoid wxAuiToolBarArt::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiToolBarArt::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::SetFont(const wxFont &)");
		}
		self->SetFont(font);

		return 0;
	}

	// wxFont wxAuiToolBarArt::GetFont()
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxAuiToolBarArt::GetFont() function, expected prototype:\nwxFont wxAuiToolBarArt::GetFont()\nClass arguments details:\n");
		}


		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxAuiToolBarArt::GetFont()");
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxAuiToolBarArt::SetTextOrientation(int orientation)
	static int _bind_SetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_SetTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::SetTextOrientation(int orientation) function, expected prototype:\nvoid wxAuiToolBarArt::SetTextOrientation(int orientation)\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::SetTextOrientation(int)");
		}
		self->SetTextOrientation(orientation);

		return 0;
	}

	// int wxAuiToolBarArt::GetTextOrientation()
	static int _bind_GetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_GetTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarArt::GetTextOrientation() function, expected prototype:\nint wxAuiToolBarArt::GetTextOrientation()\nClass arguments details:\n");
		}


		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarArt::GetTextOrientation()");
		}
		int lret = self->GetTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_DrawBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawBackground(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawBackground(dc, wnd, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_DrawLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::DrawLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawButton(lua_State *L) {
		if (!_lg_typecheck_DrawButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::DrawButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawDropDownButton(lua_State *L) {
		if (!_lg_typecheck_DrawDropDownButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawDropDownButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::DrawDropDownButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawDropDownButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawDropDownButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawDropDownButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawControlLabel(lua_State *L) {
		if (!_lg_typecheck_DrawControlLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawControlLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::DrawControlLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawControlLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawControlLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawControlLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawSeparator(lua_State *L) {
		if (!_lg_typecheck_DrawSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawSeparator function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawSeparator function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawSeparator(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawSeparator(dc, wnd, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawGripper(lua_State *L) {
		if (!_lg_typecheck_DrawGripper(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawGripper function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawGripper function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawGripper(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawGripper(dc, wnd, rect);

		return 0;
	}

	// void wxAuiToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	static int _bind_DrawOverflowButton(lua_State *L) {
		if (!_lg_typecheck_DrawOverflowButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) function, expected prototype:\nvoid wxAuiToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::DrawOverflowButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiToolBarArt::DrawOverflowButton function");
		}
		const wxRect & rect=*rect_ptr;
		int state=(int)lua_tointeger(L,5);

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::DrawOverflowButton(wxDC &, wxWindow *, const wxRect &, int)");
		}
		self->DrawOverflowButton(dc, wnd, rect, state);

		return 0;
	}

	// wxSize wxAuiToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetLabelSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::GetLabelSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::GetLabelSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBarArt::GetLabelSize(wxDC &, wxWindow *, const wxAuiToolBarItem &)");
		}
		wxSize stack_lret = self->GetLabelSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiToolBarArt::GetToolSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiToolBarArt::GetToolSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiToolBarArt::GetToolSize(wxDC &, wxWindow *, const wxAuiToolBarItem &)");
		}
		wxSize stack_lret = self->GetToolSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxAuiToolBarArt::GetElementSize(int element_id)
	static int _bind_GetElementSize(lua_State *L) {
		if (!_lg_typecheck_GetElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarArt::GetElementSize(int element_id) function, expected prototype:\nint wxAuiToolBarArt::GetElementSize(int element_id)\nClass arguments details:\n");
		}

		int element_id=(int)lua_tointeger(L,2);

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarArt::GetElementSize(int)");
		}
		int lret = self->GetElementSize(element_id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarArt::SetElementSize(int element_id, int size)
	static int _bind_SetElementSize(lua_State *L) {
		if (!_lg_typecheck_SetElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarArt::SetElementSize(int element_id, int size) function, expected prototype:\nvoid wxAuiToolBarArt::SetElementSize(int element_id, int size)\nClass arguments details:\n");
		}

		int element_id=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarArt::SetElementSize(int, int)");
		}
		self->SetElementSize(element_id, size);

		return 0;
	}

	// int wxAuiToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	static int _bind_ShowDropDown(lua_State *L) {
		if (!_lg_typecheck_ShowDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) function, expected prototype:\nint wxAuiToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 29562974\n");
		}

		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxAuiToolBarItemArray* items_ptr=(Luna< wxAuiToolBarItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxAuiToolBarArt::ShowDropDown function");
		}
		const wxAuiToolBarItemArray & items=*items_ptr;

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarArt::ShowDropDown(wxWindow *, const wxAuiToolBarItemArray &)");
		}
		int lret = self->ShowDropDown(wnd, items);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBarArt* LunaTraits< wxAuiToolBarArt >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxAuiToolBarArt * wxAuiToolBarArt::Clone()
	// void wxAuiToolBarArt::SetFlags(unsigned int flags)
	// unsigned int wxAuiToolBarArt::GetFlags()
	// void wxAuiToolBarArt::SetFont(const wxFont & font)
	// wxFont wxAuiToolBarArt::GetFont()
	// void wxAuiToolBarArt::SetTextOrientation(int orientation)
	// int wxAuiToolBarArt::GetTextOrientation()
	// void wxAuiToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxAuiToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	// void wxAuiToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	// void wxAuiToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	// void wxAuiToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	// void wxAuiToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxAuiToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxAuiToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	// wxSize wxAuiToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	// wxSize wxAuiToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	// int wxAuiToolBarArt::GetElementSize(int element_id)
	// void wxAuiToolBarArt::SetElementSize(int element_id, int size)
	// int wxAuiToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)

	// Abstract operators:
}

void LunaTraits< wxAuiToolBarArt >::_bind_dtor(wxAuiToolBarArt* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBarArt >::className[] = "wxAuiToolBarArt";
const char LunaTraits< wxAuiToolBarArt >::fullName[] = "wxAuiToolBarArt";
const char LunaTraits< wxAuiToolBarArt >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBarArt >::parents[] = {0};
const int LunaTraits< wxAuiToolBarArt >::hash = 19206291;
const int LunaTraits< wxAuiToolBarArt >::uniqueIDs[] = {19206291,0};

luna_RegType LunaTraits< wxAuiToolBarArt >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiToolBarArt::_bind_Clone},
	{"SetFlags", &luna_wrapper_wxAuiToolBarArt::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxAuiToolBarArt::_bind_GetFlags},
	{"SetFont", &luna_wrapper_wxAuiToolBarArt::_bind_SetFont},
	{"GetFont", &luna_wrapper_wxAuiToolBarArt::_bind_GetFont},
	{"SetTextOrientation", &luna_wrapper_wxAuiToolBarArt::_bind_SetTextOrientation},
	{"GetTextOrientation", &luna_wrapper_wxAuiToolBarArt::_bind_GetTextOrientation},
	{"DrawBackground", &luna_wrapper_wxAuiToolBarArt::_bind_DrawBackground},
	{"DrawLabel", &luna_wrapper_wxAuiToolBarArt::_bind_DrawLabel},
	{"DrawButton", &luna_wrapper_wxAuiToolBarArt::_bind_DrawButton},
	{"DrawDropDownButton", &luna_wrapper_wxAuiToolBarArt::_bind_DrawDropDownButton},
	{"DrawControlLabel", &luna_wrapper_wxAuiToolBarArt::_bind_DrawControlLabel},
	{"DrawSeparator", &luna_wrapper_wxAuiToolBarArt::_bind_DrawSeparator},
	{"DrawGripper", &luna_wrapper_wxAuiToolBarArt::_bind_DrawGripper},
	{"DrawOverflowButton", &luna_wrapper_wxAuiToolBarArt::_bind_DrawOverflowButton},
	{"GetLabelSize", &luna_wrapper_wxAuiToolBarArt::_bind_GetLabelSize},
	{"GetToolSize", &luna_wrapper_wxAuiToolBarArt::_bind_GetToolSize},
	{"GetElementSize", &luna_wrapper_wxAuiToolBarArt::_bind_GetElementSize},
	{"SetElementSize", &luna_wrapper_wxAuiToolBarArt::_bind_SetElementSize},
	{"ShowDropDown", &luna_wrapper_wxAuiToolBarArt::_bind_ShowDropDown},
	{"dynCast", &luna_wrapper_wxAuiToolBarArt::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBarArt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBarArt >::enumValues[] = {
	{0,0}
};


