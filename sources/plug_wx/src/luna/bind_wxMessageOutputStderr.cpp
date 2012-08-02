#include <plug_common.h>

class luna_wrapper_wxMessageOutputStderr {
public:
	typedef Luna< wxMessageOutputStderr > luna_t;

	// Derived class converters:
	static int _cast_from_wxMessageOutput(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMessageOutputStderr* ptr= dynamic_cast< wxMessageOutputStderr* >(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputStderr >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMessageOutputStderr* LunaTraits< wxMessageOutputStderr >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)

	// Abstract operators:
}

void LunaTraits< wxMessageOutputStderr >::_bind_dtor(wxMessageOutputStderr* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputStderr >::className[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::fullName[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputStderr >::parents[] = {"wx.wxMessageOutput", 0};
const int LunaTraits< wxMessageOutputStderr >::hash = 2637053;
const int LunaTraits< wxMessageOutputStderr >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputStderr >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputStderr >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputStderr::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputStderr >::enumValues[] = {
	{0,0}
};


