#include <plug_common.h>

class luna_wrapper_wxHtmlWinParser {
public:
	typedef Luna< wxHtmlWinParser > luna_t;

	// Derived class converters:
	static int _cast_from_wxHtmlParser(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHtmlWinParser* ptr= dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWinParser >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CloseContainer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateCurrentFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetActualColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContainer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontBold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFixed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontItalic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLinkColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenContainer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetActualColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontBold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontItalic(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLinkColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxHtmlContainerCell * wxHtmlWinParser::CloseContainer()
	static int _bind_CloseContainer(lua_State *L) {
		if (!_lg_typecheck_CloseContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWinParser::CloseContainer() function, expected prototype:\nwxHtmlContainerCell * wxHtmlWinParser::CloseContainer()\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWinParser::CloseContainer()");
		}
		wxHtmlContainerCell * lret = self->CloseContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// wxFont * wxHtmlWinParser::CreateCurrentFont()
	static int _bind_CreateCurrentFont(lua_State *L) {
		if (!_lg_typecheck_CreateCurrentFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont * wxHtmlWinParser::CreateCurrentFont() function, expected prototype:\nwxFont * wxHtmlWinParser::CreateCurrentFont()\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont * wxHtmlWinParser::CreateCurrentFont()");
		}
		wxFont * lret = self->CreateCurrentFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxHtmlWinParser::GetActualColor() const
	static int _bind_GetActualColor(lua_State *L) {
		if (!_lg_typecheck_GetActualColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxHtmlWinParser::GetActualColor() const function, expected prototype:\nconst wxColour & wxHtmlWinParser::GetActualColor() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxHtmlWinParser::GetActualColor() const");
		}
		const wxColour* lret = &self->GetActualColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// int wxHtmlWinParser::GetAlign() const
	static int _bind_GetAlign(lua_State *L) {
		if (!_lg_typecheck_GetAlign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetAlign() const function, expected prototype:\nint wxHtmlWinParser::GetAlign() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetAlign() const");
		}
		int lret = self->GetAlign();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWinParser::GetCharHeight() const
	static int _bind_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_GetCharHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetCharHeight() const function, expected prototype:\nint wxHtmlWinParser::GetCharHeight() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetCharHeight() const");
		}
		int lret = self->GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWinParser::GetCharWidth() const
	static int _bind_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_GetCharWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetCharWidth() const function, expected prototype:\nint wxHtmlWinParser::GetCharWidth() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetCharWidth() const");
		}
		int lret = self->GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxHtmlContainerCell * wxHtmlWinParser::GetContainer() const
	static int _bind_GetContainer(lua_State *L) {
		if (!_lg_typecheck_GetContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWinParser::GetContainer() const function, expected prototype:\nwxHtmlContainerCell * wxHtmlWinParser::GetContainer() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWinParser::GetContainer() const");
		}
		wxHtmlContainerCell * lret = self->GetContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// wxDC * wxHtmlWinParser::GetDC()
	static int _bind_GetDC(lua_State *L) {
		if (!_lg_typecheck_GetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDC * wxHtmlWinParser::GetDC() function, expected prototype:\nwxDC * wxHtmlWinParser::GetDC()\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDC * wxHtmlWinParser::GetDC()");
		}
		wxDC * lret = self->GetDC();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDC >::push(L,lret,false);

		return 1;
	}

	// int wxHtmlWinParser::GetFontBold() const
	static int _bind_GetFontBold(lua_State *L) {
		if (!_lg_typecheck_GetFontBold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetFontBold() const function, expected prototype:\nint wxHtmlWinParser::GetFontBold() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetFontBold() const");
		}
		int lret = self->GetFontBold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHtmlWinParser::GetFontFace() const
	static int _bind_GetFontFace(lua_State *L) {
		if (!_lg_typecheck_GetFontFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWinParser::GetFontFace() const function, expected prototype:\nwxString wxHtmlWinParser::GetFontFace() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWinParser::GetFontFace() const");
		}
		wxString lret = self->GetFontFace();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxHtmlWinParser::GetFontFixed() const
	static int _bind_GetFontFixed(lua_State *L) {
		if (!_lg_typecheck_GetFontFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetFontFixed() const function, expected prototype:\nint wxHtmlWinParser::GetFontFixed() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetFontFixed() const");
		}
		int lret = self->GetFontFixed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWinParser::GetFontItalic() const
	static int _bind_GetFontItalic(lua_State *L) {
		if (!_lg_typecheck_GetFontItalic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetFontItalic() const function, expected prototype:\nint wxHtmlWinParser::GetFontItalic() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetFontItalic() const");
		}
		int lret = self->GetFontItalic();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWinParser::GetFontSize() const
	static int _bind_GetFontSize(lua_State *L) {
		if (!_lg_typecheck_GetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetFontSize() const function, expected prototype:\nint wxHtmlWinParser::GetFontSize() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetFontSize() const");
		}
		int lret = self->GetFontSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWinParser::GetFontUnderlined() const
	static int _bind_GetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_GetFontUnderlined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlWinParser::GetFontUnderlined() const function, expected prototype:\nint wxHtmlWinParser::GetFontUnderlined() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlWinParser::GetFontUnderlined() const");
		}
		int lret = self->GetFontUnderlined();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxHtmlLinkInfo & wxHtmlWinParser::GetLink() const
	static int _bind_GetLink(lua_State *L) {
		if (!_lg_typecheck_GetLink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlLinkInfo & wxHtmlWinParser::GetLink() const function, expected prototype:\nconst wxHtmlLinkInfo & wxHtmlWinParser::GetLink() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlLinkInfo & wxHtmlWinParser::GetLink() const");
		}
		const wxHtmlLinkInfo* lret = &self->GetLink();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxHtmlWinParser::GetLinkColor() const
	static int _bind_GetLinkColor(lua_State *L) {
		if (!_lg_typecheck_GetLinkColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxHtmlWinParser::GetLinkColor() const function, expected prototype:\nconst wxColour & wxHtmlWinParser::GetLinkColor() const\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxHtmlWinParser::GetLinkColor() const");
		}
		const wxColour* lret = &self->GetLinkColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxHtmlContainerCell * wxHtmlWinParser::OpenContainer()
	static int _bind_OpenContainer(lua_State *L) {
		if (!_lg_typecheck_OpenContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWinParser::OpenContainer() function, expected prototype:\nwxHtmlContainerCell * wxHtmlWinParser::OpenContainer()\nClass arguments details:\n");
		}


		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWinParser::OpenContainer()");
		}
		wxHtmlContainerCell * lret = self->OpenContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWinParser::SetActualColor(const wxColour & clr)
	static int _bind_SetActualColor(lua_State *L) {
		if (!_lg_typecheck_SetActualColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetActualColor(const wxColour & clr) function, expected prototype:\nvoid wxHtmlWinParser::SetActualColor(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlWinParser::SetActualColor function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetActualColor(const wxColour &)");
		}
		self->SetActualColor(clr);

		return 0;
	}

	// void wxHtmlWinParser::SetAlign(int a)
	static int _bind_SetAlign(lua_State *L) {
		if (!_lg_typecheck_SetAlign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetAlign(int a) function, expected prototype:\nvoid wxHtmlWinParser::SetAlign(int a)\nClass arguments details:\n");
		}

		int a=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetAlign(int)");
		}
		self->SetAlign(a);

		return 0;
	}

	// wxHtmlContainerCell * wxHtmlWinParser::SetContainer(wxHtmlContainerCell * c)
	static int _bind_SetContainer(lua_State *L) {
		if (!_lg_typecheck_SetContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWinParser::SetContainer(wxHtmlContainerCell * c) function, expected prototype:\nwxHtmlContainerCell * wxHtmlWinParser::SetContainer(wxHtmlContainerCell * c)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlContainerCell* c=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,2));

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWinParser::SetContainer(wxHtmlContainerCell *)");
		}
		wxHtmlContainerCell * lret = self->SetContainer(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWinParser::SetDC(wxDC * dc, double pixel_scale = 1.0e+0)
	static int _bind_SetDC(lua_State *L) {
		if (!_lg_typecheck_SetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetDC(wxDC * dc, double pixel_scale = 1.0e+0) function, expected prototype:\nvoid wxHtmlWinParser::SetDC(wxDC * dc, double pixel_scale = 1.0e+0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDC* dc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		double pixel_scale=luatop>2 ? (double)lua_tonumber(L,3) : 1.0e+0;

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetDC(wxDC *, double)");
		}
		self->SetDC(dc, pixel_scale);

		return 0;
	}

	// void wxHtmlWinParser::SetFontBold(int x)
	static int _bind_SetFontBold(lua_State *L) {
		if (!_lg_typecheck_SetFontBold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontBold(int x) function, expected prototype:\nvoid wxHtmlWinParser::SetFontBold(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontBold(int)");
		}
		self->SetFontBold(x);

		return 0;
	}

	// void wxHtmlWinParser::SetFontFace(const wxString & face)
	static int _bind_SetFontFace(lua_State *L) {
		if (!_lg_typecheck_SetFontFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontFace(const wxString & face) function, expected prototype:\nvoid wxHtmlWinParser::SetFontFace(const wxString & face)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString face(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontFace(const wxString &)");
		}
		self->SetFontFace(face);

		return 0;
	}

	// void wxHtmlWinParser::SetFontFixed(int x)
	static int _bind_SetFontFixed(lua_State *L) {
		if (!_lg_typecheck_SetFontFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontFixed(int x) function, expected prototype:\nvoid wxHtmlWinParser::SetFontFixed(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontFixed(int)");
		}
		self->SetFontFixed(x);

		return 0;
	}

	// void wxHtmlWinParser::SetFontItalic(int x)
	static int _bind_SetFontItalic(lua_State *L) {
		if (!_lg_typecheck_SetFontItalic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontItalic(int x) function, expected prototype:\nvoid wxHtmlWinParser::SetFontItalic(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontItalic(int)");
		}
		self->SetFontItalic(x);

		return 0;
	}

	// void wxHtmlWinParser::SetFontSize(int s)
	static int _bind_SetFontSize(lua_State *L) {
		if (!_lg_typecheck_SetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontSize(int s) function, expected prototype:\nvoid wxHtmlWinParser::SetFontSize(int s)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontSize(int)");
		}
		self->SetFontSize(s);

		return 0;
	}

	// void wxHtmlWinParser::SetFontUnderlined(int x)
	static int _bind_SetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_SetFontUnderlined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFontUnderlined(int x) function, expected prototype:\nvoid wxHtmlWinParser::SetFontUnderlined(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFontUnderlined(int)");
		}
		self->SetFontUnderlined(x);

		return 0;
	}

	// void wxHtmlWinParser::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = 0)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = 0) function, expected prototype:\nvoid wxHtmlWinParser::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		int sizes=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetFonts(const wxString &, const wxString &, const int *)");
		}
		self->SetFonts(normal_face, fixed_face, &sizes);

		return 0;
	}

	// void wxHtmlWinParser::SetLink(const wxHtmlLinkInfo & link)
	static int _bind_SetLink(lua_State *L) {
		if (!_lg_typecheck_SetLink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetLink(const wxHtmlLinkInfo & link) function, expected prototype:\nvoid wxHtmlWinParser::SetLink(const wxHtmlLinkInfo & link)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxHtmlLinkInfo* link_ptr=dynamic_cast< wxHtmlLinkInfo* >(Luna< wxObject >::check(L,2));
		if( !link_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg link in wxHtmlWinParser::SetLink function");
		}
		const wxHtmlLinkInfo & link=*link_ptr;

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetLink(const wxHtmlLinkInfo &)");
		}
		self->SetLink(link);

		return 0;
	}

	// void wxHtmlWinParser::SetLinkColor(const wxColour & clr)
	static int _bind_SetLinkColor(lua_State *L) {
		if (!_lg_typecheck_SetLinkColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinParser::SetLinkColor(const wxColour & clr) function, expected prototype:\nvoid wxHtmlWinParser::SetLinkColor(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlWinParser::SetLinkColor function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlWinParser* self=dynamic_cast< wxHtmlWinParser* >(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinParser::SetLinkColor(const wxColour &)");
		}
		self->SetLinkColor(clr);

		return 0;
	}

	// static void wxHtmlWinParser::AddModule(wxHtmlTagsModule * module)
	static int _bind_AddModule(lua_State *L) {
		if (!_lg_typecheck_AddModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxHtmlWinParser::AddModule(wxHtmlTagsModule * module) function, expected prototype:\nstatic void wxHtmlWinParser::AddModule(wxHtmlTagsModule * module)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlTagsModule* module=dynamic_cast< wxHtmlTagsModule* >(Luna< wxObject >::check(L,1));

		wxHtmlWinParser::AddModule(module);

		return 0;
	}


	// Operator binds:

};

wxHtmlWinParser* LunaTraits< wxHtmlWinParser >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxObject * wxHtmlParser::GetProduct()

	// Abstract operators:
}

void LunaTraits< wxHtmlWinParser >::_bind_dtor(wxHtmlWinParser* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWinParser >::className[] = "wxHtmlWinParser";
const char LunaTraits< wxHtmlWinParser >::fullName[] = "wxHtmlWinParser";
const char LunaTraits< wxHtmlWinParser >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWinParser >::parents[] = {"wx.wxHtmlParser", 0};
const int LunaTraits< wxHtmlWinParser >::hash = 64984662;
const int LunaTraits< wxHtmlWinParser >::uniqueIDs[] = {65918681,0};

luna_RegType LunaTraits< wxHtmlWinParser >::methods[] = {
	{"CloseContainer", &luna_wrapper_wxHtmlWinParser::_bind_CloseContainer},
	{"CreateCurrentFont", &luna_wrapper_wxHtmlWinParser::_bind_CreateCurrentFont},
	{"GetActualColor", &luna_wrapper_wxHtmlWinParser::_bind_GetActualColor},
	{"GetAlign", &luna_wrapper_wxHtmlWinParser::_bind_GetAlign},
	{"GetCharHeight", &luna_wrapper_wxHtmlWinParser::_bind_GetCharHeight},
	{"GetCharWidth", &luna_wrapper_wxHtmlWinParser::_bind_GetCharWidth},
	{"GetContainer", &luna_wrapper_wxHtmlWinParser::_bind_GetContainer},
	{"GetDC", &luna_wrapper_wxHtmlWinParser::_bind_GetDC},
	{"GetFontBold", &luna_wrapper_wxHtmlWinParser::_bind_GetFontBold},
	{"GetFontFace", &luna_wrapper_wxHtmlWinParser::_bind_GetFontFace},
	{"GetFontFixed", &luna_wrapper_wxHtmlWinParser::_bind_GetFontFixed},
	{"GetFontItalic", &luna_wrapper_wxHtmlWinParser::_bind_GetFontItalic},
	{"GetFontSize", &luna_wrapper_wxHtmlWinParser::_bind_GetFontSize},
	{"GetFontUnderlined", &luna_wrapper_wxHtmlWinParser::_bind_GetFontUnderlined},
	{"GetLink", &luna_wrapper_wxHtmlWinParser::_bind_GetLink},
	{"GetLinkColor", &luna_wrapper_wxHtmlWinParser::_bind_GetLinkColor},
	{"OpenContainer", &luna_wrapper_wxHtmlWinParser::_bind_OpenContainer},
	{"SetActualColor", &luna_wrapper_wxHtmlWinParser::_bind_SetActualColor},
	{"SetAlign", &luna_wrapper_wxHtmlWinParser::_bind_SetAlign},
	{"SetContainer", &luna_wrapper_wxHtmlWinParser::_bind_SetContainer},
	{"SetDC", &luna_wrapper_wxHtmlWinParser::_bind_SetDC},
	{"SetFontBold", &luna_wrapper_wxHtmlWinParser::_bind_SetFontBold},
	{"SetFontFace", &luna_wrapper_wxHtmlWinParser::_bind_SetFontFace},
	{"SetFontFixed", &luna_wrapper_wxHtmlWinParser::_bind_SetFontFixed},
	{"SetFontItalic", &luna_wrapper_wxHtmlWinParser::_bind_SetFontItalic},
	{"SetFontSize", &luna_wrapper_wxHtmlWinParser::_bind_SetFontSize},
	{"SetFontUnderlined", &luna_wrapper_wxHtmlWinParser::_bind_SetFontUnderlined},
	{"SetFonts", &luna_wrapper_wxHtmlWinParser::_bind_SetFonts},
	{"SetLink", &luna_wrapper_wxHtmlWinParser::_bind_SetLink},
	{"SetLinkColor", &luna_wrapper_wxHtmlWinParser::_bind_SetLinkColor},
	{"AddModule", &luna_wrapper_wxHtmlWinParser::_bind_AddModule},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWinParser >::converters[] = {
	{"wxHtmlParser", &luna_wrapper_wxHtmlWinParser::_cast_from_wxHtmlParser},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWinParser >::enumValues[] = {
	{0,0}
};


