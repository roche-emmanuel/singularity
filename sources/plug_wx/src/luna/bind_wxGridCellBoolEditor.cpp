#include <plug_common.h>

class luna_wrapper_wxGridCellBoolEditor {
public:
	typedef Luna< wxGridCellBoolEditor > luna_t;

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
		wxGridCellBoolEditor* ptr= dynamic_cast< wxGridCellBoolEditor* >(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellBoolEditor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsTrueValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseStringValues(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// static bool wxGridCellBoolEditor::IsTrueValue(const wxString & value)
	static int _bind_IsTrueValue(lua_State *L) {
		if (!_lg_typecheck_IsTrueValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxGridCellBoolEditor::IsTrueValue(const wxString & value) function, expected prototype:\nstatic bool wxGridCellBoolEditor::IsTrueValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxGridCellBoolEditor::IsTrueValue(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxGridCellBoolEditor::UseStringValues(const wxString & valueTrue = "1", const wxString & valueFalse = wxEmptyString)
	static int _bind_UseStringValues(lua_State *L) {
		if (!_lg_typecheck_UseStringValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxGridCellBoolEditor::UseStringValues(const wxString & valueTrue = \"1\", const wxString & valueFalse = wxEmptyString) function, expected prototype:\nstatic void wxGridCellBoolEditor::UseStringValues(const wxString & valueTrue = \"1\", const wxString & valueFalse = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString valueTrue(lua_tostring(L,1),lua_objlen(L,1));
		wxString valueFalse(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellBoolEditor::UseStringValues(valueTrue, valueFalse);

		return 0;
	}


	// Operator binds:

};

wxGridCellBoolEditor* LunaTraits< wxGridCellBoolEditor >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxGridCellBoolEditor >::_bind_dtor(wxGridCellBoolEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellBoolEditor >::className[] = "wxGridCellBoolEditor";
const char LunaTraits< wxGridCellBoolEditor >::fullName[] = "wxGridCellBoolEditor";
const char LunaTraits< wxGridCellBoolEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellBoolEditor >::parents[] = {"wx.wxGridCellEditor", 0};
const int LunaTraits< wxGridCellBoolEditor >::hash = 93104275;
const int LunaTraits< wxGridCellBoolEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellBoolEditor >::methods[] = {
	{"IsTrueValue", &luna_wrapper_wxGridCellBoolEditor::_bind_IsTrueValue},
	{"UseStringValues", &luna_wrapper_wxGridCellBoolEditor::_bind_UseStringValues},
	{"__eq", &luna_wrapper_wxGridCellBoolEditor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellBoolEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellBoolEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellBoolEditor >::enumValues[] = {
	{0,0}
};


