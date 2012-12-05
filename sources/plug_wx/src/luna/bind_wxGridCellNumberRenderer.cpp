#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellNumberRenderer.h>

class luna_wrapper_wxGridCellNumberRenderer {
public:
	typedef Luna< wxGridCellNumberRenderer > luna_t;

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
		wxGridCellNumberRenderer* ptr= dynamic_cast< wxGridCellNumberRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellNumberRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellNumberRenderer* LunaTraits< wxGridCellNumberRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellNumberRenderer >::_bind_dtor(wxGridCellNumberRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellNumberRenderer >::className[] = "wxGridCellNumberRenderer";
const char LunaTraits< wxGridCellNumberRenderer >::fullName[] = "wxGridCellNumberRenderer";
const char LunaTraits< wxGridCellNumberRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellNumberRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellNumberRenderer >::hash = 25671042;
const int LunaTraits< wxGridCellNumberRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellNumberRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxGridCellNumberRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellNumberRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellNumberRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellNumberRenderer >::enumValues[] = {
	{0,0}
};


