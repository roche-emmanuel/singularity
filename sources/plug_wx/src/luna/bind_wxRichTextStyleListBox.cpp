#include <plug_common.h>

class luna_wrapper_wxRichTextStyleListBox {
public:
	typedef Luna< wxRichTextStyleListBox > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleListBox* ptr= dynamic_cast< wxRichTextStyleListBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleListBox* ptr= dynamic_cast< wxRichTextStyleListBox* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleListBox >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextStyleListBox* LunaTraits< wxRichTextStyleListBox >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxVListBox::OnDrawItem(wxDC & dc, const wxRect & rect, size_t n) const
	// int wxVListBox::OnMeasureItem(size_t n) const
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const

	// Abstract operators:
}

void LunaTraits< wxRichTextStyleListBox >::_bind_dtor(wxRichTextStyleListBox* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleListBox >::className[] = "wxRichTextStyleListBox";
const char LunaTraits< wxRichTextStyleListBox >::fullName[] = "wxRichTextStyleListBox";
const char LunaTraits< wxRichTextStyleListBox >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleListBox >::parents[] = {"wx.wxHtmlListBox", 0};
const int LunaTraits< wxRichTextStyleListBox >::hash = 25476459;
const int LunaTraits< wxRichTextStyleListBox >::uniqueIDs[] = {56813631, 53506535, 94004845,0};

luna_RegType LunaTraits< wxRichTextStyleListBox >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleListBox::_cast_from_wxObject},
	{"wxVarScrollHelperBase", &luna_wrapper_wxRichTextStyleListBox::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleListBox >::enumValues[] = {
	{0,0}
};


