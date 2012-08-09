#include <plug_common.h>

class luna_wrapper_wxPropagateOnce {
public:
	typedef Luna< wxPropagateOnce > luna_t;

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

		wxPropagateOnce* self=(Luna< wxPropagateOnce >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPropagateOnce");
		
		return luna_dynamicCast(L,converters,"wxPropagateOnce",name);
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
	// wxPropagateOnce::wxPropagateOnce(wxEvent & event)
	static wxPropagateOnce* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropagateOnce::wxPropagateOnce(wxEvent & event) function, expected prototype:\nwxPropagateOnce::wxPropagateOnce(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropagateOnce::wxPropagateOnce function");
		}
		wxEvent & event=*event_ptr;

		return new wxPropagateOnce(event);
	}


	// Function binds:

	// Operator binds:

};

wxPropagateOnce* LunaTraits< wxPropagateOnce >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropagateOnce::_bind_ctor(L);
}

void LunaTraits< wxPropagateOnce >::_bind_dtor(wxPropagateOnce* obj) {
	delete obj;
}

const char LunaTraits< wxPropagateOnce >::className[] = "wxPropagateOnce";
const char LunaTraits< wxPropagateOnce >::fullName[] = "wxPropagateOnce";
const char LunaTraits< wxPropagateOnce >::moduleName[] = "wx";
const char* LunaTraits< wxPropagateOnce >::parents[] = {0};
const int LunaTraits< wxPropagateOnce >::hash = 54533430;
const int LunaTraits< wxPropagateOnce >::uniqueIDs[] = {54533430,0};

luna_RegType LunaTraits< wxPropagateOnce >::methods[] = {
	{"dynCast", &luna_wrapper_wxPropagateOnce::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropagateOnce >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropagateOnce >::enumValues[] = {
	{0,0}
};

