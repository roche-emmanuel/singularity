#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellStringRenderer.h>

class luna_wrapper_wxGridCellStringRenderer {
public:
	typedef Luna< wxGridCellStringRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxGridCellStringRenderer* ptr= dynamic_cast< wxGridCellStringRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellStringRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellStringRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellStringRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGridCellStringRenderer* LunaTraits< wxGridCellStringRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellStringRenderer >::_bind_dtor(wxGridCellStringRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellStringRenderer >::className[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::fullName[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellStringRenderer >::parents[] = {"wx.wxGridCellRenderer", 0};
const int LunaTraits< wxGridCellStringRenderer >::hash = 24780461;
const int LunaTraits< wxGridCellStringRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellStringRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxGridCellStringRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxGridCellStringRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellStringRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellStringRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellStringRenderer >::enumValues[] = {
	{0,0}
};


