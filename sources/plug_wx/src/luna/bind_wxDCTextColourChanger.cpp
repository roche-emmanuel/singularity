#include <plug_common.h>

class luna_wrapper_wxDCTextColourChanger {
public:
	typedef Luna< wxDCTextColourChanger > luna_t;

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

		wxDCTextColourChanger* self=(Luna< wxDCTextColourChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCTextColourChanger");
		
		return luna_dynamicCast(L,converters,"wxDCTextColourChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc)
	static wxDCTextColourChanger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc) function, expected prototype:\nwxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		wxDC & dc=*dc_ptr;

		return new wxDCTextColourChanger(dc);
	}

	// wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col)
	static wxDCTextColourChanger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col) function, expected prototype:\nwxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		const wxColour & col=*col_ptr;

		return new wxDCTextColourChanger(dc, col);
	}

	// Overload binder for wxDCTextColourChanger::wxDCTextColourChanger
	static wxDCTextColourChanger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDCTextColourChanger, cannot match any of the overloads for function wxDCTextColourChanger:\n  wxDCTextColourChanger(wxDC &)\n  wxDCTextColourChanger(wxDC &, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// void wxDCTextColourChanger::Set(const wxColour & col)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDCTextColourChanger::Set(const wxColour & col) function, expected prototype:\nvoid wxDCTextColourChanger::Set(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxDCTextColourChanger::Set function");
		}
		const wxColour & col=*col_ptr;

		wxDCTextColourChanger* self=(Luna< wxDCTextColourChanger >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDCTextColourChanger::Set(const wxColour &)");
		}
		self->Set(col);

		return 0;
	}


	// Operator binds:

};

wxDCTextColourChanger* LunaTraits< wxDCTextColourChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCTextColourChanger::_bind_ctor(L);
}

void LunaTraits< wxDCTextColourChanger >::_bind_dtor(wxDCTextColourChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCTextColourChanger >::className[] = "wxDCTextColourChanger";
const char LunaTraits< wxDCTextColourChanger >::fullName[] = "wxDCTextColourChanger";
const char LunaTraits< wxDCTextColourChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCTextColourChanger >::parents[] = {0};
const int LunaTraits< wxDCTextColourChanger >::hash = 42501466;
const int LunaTraits< wxDCTextColourChanger >::uniqueIDs[] = {42501466,0};

luna_RegType LunaTraits< wxDCTextColourChanger >::methods[] = {
	{"Set", &luna_wrapper_wxDCTextColourChanger::_bind_Set},
	{"dynCast", &luna_wrapper_wxDCTextColourChanger::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCTextColourChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCTextColourChanger >::enumValues[] = {
	{0,0}
};


