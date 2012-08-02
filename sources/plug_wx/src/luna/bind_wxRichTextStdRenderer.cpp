#include <plug_common.h>

class luna_wrapper_wxRichTextStdRenderer {
public:
	typedef Luna< wxRichTextStdRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStdRenderer* ptr= dynamic_cast< wxRichTextStdRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStdRenderer >::push(L,ptr,false);
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

wxRichTextStdRenderer* LunaTraits< wxRichTextStdRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStdRenderer >::_bind_dtor(wxRichTextStdRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStdRenderer >::className[] = "wxRichTextStdRenderer";
const char LunaTraits< wxRichTextStdRenderer >::fullName[] = "wxRichTextStdRenderer";
const char LunaTraits< wxRichTextStdRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStdRenderer >::parents[] = {"wx.wxRichTextRenderer", 0};
const int LunaTraits< wxRichTextStdRenderer >::hash = 64088894;
const int LunaTraits< wxRichTextStdRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextStdRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStdRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStdRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStdRenderer >::enumValues[] = {
	{0,0}
};


