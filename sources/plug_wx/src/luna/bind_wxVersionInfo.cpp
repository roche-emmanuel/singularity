#include <plug_common.h>

class luna_wrapper_wxVersionInfo {
public:
	typedef Luna< wxVersionInfo > luna_t;

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

		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVersionInfo");
		
		return luna_dynamicCast(L,converters,"wxVersionInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMajor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMicro(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVersionString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCopyright(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCopyright(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxVersionInfo::wxVersionInfo(const wxString & name, int major, int minor, int micro = 0, const wxString & description = wxString (), const wxString & copyright = wxString ())
	static wxVersionInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVersionInfo::wxVersionInfo(const wxString & name, int major, int minor, int micro = 0, const wxString & description = wxString (), const wxString & copyright = wxString ()) function, expected prototype:\nwxVersionInfo::wxVersionInfo(const wxString & name, int major, int minor, int micro = 0, const wxString & description = wxString (), const wxString & copyright = wxString ())\nClass arguments details:\narg 1 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);
		int micro=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxString description(lua_tostring(L,5),lua_objlen(L,5));
		wxString copyright(lua_tostring(L,6),lua_objlen(L,6));

		return new wxVersionInfo(name, major, minor, micro, description, copyright);
	}


	// Function binds:
	// const wxString & wxVersionInfo::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxVersionInfo::GetName() const function, expected prototype:\nconst wxString & wxVersionInfo::GetName() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxVersionInfo::GetName() const");
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxVersionInfo::GetMajor() const
	static int _bind_GetMajor(lua_State *L) {
		if (!_lg_typecheck_GetMajor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVersionInfo::GetMajor() const function, expected prototype:\nint wxVersionInfo::GetMajor() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVersionInfo::GetMajor() const");
		}
		int lret = self->GetMajor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVersionInfo::GetMinor() const
	static int _bind_GetMinor(lua_State *L) {
		if (!_lg_typecheck_GetMinor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVersionInfo::GetMinor() const function, expected prototype:\nint wxVersionInfo::GetMinor() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVersionInfo::GetMinor() const");
		}
		int lret = self->GetMinor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVersionInfo::GetMicro() const
	static int _bind_GetMicro(lua_State *L) {
		if (!_lg_typecheck_GetMicro(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVersionInfo::GetMicro() const function, expected prototype:\nint wxVersionInfo::GetMicro() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVersionInfo::GetMicro() const");
		}
		int lret = self->GetMicro();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxVersionInfo::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxVersionInfo::ToString() const function, expected prototype:\nwxString wxVersionInfo::ToString() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxVersionInfo::ToString() const");
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxVersionInfo::GetVersionString() const
	static int _bind_GetVersionString(lua_State *L) {
		if (!_lg_typecheck_GetVersionString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxVersionInfo::GetVersionString() const function, expected prototype:\nwxString wxVersionInfo::GetVersionString() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxVersionInfo::GetVersionString() const");
		}
		wxString lret = self->GetVersionString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxVersionInfo::GetDescription()
	static int _bind_GetDescription(lua_State *L) {
		if (!_lg_typecheck_GetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxVersionInfo::GetDescription() function, expected prototype:\nconst wxString & wxVersionInfo::GetDescription()\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxVersionInfo::GetDescription()");
		}
		const wxString & lret = self->GetDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxVersionInfo::HasCopyright() const
	static int _bind_HasCopyright(lua_State *L) {
		if (!_lg_typecheck_HasCopyright(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVersionInfo::HasCopyright() const function, expected prototype:\nbool wxVersionInfo::HasCopyright() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVersionInfo::HasCopyright() const");
		}
		bool lret = self->HasCopyright();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxVersionInfo::GetCopyright() const
	static int _bind_GetCopyright(lua_State *L) {
		if (!_lg_typecheck_GetCopyright(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxVersionInfo::GetCopyright() const function, expected prototype:\nconst wxString & wxVersionInfo::GetCopyright() const\nClass arguments details:\n");
		}


		wxVersionInfo* self=(Luna< wxVersionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxVersionInfo::GetCopyright() const");
		}
		const wxString & lret = self->GetCopyright();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxVersionInfo* LunaTraits< wxVersionInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxVersionInfo::_bind_ctor(L);
}

void LunaTraits< wxVersionInfo >::_bind_dtor(wxVersionInfo* obj) {
	delete obj;
}

const char LunaTraits< wxVersionInfo >::className[] = "wxVersionInfo";
const char LunaTraits< wxVersionInfo >::fullName[] = "wxVersionInfo";
const char LunaTraits< wxVersionInfo >::moduleName[] = "wx";
const char* LunaTraits< wxVersionInfo >::parents[] = {0};
const int LunaTraits< wxVersionInfo >::hash = 72816518;
const int LunaTraits< wxVersionInfo >::uniqueIDs[] = {72816518,0};

luna_RegType LunaTraits< wxVersionInfo >::methods[] = {
	{"GetName", &luna_wrapper_wxVersionInfo::_bind_GetName},
	{"GetMajor", &luna_wrapper_wxVersionInfo::_bind_GetMajor},
	{"GetMinor", &luna_wrapper_wxVersionInfo::_bind_GetMinor},
	{"GetMicro", &luna_wrapper_wxVersionInfo::_bind_GetMicro},
	{"ToString", &luna_wrapper_wxVersionInfo::_bind_ToString},
	{"GetVersionString", &luna_wrapper_wxVersionInfo::_bind_GetVersionString},
	{"GetDescription", &luna_wrapper_wxVersionInfo::_bind_GetDescription},
	{"HasCopyright", &luna_wrapper_wxVersionInfo::_bind_HasCopyright},
	{"GetCopyright", &luna_wrapper_wxVersionInfo::_bind_GetCopyright},
	{"dynCast", &luna_wrapper_wxVersionInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxVersionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVersionInfo >::enumValues[] = {
	{0,0}
};

