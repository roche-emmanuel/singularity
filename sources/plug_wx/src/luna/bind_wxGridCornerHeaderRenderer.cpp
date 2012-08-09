#include <plug_common.h>

class luna_wrapper_wxGridCornerHeaderRenderer {
public:
	typedef Luna< wxGridCornerHeaderRenderer > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCornerHeaderRenderer* self=(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCornerHeaderRenderer");
		
		return luna_dynamicCast(L,converters,"wxGridCornerHeaderRenderer",name);
	}


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

	// Function binds:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 56813631\narg 3 ID = 20234418\n");
		}

		const wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCornerHeaderRenderer::DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCornerHeaderRenderer::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCornerHeaderRenderer::DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridCornerHeaderRenderer* self=(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid &, wxDC &, wxRect &) const");
		}
		self->DrawBorder(grid, dc, rect);

		return 0;
	}


	// Operator binds:

};

wxGridCornerHeaderRenderer* LunaTraits< wxGridCornerHeaderRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const

	// Abstract operators:
}

void LunaTraits< wxGridCornerHeaderRenderer >::_bind_dtor(wxGridCornerHeaderRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCornerHeaderRenderer >::className[] = "wxGridCornerHeaderRenderer";
const char LunaTraits< wxGridCornerHeaderRenderer >::fullName[] = "wxGridCornerHeaderRenderer";
const char LunaTraits< wxGridCornerHeaderRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCornerHeaderRenderer >::parents[] = {0};
const int LunaTraits< wxGridCornerHeaderRenderer >::hash = 29503865;
const int LunaTraits< wxGridCornerHeaderRenderer >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridCornerHeaderRenderer >::methods[] = {
	{"DrawBorder", &luna_wrapper_wxGridCornerHeaderRenderer::_bind_DrawBorder},
	{"dynCast", &luna_wrapper_wxGridCornerHeaderRenderer::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCornerHeaderRenderer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCornerHeaderRenderer >::enumValues[] = {
	{0,0}
};

