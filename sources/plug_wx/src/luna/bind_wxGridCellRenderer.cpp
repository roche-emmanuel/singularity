#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellRenderer.h>

class luna_wrapper_wxGridCellRenderer {
public:
	typedef Luna< wxGridCellRenderer > luna_t;

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

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCellRenderer");
		
		return luna_dynamicCast(L,converters,"wxGridCellRenderer",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Draw(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,19919380) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25758569) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestSize(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,19919380) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25758569) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGridCellRenderer::Clone() const function, expected prototype:\nwxGridCellRenderer * wxGridCellRenderer::Clone() const\nClass arguments details:\n");
		}


		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGridCellRenderer::Clone() const");
		}
		wxGridCellRenderer * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected) function, expected prototype:\nvoid wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 25758569\narg 3 ID = 56813631\narg 4 ID = 20234418\n");
		}

		wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCellRenderer::Draw function");
		}
		wxGrid & grid=*grid_ptr;
		wxGridCellAttr* attr_ptr=(Luna< wxGridCellAttr >::check(L,3));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxGridCellRenderer::Draw function");
		}
		wxGridCellAttr & attr=*attr_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,4));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCellRenderer::Draw function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellRenderer::Draw function");
		}
		const wxRect & rect=*rect_ptr;
		int row=(int)lua_tointeger(L,6);
		int col=(int)lua_tointeger(L,7);
		bool isSelected=(bool)(lua_toboolean(L,8)==1);

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellRenderer::Draw(wxGrid &, wxGridCellAttr &, wxDC &, const wxRect &, int, int, bool)");
		}
		self->Draw(grid, attr, dc, rect, row, col, isSelected);

		return 0;
	}

	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
	static int _bind_GetBestSize(lua_State *L) {
		if (!_lg_typecheck_GetBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col) function, expected prototype:\nwxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 25758569\narg 3 ID = 56813631\n");
		}

		wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCellRenderer::GetBestSize function");
		}
		wxGrid & grid=*grid_ptr;
		wxGridCellAttr* attr_ptr=(Luna< wxGridCellAttr >::check(L,3));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxGridCellRenderer::GetBestSize function");
		}
		wxGridCellAttr & attr=*attr_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,4));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCellRenderer::GetBestSize function");
		}
		wxDC & dc=*dc_ptr;
		int row=(int)lua_tointeger(L,5);
		int col=(int)lua_tointeger(L,6);

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxGridCellRenderer::GetBestSize(wxGrid &, wxGridCellAttr &, wxDC &, int, int)");
		}
		wxSize stack_lret = self->GetBestSize(grid, attr, dc, row, col);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxGridCellRenderer* LunaTraits< wxGridCellRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellRenderer >::_bind_dtor(wxGridCellRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellRenderer >::className[] = "wxGridCellRenderer";
const char LunaTraits< wxGridCellRenderer >::fullName[] = "wxGridCellRenderer";
const char LunaTraits< wxGridCellRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellRenderer >::parents[] = {0};
const int LunaTraits< wxGridCellRenderer >::hash = 96062845;
const int LunaTraits< wxGridCellRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellRenderer >::methods[] = {
	{"Clone", &luna_wrapper_wxGridCellRenderer::_bind_Clone},
	{"Draw", &luna_wrapper_wxGridCellRenderer::_bind_Draw},
	{"GetBestSize", &luna_wrapper_wxGridCellRenderer::_bind_GetBestSize},
	{"dynCast", &luna_wrapper_wxGridCellRenderer::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridCellRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellRenderer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellRenderer >::enumValues[] = {
	{0,0}
};


