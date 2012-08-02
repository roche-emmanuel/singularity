#include <plug_common.h>

class luna_wrapper_wxMessageOutputBest {
public:
	typedef Luna< wxMessageOutputBest > luna_t;

	// Derived class converters:
	static int _cast_from_wxMessageOutput(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMessageOutputBest* ptr= dynamic_cast< wxMessageOutputBest* >(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputBest >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMessageOutputBest* LunaTraits< wxMessageOutputBest >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)

	// Abstract operators:
}

void LunaTraits< wxMessageOutputBest >::_bind_dtor(wxMessageOutputBest* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputBest >::className[] = "wxMessageOutputBest";
const char LunaTraits< wxMessageOutputBest >::fullName[] = "wxMessageOutputBest";
const char LunaTraits< wxMessageOutputBest >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputBest >::parents[] = {"wx.wxMessageOutputStderr", 0};
const int LunaTraits< wxMessageOutputBest >::hash = 72427222;
const int LunaTraits< wxMessageOutputBest >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputBest >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputBest >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputBest::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputBest >::enumValues[] = {
	{0,0}
};


