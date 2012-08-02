#include <plug_common.h>

class luna_wrapper_wxRichTextStyleListCtrl {
public:
	typedef Luna< wxRichTextStyleListCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleListCtrl* ptr= dynamic_cast< wxRichTextStyleListCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleListCtrl >::push(L,ptr,false);
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

wxRichTextStyleListCtrl* LunaTraits< wxRichTextStyleListCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleListCtrl >::_bind_dtor(wxRichTextStyleListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleListCtrl >::className[] = "wxRichTextStyleListCtrl";
const char LunaTraits< wxRichTextStyleListCtrl >::fullName[] = "wxRichTextStyleListCtrl";
const char LunaTraits< wxRichTextStyleListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleListCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRichTextStyleListCtrl >::hash = 89804586;
const int LunaTraits< wxRichTextStyleListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextStyleListCtrl >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleListCtrl >::enumValues[] = {
	{0,0}
};


