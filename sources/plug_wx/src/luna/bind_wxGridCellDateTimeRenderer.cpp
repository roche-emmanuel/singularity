#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellDateTimeRenderer.h>

class luna_wrapper_wxGridCellDateTimeRenderer {
public:
	typedef Luna< wxGridCellDateTimeRenderer > luna_t;

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
		//wxGridCellDateTimeRenderer* ptr= dynamic_cast< wxGridCellDateTimeRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellDateTimeRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellDateTimeRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellDateTimeRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxGridCellDateTimeRenderer::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellDateTimeRenderer::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellDateTimeRenderer::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellDateTimeRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellDateTimeRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellDateTimeRenderer::SetParameters(const wxString &)");
		}
		self->SetParameters(params);

		return 0;
	}

	// void wxGridCellDateTimeRenderer::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellDateTimeRenderer::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellDateTimeRenderer::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellDateTimeRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellDateTimeRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellDateTimeRenderer::base_SetParameters(const wxString &)");
		}
		self->wxGridCellDateTimeRenderer::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellDateTimeRenderer* LunaTraits< wxGridCellDateTimeRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellDateTimeRenderer >::_bind_dtor(wxGridCellDateTimeRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellDateTimeRenderer >::className[] = "wxGridCellDateTimeRenderer";
const char LunaTraits< wxGridCellDateTimeRenderer >::fullName[] = "wxGridCellDateTimeRenderer";
const char LunaTraits< wxGridCellDateTimeRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellDateTimeRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellDateTimeRenderer >::hash = 77328016;
const int LunaTraits< wxGridCellDateTimeRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellDateTimeRenderer >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellDateTimeRenderer::_bind_SetParameters},
	{"base_SetParameters", &luna_wrapper_wxGridCellDateTimeRenderer::_bind_base_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellDateTimeRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellDateTimeRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellDateTimeRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellDateTimeRenderer >::enumValues[] = {
	{0,0}
};


