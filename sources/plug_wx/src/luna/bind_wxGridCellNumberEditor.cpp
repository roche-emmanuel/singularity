#include <plug_common.h>

class luna_wrapper_wxGridCellNumberEditor {
public:
	typedef Luna< wxGridCellNumberEditor > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellNumberEditor* ptr= dynamic_cast< wxGridCellNumberEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellNumberEditor >::push(L,ptr,false);
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
	// void wxGridCellNumberEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellNumberEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellNumberEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellNumberEditor* self=dynamic_cast< wxGridCellNumberEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellNumberEditor::SetParameters(const wxString &)");
		}
		self->SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellNumberEditor* LunaTraits< wxGridCellNumberEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellNumberEditor >::_bind_dtor(wxGridCellNumberEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellNumberEditor >::className[] = "wxGridCellNumberEditor";
const char LunaTraits< wxGridCellNumberEditor >::fullName[] = "wxGridCellNumberEditor";
const char LunaTraits< wxGridCellNumberEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellNumberEditor >::parents[] = {"wx.wxGridCellTextEditor", 0};
const int LunaTraits< wxGridCellNumberEditor >::hash = 78195843;
const int LunaTraits< wxGridCellNumberEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellNumberEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellNumberEditor::_bind_SetParameters},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellNumberEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellNumberEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellNumberEditor >::enumValues[] = {
	{0,0}
};


