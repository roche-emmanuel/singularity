#include <plug_common.h>

class luna_wrapper_wxGridCornerHeaderRendererDefault {
public:
	typedef Luna< wxGridCornerHeaderRendererDefault > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridCornerHeaderRendererDefault* ptr= dynamic_cast< wxGridCornerHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCornerHeaderRendererDefault >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_DrawBorder(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,19919380) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		const wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridCornerHeaderRendererDefault* self=dynamic_cast< wxGridCornerHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid &, wxDC &, wxRect &) const");
		}
		self->DrawBorder(grid, dc, rect);

		return 0;
	}


	// Operator binds:

};

wxGridCornerHeaderRendererDefault* LunaTraits< wxGridCornerHeaderRendererDefault >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGridCornerHeaderRendererDefault >::_bind_dtor(wxGridCornerHeaderRendererDefault* obj) {
	delete obj;
}

const char LunaTraits< wxGridCornerHeaderRendererDefault >::className[] = "wxGridCornerHeaderRendererDefault";
const char LunaTraits< wxGridCornerHeaderRendererDefault >::fullName[] = "wxGridCornerHeaderRendererDefault";
const char LunaTraits< wxGridCornerHeaderRendererDefault >::moduleName[] = "wx";
const char* LunaTraits< wxGridCornerHeaderRendererDefault >::parents[] = {"wx.wxGridCornerHeaderRenderer", 0};
const int LunaTraits< wxGridCornerHeaderRendererDefault >::hash = 54947855;
const int LunaTraits< wxGridCornerHeaderRendererDefault >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridCornerHeaderRendererDefault >::methods[] = {
	{"DrawBorder", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_DrawBorder},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCornerHeaderRendererDefault >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridCornerHeaderRendererDefault::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCornerHeaderRendererDefault >::enumValues[] = {
	{0,0}
};


