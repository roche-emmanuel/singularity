#include <plug_common.h>

class luna_wrapper_wxFontEnumerator {
public:
	typedef Luna< wxFontEnumerator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75930373) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFontEnumerator*)");
		}

		wxFontEnumerator* rhs =(Luna< wxFontEnumerator >::check(L,2));
		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
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

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFontEnumerator");
		
		return luna_dynamicCast(L,converters,"wxFontEnumerator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_EnumerateEncodings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnumerateFacenames(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFacename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEncodings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFacenames(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValidFacename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString)
	static int _bind_EnumerateEncodings(lua_State *L) {
		if (!_lg_typecheck_EnumerateEncodings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString) function, expected prototype:\nbool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::EnumerateEncodings(const wxString &)");
		}
		bool lret = self->EnumerateEncodings(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	static int _bind_EnumerateFacenames(lua_State *L) {
		if (!_lg_typecheck_EnumerateFacenames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) function, expected prototype:\nbool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=luatop>1 ? (wxFontEncoding)lua_tointeger(L,2) : wxFONTENCODING_SYSTEM;
		bool fixedWidthOnly=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding, bool)");
		}
		bool lret = self->EnumerateFacenames(encoding, fixedWidthOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::OnFacename(const wxString & font)
	static int _bind_OnFacename(lua_State *L) {
		if (!_lg_typecheck_OnFacename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::OnFacename(const wxString & font) function, expected prototype:\nbool wxFontEnumerator::OnFacename(const wxString & font)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::OnFacename(const wxString &)");
		}
		bool lret = self->OnFacename(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding)
	static int _bind_OnFontEncoding(lua_State *L) {
		if (!_lg_typecheck_OnFontEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding) function, expected prototype:\nbool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));
		wxString encoding(lua_tostring(L,3),lua_objlen(L,3));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::OnFontEncoding(const wxString &, const wxString &)");
		}
		bool lret = self->OnFontEncoding(font, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString)
	static int _bind_GetEncodings(lua_State *L) {
		if (!_lg_typecheck_GetEncodings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString) function, expected prototype:\nstatic wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString facename(lua_tostring(L,1),lua_objlen(L,1));

		wxArrayString stack_lret = wxFontEnumerator::GetEncodings(facename);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// static wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	static int _bind_GetFacenames(lua_State *L) {
		if (!_lg_typecheck_GetFacenames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) function, expected prototype:\nstatic wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=luatop>0 ? (wxFontEncoding)lua_tointeger(L,1) : wxFONTENCODING_SYSTEM;
		bool fixedWidthOnly=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxArrayString stack_lret = wxFontEnumerator::GetFacenames(encoding, fixedWidthOnly);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// static bool wxFontEnumerator::IsValidFacename(const wxString & facename)
	static int _bind_IsValidFacename(lua_State *L) {
		if (!_lg_typecheck_IsValidFacename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxFontEnumerator::IsValidFacename(const wxString & facename) function, expected prototype:\nstatic bool wxFontEnumerator::IsValidFacename(const wxString & facename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString facename(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFontEnumerator::IsValidFacename(facename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFontEnumerator* LunaTraits< wxFontEnumerator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFontEnumerator >::_bind_dtor(wxFontEnumerator* obj) {
	delete obj;
}

const char LunaTraits< wxFontEnumerator >::className[] = "wxFontEnumerator";
const char LunaTraits< wxFontEnumerator >::fullName[] = "wxFontEnumerator";
const char LunaTraits< wxFontEnumerator >::moduleName[] = "wx";
const char* LunaTraits< wxFontEnumerator >::parents[] = {0};
const int LunaTraits< wxFontEnumerator >::hash = 75930373;
const int LunaTraits< wxFontEnumerator >::uniqueIDs[] = {75930373,0};

luna_RegType LunaTraits< wxFontEnumerator >::methods[] = {
	{"EnumerateEncodings", &luna_wrapper_wxFontEnumerator::_bind_EnumerateEncodings},
	{"EnumerateFacenames", &luna_wrapper_wxFontEnumerator::_bind_EnumerateFacenames},
	{"OnFacename", &luna_wrapper_wxFontEnumerator::_bind_OnFacename},
	{"OnFontEncoding", &luna_wrapper_wxFontEnumerator::_bind_OnFontEncoding},
	{"GetEncodings", &luna_wrapper_wxFontEnumerator::_bind_GetEncodings},
	{"GetFacenames", &luna_wrapper_wxFontEnumerator::_bind_GetFacenames},
	{"IsValidFacename", &luna_wrapper_wxFontEnumerator::_bind_IsValidFacename},
	{"dynCast", &luna_wrapper_wxFontEnumerator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFontEnumerator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontEnumerator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontEnumerator >::enumValues[] = {
	{0,0}
};


