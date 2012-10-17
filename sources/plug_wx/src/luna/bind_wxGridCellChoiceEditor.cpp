#include <plug_common.h>

class luna_wrapper_wxGridCellChoiceEditor {
public:
	typedef Luna< wxGridCellChoiceEditor > luna_t;

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
		wxGridCellChoiceEditor* ptr= dynamic_cast< wxGridCellChoiceEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellChoiceEditor >::push(L,ptr,false);
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
	// void wxGridCellChoiceEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellChoiceEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellChoiceEditor* self=dynamic_cast< wxGridCellChoiceEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::SetParameters(const wxString &)");
		}
		self->SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellChoiceEditor* LunaTraits< wxGridCellChoiceEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellChoiceEditor >::_bind_dtor(wxGridCellChoiceEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellChoiceEditor >::className[] = "wxGridCellChoiceEditor";
const char LunaTraits< wxGridCellChoiceEditor >::fullName[] = "wxGridCellChoiceEditor";
const char LunaTraits< wxGridCellChoiceEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellChoiceEditor >::parents[] = {"wx.wxGridCellEditor", 0};
const int LunaTraits< wxGridCellChoiceEditor >::hash = 67983166;
const int LunaTraits< wxGridCellChoiceEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellChoiceEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellChoiceEditor::_bind_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellChoiceEditor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellChoiceEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellChoiceEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellChoiceEditor >::enumValues[] = {
	{0,0}
};


