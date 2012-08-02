#include <plug_common.h>

class luna_wrapper_wxGridCellAutoWrapStringRenderer {
public:
	typedef Luna< wxGridCellAutoWrapStringRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCellRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellAutoWrapStringRenderer* ptr= dynamic_cast< wxGridCellAutoWrapStringRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellAutoWrapStringRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellAutoWrapStringRenderer* LunaTraits< wxGridCellAutoWrapStringRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)

	// Abstract operators:
}

void LunaTraits< wxGridCellAutoWrapStringRenderer >::_bind_dtor(wxGridCellAutoWrapStringRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellAutoWrapStringRenderer >::className[] = "wxGridCellAutoWrapStringRenderer";
const char LunaTraits< wxGridCellAutoWrapStringRenderer >::fullName[] = "wxGridCellAutoWrapStringRenderer";
const char LunaTraits< wxGridCellAutoWrapStringRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAutoWrapStringRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellAutoWrapStringRenderer >::hash = 21649177;
const int LunaTraits< wxGridCellAutoWrapStringRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellAutoWrapStringRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAutoWrapStringRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellAutoWrapStringRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAutoWrapStringRenderer >::enumValues[] = {
	{0,0}
};


