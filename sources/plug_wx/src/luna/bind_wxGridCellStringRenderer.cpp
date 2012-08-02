#include <plug_common.h>

class luna_wrapper_wxGridCellStringRenderer {
public:
	typedef Luna< wxGridCellStringRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCellRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellStringRenderer* ptr= dynamic_cast< wxGridCellStringRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellStringRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellStringRenderer* LunaTraits< wxGridCellStringRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)

	// Abstract operators:
}

void LunaTraits< wxGridCellStringRenderer >::_bind_dtor(wxGridCellStringRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellStringRenderer >::className[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::fullName[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellStringRenderer >::parents[] = {"wx.wxGridCellRenderer", 0};
const int LunaTraits< wxGridCellStringRenderer >::hash = 24780461;
const int LunaTraits< wxGridCellStringRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellStringRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellStringRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellStringRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellStringRenderer >::enumValues[] = {
	{0,0}
};


