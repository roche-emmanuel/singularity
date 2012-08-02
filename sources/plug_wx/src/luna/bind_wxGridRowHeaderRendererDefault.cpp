#include <plug_common.h>

class luna_wrapper_wxGridRowHeaderRendererDefault {
public:
	typedef Luna< wxGridRowHeaderRendererDefault > luna_t;

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridRowHeaderRendererDefault* ptr= dynamic_cast< wxGridRowHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridRowHeaderRendererDefault >::push(L,ptr,false);
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
	// void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		const wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridRowHeaderRendererDefault* self=dynamic_cast< wxGridRowHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid &, wxDC &, wxRect &) const");
		}
		self->DrawBorder(grid, dc, rect);

		return 0;
	}


	// Operator binds:

};

wxGridRowHeaderRendererDefault* LunaTraits< wxGridRowHeaderRendererDefault >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGridRowHeaderRendererDefault >::_bind_dtor(wxGridRowHeaderRendererDefault* obj) {
	delete obj;
}

const char LunaTraits< wxGridRowHeaderRendererDefault >::className[] = "wxGridRowHeaderRendererDefault";
const char LunaTraits< wxGridRowHeaderRendererDefault >::fullName[] = "wxGridRowHeaderRendererDefault";
const char LunaTraits< wxGridRowHeaderRendererDefault >::moduleName[] = "wx";
const char* LunaTraits< wxGridRowHeaderRendererDefault >::parents[] = {"wx.wxGridRowHeaderRenderer", 0};
const int LunaTraits< wxGridRowHeaderRendererDefault >::hash = 80095649;
const int LunaTraits< wxGridRowHeaderRendererDefault >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridRowHeaderRendererDefault >::methods[] = {
	{"DrawBorder", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_DrawBorder},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridRowHeaderRendererDefault >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridRowHeaderRendererDefault::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridRowHeaderRendererDefault >::enumValues[] = {
	{0,0}
};


