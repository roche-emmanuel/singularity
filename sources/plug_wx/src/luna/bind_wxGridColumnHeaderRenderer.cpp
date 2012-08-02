#include <plug_common.h>

class luna_wrapper_wxGridColumnHeaderRenderer {
public:
	typedef Luna< wxGridColumnHeaderRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridColumnHeaderRenderer* ptr= dynamic_cast< wxGridColumnHeaderRenderer* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridColumnHeaderRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridColumnHeaderRenderer* LunaTraits< wxGridColumnHeaderRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const

	// Abstract operators:
}

void LunaTraits< wxGridColumnHeaderRenderer >::_bind_dtor(wxGridColumnHeaderRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridColumnHeaderRenderer >::className[] = "wxGridColumnHeaderRenderer";
const char LunaTraits< wxGridColumnHeaderRenderer >::fullName[] = "wxGridColumnHeaderRenderer";
const char LunaTraits< wxGridColumnHeaderRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridColumnHeaderRenderer >::parents[] = {"wx.wxGridHeaderLabelsRenderer", 0};
const int LunaTraits< wxGridColumnHeaderRenderer >::hash = 28124490;
const int LunaTraits< wxGridColumnHeaderRenderer >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridColumnHeaderRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGridColumnHeaderRenderer >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridColumnHeaderRenderer::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridColumnHeaderRenderer >::enumValues[] = {
	{0,0}
};


