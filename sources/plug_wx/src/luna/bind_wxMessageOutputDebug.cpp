#include <plug_common.h>

class luna_wrapper_wxMessageOutputDebug {
public:
	typedef Luna< wxMessageOutputDebug > luna_t;

	// Derived class converters:
	static int _cast_from_wxMessageOutput(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMessageOutputDebug* ptr= dynamic_cast< wxMessageOutputDebug* >(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputDebug >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMessageOutputDebug* LunaTraits< wxMessageOutputDebug >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)

	// Abstract operators:
}

void LunaTraits< wxMessageOutputDebug >::_bind_dtor(wxMessageOutputDebug* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputDebug >::className[] = "wxMessageOutputDebug";
const char LunaTraits< wxMessageOutputDebug >::fullName[] = "wxMessageOutputDebug";
const char LunaTraits< wxMessageOutputDebug >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputDebug >::parents[] = {"wx.wxMessageOutputStderr", 0};
const int LunaTraits< wxMessageOutputDebug >::hash = 47074281;
const int LunaTraits< wxMessageOutputDebug >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputDebug >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputDebug >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputDebug::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputDebug >::enumValues[] = {
	{0,0}
};


