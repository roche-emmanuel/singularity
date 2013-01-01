#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFontMapper.h>

class luna_wrapper_wxFontMapper {
public:
	typedef Luna< wxFontMapper > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98248934) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFontMapper*)");
		}

		wxFontMapper* rhs =(Luna< wxFontMapper >::check(L,2));
		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFontMapper");
		
		return luna_dynamicCast(L,converters,"wxFontMapper",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CharsetToEncoding(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAltForEncoding(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEncodingAvailable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetConfigPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDialogParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDialogTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEncodingDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEncodingFromName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEncodingName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSupportedEncodingsCount(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,98248934)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CharsetToEncoding(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsEncodingAvailable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontMapper::wxFontMapper()
	static wxFontMapper* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontMapper::wxFontMapper() function, expected prototype:\nwxFontMapper::wxFontMapper()\nClass arguments details:\n");
		}


		return new wxFontMapper();
	}

	// wxFontMapper::wxFontMapper(lua_Table * data)
	static wxFontMapper* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontMapper::wxFontMapper(lua_Table * data) function, expected prototype:\nwxFontMapper::wxFontMapper(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxFontMapper(L,NULL);
	}

	// Overload binder for wxFontMapper::wxFontMapper
	static wxFontMapper* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFontMapper, cannot match any of the overloads for function wxFontMapper:\n  wxFontMapper()\n  wxFontMapper(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxFontEncoding wxFontMapper::CharsetToEncoding(const wxString & charset, bool interactive = true)
	static int _bind_CharsetToEncoding(lua_State *L) {
		if (!_lg_typecheck_CharsetToEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxFontMapper::CharsetToEncoding(const wxString & charset, bool interactive = true) function, expected prototype:\nwxFontEncoding wxFontMapper::CharsetToEncoding(const wxString & charset, bool interactive = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString charset(lua_tostring(L,2),lua_objlen(L,2));
		bool interactive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontEncoding wxFontMapper::CharsetToEncoding(const wxString &, bool). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		wxFontEncoding lret = self->CharsetToEncoding(charset, interactive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFontMapper::GetAltForEncoding(wxFontEncoding encoding, wxFontEncoding * alt_encoding, const wxString & facename = wxEmptyString, bool interactive = true)
	static int _bind_GetAltForEncoding(lua_State *L) {
		if (!_lg_typecheck_GetAltForEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontMapper::GetAltForEncoding(wxFontEncoding encoding, wxFontEncoding * alt_encoding, const wxString & facename = wxEmptyString, bool interactive = true) function, expected prototype:\nbool wxFontMapper::GetAltForEncoding(wxFontEncoding encoding, wxFontEncoding * alt_encoding, const wxString & facename = wxEmptyString, bool interactive = true)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);
		wxFontEncoding alt_encoding=(wxFontEncoding)lua_tointeger(L,3);
		wxString facename(lua_tostring(L,4),lua_objlen(L,4));
		bool interactive=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontMapper::GetAltForEncoding(wxFontEncoding, wxFontEncoding *, const wxString &, bool). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		bool lret = self->GetAltForEncoding(encoding, &alt_encoding, facename, interactive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontMapper::IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString)
	static int _bind_IsEncodingAvailable(lua_State *L) {
		if (!_lg_typecheck_IsEncodingAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontMapper::IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString) function, expected prototype:\nbool wxFontMapper::IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);
		wxString facename(lua_tostring(L,3),lua_objlen(L,3));

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontMapper::IsEncodingAvailable(wxFontEncoding, const wxString &). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		bool lret = self->IsEncodingAvailable(encoding, facename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontMapper::SetConfigPath(const wxString & prefix)
	static int _bind_SetConfigPath(lua_State *L) {
		if (!_lg_typecheck_SetConfigPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontMapper::SetConfigPath(const wxString & prefix) function, expected prototype:\nvoid wxFontMapper::SetConfigPath(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontMapper::SetConfigPath(const wxString &). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		self->SetConfigPath(prefix);

		return 0;
	}

	// void wxFontMapper::SetDialogParent(wxWindow * parent)
	static int _bind_SetDialogParent(lua_State *L) {
		if (!_lg_typecheck_SetDialogParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontMapper::SetDialogParent(wxWindow * parent) function, expected prototype:\nvoid wxFontMapper::SetDialogParent(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontMapper::SetDialogParent(wxWindow *). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		self->SetDialogParent(parent);

		return 0;
	}

	// void wxFontMapper::SetDialogTitle(const wxString & title)
	static int _bind_SetDialogTitle(lua_State *L) {
		if (!_lg_typecheck_SetDialogTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontMapper::SetDialogTitle(const wxString & title) function, expected prototype:\nvoid wxFontMapper::SetDialogTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontMapper::SetDialogTitle(const wxString &). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		self->SetDialogTitle(title);

		return 0;
	}

	// static wxFontMapper * wxFontMapper::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFontMapper * wxFontMapper::Get() function, expected prototype:\nstatic wxFontMapper * wxFontMapper::Get()\nClass arguments details:\n");
		}


		wxFontMapper * lret = wxFontMapper::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontMapper >::push(L,lret,false);

		return 1;
	}

	// static wxFontEncoding wxFontMapper::GetEncoding(size_t n)
	static int _bind_GetEncoding(lua_State *L) {
		if (!_lg_typecheck_GetEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFontEncoding wxFontMapper::GetEncoding(size_t n) function, expected prototype:\nstatic wxFontEncoding wxFontMapper::GetEncoding(size_t n)\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,1);

		wxFontEncoding lret = wxFontMapper::GetEncoding(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxFontMapper::GetEncodingDescription(wxFontEncoding encoding)
	static int _bind_GetEncodingDescription(lua_State *L) {
		if (!_lg_typecheck_GetEncodingDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFontMapper::GetEncodingDescription(wxFontEncoding encoding) function, expected prototype:\nstatic wxString wxFontMapper::GetEncodingDescription(wxFontEncoding encoding)\nClass arguments details:\n");
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,1);

		wxString lret = wxFontMapper::GetEncodingDescription(encoding);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxFontEncoding wxFontMapper::GetEncodingFromName(const wxString & encoding)
	static int _bind_GetEncodingFromName(lua_State *L) {
		if (!_lg_typecheck_GetEncodingFromName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFontEncoding wxFontMapper::GetEncodingFromName(const wxString & encoding) function, expected prototype:\nstatic wxFontEncoding wxFontMapper::GetEncodingFromName(const wxString & encoding)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString encoding(lua_tostring(L,1),lua_objlen(L,1));

		wxFontEncoding lret = wxFontMapper::GetEncodingFromName(encoding);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxFontMapper::GetEncodingName(wxFontEncoding encoding)
	static int _bind_GetEncodingName(lua_State *L) {
		if (!_lg_typecheck_GetEncodingName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFontMapper::GetEncodingName(wxFontEncoding encoding) function, expected prototype:\nstatic wxString wxFontMapper::GetEncodingName(wxFontEncoding encoding)\nClass arguments details:\n");
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,1);

		wxString lret = wxFontMapper::GetEncodingName(encoding);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static size_t wxFontMapper::GetSupportedEncodingsCount()
	static int _bind_GetSupportedEncodingsCount(lua_State *L) {
		if (!_lg_typecheck_GetSupportedEncodingsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static size_t wxFontMapper::GetSupportedEncodingsCount() function, expected prototype:\nstatic size_t wxFontMapper::GetSupportedEncodingsCount()\nClass arguments details:\n");
		}


		size_t lret = wxFontMapper::GetSupportedEncodingsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxFontMapper * wxFontMapper::Set(wxFontMapper * mapper)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFontMapper * wxFontMapper::Set(wxFontMapper * mapper) function, expected prototype:\nstatic wxFontMapper * wxFontMapper::Set(wxFontMapper * mapper)\nClass arguments details:\narg 1 ID = 98248934\n");
		}

		wxFontMapper* mapper=(Luna< wxFontMapper >::check(L,1));

		wxFontMapper * lret = wxFontMapper::Set(mapper);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontMapper >::push(L,lret,false);

		return 1;
	}

	// wxFontEncoding wxFontMapper::base_CharsetToEncoding(const wxString & charset, bool interactive = true)
	static int _bind_base_CharsetToEncoding(lua_State *L) {
		if (!_lg_typecheck_base_CharsetToEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxFontMapper::base_CharsetToEncoding(const wxString & charset, bool interactive = true) function, expected prototype:\nwxFontEncoding wxFontMapper::base_CharsetToEncoding(const wxString & charset, bool interactive = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString charset(lua_tostring(L,2),lua_objlen(L,2));
		bool interactive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontEncoding wxFontMapper::base_CharsetToEncoding(const wxString &, bool). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		wxFontEncoding lret = self->wxFontMapper::CharsetToEncoding(charset, interactive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFontMapper::base_IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString)
	static int _bind_base_IsEncodingAvailable(lua_State *L) {
		if (!_lg_typecheck_base_IsEncodingAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontMapper::base_IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString) function, expected prototype:\nbool wxFontMapper::base_IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);
		wxString facename(lua_tostring(L,3),lua_objlen(L,3));

		wxFontMapper* self=(Luna< wxFontMapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontMapper::base_IsEncodingAvailable(wxFontEncoding, const wxString &). Got : '%s'",typeid(Luna< wxFontMapper >::check(L,1)).name());
		}
		bool lret = self->wxFontMapper::IsEncodingAvailable(encoding, facename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFontMapper* LunaTraits< wxFontMapper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontMapper::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxFontMapper >::_bind_dtor(wxFontMapper* obj) {
	delete obj;
}

const char LunaTraits< wxFontMapper >::className[] = "wxFontMapper";
const char LunaTraits< wxFontMapper >::fullName[] = "wxFontMapper";
const char LunaTraits< wxFontMapper >::moduleName[] = "wx";
const char* LunaTraits< wxFontMapper >::parents[] = {0};
const int LunaTraits< wxFontMapper >::hash = 98248934;
const int LunaTraits< wxFontMapper >::uniqueIDs[] = {98248934,0};

luna_RegType LunaTraits< wxFontMapper >::methods[] = {
	{"CharsetToEncoding", &luna_wrapper_wxFontMapper::_bind_CharsetToEncoding},
	{"GetAltForEncoding", &luna_wrapper_wxFontMapper::_bind_GetAltForEncoding},
	{"IsEncodingAvailable", &luna_wrapper_wxFontMapper::_bind_IsEncodingAvailable},
	{"SetConfigPath", &luna_wrapper_wxFontMapper::_bind_SetConfigPath},
	{"SetDialogParent", &luna_wrapper_wxFontMapper::_bind_SetDialogParent},
	{"SetDialogTitle", &luna_wrapper_wxFontMapper::_bind_SetDialogTitle},
	{"Get", &luna_wrapper_wxFontMapper::_bind_Get},
	{"GetEncoding", &luna_wrapper_wxFontMapper::_bind_GetEncoding},
	{"GetEncodingDescription", &luna_wrapper_wxFontMapper::_bind_GetEncodingDescription},
	{"GetEncodingFromName", &luna_wrapper_wxFontMapper::_bind_GetEncodingFromName},
	{"GetEncodingName", &luna_wrapper_wxFontMapper::_bind_GetEncodingName},
	{"GetSupportedEncodingsCount", &luna_wrapper_wxFontMapper::_bind_GetSupportedEncodingsCount},
	{"Set", &luna_wrapper_wxFontMapper::_bind_Set},
	{"base_CharsetToEncoding", &luna_wrapper_wxFontMapper::_bind_base_CharsetToEncoding},
	{"base_IsEncodingAvailable", &luna_wrapper_wxFontMapper::_bind_base_IsEncodingAvailable},
	{"dynCast", &luna_wrapper_wxFontMapper::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFontMapper::_bind___eq},
	{"getTable", &luna_wrapper_wxFontMapper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontMapper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontMapper >::enumValues[] = {
	{0,0}
};


