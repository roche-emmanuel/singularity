#include <plug_common.h>

class luna_wrapper_wxGridHeaderLabelsRenderer {
public:
	typedef Luna< wxGridHeaderLabelsRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridHeaderLabelsRenderer* ptr= dynamic_cast< wxGridHeaderLabelsRenderer* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridHeaderLabelsRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_DrawLabel(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,19919380) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const
	static int _bind_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_DrawLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const function, expected prototype:\nvoid wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 20234418\n");
		}

		const wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridHeaderLabelsRenderer::DrawLabel function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridHeaderLabelsRenderer::DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridHeaderLabelsRenderer::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;
		int horizAlign=(int)lua_tointeger(L,6);
		int vertAlign=(int)lua_tointeger(L,7);
		int textOrientation=(int)lua_tointeger(L,8);

		wxGridHeaderLabelsRenderer* self=dynamic_cast< wxGridHeaderLabelsRenderer* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid &, wxDC &, const wxString &, const wxRect &, int, int, int) const");
		}
		self->DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);

		return 0;
	}


	// Operator binds:

};

wxGridHeaderLabelsRenderer* LunaTraits< wxGridHeaderLabelsRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const

	// Abstract operators:
}

void LunaTraits< wxGridHeaderLabelsRenderer >::_bind_dtor(wxGridHeaderLabelsRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridHeaderLabelsRenderer >::className[] = "wxGridHeaderLabelsRenderer";
const char LunaTraits< wxGridHeaderLabelsRenderer >::fullName[] = "wxGridHeaderLabelsRenderer";
const char LunaTraits< wxGridHeaderLabelsRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridHeaderLabelsRenderer >::parents[] = {"wx.wxGridCornerHeaderRenderer", 0};
const int LunaTraits< wxGridHeaderLabelsRenderer >::hash = 5539562;
const int LunaTraits< wxGridHeaderLabelsRenderer >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridHeaderLabelsRenderer >::methods[] = {
	{"DrawLabel", &luna_wrapper_wxGridHeaderLabelsRenderer::_bind_DrawLabel},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridHeaderLabelsRenderer >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridHeaderLabelsRenderer::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridHeaderLabelsRenderer >::enumValues[] = {
	{0,0}
};


