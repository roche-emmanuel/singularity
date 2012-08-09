#include <plug_common.h>

class luna_wrapper_wxPropagationDisabler {
public:
	typedef Luna< wxPropagationDisabler > luna_t;

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

		wxPropagationDisabler* self=(Luna< wxPropagationDisabler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPropagationDisabler");
		
		return luna_dynamicCast(L,converters,"wxPropagationDisabler",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropagationDisabler::wxPropagationDisabler(wxEvent & event)
	static wxPropagationDisabler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropagationDisabler::wxPropagationDisabler(wxEvent & event) function, expected prototype:\nwxPropagationDisabler::wxPropagationDisabler(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropagationDisabler::wxPropagationDisabler function");
		}
		wxEvent & event=*event_ptr;

		return new wxPropagationDisabler(event);
	}


	// Function binds:

	// Operator binds:

};

wxPropagationDisabler* LunaTraits< wxPropagationDisabler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropagationDisabler::_bind_ctor(L);
}

void LunaTraits< wxPropagationDisabler >::_bind_dtor(wxPropagationDisabler* obj) {
	delete obj;
}

const char LunaTraits< wxPropagationDisabler >::className[] = "wxPropagationDisabler";
const char LunaTraits< wxPropagationDisabler >::fullName[] = "wxPropagationDisabler";
const char LunaTraits< wxPropagationDisabler >::moduleName[] = "wx";
const char* LunaTraits< wxPropagationDisabler >::parents[] = {0};
const int LunaTraits< wxPropagationDisabler >::hash = 49411923;
const int LunaTraits< wxPropagationDisabler >::uniqueIDs[] = {49411923,0};

luna_RegType LunaTraits< wxPropagationDisabler >::methods[] = {
	{"dynCast", &luna_wrapper_wxPropagationDisabler::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropagationDisabler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropagationDisabler >::enumValues[] = {
	{0,0}
};

