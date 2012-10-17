#include <plug_common.h>

class luna_wrapper_wxTranslationsLoader {
public:
	typedef Luna< wxTranslationsLoader > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42502497) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTranslationsLoader*)");
		}

		wxTranslationsLoader* rhs =(Luna< wxTranslationsLoader >::check(L,2));
		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
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

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTranslationsLoader");
		
		return luna_dynamicCast(L,converters,"wxTranslationsLoader",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_LoadCatalog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAvailableTranslations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	static int _bind_LoadCatalog(lua_State *L) {
		if (!_lg_typecheck_LoadCatalog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang) function, expected prototype:\nwxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));
		wxString lang(lua_tostring(L,3),lua_objlen(L,3));

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString &, const wxString &)");
		}
		wxMsgCatalog * lret = self->LoadCatalog(domain, lang);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMsgCatalog >::push(L,lret,false);

		return 1;
	}

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	static int _bind_GetAvailableTranslations(lua_State *L) {
		if (!_lg_typecheck_GetAvailableTranslations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const function, expected prototype:\nwxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString &) const");
		}
		wxArrayString stack_lret = self->GetAvailableTranslations(domain);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxTranslationsLoader* LunaTraits< wxTranslationsLoader >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const

	// Abstract operators:
}

void LunaTraits< wxTranslationsLoader >::_bind_dtor(wxTranslationsLoader* obj) {
	delete obj;
}

const char LunaTraits< wxTranslationsLoader >::className[] = "wxTranslationsLoader";
const char LunaTraits< wxTranslationsLoader >::fullName[] = "wxTranslationsLoader";
const char LunaTraits< wxTranslationsLoader >::moduleName[] = "wx";
const char* LunaTraits< wxTranslationsLoader >::parents[] = {0};
const int LunaTraits< wxTranslationsLoader >::hash = 42502497;
const int LunaTraits< wxTranslationsLoader >::uniqueIDs[] = {42502497,0};

luna_RegType LunaTraits< wxTranslationsLoader >::methods[] = {
	{"LoadCatalog", &luna_wrapper_wxTranslationsLoader::_bind_LoadCatalog},
	{"GetAvailableTranslations", &luna_wrapper_wxTranslationsLoader::_bind_GetAvailableTranslations},
	{"dynCast", &luna_wrapper_wxTranslationsLoader::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTranslationsLoader::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTranslationsLoader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTranslationsLoader >::enumValues[] = {
	{0,0}
};


