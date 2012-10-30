#include <plug_common.h>

class luna_wrapper_Awesomium_PrintConfig {
public:
	typedef Luna< Awesomium::PrintConfig > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23715294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::PrintConfig*)");
		}

		Awesomium::PrintConfig* rhs =(Luna< Awesomium::PrintConfig >::check(L,2));
		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
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

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::PrintConfig");
		
		return luna_dynamicCast(L,converters,"Awesomium::PrintConfig",name);
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
	// Awesomium::PrintConfig::PrintConfig()
	static Awesomium::PrintConfig* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::PrintConfig::PrintConfig() function, expected prototype:\nAwesomium::PrintConfig::PrintConfig()\nClass arguments details:\n");
		}


		return new Awesomium::PrintConfig();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::PrintConfig* LunaTraits< Awesomium::PrintConfig >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_PrintConfig::_bind_ctor(L);
}

void LunaTraits< Awesomium::PrintConfig >::_bind_dtor(Awesomium::PrintConfig* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::PrintConfig >::className[] = "PrintConfig";
const char LunaTraits< Awesomium::PrintConfig >::fullName[] = "Awesomium::PrintConfig";
const char LunaTraits< Awesomium::PrintConfig >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::PrintConfig >::parents[] = {0};
const int LunaTraits< Awesomium::PrintConfig >::hash = 23715294;
const int LunaTraits< Awesomium::PrintConfig >::uniqueIDs[] = {23715294,0};

luna_RegType LunaTraits< Awesomium::PrintConfig >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_PrintConfig::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_PrintConfig::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::PrintConfig >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::PrintConfig >::enumValues[] = {
	{0,0}
};


