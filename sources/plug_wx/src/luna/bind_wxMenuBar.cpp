#include <plug_common.h>

class luna_wrapper_wxMenuBar {
public:
	typedef Luna< wxMenuBar > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMenuBar* ptr= dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenuBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Append(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Check(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableTop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindMenuItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenuCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenuLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHelpString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelTop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAttached(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMenuBar::wxMenuBar(long style = 0)
	static wxMenuBar* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuBar::wxMenuBar(long style = 0) function, expected prototype:\nwxMenuBar::wxMenuBar(long style = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>0 ? (long)lua_tointeger(L,1) : 0;

		return new wxMenuBar(style);
	}


	// Function binds:
	// bool wxMenuBar::Append(wxMenu * menu, const wxString & title)
	static int _bind_Append(lua_State *L) {
		if (!_lg_typecheck_Append(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::Append(wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::Append(wxMenu * menu, const wxString & title)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuBar::Append(wxMenu *, const wxString &)");
		}
		bool lret = self->Append(menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Check(int id, bool check)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Check(int id, bool check) function, expected prototype:\nvoid wxMenuBar::Check(int id, bool check)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);
		bool check=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::Check(int, bool)");
		}
		self->Check(id, check);

		return 0;
	}

	// void wxMenuBar::Enable(int id, bool enable)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Enable(int id, bool enable) function, expected prototype:\nvoid wxMenuBar::Enable(int id, bool enable)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::Enable(int, bool)");
		}
		self->Enable(id, enable);

		return 0;
	}

	// void wxMenuBar::EnableTop(size_t pos, bool enable)
	static int _bind_EnableTop(lua_State *L) {
		if (!_lg_typecheck_EnableTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::EnableTop(size_t pos, bool enable) function, expected prototype:\nvoid wxMenuBar::EnableTop(size_t pos, bool enable)\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::EnableTop(size_t, bool)");
		}
		self->EnableTop(pos, enable);

		return 0;
	}

	// int wxMenuBar::FindMenu(const wxString & title) const
	static int _bind_FindMenu(lua_State *L) {
		if (!_lg_typecheck_FindMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMenuBar::FindMenu(const wxString & title) const function, expected prototype:\nint wxMenuBar::FindMenu(const wxString & title) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMenuBar::FindMenu(const wxString &) const");
		}
		int lret = self->FindMenu(title);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const
	static int _bind_FindMenuItem(lua_State *L) {
		if (!_lg_typecheck_FindMenuItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const function, expected prototype:\nint wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString menuString(lua_tostring(L,2),lua_objlen(L,2));
		wxString itemString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMenuBar::FindMenuItem(const wxString &, const wxString &) const");
		}
		int lret = self->FindMenuItem(menuString, itemString);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::GetHelpString(int id) const
	static int _bind_GetHelpString(lua_State *L) {
		if (!_lg_typecheck_GetHelpString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetHelpString(int id) const function, expected prototype:\nwxString wxMenuBar::GetHelpString(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetHelpString(int) const");
		}
		wxString lret = self->GetHelpString(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetLabel(int id) const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetLabel(int id) const function, expected prototype:\nwxString wxMenuBar::GetLabel(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetLabel(int) const");
		}
		wxString lret = self->GetLabel(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetLabelTop(size_t pos) const
	static int _bind_GetLabelTop(lua_State *L) {
		if (!_lg_typecheck_GetLabelTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetLabelTop(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetLabelTop(size_t pos) const\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetLabelTop(size_t) const");
		}
		wxString lret = self->GetLabelTop(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxMenu * wxMenuBar::GetMenu(size_t menuIndex) const
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::GetMenu(size_t menuIndex) const function, expected prototype:\nwxMenu * wxMenuBar::GetMenu(size_t menuIndex) const\nClass arguments details:\n");
		}

		size_t menuIndex=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::GetMenu(size_t) const");
		}
		wxMenu * lret = self->GetMenu(menuIndex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// size_t wxMenuBar::GetMenuCount() const
	static int _bind_GetMenuCount(lua_State *L) {
		if (!_lg_typecheck_GetMenuCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMenuBar::GetMenuCount() const function, expected prototype:\nsize_t wxMenuBar::GetMenuCount() const\nClass arguments details:\n");
		}


		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMenuBar::GetMenuCount() const");
		}
		size_t lret = self->GetMenuCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::GetMenuLabel(size_t pos) const
	static int _bind_GetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_GetMenuLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetMenuLabel(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetMenuLabel(size_t pos) const\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetMenuLabel(size_t) const");
		}
		wxString lret = self->GetMenuLabel(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetMenuLabelText(size_t pos) const
	static int _bind_GetMenuLabelText(lua_State *L) {
		if (!_lg_typecheck_GetMenuLabelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetMenuLabelText(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetMenuLabelText(size_t pos) const\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetMenuLabelText(size_t) const");
		}
		wxString lret = self->GetMenuLabelText(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuBar::Insert(size_t, wxMenu *, const wxString &)");
		}
		bool lret = self->Insert(pos, menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::IsChecked(int id) const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsChecked(int id) const function, expected prototype:\nbool wxMenuBar::IsChecked(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsChecked(int) const");
		}
		bool lret = self->IsChecked(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::IsEnabled(int id) const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsEnabled(int id) const function, expected prototype:\nbool wxMenuBar::IsEnabled(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsEnabled(int) const");
		}
		bool lret = self->IsEnabled(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_Refresh(lua_State *L) {
		if (!_lg_typecheck_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::Refresh(bool, const wxRect *)");
		}
		self->Refresh(eraseBackground, rect);

		return 0;
	}

	// wxMenu * wxMenuBar::Remove(size_t pos)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::Remove(size_t pos) function, expected prototype:\nwxMenu * wxMenuBar::Remove(size_t pos)\nClass arguments details:\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::Remove(size_t)");
		}
		wxMenu * lret = self->Remove(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nwxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::Replace(size_t, wxMenu *, const wxString &)");
		}
		wxMenu * lret = self->Replace(pos, menu, title);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// void wxMenuBar::SetHelpString(int id, const wxString & helpString)
	static int _bind_SetHelpString(lua_State *L) {
		if (!_lg_typecheck_SetHelpString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetHelpString(int id, const wxString & helpString) function, expected prototype:\nvoid wxMenuBar::SetHelpString(int id, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetHelpString(int, const wxString &)");
		}
		self->SetHelpString(id, helpString);

		return 0;
	}

	// void wxMenuBar::SetLabel(int id, const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetLabel(int id, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetLabel(int id, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetLabel(int, const wxString &)");
		}
		self->SetLabel(id, label);

		return 0;
	}

	// void wxMenuBar::SetLabelTop(size_t pos, const wxString & label)
	static int _bind_SetLabelTop(lua_State *L) {
		if (!_lg_typecheck_SetLabelTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetLabelTop(size_t pos, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetLabelTop(size_t pos, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetLabelTop(size_t, const wxString &)");
		}
		self->SetLabelTop(pos, label);

		return 0;
	}

	// void wxMenuBar::SetMenuLabel(size_t pos, const wxString & label)
	static int _bind_SetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_SetMenuLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetMenuLabel(size_t pos, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetMenuLabel(size_t pos, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetMenuLabel(size_t, const wxString &)");
		}
		self->SetMenuLabel(pos, label);

		return 0;
	}

	// wxFrame * wxMenuBar::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame * wxMenuBar::GetFrame() const function, expected prototype:\nwxFrame * wxMenuBar::GetFrame() const\nClass arguments details:\n");
		}


		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFrame * wxMenuBar::GetFrame() const");
		}
		wxFrame * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxMenuBar::IsAttached() const
	static int _bind_IsAttached(lua_State *L) {
		if (!_lg_typecheck_IsAttached(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsAttached() const function, expected prototype:\nbool wxMenuBar::IsAttached() const\nClass arguments details:\n");
		}


		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsAttached() const");
		}
		bool lret = self->IsAttached();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Attach(wxFrame * frame)
	static int _bind_Attach(lua_State *L) {
		if (!_lg_typecheck_Attach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Attach(wxFrame * frame) function, expected prototype:\nvoid wxMenuBar::Attach(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));

		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::Attach(wxFrame *)");
		}
		self->Attach(frame);

		return 0;
	}

	// void wxMenuBar::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Detach() function, expected prototype:\nvoid wxMenuBar::Detach()\nClass arguments details:\n");
		}


		wxMenuBar* self=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMenuBar::Detach()");
		}
		self->Detach();

		return 0;
	}


	// Operator binds:

};

wxMenuBar* LunaTraits< wxMenuBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMenuBar::_bind_ctor(L);
}

void LunaTraits< wxMenuBar >::_bind_dtor(wxMenuBar* obj) {
	delete obj;
}

const char LunaTraits< wxMenuBar >::className[] = "wxMenuBar";
const char LunaTraits< wxMenuBar >::fullName[] = "wxMenuBar";
const char LunaTraits< wxMenuBar >::moduleName[] = "wx";
const char* LunaTraits< wxMenuBar >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxMenuBar >::hash = 76241204;
const int LunaTraits< wxMenuBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMenuBar >::methods[] = {
	{"Append", &luna_wrapper_wxMenuBar::_bind_Append},
	{"Check", &luna_wrapper_wxMenuBar::_bind_Check},
	{"Enable", &luna_wrapper_wxMenuBar::_bind_Enable},
	{"EnableTop", &luna_wrapper_wxMenuBar::_bind_EnableTop},
	{"FindMenu", &luna_wrapper_wxMenuBar::_bind_FindMenu},
	{"FindMenuItem", &luna_wrapper_wxMenuBar::_bind_FindMenuItem},
	{"GetHelpString", &luna_wrapper_wxMenuBar::_bind_GetHelpString},
	{"GetLabel", &luna_wrapper_wxMenuBar::_bind_GetLabel},
	{"GetLabelTop", &luna_wrapper_wxMenuBar::_bind_GetLabelTop},
	{"GetMenu", &luna_wrapper_wxMenuBar::_bind_GetMenu},
	{"GetMenuCount", &luna_wrapper_wxMenuBar::_bind_GetMenuCount},
	{"GetMenuLabel", &luna_wrapper_wxMenuBar::_bind_GetMenuLabel},
	{"GetMenuLabelText", &luna_wrapper_wxMenuBar::_bind_GetMenuLabelText},
	{"Insert", &luna_wrapper_wxMenuBar::_bind_Insert},
	{"IsChecked", &luna_wrapper_wxMenuBar::_bind_IsChecked},
	{"IsEnabled", &luna_wrapper_wxMenuBar::_bind_IsEnabled},
	{"Refresh", &luna_wrapper_wxMenuBar::_bind_Refresh},
	{"Remove", &luna_wrapper_wxMenuBar::_bind_Remove},
	{"Replace", &luna_wrapper_wxMenuBar::_bind_Replace},
	{"SetHelpString", &luna_wrapper_wxMenuBar::_bind_SetHelpString},
	{"SetLabel", &luna_wrapper_wxMenuBar::_bind_SetLabel},
	{"SetLabelTop", &luna_wrapper_wxMenuBar::_bind_SetLabelTop},
	{"SetMenuLabel", &luna_wrapper_wxMenuBar::_bind_SetMenuLabel},
	{"GetFrame", &luna_wrapper_wxMenuBar::_bind_GetFrame},
	{"IsAttached", &luna_wrapper_wxMenuBar::_bind_IsAttached},
	{"Attach", &luna_wrapper_wxMenuBar::_bind_Attach},
	{"Detach", &luna_wrapper_wxMenuBar::_bind_Detach},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenuBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuBar >::enumValues[] = {
	{0,0}
};


