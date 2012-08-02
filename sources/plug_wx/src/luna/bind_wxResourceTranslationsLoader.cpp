#include <plug_common.h>

class luna_wrapper_wxResourceTranslationsLoader {
public:
	typedef Luna< wxResourceTranslationsLoader > luna_t;

	// Derived class converters:
	static int _cast_from_wxTranslationsLoader(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxResourceTranslationsLoader* ptr= dynamic_cast< wxResourceTranslationsLoader* >(Luna< wxTranslationsLoader >::check(L,1));
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

	// Abstract operators:
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
	{0,0}
};

luna_ConverterType LunaTraits< wxResourceTranslationsLoader >::converters[] = {
	{"wxTranslationsLoader", &luna_wrapper_wxResourceTranslationsLoader::_cast_from_wxTranslationsLoader},
	{0,0}
};

luna_RegEnumType LunaTraits< wxResourceTranslationsLoader >::enumValues[] = {
	{0,0}
};


