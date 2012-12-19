#include <plug_common.h>

class luna_wrapper_wxZipClassFactory {
public:
	typedef Luna< wxZipClassFactory > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19869602) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxZipClassFactory*)");
		}

		wxZipClassFactory* rhs =(Luna< wxZipClassFactory >::check(L,2));
		wxZipClassFactory* self=(Luna< wxZipClassFactory >::check(L,1));
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

		wxZipClassFactory* self=(Luna< wxZipClassFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipClassFactory");
		
		return luna_dynamicCast(L,converters,"wxZipClassFactory",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxZipClassFactory* LunaTraits< wxZipClassFactory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxZipClassFactory >::_bind_dtor(wxZipClassFactory* obj) {
	delete obj;
}

const char LunaTraits< wxZipClassFactory >::className[] = "wxZipClassFactory";
const char LunaTraits< wxZipClassFactory >::fullName[] = "wxZipClassFactory";
const char LunaTraits< wxZipClassFactory >::moduleName[] = "wx";
const char* LunaTraits< wxZipClassFactory >::parents[] = {0};
const int LunaTraits< wxZipClassFactory >::hash = 19869602;
const int LunaTraits< wxZipClassFactory >::uniqueIDs[] = {19869602,0};

luna_RegType LunaTraits< wxZipClassFactory >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipClassFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_wxZipClassFactory::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipClassFactory >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipClassFactory >::enumValues[] = {
	{0,0}
};


