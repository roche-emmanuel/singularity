#include <plug_common.h>

class luna_wrapper_wxAuiDefaultToolBarArt {
public:
	typedef Luna< wxAuiDefaultToolBarArt > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19206291) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiToolBarArt*)");
		}

		wxAuiToolBarArt* rhs =(Luna< wxAuiToolBarArt >::check(L,2));
		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxAuiToolBarArt(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiDefaultToolBarArt* ptr= dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiDefaultToolBarArt >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
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

	// Constructor binds:
	// wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt()
	static wxAuiDefaultToolBarArt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt() function, expected prototype:\nwxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt()\nClass arguments details:\n");
		}


		return new wxAuiDefaultToolBarArt();
	}


	// Function binds:
	// wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone() function, expected prototype:\nwxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()\nClass arguments details:\n");
		}


		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()");
		}
		wxAuiToolBarArt * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetFlags(unsigned int flags)\nClass arguments details:\n");
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetFlags(unsigned int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// unsigned int wxAuiDefaultToolBarArt::GetFlags()
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxAuiDefaultToolBarArt::GetFlags() function, expected prototype:\nunsigned int wxAuiDefaultToolBarArt::GetFlags()\nClass arguments details:\n");
		}


		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxAuiDefaultToolBarArt::GetFlags()");
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetFont(const wxFont & font) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiDefaultToolBarArt::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetFont(const wxFont &)");
		}
		self->SetFont(font);

		return 0;
	}

	// wxFont wxAuiDefaultToolBarArt::GetFont()
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxAuiDefaultToolBarArt::GetFont() function, expected prototype:\nwxFont wxAuiDefaultToolBarArt::GetFont()\nClass arguments details:\n");
		}


		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxAuiDefaultToolBarArt::GetFont()");
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetTextOrientation(int orientation)
	static int _bind_SetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_SetTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetTextOrientation(int orientation) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetTextOrientation(int orientation)\nClass arguments details:\n");
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetTextOrientation(int)");
		}
		self->SetTextOrientation(orientation);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::GetTextOrientation()
	static int _bind_GetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_GetTextOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::GetTextOrientation() function, expected prototype:\nint wxAuiDefaultToolBarArt::GetTextOrientation()\nClass arguments details:\n");
		}


		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::GetTextOrientation()");
		}
		int lret = self->GetTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_DrawBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawBackground(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawBackground(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_DrawLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawButton(lua_State *L) {
		if (!_lg_typecheck_DrawButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawDropDownButton(lua_State *L) {
		if (!_lg_typecheck_DrawDropDownButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawDropDownButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawControlLabel(lua_State *L) {
		if (!_lg_typecheck_DrawControlLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &)");
		}
		self->DrawControlLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawSeparator(lua_State *L) {
		if (!_lg_typecheck_DrawSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawSeparator function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawSeparator function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawSeparator(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawSeparator(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawGripper(lua_State *L) {
		if (!_lg_typecheck_DrawGripper(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawGripper function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawGripper function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawGripper(wxDC &, wxWindow *, const wxRect &)");
		}
		self->DrawGripper(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	static int _bind_DrawOverflowButton(lua_State *L) {
		if (!_lg_typecheck_DrawOverflowButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawOverflowButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawOverflowButton function");
		}
		const wxRect & rect=*rect_ptr;
		int state=(int)lua_tointeger(L,5);

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC &, wxWindow *, const wxRect &, int)");
		}
		self->DrawOverflowButton(dc, wnd, rect, state);

		return 0;
	}

	// wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetLabelSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::GetLabelSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::GetLabelSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC &, wxWindow *, const wxAuiToolBarItem &)");
		}
		wxSize stack_lret = self->GetLabelSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::GetToolSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::GetToolSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC &, wxWindow *, const wxAuiToolBarItem &)");
		}
		wxSize stack_lret = self->GetToolSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxAuiDefaultToolBarArt::GetElementSize(int element)
	static int _bind_GetElementSize(lua_State *L) {
		if (!_lg_typecheck_GetElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::GetElementSize(int element) function, expected prototype:\nint wxAuiDefaultToolBarArt::GetElementSize(int element)\nClass arguments details:\n");
		}

		int element=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::GetElementSize(int)");
		}
		int lret = self->GetElementSize(element);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size)
	static int _bind_SetElementSize(lua_State *L) {
		if (!_lg_typecheck_SetElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size)\nClass arguments details:\n");
		}

		int element_id=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetElementSize(int, int)");
		}
		self->SetElementSize(element_id, size);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	static int _bind_ShowDropDown(lua_State *L) {
		if (!_lg_typecheck_ShowDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) function, expected prototype:\nint wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 29562974\n");
		}

		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxAuiToolBarItemArray* items_ptr=(Luna< wxAuiToolBarItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxAuiDefaultToolBarArt::ShowDropDown function");
		}
		const wxAuiToolBarItemArray & items=*items_ptr;

		wxAuiDefaultToolBarArt* self=dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow *, const wxAuiToolBarItemArray &)");
		}
		int lret = self->ShowDropDown(wnd, items);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiDefaultToolBarArt* LunaTraits< wxAuiDefaultToolBarArt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiDefaultToolBarArt::_bind_ctor(L);
}

void LunaTraits< wxAuiDefaultToolBarArt >::_bind_dtor(wxAuiDefaultToolBarArt* obj) {
	delete obj;
}

const char LunaTraits< wxAuiDefaultToolBarArt >::className[] = "wxAuiDefaultToolBarArt";
const char LunaTraits< wxAuiDefaultToolBarArt >::fullName[] = "wxAuiDefaultToolBarArt";
const char LunaTraits< wxAuiDefaultToolBarArt >::moduleName[] = "wx";
const char* LunaTraits< wxAuiDefaultToolBarArt >::parents[] = {"wx.wxAuiToolBarArt", 0};
const int LunaTraits< wxAuiDefaultToolBarArt >::hash = 73209807;
const int LunaTraits< wxAuiDefaultToolBarArt >::uniqueIDs[] = {19206291,0};

luna_RegType LunaTraits< wxAuiDefaultToolBarArt >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_Clone},
	{"SetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetFlags},
	{"SetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetFont},
	{"GetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetFont},
	{"SetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetTextOrientation},
	{"GetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetTextOrientation},
	{"DrawBackground", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawBackground},
	{"DrawLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawLabel},
	{"DrawButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawButton},
	{"DrawDropDownButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawDropDownButton},
	{"DrawControlLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawControlLabel},
	{"DrawSeparator", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawSeparator},
	{"DrawGripper", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawGripper},
	{"DrawOverflowButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawOverflowButton},
	{"GetLabelSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetLabelSize},
	{"GetToolSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetToolSize},
	{"GetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetElementSize},
	{"SetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetElementSize},
	{"ShowDropDown", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_ShowDropDown},
	{"__eq", &luna_wrapper_wxAuiDefaultToolBarArt::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiDefaultToolBarArt >::converters[] = {
	{"wxAuiToolBarArt", &luna_wrapper_wxAuiDefaultToolBarArt::_cast_from_wxAuiToolBarArt},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiDefaultToolBarArt >::enumValues[] = {
	{0,0}
};


