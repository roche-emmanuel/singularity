#include <plug_common.h>

class luna_wrapper_wxMenuItem {
public:
	typedef Luna< wxMenuItem > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMenuItem* ptr= dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenuItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>6 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Check(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemLabelText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCheckable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSubMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmaps(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSubMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelFromText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMenuItem::wxMenuItem(wxMenu * parentMenu = NULL, int id = wxID_SEPARATOR, const wxString & text = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = wxITEM_NORMAL, wxMenu * subMenu = NULL)
	static wxMenuItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuItem::wxMenuItem(wxMenu * parentMenu = NULL, int id = wxID_SEPARATOR, const wxString & text = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = wxITEM_NORMAL, wxMenu * subMenu = NULL) function, expected prototype:\nwxMenuItem::wxMenuItem(wxMenu * parentMenu = NULL, int id = wxID_SEPARATOR, const wxString & text = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = wxITEM_NORMAL, wxMenu * subMenu = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxMenu* parentMenu=luatop>0 ? dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,1)) : (wxMenu*)NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_SEPARATOR;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		wxString helpString(lua_tostring(L,4),lua_objlen(L,4));
		wxItemKind kind=luatop>4 ? (wxItemKind)lua_tointeger(L,5) : wxITEM_NORMAL;
		wxMenu* subMenu=luatop>5 ? dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,6)) : (wxMenu*)NULL;

		return new wxMenuItem(parentMenu, id, text, helpString, kind, subMenu);
	}


	// Function binds:
	// void wxMenuItem::Check(bool check = true)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::Check(bool check = true) function, expected prototype:\nvoid wxMenuItem::Check(bool check = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool check=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::Check(bool)");
		}
		self->Check(check);

		return 0;
	}

	// void wxMenuItem::Enable(bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::Enable(bool enable = true) function, expected prototype:\nvoid wxMenuItem::Enable(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::Enable(bool)");
		}
		self->Enable(enable);

		return 0;
	}

	// wxColour & wxMenuItem::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour & wxMenuItem::GetBackgroundColour() const function, expected prototype:\nwxColour & wxMenuItem::GetBackgroundColour() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour & wxMenuItem::GetBackgroundColour() const");
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxMenuItem::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxMenuItem::GetBitmap() const function, expected prototype:\nconst wxBitmap & wxMenuItem::GetBitmap() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxMenuItem::GetBitmap() const");
		}
		const wxBitmap* lret = &self->GetBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxMenuItem::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont & wxMenuItem::GetFont() const function, expected prototype:\nwxFont & wxMenuItem::GetFont() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont & wxMenuItem::GetFont() const");
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxMenuItem::GetHelp() const
	static int _bind_GetHelp(lua_State *L) {
		if (!_lg_typecheck_GetHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxMenuItem::GetHelp() const function, expected prototype:\nconst wxString & wxMenuItem::GetHelp() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxMenuItem::GetHelp() const");
		}
		const wxString & lret = self->GetHelp();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxMenuItem::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMenuItem::GetId() const function, expected prototype:\nint wxMenuItem::GetId() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMenuItem::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuItem::GetItemLabel() const
	static int _bind_GetItemLabel(lua_State *L) {
		if (!_lg_typecheck_GetItemLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuItem::GetItemLabel() const function, expected prototype:\nwxString wxMenuItem::GetItemLabel() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuItem::GetItemLabel() const");
		}
		wxString lret = self->GetItemLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuItem::GetItemLabelText() const
	static int _bind_GetItemLabelText(lua_State *L) {
		if (!_lg_typecheck_GetItemLabelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuItem::GetItemLabelText() const function, expected prototype:\nwxString wxMenuItem::GetItemLabelText() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuItem::GetItemLabelText() const");
		}
		wxString lret = self->GetItemLabelText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxItemKind wxMenuItem::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxItemKind wxMenuItem::GetKind() const function, expected prototype:\nwxItemKind wxMenuItem::GetKind() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxItemKind wxMenuItem::GetKind() const");
		}
		wxItemKind lret = self->GetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuItem::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuItem::GetLabel() const function, expected prototype:\nwxString wxMenuItem::GetLabel() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuItem::GetLabel() const");
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxMenuItem::GetMarginWidth() const
	static int _bind_GetMarginWidth(lua_State *L) {
		if (!_lg_typecheck_GetMarginWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMenuItem::GetMarginWidth() const function, expected prototype:\nint wxMenuItem::GetMarginWidth() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMenuItem::GetMarginWidth() const");
		}
		int lret = self->GetMarginWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMenu * wxMenuItem::GetMenu() const
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuItem::GetMenu() const function, expected prototype:\nwxMenu * wxMenuItem::GetMenu() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuItem::GetMenu() const");
		}
		wxMenu * lret = self->GetMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxString wxMenuItem::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuItem::GetName() const function, expected prototype:\nwxString wxMenuItem::GetName() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuItem::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxMenu * wxMenuItem::GetSubMenu() const
	static int _bind_GetSubMenu(lua_State *L) {
		if (!_lg_typecheck_GetSubMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuItem::GetSubMenu() const function, expected prototype:\nwxMenu * wxMenuItem::GetSubMenu() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuItem::GetSubMenu() const");
		}
		wxMenu * lret = self->GetSubMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxMenuItem::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxMenuItem::GetText() const function, expected prototype:\nconst wxString & wxMenuItem::GetText() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxMenuItem::GetText() const");
		}
		const wxString & lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour & wxMenuItem::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour & wxMenuItem::GetTextColour() const function, expected prototype:\nwxColour & wxMenuItem::GetTextColour() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour & wxMenuItem::GetTextColour() const");
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxMenuItem::IsCheckable() const
	static int _bind_IsCheckable(lua_State *L) {
		if (!_lg_typecheck_IsCheckable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuItem::IsCheckable() const function, expected prototype:\nbool wxMenuItem::IsCheckable() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuItem::IsCheckable() const");
		}
		bool lret = self->IsCheckable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuItem::IsChecked() const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuItem::IsChecked() const function, expected prototype:\nbool wxMenuItem::IsChecked() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuItem::IsChecked() const");
		}
		bool lret = self->IsChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuItem::IsEnabled() const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuItem::IsEnabled() const function, expected prototype:\nbool wxMenuItem::IsEnabled() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuItem::IsEnabled() const");
		}
		bool lret = self->IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuItem::IsSeparator() const
	static int _bind_IsSeparator(lua_State *L) {
		if (!_lg_typecheck_IsSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuItem::IsSeparator() const function, expected prototype:\nbool wxMenuItem::IsSeparator() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuItem::IsSeparator() const");
		}
		bool lret = self->IsSeparator();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuItem::IsSubMenu() const
	static int _bind_IsSubMenu(lua_State *L) {
		if (!_lg_typecheck_IsSubMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuItem::IsSubMenu() const function, expected prototype:\nbool wxMenuItem::IsSubMenu() const\nClass arguments details:\n");
		}


		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuItem::IsSubMenu() const");
		}
		bool lret = self->IsSubMenu();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuItem::SetBackgroundColour(const wxColour & colour)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxMenuItem::SetBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMenuItem::SetBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetBackgroundColour(const wxColour &)");
		}
		self->SetBackgroundColour(colour);

		return 0;
	}

	// void wxMenuItem::SetBitmap(const wxBitmap & bmp, bool checked = true)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetBitmap(const wxBitmap & bmp, bool checked = true) function, expected prototype:\nvoid wxMenuItem::SetBitmap(const wxBitmap & bmp, bool checked = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxMenuItem::SetBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;
		bool checked=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetBitmap(const wxBitmap &, bool)");
		}
		self->SetBitmap(bmp, checked);

		return 0;
	}

	// void wxMenuItem::SetBitmaps(const wxBitmap & checked, const wxBitmap & unchecked = wxNullBitmap)
	static int _bind_SetBitmaps(lua_State *L) {
		if (!_lg_typecheck_SetBitmaps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetBitmaps(const wxBitmap & checked, const wxBitmap & unchecked = wxNullBitmap) function, expected prototype:\nvoid wxMenuItem::SetBitmaps(const wxBitmap & checked, const wxBitmap & unchecked = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* checked_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !checked_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg checked in wxMenuItem::SetBitmaps function");
		}
		const wxBitmap & checked=*checked_ptr;
		const wxBitmap* unchecked_ptr=luatop>2 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !unchecked_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg unchecked in wxMenuItem::SetBitmaps function");
		}
		const wxBitmap & unchecked=luatop>2 ? *unchecked_ptr : wxNullBitmap;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetBitmaps(const wxBitmap &, const wxBitmap &)");
		}
		self->SetBitmaps(checked, unchecked);

		return 0;
	}

	// void wxMenuItem::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetFont(const wxFont & font) function, expected prototype:\nvoid wxMenuItem::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxMenuItem::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetFont(const wxFont &)");
		}
		self->SetFont(font);

		return 0;
	}

	// void wxMenuItem::SetHelp(const wxString & helpString)
	static int _bind_SetHelp(lua_State *L) {
		if (!_lg_typecheck_SetHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetHelp(const wxString & helpString) function, expected prototype:\nvoid wxMenuItem::SetHelp(const wxString & helpString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString helpString(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetHelp(const wxString &)");
		}
		self->SetHelp(helpString);

		return 0;
	}

	// void wxMenuItem::SetItemLabel(const wxString & label)
	static int _bind_SetItemLabel(lua_State *L) {
		if (!_lg_typecheck_SetItemLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetItemLabel(const wxString & label) function, expected prototype:\nvoid wxMenuItem::SetItemLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetItemLabel(const wxString &)");
		}
		self->SetItemLabel(label);

		return 0;
	}

	// void wxMenuItem::SetMarginWidth(int width)
	static int _bind_SetMarginWidth(lua_State *L) {
		if (!_lg_typecheck_SetMarginWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetMarginWidth(int width) function, expected prototype:\nvoid wxMenuItem::SetMarginWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetMarginWidth(int)");
		}
		self->SetMarginWidth(width);

		return 0;
	}

	// void wxMenuItem::SetMenu(wxMenu * menu)
	static int _bind_SetMenu(lua_State *L) {
		if (!_lg_typecheck_SetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetMenu(wxMenu * menu) function, expected prototype:\nvoid wxMenuItem::SetMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetMenu(wxMenu *)");
		}
		self->SetMenu(menu);

		return 0;
	}

	// void wxMenuItem::SetSubMenu(wxMenu * menu)
	static int _bind_SetSubMenu(lua_State *L) {
		if (!_lg_typecheck_SetSubMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetSubMenu(wxMenu * menu) function, expected prototype:\nvoid wxMenuItem::SetSubMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetSubMenu(wxMenu *)");
		}
		self->SetSubMenu(menu);

		return 0;
	}

	// void wxMenuItem::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetText(const wxString & text) function, expected prototype:\nvoid wxMenuItem::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetText(const wxString &)");
		}
		self->SetText(text);

		return 0;
	}

	// void wxMenuItem::SetTextColour(const wxColour & colour)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuItem::SetTextColour(const wxColour & colour) function, expected prototype:\nvoid wxMenuItem::SetTextColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMenuItem::SetTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxMenuItem* self=dynamic_cast< wxMenuItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuItem::SetTextColour(const wxColour &)");
		}
		self->SetTextColour(colour);

		return 0;
	}

	// static wxString wxMenuItem::GetLabelFromText(const wxString & text)
	static int _bind_GetLabelFromText(lua_State *L) {
		if (!_lg_typecheck_GetLabelFromText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxMenuItem::GetLabelFromText(const wxString & text) function, expected prototype:\nstatic wxString wxMenuItem::GetLabelFromText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxMenuItem::GetLabelFromText(text);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxMenuItem::GetLabelText(const wxString & text)
	static int _bind_GetLabelText(lua_State *L) {
		if (!_lg_typecheck_GetLabelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxMenuItem::GetLabelText(const wxString & text) function, expected prototype:\nstatic wxString wxMenuItem::GetLabelText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxMenuItem::GetLabelText(text);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxMenuItem* LunaTraits< wxMenuItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMenuItem::_bind_ctor(L);
}

void LunaTraits< wxMenuItem >::_bind_dtor(wxMenuItem* obj) {
	delete obj;
}

const char LunaTraits< wxMenuItem >::className[] = "wxMenuItem";
const char LunaTraits< wxMenuItem >::fullName[] = "wxMenuItem";
const char LunaTraits< wxMenuItem >::moduleName[] = "wx";
const char* LunaTraits< wxMenuItem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxMenuItem >::hash = 63703596;
const int LunaTraits< wxMenuItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMenuItem >::methods[] = {
	{"Check", &luna_wrapper_wxMenuItem::_bind_Check},
	{"Enable", &luna_wrapper_wxMenuItem::_bind_Enable},
	{"GetBackgroundColour", &luna_wrapper_wxMenuItem::_bind_GetBackgroundColour},
	{"GetBitmap", &luna_wrapper_wxMenuItem::_bind_GetBitmap},
	{"GetFont", &luna_wrapper_wxMenuItem::_bind_GetFont},
	{"GetHelp", &luna_wrapper_wxMenuItem::_bind_GetHelp},
	{"GetId", &luna_wrapper_wxMenuItem::_bind_GetId},
	{"GetItemLabel", &luna_wrapper_wxMenuItem::_bind_GetItemLabel},
	{"GetItemLabelText", &luna_wrapper_wxMenuItem::_bind_GetItemLabelText},
	{"GetKind", &luna_wrapper_wxMenuItem::_bind_GetKind},
	{"GetLabel", &luna_wrapper_wxMenuItem::_bind_GetLabel},
	{"GetMarginWidth", &luna_wrapper_wxMenuItem::_bind_GetMarginWidth},
	{"GetMenu", &luna_wrapper_wxMenuItem::_bind_GetMenu},
	{"GetName", &luna_wrapper_wxMenuItem::_bind_GetName},
	{"GetSubMenu", &luna_wrapper_wxMenuItem::_bind_GetSubMenu},
	{"GetText", &luna_wrapper_wxMenuItem::_bind_GetText},
	{"GetTextColour", &luna_wrapper_wxMenuItem::_bind_GetTextColour},
	{"IsCheckable", &luna_wrapper_wxMenuItem::_bind_IsCheckable},
	{"IsChecked", &luna_wrapper_wxMenuItem::_bind_IsChecked},
	{"IsEnabled", &luna_wrapper_wxMenuItem::_bind_IsEnabled},
	{"IsSeparator", &luna_wrapper_wxMenuItem::_bind_IsSeparator},
	{"IsSubMenu", &luna_wrapper_wxMenuItem::_bind_IsSubMenu},
	{"SetBackgroundColour", &luna_wrapper_wxMenuItem::_bind_SetBackgroundColour},
	{"SetBitmap", &luna_wrapper_wxMenuItem::_bind_SetBitmap},
	{"SetBitmaps", &luna_wrapper_wxMenuItem::_bind_SetBitmaps},
	{"SetFont", &luna_wrapper_wxMenuItem::_bind_SetFont},
	{"SetHelp", &luna_wrapper_wxMenuItem::_bind_SetHelp},
	{"SetItemLabel", &luna_wrapper_wxMenuItem::_bind_SetItemLabel},
	{"SetMarginWidth", &luna_wrapper_wxMenuItem::_bind_SetMarginWidth},
	{"SetMenu", &luna_wrapper_wxMenuItem::_bind_SetMenu},
	{"SetSubMenu", &luna_wrapper_wxMenuItem::_bind_SetSubMenu},
	{"SetText", &luna_wrapper_wxMenuItem::_bind_SetText},
	{"SetTextColour", &luna_wrapper_wxMenuItem::_bind_SetTextColour},
	{"GetLabelFromText", &luna_wrapper_wxMenuItem::_bind_GetLabelFromText},
	{"GetLabelText", &luna_wrapper_wxMenuItem::_bind_GetLabelText},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenuItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuItem >::enumValues[] = {
	{0,0}
};

