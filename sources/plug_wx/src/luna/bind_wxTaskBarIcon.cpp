#include <plug_common.h>

class luna_wrapper_wxTaskBarIcon {
public:
	typedef Luna< wxTaskBarIcon > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTaskBarIcon* ptr= dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIcon >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsIconInstalled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAvailable(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTaskBarIcon::wxTaskBarIcon()
	static wxTaskBarIcon* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTaskBarIcon::wxTaskBarIcon() function, expected prototype:\nwxTaskBarIcon::wxTaskBarIcon()\nClass arguments details:\n");
		}


		return new wxTaskBarIcon();
	}


	// Function binds:
	// void wxTaskBarIcon::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::Destroy() function, expected prototype:\nvoid wxTaskBarIcon::Destroy()\nClass arguments details:\n");
		}


		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::Destroy()");
		}
		self->Destroy();

		return 0;
	}

	// bool wxTaskBarIcon::IsIconInstalled() const
	static int _bind_IsIconInstalled(lua_State *L) {
		if (!_lg_typecheck_IsIconInstalled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::IsIconInstalled() const function, expected prototype:\nbool wxTaskBarIcon::IsIconInstalled() const\nClass arguments details:\n");
		}


		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::IsIconInstalled() const");
		}
		bool lret = self->IsIconInstalled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::IsOk() const function, expected prototype:\nbool wxTaskBarIcon::IsOk() const\nClass arguments details:\n");
		}


		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::PopupMenu(wxMenu * menu)
	static int _bind_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_PopupMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxTaskBarIcon::PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::PopupMenu(wxMenu *)");
		}
		bool lret = self->PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::RemoveIcon()
	static int _bind_RemoveIcon(lua_State *L) {
		if (!_lg_typecheck_RemoveIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::RemoveIcon() function, expected prototype:\nbool wxTaskBarIcon::RemoveIcon()\nClass arguments details:\n");
		}


		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::RemoveIcon()");
		}
		bool lret = self->RemoveIcon();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString) function, expected prototype:\nbool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxTaskBarIcon::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;
		wxString tooltip(lua_tostring(L,3),lua_objlen(L,3));

		wxTaskBarIcon* self=dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::SetIcon(const wxIcon &, const wxString &)");
		}
		bool lret = self->SetIcon(icon, tooltip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxTaskBarIcon::IsAvailable()
	static int _bind_IsAvailable(lua_State *L) {
		if (!_lg_typecheck_IsAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxTaskBarIcon::IsAvailable() function, expected prototype:\nstatic bool wxTaskBarIcon::IsAvailable()\nClass arguments details:\n");
		}


		bool lret = wxTaskBarIcon::IsAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTaskBarIcon* LunaTraits< wxTaskBarIcon >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTaskBarIcon::_bind_ctor(L);
}

void LunaTraits< wxTaskBarIcon >::_bind_dtor(wxTaskBarIcon* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIcon >::className[] = "wxTaskBarIcon";
const char LunaTraits< wxTaskBarIcon >::fullName[] = "wxTaskBarIcon";
const char LunaTraits< wxTaskBarIcon >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIcon >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxTaskBarIcon >::hash = 18851104;
const int LunaTraits< wxTaskBarIcon >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTaskBarIcon >::methods[] = {
	{"Destroy", &luna_wrapper_wxTaskBarIcon::_bind_Destroy},
	{"IsIconInstalled", &luna_wrapper_wxTaskBarIcon::_bind_IsIconInstalled},
	{"IsOk", &luna_wrapper_wxTaskBarIcon::_bind_IsOk},
	{"PopupMenu", &luna_wrapper_wxTaskBarIcon::_bind_PopupMenu},
	{"RemoveIcon", &luna_wrapper_wxTaskBarIcon::_bind_RemoveIcon},
	{"SetIcon", &luna_wrapper_wxTaskBarIcon::_bind_SetIcon},
	{"IsAvailable", &luna_wrapper_wxTaskBarIcon::_bind_IsAvailable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIcon >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIcon::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIcon >::enumValues[] = {
	{0,0}
};


