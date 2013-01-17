#include <plug_common.h>

class luna_wrapper_wxTarClassFactory {
public:
	typedef Luna< wxTarClassFactory > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61702490) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTarClassFactory*)");
		}

		wxTarClassFactory* rhs =(Luna< wxTarClassFactory >::check(L,2));
		wxTarClassFactory* self=(Luna< wxTarClassFactory >::check(L,1));
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

		wxTarClassFactory* self=(Luna< wxTarClassFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarClassFactory");
		
		return luna_dynamicCast(L,converters,"wxTarClassFactory",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxTarClassFactory* LunaTraits< wxTarClassFactory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTarClassFactory >::_bind_dtor(wxTarClassFactory* obj) {
	delete obj;
}

const char LunaTraits< wxTarClassFactory >::className[] = "wxTarClassFactory";
const char LunaTraits< wxTarClassFactory >::fullName[] = "wxTarClassFactory";
const char LunaTraits< wxTarClassFactory >::moduleName[] = "wx";
const char* LunaTraits< wxTarClassFactory >::parents[] = {0};
const int LunaTraits< wxTarClassFactory >::hash = 61702490;
const int LunaTraits< wxTarClassFactory >::uniqueIDs[] = {61702490,0};

luna_RegType LunaTraits< wxTarClassFactory >::methods[] = {
	{"dynCast", &luna_wrapper_wxTarClassFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTarClassFactory::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarClassFactory >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarClassFactory >::enumValues[] = {
	{0,0}
};


