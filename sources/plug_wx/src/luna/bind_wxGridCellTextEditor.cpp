#include <plug_common.h>

class luna_wrapper_wxGridCellTextEditor {
public:
	typedef Luna< wxGridCellTextEditor > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellTextEditor* ptr= dynamic_cast< wxGridCellTextEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellTextEditor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxGridCellTextEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellTextEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellTextEditor* self=dynamic_cast< wxGridCellTextEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::SetParameters(const wxString &)");
		}
		self->SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellTextEditor* LunaTraits< wxGridCellTextEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellTextEditor >::_bind_dtor(wxGridCellTextEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellTextEditor >::className[] = "wxGridCellTextEditor";
const char LunaTraits< wxGridCellTextEditor >::fullName[] = "wxGridCellTextEditor";
const char LunaTraits< wxGridCellTextEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellTextEditor >::parents[] = {"wx.wxGridCellEditor", 0};
const int LunaTraits< wxGridCellTextEditor >::hash = 48927140;
const int LunaTraits< wxGridCellTextEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellTextEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellTextEditor::_bind_SetParameters},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellTextEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellTextEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellTextEditor >::enumValues[] = {
	{0,0}
};


