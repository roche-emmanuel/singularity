#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridColumnHeaderRenderer.h>

class luna_wrapper_wxGridColumnHeaderRenderer {
public:
	typedef Luna< wxGridColumnHeaderRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxGridCornerHeaderRenderer* self=(Luna< wxGridCornerHeaderRenderer >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,29503865) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCornerHeaderRenderer*)");
		}

		wxGridCornerHeaderRenderer* rhs =(Luna< wxGridCornerHeaderRenderer >::check(L,2));
		wxGridCornerHeaderRenderer* self=(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridColumnHeaderRenderer* ptr= dynamic_cast< wxGridColumnHeaderRenderer* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		wxGridColumnHeaderRenderer* ptr= luna_caster< wxGridCornerHeaderRenderer, wxGridColumnHeaderRenderer >::cast(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridColumnHeaderRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_base_DrawLabel(lua_State *L) {
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
	// void wxGridColumnHeaderRenderer::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const
	static int _bind_base_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_base_DrawLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridColumnHeaderRenderer::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const function, expected prototype:\nvoid wxGridColumnHeaderRenderer::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const\nClass arguments details:\narg 1 ID = 19919380\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 20234418\n");
		}

		const wxGrid* grid_ptr=(Luna< wxGrid >::check(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridColumnHeaderRenderer::base_DrawLabel function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridColumnHeaderRenderer::base_DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridColumnHeaderRenderer::base_DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;
		int horizAlign=(int)lua_tointeger(L,6);
		int vertAlign=(int)lua_tointeger(L,7);
		int textOrientation=(int)lua_tointeger(L,8);

		wxGridColumnHeaderRenderer* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridColumnHeaderRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridColumnHeaderRenderer::base_DrawLabel(const wxGrid &, wxDC &, const wxString &, const wxRect &, int, int, int) const");
		}
		self->wxGridColumnHeaderRenderer::DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);

		return 0;
	}


	// Operator binds:

};

wxGridColumnHeaderRenderer* LunaTraits< wxGridColumnHeaderRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
}

void LunaTraits< wxGridColumnHeaderRenderer >::_bind_dtor(wxGridColumnHeaderRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridColumnHeaderRenderer >::className[] = "wxGridColumnHeaderRenderer";
const char LunaTraits< wxGridColumnHeaderRenderer >::fullName[] = "wxGridColumnHeaderRenderer";
const char LunaTraits< wxGridColumnHeaderRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridColumnHeaderRenderer >::parents[] = {"wx.wxGridHeaderLabelsRenderer", 0};
const int LunaTraits< wxGridColumnHeaderRenderer >::hash = 28124490;
const int LunaTraits< wxGridColumnHeaderRenderer >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridColumnHeaderRenderer >::methods[] = {
	{"base_DrawLabel", &luna_wrapper_wxGridColumnHeaderRenderer::_bind_base_DrawLabel},
	{"__eq", &luna_wrapper_wxGridColumnHeaderRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxGridColumnHeaderRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridColumnHeaderRenderer >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridColumnHeaderRenderer::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridColumnHeaderRenderer >::enumValues[] = {
	{0,0}
};


