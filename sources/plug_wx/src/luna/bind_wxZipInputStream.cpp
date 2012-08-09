#include <plug_common.h>

class luna_wrapper_wxZipInputStream {
public:
	typedef Luna< wxZipInputStream > luna_t;

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

		wxZipInputStream* self=(Luna< wxZipInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipInputStream");
		
		return luna_dynamicCast(L,converters,"wxZipInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxZipInputStream* LunaTraits< wxZipInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxZipInputStream >::_bind_dtor(wxZipInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZipInputStream >::className[] = "wxZipInputStream";
const char LunaTraits< wxZipInputStream >::fullName[] = "wxZipInputStream";
const char LunaTraits< wxZipInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZipInputStream >::parents[] = {0};
const int LunaTraits< wxZipInputStream >::hash = 91321549;
const int LunaTraits< wxZipInputStream >::uniqueIDs[] = {91321549,0};

luna_RegType LunaTraits< wxZipInputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipInputStream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipInputStream >::enumValues[] = {
	{0,0}
};

