#include <plug_common.h>

class luna_wrapper_wxGridCellAutoWrapStringEditor {
public:
	typedef Luna< wxGridCellAutoWrapStringEditor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53399133) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellEditor*)");
		}

		wxGridCellEditor* rhs =(Luna< wxGridCellEditor >::check(L,2));
		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellAutoWrapStringEditor* ptr= dynamic_cast< wxGridCellAutoWrapStringEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellAutoWrapStringEditor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellAutoWrapStringEditor* LunaTraits< wxGridCellAutoWrapStringEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellAutoWrapStringEditor >::_bind_dtor(wxGridCellAutoWrapStringEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellAutoWrapStringEditor >::className[] = "wxGridCellAutoWrapStringEditor";
const char LunaTraits< wxGridCellAutoWrapStringEditor >::fullName[] = "wxGridCellAutoWrapStringEditor";
const char LunaTraits< wxGridCellAutoWrapStringEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAutoWrapStringEditor >::parents[] = {"wx.wxGridCellTextEditor", 0};
const int LunaTraits< wxGridCellAutoWrapStringEditor >::hash = 90470574;
const int LunaTraits< wxGridCellAutoWrapStringEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellAutoWrapStringEditor >::methods[] = {
	{"__eq", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAutoWrapStringEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellAutoWrapStringEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAutoWrapStringEditor >::enumValues[] = {
	{0,0}
};


