#include <plug_common.h>

class luna_wrapper_wxDCBrushChanger {
public:
	typedef Luna< wxDCBrushChanger > luna_t;

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

		wxDCBrushChanger* self=(Luna< wxDCBrushChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCBrushChanger");
		
		return luna_dynamicCast(L,converters,"wxDCBrushChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush)
	static wxDCBrushChanger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush) function, expected prototype:\nwxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCBrushChanger::wxDCBrushChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxBrush* brush_ptr=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxDCBrushChanger::wxDCBrushChanger function");
		}
		const wxBrush & brush=*brush_ptr;

		return new wxDCBrushChanger(dc, brush);
	}


	// Function binds:

	// Operator binds:

};

wxDCBrushChanger* LunaTraits< wxDCBrushChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCBrushChanger::_bind_ctor(L);
}

void LunaTraits< wxDCBrushChanger >::_bind_dtor(wxDCBrushChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCBrushChanger >::className[] = "wxDCBrushChanger";
const char LunaTraits< wxDCBrushChanger >::fullName[] = "wxDCBrushChanger";
const char LunaTraits< wxDCBrushChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCBrushChanger >::parents[] = {0};
const int LunaTraits< wxDCBrushChanger >::hash = 15629306;
const int LunaTraits< wxDCBrushChanger >::uniqueIDs[] = {15629306,0};

luna_RegType LunaTraits< wxDCBrushChanger >::methods[] = {
	{"dynCast", &luna_wrapper_wxDCBrushChanger::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCBrushChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCBrushChanger >::enumValues[] = {
	{0,0}
};

