#include <plug_common.h>

class luna_wrapper_wxGridRowHeaderRenderer {
public:
	typedef Luna< wxGridRowHeaderRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridRowHeaderRenderer* ptr= dynamic_cast< wxGridRowHeaderRenderer* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridRowHeaderRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridRowHeaderRenderer* LunaTraits< wxGridRowHeaderRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const

	// Abstract operators:
}

void LunaTraits< wxGridRowHeaderRenderer >::_bind_dtor(wxGridRowHeaderRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridRowHeaderRenderer >::className[] = "wxGridRowHeaderRenderer";
const char LunaTraits< wxGridRowHeaderRenderer >::fullName[] = "wxGridRowHeaderRenderer";
const char LunaTraits< wxGridRowHeaderRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridRowHeaderRenderer >::parents[] = {"wx.wxGridHeaderLabelsRenderer", 0};
const int LunaTraits< wxGridRowHeaderRenderer >::hash = 21531699;
const int LunaTraits< wxGridRowHeaderRenderer >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridRowHeaderRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGridRowHeaderRenderer >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridRowHeaderRenderer::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridRowHeaderRenderer >::enumValues[] = {
	{0,0}
};


