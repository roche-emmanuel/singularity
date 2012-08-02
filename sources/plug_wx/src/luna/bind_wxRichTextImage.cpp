#include <plug_common.h>

class luna_wrapper_wxRichTextImage {
public:
	typedef Luna< wxRichTextImage > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextImage* ptr= dynamic_cast< wxRichTextImage* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextImage >::push(L,ptr,false);
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

wxRichTextImage* LunaTraits< wxRichTextImage >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextImage >::_bind_dtor(wxRichTextImage* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextImage >::className[] = "wxRichTextImage";
const char LunaTraits< wxRichTextImage >::fullName[] = "wxRichTextImage";
const char LunaTraits< wxRichTextImage >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextImage >::parents[] = {"wx.wxRichTextObject", 0};
const int LunaTraits< wxRichTextImage >::hash = 79399244;
const int LunaTraits< wxRichTextImage >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextImage >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextImage >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextImage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextImage >::enumValues[] = {
	{0,0}
};


