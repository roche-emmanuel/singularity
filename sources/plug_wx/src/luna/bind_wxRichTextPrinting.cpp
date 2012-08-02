#include <plug_common.h>

class luna_wrapper_wxRichTextPrinting {
public:
	typedef Luna< wxRichTextPrinting > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextPrinting* ptr= dynamic_cast< wxRichTextPrinting* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextPrinting >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextPrinting* LunaTraits< wxRichTextPrinting >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextPrinting >::_bind_dtor(wxRichTextPrinting* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextPrinting >::className[] = "wxRichTextPrinting";
const char LunaTraits< wxRichTextPrinting >::fullName[] = "wxRichTextPrinting";
const char LunaTraits< wxRichTextPrinting >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextPrinting >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextPrinting >::hash = 44333648;
const int LunaTraits< wxRichTextPrinting >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextPrinting >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPrinting >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPrinting::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPrinting >::enumValues[] = {
	{0,0}
};


