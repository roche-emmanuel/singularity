#include <plug_common.h>

class luna_wrapper_wxLocale {
public:
	typedef Luna< wxLocale > luna_t;

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

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLocale");
		
		return luna_dynamicCast(L,converters,"wxLocale",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddCatalog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddCatalog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddCatalog_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCanonicalName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeaderValue(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLanguage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSysName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Init_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLoaded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddCatalogLookupPathPrefix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLanguage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23681138) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindLanguageInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLanguageInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLanguageName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLanguageCanonicalName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSystemEncoding(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSystemEncodingName(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSystemLanguage(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInfo(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLocale::wxLocale()
	static wxLocale* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLocale::wxLocale() function, expected prototype:\nwxLocale::wxLocale()\nClass arguments details:\n");
		}


		return new wxLocale();
	}

	// wxLocale::wxLocale(int language, int flags = wxLOCALE_LOAD_DEFAULT)
	static wxLocale* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLocale::wxLocale(int language, int flags = wxLOCALE_LOAD_DEFAULT) function, expected prototype:\nwxLocale::wxLocale(int language, int flags = wxLOCALE_LOAD_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int language=(int)lua_tointeger(L,1);
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxLOCALE_LOAD_DEFAULT;

		return new wxLocale(language, flags);
	}

	// wxLocale::wxLocale(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true)
	static wxLocale* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLocale::wxLocale(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true) function, expected prototype:\nwxLocale::wxLocale(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxString shortName(lua_tostring(L,2),lua_objlen(L,2));
		wxString locale(lua_tostring(L,3),lua_objlen(L,3));
		bool bLoadDefault=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		return new wxLocale(name, shortName, locale, bLoadDefault);
	}

	// Overload binder for wxLocale::wxLocale
	static wxLocale* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxLocale, cannot match any of the overloads for function wxLocale:\n  wxLocale()\n  wxLocale(int, int)\n  wxLocale(const wxString &, const wxString &, const wxString &, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool wxLocale::AddCatalog(const wxString & domain)
	static int _bind_AddCatalog_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddCatalog_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::AddCatalog(const wxString & domain) function, expected prototype:\nbool wxLocale::AddCatalog(const wxString & domain)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::AddCatalog(const wxString &)");
		}
		bool lret = self->AddCatalog(domain);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage)
	static int _bind_AddCatalog_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddCatalog_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage) function, expected prototype:\nbool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));
		wxLanguage msgIdLanguage=(wxLanguage)lua_tointeger(L,3);

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::AddCatalog(const wxString &, wxLanguage)");
		}
		bool lret = self->AddCatalog(domain, msgIdLanguage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage, const wxString & msgIdCharset)
	static int _bind_AddCatalog_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddCatalog_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage, const wxString & msgIdCharset) function, expected prototype:\nbool wxLocale::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage, const wxString & msgIdCharset)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));
		wxLanguage msgIdLanguage=(wxLanguage)lua_tointeger(L,3);
		wxString msgIdCharset(lua_tostring(L,4),lua_objlen(L,4));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::AddCatalog(const wxString &, wxLanguage, const wxString &)");
		}
		bool lret = self->AddCatalog(domain, msgIdLanguage, msgIdCharset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxLocale::AddCatalog
	static int _bind_AddCatalog(lua_State *L) {
		if (_lg_typecheck_AddCatalog_overload_1(L)) return _bind_AddCatalog_overload_1(L);
		if (_lg_typecheck_AddCatalog_overload_2(L)) return _bind_AddCatalog_overload_2(L);
		if (_lg_typecheck_AddCatalog_overload_3(L)) return _bind_AddCatalog_overload_3(L);

		luaL_error(L, "error in function AddCatalog, cannot match any of the overloads for function AddCatalog:\n  AddCatalog(const wxString &)\n  AddCatalog(const wxString &, wxLanguage)\n  AddCatalog(const wxString &, wxLanguage, const wxString &)\n");
		return 0;
	}

	// wxString wxLocale::GetCanonicalName() const
	static int _bind_GetCanonicalName(lua_State *L) {
		if (!_lg_typecheck_GetCanonicalName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLocale::GetCanonicalName() const function, expected prototype:\nwxString wxLocale::GetCanonicalName() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLocale::GetCanonicalName() const");
		}
		wxString lret = self->GetCanonicalName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxLocale::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const
	static int _bind_GetHeaderValue(lua_State *L) {
		if (!_lg_typecheck_GetHeaderValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLocale::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const function, expected prototype:\nwxString wxLocale::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		wxString domain(lua_tostring(L,3),lua_objlen(L,3));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLocale::GetHeaderValue(const wxString &, const wxString &) const");
		}
		wxString lret = self->GetHeaderValue(header, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxLocale::GetLanguage() const
	static int _bind_GetLanguage(lua_State *L) {
		if (!_lg_typecheck_GetLanguage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxLocale::GetLanguage() const function, expected prototype:\nint wxLocale::GetLanguage() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxLocale::GetLanguage() const");
		}
		int lret = self->GetLanguage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxLocale::GetLocale() const
	static int _bind_GetLocale(lua_State *L) {
		if (!_lg_typecheck_GetLocale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxLocale::GetLocale() const function, expected prototype:\nconst wxString & wxLocale::GetLocale() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxLocale::GetLocale() const");
		}
		const wxString & lret = self->GetLocale();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxLocale::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxLocale::GetName() const function, expected prototype:\nconst wxString & wxLocale::GetName() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxLocale::GetName() const");
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxLocale::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const
	static int _bind_GetString_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetString_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxLocale::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const function, expected prototype:\nconst wxString & wxLocale::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString origString(lua_tostring(L,2),lua_objlen(L,2));
		wxString domain(lua_tostring(L,3),lua_objlen(L,3));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxLocale::GetString(const wxString &, const wxString &) const");
		}
		const wxString & lret = self->GetString(origString, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxLocale::GetString(const wxString & origString, const wxString & origString2, unsigned n, const wxString & domain = wxEmptyString) const
	static int _bind_GetString_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetString_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxLocale::GetString(const wxString & origString, const wxString & origString2, unsigned n, const wxString & domain = wxEmptyString) const function, expected prototype:\nconst wxString & wxLocale::GetString(const wxString & origString, const wxString & origString2, unsigned n, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString origString(lua_tostring(L,2),lua_objlen(L,2));
		wxString origString2(lua_tostring(L,3),lua_objlen(L,3));
		unsigned n=(unsigned)lua_tointeger(L,4);
		wxString domain(lua_tostring(L,5),lua_objlen(L,5));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxLocale::GetString(const wxString &, const wxString &, unsigned, const wxString &) const");
		}
		const wxString & lret = self->GetString(origString, origString2, n, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxLocale::GetString
	static int _bind_GetString(lua_State *L) {
		if (_lg_typecheck_GetString_overload_1(L)) return _bind_GetString_overload_1(L);
		if (_lg_typecheck_GetString_overload_2(L)) return _bind_GetString_overload_2(L);

		luaL_error(L, "error in function GetString, cannot match any of the overloads for function GetString:\n  GetString(const wxString &, const wxString &)\n  GetString(const wxString &, const wxString &, unsigned, const wxString &)\n");
		return 0;
	}

	// wxString wxLocale::GetSysName() const
	static int _bind_GetSysName(lua_State *L) {
		if (!_lg_typecheck_GetSysName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLocale::GetSysName() const function, expected prototype:\nwxString wxLocale::GetSysName() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLocale::GetSysName() const");
		}
		wxString lret = self->GetSysName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxLocale::Init(int language = wxLANGUAGE_DEFAULT, int flags = wxLOCALE_LOAD_DEFAULT)
	static int _bind_Init_overload_1(lua_State *L) {
		if (!_lg_typecheck_Init_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::Init(int language = wxLANGUAGE_DEFAULT, int flags = wxLOCALE_LOAD_DEFAULT) function, expected prototype:\nbool wxLocale::Init(int language = wxLANGUAGE_DEFAULT, int flags = wxLOCALE_LOAD_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int language=luatop>1 ? (int)lua_tointeger(L,2) : wxLANGUAGE_DEFAULT;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxLOCALE_LOAD_DEFAULT;

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::Init(int, int)");
		}
		bool lret = self->Init(language, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLocale::Init(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true)
	static int _bind_Init_overload_2(lua_State *L) {
		if (!_lg_typecheck_Init_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::Init(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true) function, expected prototype:\nbool wxLocale::Init(const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString shortName(lua_tostring(L,3),lua_objlen(L,3));
		wxString locale(lua_tostring(L,4),lua_objlen(L,4));
		bool bLoadDefault=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::Init(const wxString &, const wxString &, const wxString &, bool)");
		}
		bool lret = self->Init(name, shortName, locale, bLoadDefault);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxLocale::Init
	static int _bind_Init(lua_State *L) {
		if (_lg_typecheck_Init_overload_1(L)) return _bind_Init_overload_1(L);
		if (_lg_typecheck_Init_overload_2(L)) return _bind_Init_overload_2(L);

		luaL_error(L, "error in function Init, cannot match any of the overloads for function Init:\n  Init(int, int)\n  Init(const wxString &, const wxString &, const wxString &, bool)\n");
		return 0;
	}

	// bool wxLocale::IsLoaded(const wxString & domain) const
	static int _bind_IsLoaded(lua_State *L) {
		if (!_lg_typecheck_IsLoaded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::IsLoaded(const wxString & domain) const function, expected prototype:\nbool wxLocale::IsLoaded(const wxString & domain) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::IsLoaded(const wxString &) const");
		}
		bool lret = self->IsLoaded(domain);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLocale::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLocale::IsOk() const function, expected prototype:\nbool wxLocale::IsOk() const\nClass arguments details:\n");
		}


		wxLocale* self=(Luna< wxLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLocale::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxLocale::AddCatalogLookupPathPrefix(const wxString & prefix)
	static int _bind_AddCatalogLookupPathPrefix(lua_State *L) {
		if (!_lg_typecheck_AddCatalogLookupPathPrefix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxLocale::AddCatalogLookupPathPrefix(const wxString & prefix) function, expected prototype:\nstatic void wxLocale::AddCatalogLookupPathPrefix(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString prefix(lua_tostring(L,1),lua_objlen(L,1));

		wxLocale::AddCatalogLookupPathPrefix(prefix);

		return 0;
	}

	// static void wxLocale::AddLanguage(const wxLanguageInfo & info)
	static int _bind_AddLanguage(lua_State *L) {
		if (!_lg_typecheck_AddLanguage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxLocale::AddLanguage(const wxLanguageInfo & info) function, expected prototype:\nstatic void wxLocale::AddLanguage(const wxLanguageInfo & info)\nClass arguments details:\narg 1 ID = 23681138\n");
		}

		const wxLanguageInfo* info_ptr=(Luna< wxLanguageInfo >::check(L,1));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxLocale::AddLanguage function");
		}
		const wxLanguageInfo & info=*info_ptr;

		wxLocale::AddLanguage(info);

		return 0;
	}

	// static const wxLanguageInfo * wxLocale::FindLanguageInfo(const wxString & locale)
	static int _bind_FindLanguageInfo(lua_State *L) {
		if (!_lg_typecheck_FindLanguageInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const wxLanguageInfo * wxLocale::FindLanguageInfo(const wxString & locale) function, expected prototype:\nstatic const wxLanguageInfo * wxLocale::FindLanguageInfo(const wxString & locale)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString locale(lua_tostring(L,1),lua_objlen(L,1));

		const wxLanguageInfo * lret = wxLocale::FindLanguageInfo(locale);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLanguageInfo >::push(L,lret,false);

		return 1;
	}

	// static const wxLanguageInfo * wxLocale::GetLanguageInfo(int lang)
	static int _bind_GetLanguageInfo(lua_State *L) {
		if (!_lg_typecheck_GetLanguageInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const wxLanguageInfo * wxLocale::GetLanguageInfo(int lang) function, expected prototype:\nstatic const wxLanguageInfo * wxLocale::GetLanguageInfo(int lang)\nClass arguments details:\n");
		}

		int lang=(int)lua_tointeger(L,1);

		const wxLanguageInfo * lret = wxLocale::GetLanguageInfo(lang);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLanguageInfo >::push(L,lret,false);

		return 1;
	}

	// static wxString wxLocale::GetLanguageName(int lang)
	static int _bind_GetLanguageName(lua_State *L) {
		if (!_lg_typecheck_GetLanguageName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxLocale::GetLanguageName(int lang) function, expected prototype:\nstatic wxString wxLocale::GetLanguageName(int lang)\nClass arguments details:\n");
		}

		int lang=(int)lua_tointeger(L,1);

		wxString lret = wxLocale::GetLanguageName(lang);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxLocale::GetLanguageCanonicalName(int lang)
	static int _bind_GetLanguageCanonicalName(lua_State *L) {
		if (!_lg_typecheck_GetLanguageCanonicalName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxLocale::GetLanguageCanonicalName(int lang) function, expected prototype:\nstatic wxString wxLocale::GetLanguageCanonicalName(int lang)\nClass arguments details:\n");
		}

		int lang=(int)lua_tointeger(L,1);

		wxString lret = wxLocale::GetLanguageCanonicalName(lang);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxFontEncoding wxLocale::GetSystemEncoding()
	static int _bind_GetSystemEncoding(lua_State *L) {
		if (!_lg_typecheck_GetSystemEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFontEncoding wxLocale::GetSystemEncoding() function, expected prototype:\nstatic wxFontEncoding wxLocale::GetSystemEncoding()\nClass arguments details:\n");
		}


		wxFontEncoding lret = wxLocale::GetSystemEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxLocale::GetSystemEncodingName()
	static int _bind_GetSystemEncodingName(lua_State *L) {
		if (!_lg_typecheck_GetSystemEncodingName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxLocale::GetSystemEncodingName() function, expected prototype:\nstatic wxString wxLocale::GetSystemEncodingName()\nClass arguments details:\n");
		}


		wxString lret = wxLocale::GetSystemEncodingName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static int wxLocale::GetSystemLanguage()
	static int _bind_GetSystemLanguage(lua_State *L) {
		if (!_lg_typecheck_GetSystemLanguage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxLocale::GetSystemLanguage() function, expected prototype:\nstatic int wxLocale::GetSystemLanguage()\nClass arguments details:\n");
		}


		int lret = wxLocale::GetSystemLanguage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxLocale::GetInfo(wxLocaleInfo index, wxLocaleCategory cat = wxLOCALE_CAT_DEFAULT)
	static int _bind_GetInfo(lua_State *L) {
		if (!_lg_typecheck_GetInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxLocale::GetInfo(wxLocaleInfo index, wxLocaleCategory cat = wxLOCALE_CAT_DEFAULT) function, expected prototype:\nstatic wxString wxLocale::GetInfo(wxLocaleInfo index, wxLocaleCategory cat = wxLOCALE_CAT_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxLocaleInfo index=(wxLocaleInfo)lua_tointeger(L,1);
		wxLocaleCategory cat=luatop>1 ? (wxLocaleCategory)lua_tointeger(L,2) : wxLOCALE_CAT_DEFAULT;

		wxString lret = wxLocale::GetInfo(index, cat);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static bool wxLocale::IsAvailable(int lang)
	static int _bind_IsAvailable(lua_State *L) {
		if (!_lg_typecheck_IsAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxLocale::IsAvailable(int lang) function, expected prototype:\nstatic bool wxLocale::IsAvailable(int lang)\nClass arguments details:\n");
		}

		int lang=(int)lua_tointeger(L,1);

		bool lret = wxLocale::IsAvailable(lang);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxLocale* LunaTraits< wxLocale >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLocale::_bind_ctor(L);
}

void LunaTraits< wxLocale >::_bind_dtor(wxLocale* obj) {
	delete obj;
}

const char LunaTraits< wxLocale >::className[] = "wxLocale";
const char LunaTraits< wxLocale >::fullName[] = "wxLocale";
const char LunaTraits< wxLocale >::moduleName[] = "wx";
const char* LunaTraits< wxLocale >::parents[] = {0};
const int LunaTraits< wxLocale >::hash = 82719842;
const int LunaTraits< wxLocale >::uniqueIDs[] = {82719842,0};

luna_RegType LunaTraits< wxLocale >::methods[] = {
	{"AddCatalog", &luna_wrapper_wxLocale::_bind_AddCatalog},
	{"GetCanonicalName", &luna_wrapper_wxLocale::_bind_GetCanonicalName},
	{"GetHeaderValue", &luna_wrapper_wxLocale::_bind_GetHeaderValue},
	{"GetLanguage", &luna_wrapper_wxLocale::_bind_GetLanguage},
	{"GetLocale", &luna_wrapper_wxLocale::_bind_GetLocale},
	{"GetName", &luna_wrapper_wxLocale::_bind_GetName},
	{"GetString", &luna_wrapper_wxLocale::_bind_GetString},
	{"GetSysName", &luna_wrapper_wxLocale::_bind_GetSysName},
	{"Init", &luna_wrapper_wxLocale::_bind_Init},
	{"IsLoaded", &luna_wrapper_wxLocale::_bind_IsLoaded},
	{"IsOk", &luna_wrapper_wxLocale::_bind_IsOk},
	{"AddCatalogLookupPathPrefix", &luna_wrapper_wxLocale::_bind_AddCatalogLookupPathPrefix},
	{"AddLanguage", &luna_wrapper_wxLocale::_bind_AddLanguage},
	{"FindLanguageInfo", &luna_wrapper_wxLocale::_bind_FindLanguageInfo},
	{"GetLanguageInfo", &luna_wrapper_wxLocale::_bind_GetLanguageInfo},
	{"GetLanguageName", &luna_wrapper_wxLocale::_bind_GetLanguageName},
	{"GetLanguageCanonicalName", &luna_wrapper_wxLocale::_bind_GetLanguageCanonicalName},
	{"GetSystemEncoding", &luna_wrapper_wxLocale::_bind_GetSystemEncoding},
	{"GetSystemEncodingName", &luna_wrapper_wxLocale::_bind_GetSystemEncodingName},
	{"GetSystemLanguage", &luna_wrapper_wxLocale::_bind_GetSystemLanguage},
	{"GetInfo", &luna_wrapper_wxLocale::_bind_GetInfo},
	{"IsAvailable", &luna_wrapper_wxLocale::_bind_IsAvailable},
	{"dynCast", &luna_wrapper_wxLocale::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxLocale >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLocale >::enumValues[] = {
	{0,0}
};

