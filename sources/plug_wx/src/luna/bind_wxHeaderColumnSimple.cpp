#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderColumnSimple.h>

class luna_wrapper_wxHeaderColumnSimple {
public:
	typedef Luna< wxHeaderColumnSimple > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,185523) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderColumn*)");
		}

		wxHeaderColumn* rhs =(Luna< wxHeaderColumn >::check(L,2));
		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHeaderColumn(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHeaderColumnSimple* ptr= dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderColumnSimple >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
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

	inline static bool _lg_typecheck_IsSortKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSortOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSortOrderAscending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		int width=luatop>1 ? (int)lua_tointeger(L,2) : ::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>2 ? (wxAlignment)lua_tointeger(L,3) : ::wxALIGN_NOT;
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : ::wxCOL_DEFAULT_FLAGS;

		return new wxHeaderColumnSimple(title, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::wxHeaderColumnSimple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int width=luatop>1 ? (int)lua_tointeger(L,2) : ::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>2 ? (wxAlignment)lua_tointeger(L,3) : ::wxALIGN_CENTER;
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : ::wxCOL_DEFAULT_FLAGS;

		return new wxHeaderColumnSimple(bitmap, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		int width=luatop>2 ? (int)lua_tointeger(L,3) : ::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : ::wxALIGN_NOT;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : ::wxCOL_DEFAULT_FLAGS;

		return new wrapper_wxHeaderColumnSimple(L,NULL, title, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::wxHeaderColumnSimple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : ::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : ::wxALIGN_CENTER;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : ::wxCOL_DEFAULT_FLAGS;

		return new wrapper_wxHeaderColumnSimple(L,NULL, bitmap, width, align, flags);
	}

	// Overload binder for wxHeaderColumnSimple::wxHeaderColumnSimple
	static wxHeaderColumnSimple* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHeaderColumnSimple, cannot match any of the overloads for function wxHeaderColumnSimple:\n  wxHeaderColumnSimple(const wxString &, int, wxAlignment, int)\n  wxHeaderColumnSimple(const wxBitmap &, int, wxAlignment, int)\n  wxHeaderColumnSimple(lua_Table *, const wxString &, int, wxAlignment, int)\n  wxHeaderColumnSimple(lua_Table *, const wxBitmap &, int, wxAlignment, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxHeaderColumnSimple::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetTitle(const wxString & title) function, expected prototype:\nvoid wxHeaderColumnSimple::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetTitle(const wxString &)");
		}
		self->SetTitle(title);

		return 0;
	}

	// wxString wxHeaderColumnSimple::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHeaderColumnSimple::GetTitle() const function, expected prototype:\nwxString wxHeaderColumnSimple::GetTitle() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHeaderColumnSimple::GetTitle() const");
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// wxBitmap wxHeaderColumnSimple::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderColumnSimple::GetBitmap() const function, expected prototype:\nwxBitmap wxHeaderColumnSimple::GetBitmap() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderColumnSimple::GetBitmap() const");
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderColumnSimple::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetWidth(int width) function, expected prototype:\nvoid wxHeaderColumnSimple::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetWidth(int)");
		}
		self->SetWidth(width);

		return 0;
	}

	// int wxHeaderColumnSimple::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetWidth() const function, expected prototype:\nint wxHeaderColumnSimple::GetWidth() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetMinWidth(int minWidth)
	static int _bind_SetMinWidth(lua_State *L) {
		if (!_lg_typecheck_SetMinWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetMinWidth(int minWidth) function, expected prototype:\nvoid wxHeaderColumnSimple::SetMinWidth(int minWidth)\nClass arguments details:\n");
		}

		int minWidth=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetMinWidth(int)");
		}
		self->SetMinWidth(minWidth);

		return 0;
	}

	// int wxHeaderColumnSimple::GetMinWidth() const
	static int _bind_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetMinWidth() const function, expected prototype:\nint wxHeaderColumnSimple::GetMinWidth() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetMinWidth() const");
		}
		int lret = self->GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetAlignment(wxAlignment align)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetAlignment(wxAlignment align) function, expected prototype:\nvoid wxHeaderColumnSimple::SetAlignment(wxAlignment align)\nClass arguments details:\n");
		}

		wxAlignment align=(wxAlignment)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetAlignment(wxAlignment)");
		}
		self->SetAlignment(align);

		return 0;
	}

	// wxAlignment wxHeaderColumnSimple::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAlignment wxHeaderColumnSimple::GetAlignment() const function, expected prototype:\nwxAlignment wxHeaderColumnSimple::GetAlignment() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAlignment wxHeaderColumnSimple::GetAlignment() const");
		}
		wxAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetFlags(int flags) function, expected prototype:\nvoid wxHeaderColumnSimple::SetFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetFlags(int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// int wxHeaderColumnSimple::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetFlags() const function, expected prototype:\nint wxHeaderColumnSimple::GetFlags() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetFlags() const");
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderColumnSimple::IsSortKey() const
	static int _bind_IsSortKey(lua_State *L) {
		if (!_lg_typecheck_IsSortKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::IsSortKey() const function, expected prototype:\nbool wxHeaderColumnSimple::IsSortKey() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::IsSortKey() const");
		}
		bool lret = self->IsSortKey();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderColumnSimple::SetSortOrder(bool ascending)
	static int _bind_SetSortOrder(lua_State *L) {
		if (!_lg_typecheck_SetSortOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetSortOrder(bool ascending) function, expected prototype:\nvoid wxHeaderColumnSimple::SetSortOrder(bool ascending)\nClass arguments details:\n");
		}

		bool ascending=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetSortOrder(bool)");
		}
		self->SetSortOrder(ascending);

		return 0;
	}

	// bool wxHeaderColumnSimple::IsSortOrderAscending() const
	static int _bind_IsSortOrderAscending(lua_State *L) {
		if (!_lg_typecheck_IsSortOrderAscending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::IsSortOrderAscending() const function, expected prototype:\nbool wxHeaderColumnSimple::IsSortOrderAscending() const\nClass arguments details:\n");
		}


		wxHeaderColumnSimple* self=dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::IsSortOrderAscending() const");
		}
		bool lret = self->IsSortOrderAscending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHeaderColumnSimple* LunaTraits< wxHeaderColumnSimple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderColumnSimple::_bind_ctor(L);
}

void LunaTraits< wxHeaderColumnSimple >::_bind_dtor(wxHeaderColumnSimple* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderColumnSimple >::className[] = "wxHeaderColumnSimple";
const char LunaTraits< wxHeaderColumnSimple >::fullName[] = "wxHeaderColumnSimple";
const char LunaTraits< wxHeaderColumnSimple >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderColumnSimple >::parents[] = {"wx.wxSettableHeaderColumn", 0};
const int LunaTraits< wxHeaderColumnSimple >::hash = 94881514;
const int LunaTraits< wxHeaderColumnSimple >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxHeaderColumnSimple >::methods[] = {
	{"SetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_SetTitle},
	{"GetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_GetTitle},
	{"SetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_SetBitmap},
	{"GetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_GetBitmap},
	{"SetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_SetWidth},
	{"GetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_GetWidth},
	{"SetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_SetMinWidth},
	{"GetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_GetMinWidth},
	{"SetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_SetAlignment},
	{"GetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_GetAlignment},
	{"SetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_GetFlags},
	{"IsSortKey", &luna_wrapper_wxHeaderColumnSimple::_bind_IsSortKey},
	{"SetSortOrder", &luna_wrapper_wxHeaderColumnSimple::_bind_SetSortOrder},
	{"IsSortOrderAscending", &luna_wrapper_wxHeaderColumnSimple::_bind_IsSortOrderAscending},
	{"__eq", &luna_wrapper_wxHeaderColumnSimple::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderColumnSimple >::converters[] = {
	{"wxHeaderColumn", &luna_wrapper_wxHeaderColumnSimple::_cast_from_wxHeaderColumn},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderColumnSimple >::enumValues[] = {
	{0,0}
};


