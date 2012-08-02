#include <plug_common.h>

class luna_wrapper_wxGridCellEnumEditor {
public:
	typedef Luna< wxGridCellEnumEditor > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellEnumEditor* ptr= dynamic_cast< wxGridCellEnumEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellEnumEditor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellEnumEditor* LunaTraits< wxGridCellEnumEditor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	// wxGridCellEditor * wxGridCellEditor::Clone() const
	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	// void wxGridCellEditor::Reset()

	// Abstract operators:
}

void LunaTraits< wxGridCellEnumEditor >::_bind_dtor(wxGridCellEnumEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellEnumEditor >::className[] = "wxGridCellEnumEditor";
const char LunaTraits< wxGridCellEnumEditor >::fullName[] = "wxGridCellEnumEditor";
const char LunaTraits< wxGridCellEnumEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellEnumEditor >::parents[] = {"wx.wxGridCellChoiceEditor", 0};
const int LunaTraits< wxGridCellEnumEditor >::hash = 47910445;
const int LunaTraits< wxGridCellEnumEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellEnumEditor >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellEnumEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellEnumEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellEnumEditor >::enumValues[] = {
	{0,0}
};


