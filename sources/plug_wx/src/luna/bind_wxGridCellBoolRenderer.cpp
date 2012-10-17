#include <plug_common.h>

class luna_wrapper_wxGridCellBoolRenderer {
public:
	typedef Luna< wxGridCellBoolRenderer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96062845) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellRenderer*)");
		}

		wxGridCellRenderer* rhs =(Luna< wxGridCellRenderer >::check(L,2));
		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxGridCellRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCellBoolRenderer* ptr= dynamic_cast< wxGridCellBoolRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellBoolRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellBoolRenderer* LunaTraits< wxGridCellBoolRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)

	// Abstract operators:
}

void LunaTraits< wxGridCellBoolRenderer >::_bind_dtor(wxGridCellBoolRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellBoolRenderer >::className[] = "wxGridCellBoolRenderer";
const char LunaTraits< wxGridCellBoolRenderer >::fullName[] = "wxGridCellBoolRenderer";
const char LunaTraits< wxGridCellBoolRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellBoolRenderer >::parents[] = {"wx.wxGridCellRenderer", 0};
const int LunaTraits< wxGridCellBoolRenderer >::hash = 52679879;
const int LunaTraits< wxGridCellBoolRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellBoolRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxGridCellBoolRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellBoolRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellBoolRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellBoolRenderer >::enumValues[] = {
	{0,0}
};


