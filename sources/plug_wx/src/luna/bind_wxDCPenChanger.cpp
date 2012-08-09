#include <plug_common.h>

class luna_wrapper_wxDCPenChanger {
public:
	typedef Luna< wxDCPenChanger > luna_t;

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

		wxDCPenChanger* self=(Luna< wxDCPenChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCPenChanger");
		
		return luna_dynamicCast(L,converters,"wxDCPenChanger",name);
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
	// wxDCPenChanger::wxDCPenChanger(wxDC & dc, const wxPen & pen)
	static wxDCPenChanger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCPenChanger::wxDCPenChanger(wxDC & dc, const wxPen & pen) function, expected prototype:\nwxDCPenChanger::wxDCPenChanger(wxDC & dc, const wxPen & pen)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCPenChanger::wxDCPenChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxPen* pen_ptr=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxDCPenChanger::wxDCPenChanger function");
		}
		const wxPen & pen=*pen_ptr;

		return new wxDCPenChanger(dc, pen);
	}


	// Function binds:

	// Operator binds:

};

wxDCPenChanger* LunaTraits< wxDCPenChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCPenChanger::_bind_ctor(L);
}

void LunaTraits< wxDCPenChanger >::_bind_dtor(wxDCPenChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCPenChanger >::className[] = "wxDCPenChanger";
const char LunaTraits< wxDCPenChanger >::fullName[] = "wxDCPenChanger";
const char LunaTraits< wxDCPenChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCPenChanger >::parents[] = {0};
const int LunaTraits< wxDCPenChanger >::hash = 9382812;
const int LunaTraits< wxDCPenChanger >::uniqueIDs[] = {9382812,0};

luna_RegType LunaTraits< wxDCPenChanger >::methods[] = {
	{"dynCast", &luna_wrapper_wxDCPenChanger::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCPenChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCPenChanger >::enumValues[] = {
	{0,0}
};

