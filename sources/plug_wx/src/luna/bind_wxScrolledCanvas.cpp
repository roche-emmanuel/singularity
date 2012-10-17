#include <plug_common.h>

class luna_wrapper_wxScrolledCanvas {
public:
	typedef Luna< wxScrolledCanvas > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56668806) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxScrolledCanvas*)");
		}

		wxScrolledCanvas* rhs =(Luna< wxScrolledCanvas >::check(L,2));
		wxScrolledCanvas* self=(Luna< wxScrolledCanvas >::check(L,1));
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

		wxScrolledCanvas* self=(Luna< wxScrolledCanvas >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxScrolledCanvas");
		
		return luna_dynamicCast(L,converters,"wxScrolledCanvas",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxScrolledCanvas* LunaTraits< wxScrolledCanvas >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxScrolledCanvas >::_bind_dtor(wxScrolledCanvas* obj) {
	delete obj;
}

const char LunaTraits< wxScrolledCanvas >::className[] = "wxScrolledCanvas";
const char LunaTraits< wxScrolledCanvas >::fullName[] = "wxScrolledCanvas";
const char LunaTraits< wxScrolledCanvas >::moduleName[] = "wx";
const char* LunaTraits< wxScrolledCanvas >::parents[] = {0};
const int LunaTraits< wxScrolledCanvas >::hash = 56668806;
const int LunaTraits< wxScrolledCanvas >::uniqueIDs[] = {56668806,0};

luna_RegType LunaTraits< wxScrolledCanvas >::methods[] = {
	{"dynCast", &luna_wrapper_wxScrolledCanvas::_bind_dynCast},
	{"__eq", &luna_wrapper_wxScrolledCanvas::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrolledCanvas >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrolledCanvas >::enumValues[] = {
	{0,0}
};


