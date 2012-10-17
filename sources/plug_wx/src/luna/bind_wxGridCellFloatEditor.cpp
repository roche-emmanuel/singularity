#include <plug_common.h>

class luna_wrapper_wxGridCellFloatEditor {
public:
	typedef Luna< wxGridCellFloatEditor > luna_t;

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
		wxGridCellFloatEditor* ptr= dynamic_cast< wxGridCellFloatEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellFloatEditor >::push(L,ptr,false);
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
	// void wxGridCellFloatEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellFloatEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellFloatEditor* self=dynamic_cast< wxGridCellFloatEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatEditor::SetParameters(const wxString &)");
		}
		self->SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellFloatEditor* LunaTraits< wxGridCellFloatEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellFloatEditor >::_bind_dtor(wxGridCellFloatEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellFloatEditor >::className[] = "wxGridCellFloatEditor";
const char LunaTraits< wxGridCellFloatEditor >::fullName[] = "wxGridCellFloatEditor";
const char LunaTraits< wxGridCellFloatEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellFloatEditor >::parents[] = {"wx.wxGridCellTextEditor", 0};
const int LunaTraits< wxGridCellFloatEditor >::hash = 20847274;
const int LunaTraits< wxGridCellFloatEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellFloatEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellFloatEditor::_bind_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellFloatEditor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellFloatEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellFloatEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellFloatEditor >::enumValues[] = {
	{0,0}
};


