#include <plug_common.h>

class luna_wrapper_wxFontMetrics {
public:
	typedef Luna< wxFontMetrics > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63990346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFontMetrics*)");
		}

		wxFontMetrics* rhs =(Luna< wxFontMetrics >::check(L,2));
		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
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

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFontMetrics");
		
		return luna_dynamicCast(L,converters,"wxFontMetrics",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontMetrics::wxFontMetrics()
	static wxFontMetrics* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontMetrics::wxFontMetrics() function, expected prototype:\nwxFontMetrics::wxFontMetrics()\nClass arguments details:\n");
		}


		return new wxFontMetrics();
	}


	// Function binds:

	// Operator binds:

};

wxFontMetrics* LunaTraits< wxFontMetrics >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontMetrics::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxFontMetrics >::_bind_dtor(wxFontMetrics* obj) {
	delete obj;
}

const char LunaTraits< wxFontMetrics >::className[] = "wxFontMetrics";
const char LunaTraits< wxFontMetrics >::fullName[] = "wxFontMetrics";
const char LunaTraits< wxFontMetrics >::moduleName[] = "wx";
const char* LunaTraits< wxFontMetrics >::parents[] = {0};
const int LunaTraits< wxFontMetrics >::hash = 63990346;
const int LunaTraits< wxFontMetrics >::uniqueIDs[] = {63990346,0};

luna_RegType LunaTraits< wxFontMetrics >::methods[] = {
	{"dynCast", &luna_wrapper_wxFontMetrics::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFontMetrics::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontMetrics >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontMetrics >::enumValues[] = {
	{0,0}
};


