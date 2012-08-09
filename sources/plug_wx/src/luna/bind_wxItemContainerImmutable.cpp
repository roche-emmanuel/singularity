#include <plug_common.h>

class luna_wrapper_wxItemContainerImmutable {
public:
	typedef Luna< wxItemContainerImmutable > luna_t;

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

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxItemContainerImmutable");
		
		return luna_dynamicCast(L,converters,"wxItemContainerImmutable",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStrings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// unsigned int wxItemContainerImmutable::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxItemContainerImmutable::GetCount() const function, expected prototype:\nunsigned int wxItemContainerImmutable::GetCount() const\nClass arguments details:\n");
		}


		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxItemContainerImmutable::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxItemContainerImmutable::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxItemContainerImmutable::IsEmpty() const function, expected prototype:\nbool wxItemContainerImmutable::IsEmpty() const\nClass arguments details:\n");
		}


		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxItemContainerImmutable::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxItemContainerImmutable::GetString(unsigned int n) const function, expected prototype:\nwxString wxItemContainerImmutable::GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxItemContainerImmutable::GetString(unsigned int) const");
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxArrayString wxItemContainerImmutable::GetStrings() const
	static int _bind_GetStrings(lua_State *L) {
		if (!_lg_typecheck_GetStrings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString wxItemContainerImmutable::GetStrings() const function, expected prototype:\nwxArrayString wxItemContainerImmutable::GetStrings() const\nClass arguments details:\n");
		}


		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayString wxItemContainerImmutable::GetStrings() const");
		}
		wxArrayString stack_lret = self->GetStrings();
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxItemContainerImmutable::SetString(unsigned int, const wxString &)");
		}
		self->SetString(n, string);

		return 0;
	}

	// int wxItemContainerImmutable::FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainerImmutable::FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxItemContainerImmutable::FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainerImmutable::FindString(const wxString &, bool) const");
		}
		int lret = self->FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxItemContainerImmutable::SetSelection(int n)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxItemContainerImmutable::SetSelection(int n) function, expected prototype:\nvoid wxItemContainerImmutable::SetSelection(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxItemContainerImmutable::SetSelection(int)");
		}
		self->SetSelection(n);

		return 0;
	}

	// int wxItemContainerImmutable::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainerImmutable::GetSelection() const function, expected prototype:\nint wxItemContainerImmutable::GetSelection() const\nClass arguments details:\n");
		}


		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainerImmutable::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxItemContainerImmutable::SetStringSelection(const wxString & string)
	static int _bind_SetStringSelection(lua_State *L) {
		if (!_lg_typecheck_SetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxItemContainerImmutable::SetStringSelection(const wxString & string) function, expected prototype:\nbool wxItemContainerImmutable::SetStringSelection(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxItemContainerImmutable::SetStringSelection(const wxString &)");
		}
		bool lret = self->SetStringSelection(string);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxItemContainerImmutable::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxItemContainerImmutable::GetStringSelection() const function, expected prototype:\nwxString wxItemContainerImmutable::GetStringSelection() const\nClass arguments details:\n");
		}


		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxItemContainerImmutable::GetStringSelection() const");
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxItemContainerImmutable::Select(int n)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxItemContainerImmutable::Select(int n) function, expected prototype:\nvoid wxItemContainerImmutable::Select(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxItemContainerImmutable* self=(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxItemContainerImmutable::Select(int)");
		}
		self->Select(n);

		return 0;
	}


	// Operator binds:

};

wxItemContainerImmutable* LunaTraits< wxItemContainerImmutable >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int wxItemContainerImmutable::GetCount() const
	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	// void wxItemContainerImmutable::SetSelection(int n)
	// int wxItemContainerImmutable::GetSelection() const

	// Abstract operators:
}

void LunaTraits< wxItemContainerImmutable >::_bind_dtor(wxItemContainerImmutable* obj) {
	delete obj;
}

const char LunaTraits< wxItemContainerImmutable >::className[] = "wxItemContainerImmutable";
const char LunaTraits< wxItemContainerImmutable >::fullName[] = "wxItemContainerImmutable";
const char LunaTraits< wxItemContainerImmutable >::moduleName[] = "wx";
const char* LunaTraits< wxItemContainerImmutable >::parents[] = {0};
const int LunaTraits< wxItemContainerImmutable >::hash = 69784830;
const int LunaTraits< wxItemContainerImmutable >::uniqueIDs[] = {69784830,0};

luna_RegType LunaTraits< wxItemContainerImmutable >::methods[] = {
	{"GetCount", &luna_wrapper_wxItemContainerImmutable::_bind_GetCount},
	{"IsEmpty", &luna_wrapper_wxItemContainerImmutable::_bind_IsEmpty},
	{"GetString", &luna_wrapper_wxItemContainerImmutable::_bind_GetString},
	{"GetStrings", &luna_wrapper_wxItemContainerImmutable::_bind_GetStrings},
	{"SetString", &luna_wrapper_wxItemContainerImmutable::_bind_SetString},
	{"FindString", &luna_wrapper_wxItemContainerImmutable::_bind_FindString},
	{"SetSelection", &luna_wrapper_wxItemContainerImmutable::_bind_SetSelection},
	{"GetSelection", &luna_wrapper_wxItemContainerImmutable::_bind_GetSelection},
	{"SetStringSelection", &luna_wrapper_wxItemContainerImmutable::_bind_SetStringSelection},
	{"GetStringSelection", &luna_wrapper_wxItemContainerImmutable::_bind_GetStringSelection},
	{"Select", &luna_wrapper_wxItemContainerImmutable::_bind_Select},
	{"dynCast", &luna_wrapper_wxItemContainerImmutable::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxItemContainerImmutable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxItemContainerImmutable >::enumValues[] = {
	{0,0}
};

