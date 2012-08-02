#include <plug_common.h>

class luna_wrapper_wxHtmlTag {
public:
	typedef Luna< wxHtmlTag > luna_t;

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

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlTag");
		
		return luna_dynamicCast(L,converters,"wxHtmlTag",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetAllParams(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBeginPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndPos1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndPos2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParamAsColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParamAsInt(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasEnding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParam(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScanParam(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ParseAsColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxString wxHtmlTag::GetAllParams() const
	static int _bind_GetAllParams(lua_State *L) {
		if (!_lg_typecheck_GetAllParams(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlTag::GetAllParams() const function, expected prototype:\nwxString wxHtmlTag::GetAllParams() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlTag::GetAllParams() const");
		}
		wxString lret = self->GetAllParams();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxHtmlTag::GetBeginPos() const
	static int _bind_GetBeginPos(lua_State *L) {
		if (!_lg_typecheck_GetBeginPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlTag::GetBeginPos() const function, expected prototype:\nint wxHtmlTag::GetBeginPos() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlTag::GetBeginPos() const");
		}
		int lret = self->GetBeginPos();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlTag::GetEndPos1() const
	static int _bind_GetEndPos1(lua_State *L) {
		if (!_lg_typecheck_GetEndPos1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlTag::GetEndPos1() const function, expected prototype:\nint wxHtmlTag::GetEndPos1() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlTag::GetEndPos1() const");
		}
		int lret = self->GetEndPos1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlTag::GetEndPos2() const
	static int _bind_GetEndPos2(lua_State *L) {
		if (!_lg_typecheck_GetEndPos2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlTag::GetEndPos2() const function, expected prototype:\nint wxHtmlTag::GetEndPos2() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlTag::GetEndPos2() const");
		}
		int lret = self->GetEndPos2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHtmlTag::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlTag::GetName() const function, expected prototype:\nwxString wxHtmlTag::GetName() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlTag::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlTag::GetParam(const wxString & par, bool with_quotes = false) const
	static int _bind_GetParam(lua_State *L) {
		if (!_lg_typecheck_GetParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlTag::GetParam(const wxString & par, bool with_quotes = false) const function, expected prototype:\nwxString wxHtmlTag::GetParam(const wxString & par, bool with_quotes = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString par(lua_tostring(L,2),lua_objlen(L,2));
		bool with_quotes=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlTag::GetParam(const wxString &, bool) const");
		}
		wxString lret = self->GetParam(par, with_quotes);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHtmlTag::GetParamAsColour(const wxString & par, wxColour * clr) const
	static int _bind_GetParamAsColour(lua_State *L) {
		if (!_lg_typecheck_GetParamAsColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlTag::GetParamAsColour(const wxString & par, wxColour * clr) const function, expected prototype:\nbool wxHtmlTag::GetParamAsColour(const wxString & par, wxColour * clr) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString par(lua_tostring(L,2),lua_objlen(L,2));
		wxColour* clr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlTag::GetParamAsColour(const wxString &, wxColour *) const");
		}
		bool lret = self->GetParamAsColour(par, clr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlTag::GetParamAsInt(const wxString & par, int * value) const
	static int _bind_GetParamAsInt(lua_State *L) {
		if (!_lg_typecheck_GetParamAsInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlTag::GetParamAsInt(const wxString & par, int * value) const function, expected prototype:\nbool wxHtmlTag::GetParamAsInt(const wxString & par, int * value) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString par(lua_tostring(L,2),lua_objlen(L,2));
		int value=(int)lua_tointeger(L,3);

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlTag::GetParamAsInt(const wxString &, int *) const");
		}
		bool lret = self->GetParamAsInt(par, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlTag::HasEnding() const
	static int _bind_HasEnding(lua_State *L) {
		if (!_lg_typecheck_HasEnding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlTag::HasEnding() const function, expected prototype:\nbool wxHtmlTag::HasEnding() const\nClass arguments details:\n");
		}


		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlTag::HasEnding() const");
		}
		bool lret = self->HasEnding();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlTag::HasParam(const wxString & par) const
	static int _bind_HasParam(lua_State *L) {
		if (!_lg_typecheck_HasParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlTag::HasParam(const wxString & par) const function, expected prototype:\nbool wxHtmlTag::HasParam(const wxString & par) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString par(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlTag::HasParam(const wxString &) const");
		}
		bool lret = self->HasParam(par);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxHtmlTag::ScanParam(const wxString & par, const char * format, void * value) const
	static int _bind_ScanParam(lua_State *L) {
		if (!_lg_typecheck_ScanParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlTag::ScanParam(const wxString & par, const char * format, void * value) const function, expected prototype:\nint wxHtmlTag::ScanParam(const wxString & par, const char * format, void * value) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString par(lua_tostring(L,2),lua_objlen(L,2));
		const char * format=(const char *)lua_tostring(L,3);
		void* value=(Luna< void >::check(L,4));

		wxHtmlTag* self=(Luna< wxHtmlTag >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlTag::ScanParam(const wxString &, const char *, void *) const");
		}
		int lret = self->ScanParam(par, format, value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool wxHtmlTag::ParseAsColour(const wxString & str, wxColour * clr)
	static int _bind_ParseAsColour(lua_State *L) {
		if (!_lg_typecheck_ParseAsColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxHtmlTag::ParseAsColour(const wxString & str, wxColour * clr) function, expected prototype:\nstatic bool wxHtmlTag::ParseAsColour(const wxString & str, wxColour * clr)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString str(lua_tostring(L,1),lua_objlen(L,1));
		wxColour* clr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));

		bool lret = wxHtmlTag::ParseAsColour(str, clr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHtmlTag* LunaTraits< wxHtmlTag >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxHtmlTag >::_bind_dtor(wxHtmlTag* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlTag >::className[] = "wxHtmlTag";
const char LunaTraits< wxHtmlTag >::fullName[] = "wxHtmlTag";
const char LunaTraits< wxHtmlTag >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlTag >::parents[] = {0};
const int LunaTraits< wxHtmlTag >::hash = 66986009;
const int LunaTraits< wxHtmlTag >::uniqueIDs[] = {66986009,0};

luna_RegType LunaTraits< wxHtmlTag >::methods[] = {
	{"GetAllParams", &luna_wrapper_wxHtmlTag::_bind_GetAllParams},
	{"GetBeginPos", &luna_wrapper_wxHtmlTag::_bind_GetBeginPos},
	{"GetEndPos1", &luna_wrapper_wxHtmlTag::_bind_GetEndPos1},
	{"GetEndPos2", &luna_wrapper_wxHtmlTag::_bind_GetEndPos2},
	{"GetName", &luna_wrapper_wxHtmlTag::_bind_GetName},
	{"GetParam", &luna_wrapper_wxHtmlTag::_bind_GetParam},
	{"GetParamAsColour", &luna_wrapper_wxHtmlTag::_bind_GetParamAsColour},
	{"GetParamAsInt", &luna_wrapper_wxHtmlTag::_bind_GetParamAsInt},
	{"HasEnding", &luna_wrapper_wxHtmlTag::_bind_HasEnding},
	{"HasParam", &luna_wrapper_wxHtmlTag::_bind_HasParam},
	{"ScanParam", &luna_wrapper_wxHtmlTag::_bind_ScanParam},
	{"ParseAsColour", &luna_wrapper_wxHtmlTag::_bind_ParseAsColour},
	{"dynCast", &luna_wrapper_wxHtmlTag::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlTag >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlTag >::enumValues[] = {
	{0,0}
};


