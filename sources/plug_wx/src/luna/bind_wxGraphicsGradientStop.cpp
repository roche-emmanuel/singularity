#include <plug_common.h>

class luna_wrapper_wxGraphicsGradientStop {
public:
	typedef Luna< wxGraphicsGradientStop > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48683754) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGraphicsGradientStop*)");
		}

		wxGraphicsGradientStop* rhs =(Luna< wxGraphicsGradientStop >::check(L,2));
		wxGraphicsGradientStop* self=(Luna< wxGraphicsGradientStop >::check(L,1));
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

		wxGraphicsGradientStop* self=(Luna< wxGraphicsGradientStop >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGraphicsGradientStop");
		
		return luna_dynamicCast(L,converters,"wxGraphicsGradientStop",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxGraphicsGradientStop* LunaTraits< wxGraphicsGradientStop >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsGradientStop >::_bind_dtor(wxGraphicsGradientStop* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsGradientStop >::className[] = "wxGraphicsGradientStop";
const char LunaTraits< wxGraphicsGradientStop >::fullName[] = "wxGraphicsGradientStop";
const char LunaTraits< wxGraphicsGradientStop >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsGradientStop >::parents[] = {0};
const int LunaTraits< wxGraphicsGradientStop >::hash = 48683754;
const int LunaTraits< wxGraphicsGradientStop >::uniqueIDs[] = {48683754,0};

luna_RegType LunaTraits< wxGraphicsGradientStop >::methods[] = {
	{"dynCast", &luna_wrapper_wxGraphicsGradientStop::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGraphicsGradientStop::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsGradientStop >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsGradientStop >::enumValues[] = {
	{0,0}
};


