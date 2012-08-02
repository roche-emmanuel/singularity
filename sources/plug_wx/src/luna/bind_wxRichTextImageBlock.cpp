#include <plug_common.h>

class luna_wrapper_wxRichTextImageBlock {
public:
	typedef Luna< wxRichTextImageBlock > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextImageBlock* ptr= dynamic_cast< wxRichTextImageBlock* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextImageBlock >::push(L,ptr,false);
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

wxRichTextImageBlock* LunaTraits< wxRichTextImageBlock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextImageBlock >::_bind_dtor(wxRichTextImageBlock* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextImageBlock >::className[] = "wxRichTextImageBlock";
const char LunaTraits< wxRichTextImageBlock >::fullName[] = "wxRichTextImageBlock";
const char LunaTraits< wxRichTextImageBlock >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextImageBlock >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextImageBlock >::hash = 45771863;
const int LunaTraits< wxRichTextImageBlock >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextImageBlock >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextImageBlock >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextImageBlock::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextImageBlock >::enumValues[] = {
	{0,0}
};


