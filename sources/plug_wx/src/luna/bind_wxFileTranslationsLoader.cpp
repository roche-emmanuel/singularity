#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileTranslationsLoader.h>

class luna_wrapper_wxFileTranslationsLoader {
public:
	typedef Luna< wxFileTranslationsLoader > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
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

	// Derived class converters:
	static int _cast_from_wxTranslationsLoader(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFileTranslationsLoader* ptr= dynamic_cast< wxFileTranslationsLoader* >(Luna< wxTranslationsLoader >::check(L,1));
		wxFileTranslationsLoader* ptr= luna_caster< wxTranslationsLoader, wxFileTranslationsLoader >::cast(Luna< wxTranslationsLoader >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileTranslationsLoader >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddCatalogLookupPathPrefix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void wxFileTranslationsLoader::AddCatalogLookupPathPrefix(const wxString & prefix)
	static int _bind_AddCatalogLookupPathPrefix(lua_State *L) {
		if (!_lg_typecheck_AddCatalogLookupPathPrefix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxFileTranslationsLoader::AddCatalogLookupPathPrefix(const wxString & prefix) function, expected prototype:\nstatic void wxFileTranslationsLoader::AddCatalogLookupPathPrefix(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString prefix(lua_tostring(L,1),lua_objlen(L,1));

		wxFileTranslationsLoader::AddCatalogLookupPathPrefix(prefix);

		return 0;
	}


	// Operator binds:

};

wxFileTranslationsLoader* LunaTraits< wxFileTranslationsLoader >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
}

void LunaTraits< wxFileTranslationsLoader >::_bind_dtor(wxFileTranslationsLoader* obj) {
	delete obj;
}

const char LunaTraits< wxFileTranslationsLoader >::className[] = "wxFileTranslationsLoader";
const char LunaTraits< wxFileTranslationsLoader >::fullName[] = "wxFileTranslationsLoader";
const char LunaTraits< wxFileTranslationsLoader >::moduleName[] = "wx";
const char* LunaTraits< wxFileTranslationsLoader >::parents[] = {"wx.wxTranslationsLoader", 0};
const int LunaTraits< wxFileTranslationsLoader >::hash = 77980923;
const int LunaTraits< wxFileTranslationsLoader >::uniqueIDs[] = {42502497,0};

luna_RegType LunaTraits< wxFileTranslationsLoader >::methods[] = {
	{"AddCatalogLookupPathPrefix", &luna_wrapper_wxFileTranslationsLoader::_bind_AddCatalogLookupPathPrefix},
	{"__eq", &luna_wrapper_wxFileTranslationsLoader::_bind___eq},
	{"getTable", &luna_wrapper_wxFileTranslationsLoader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileTranslationsLoader >::converters[] = {
	{"wxTranslationsLoader", &luna_wrapper_wxFileTranslationsLoader::_cast_from_wxTranslationsLoader},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileTranslationsLoader >::enumValues[] = {
	{0,0}
};


