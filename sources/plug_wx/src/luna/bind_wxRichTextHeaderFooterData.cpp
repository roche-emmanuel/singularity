#include <plug_common.h>

class luna_wrapper_wxRichTextHeaderFooterData {
public:
	typedef Luna< wxRichTextHeaderFooterData > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextHeaderFooterData* ptr= dynamic_cast< wxRichTextHeaderFooterData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextHeaderFooterData >::push(L,ptr,false);
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

wxRichTextHeaderFooterData* LunaTraits< wxRichTextHeaderFooterData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextHeaderFooterData >::_bind_dtor(wxRichTextHeaderFooterData* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextHeaderFooterData >::className[] = "wxRichTextHeaderFooterData";
const char LunaTraits< wxRichTextHeaderFooterData >::fullName[] = "wxRichTextHeaderFooterData";
const char LunaTraits< wxRichTextHeaderFooterData >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextHeaderFooterData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextHeaderFooterData >::hash = 87773691;
const int LunaTraits< wxRichTextHeaderFooterData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextHeaderFooterData >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextHeaderFooterData >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextHeaderFooterData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextHeaderFooterData >::enumValues[] = {
	{0,0}
};


