#include <plug_common.h>

class luna_wrapper_wxControlWithItems {
public:
	typedef Luna< wxControlWithItems > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxControlWithItems* ptr= dynamic_cast< wxControlWithItems* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxControlWithItems >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxControlWithItems* ptr= dynamic_cast< wxControlWithItems* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxControlWithItems >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxControlWithItems* LunaTraits< wxControlWithItems >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int wxItemContainerImmutable::GetCount() const
	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	// void wxItemContainerImmutable::SetSelection(int n)
	// int wxItemContainerImmutable::GetSelection() const

	// Abstract operators:
}

void LunaTraits< wxControlWithItems >::_bind_dtor(wxControlWithItems* obj) {
	delete obj;
}

const char LunaTraits< wxControlWithItems >::className[] = "wxControlWithItems";
const char LunaTraits< wxControlWithItems >::fullName[] = "wxControlWithItems";
const char LunaTraits< wxControlWithItems >::moduleName[] = "wx";
const char* LunaTraits< wxControlWithItems >::parents[] = {"wx.wxControl", "wx.wxItemContainer", 0};
const int LunaTraits< wxControlWithItems >::hash = 4371844;
const int LunaTraits< wxControlWithItems >::uniqueIDs[] = {56813631, 53506535, 69784830,0};

luna_RegType LunaTraits< wxControlWithItems >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxControlWithItems >::converters[] = {
	{"wxObject", &luna_wrapper_wxControlWithItems::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxControlWithItems::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxControlWithItems >::enumValues[] = {
	{0,0}
};


