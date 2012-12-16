#include <plug_common.h>

#include <luna/wrappers/wrapper_wxResourceTranslationsLoader.h>

class luna_wrapper_wxResourceTranslationsLoader {
public:
	typedef Luna< wxResourceTranslationsLoader > luna_t;

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
		//wxResourceTranslationsLoader* ptr= dynamic_cast< wxResourceTranslationsLoader* >(Luna< wxTranslationsLoader >::check(L,1));
		wxResourceTranslationsLoader* ptr= luna_caster< wxTranslationsLoader, wxResourceTranslationsLoader >::cast(Luna< wxTranslationsLoader >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxResourceTranslationsLoader >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxResourceTranslationsLoader* LunaTraits< wxResourceTranslationsLoader >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
}

void LunaTraits< wxResourceTranslationsLoader >::_bind_dtor(wxResourceTranslationsLoader* obj) {
	delete obj;
}

const char LunaTraits< wxResourceTranslationsLoader >::className[] = "wxResourceTranslationsLoader";
const char LunaTraits< wxResourceTranslationsLoader >::fullName[] = "wxResourceTranslationsLoader";
const char LunaTraits< wxResourceTranslationsLoader >::moduleName[] = "wx";
const char* LunaTraits< wxResourceTranslationsLoader >::parents[] = {"wx.wxTranslationsLoader", 0};
const int LunaTraits< wxResourceTranslationsLoader >::hash = 23890923;
const int LunaTraits< wxResourceTranslationsLoader >::uniqueIDs[] = {42502497,0};

luna_RegType LunaTraits< wxResourceTranslationsLoader >::methods[] = {
	{"__eq", &luna_wrapper_wxResourceTranslationsLoader::_bind___eq},
	{"getTable", &luna_wrapper_wxResourceTranslationsLoader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxResourceTranslationsLoader >::converters[] = {
	{"wxTranslationsLoader", &luna_wrapper_wxResourceTranslationsLoader::_cast_from_wxTranslationsLoader},
	{0,0}
};

luna_RegEnumType LunaTraits< wxResourceTranslationsLoader >::enumValues[] = {
	{0,0}
};


