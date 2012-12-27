#include <plug_common.h>

class luna_wrapper_Awesomium_WebConfig {
public:
	typedef Luna< Awesomium::WebConfig > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51132402) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebConfig*)");
		}

		Awesomium::WebConfig* rhs =(Luna< Awesomium::WebConfig >::check(L,2));
		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
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

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebConfig");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebConfig",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addAdditionalOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,51132402)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebConfig::WebConfig()
	static Awesomium::WebConfig* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebConfig::WebConfig() function, expected prototype:\nAwesomium::WebConfig::WebConfig()\nClass arguments details:\n");
		}


		return new Awesomium::WebConfig();
	}


	// Function binds:
	// void Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option)
	static int _bind_addAdditionalOption(lua_State *L) {
		if (!_lg_typecheck_addAdditionalOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option) function, expected prototype:\nvoid Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option)\nClass arguments details:\narg 1 ID = 51132402\n");
		}

		Awesomium::WebConfig* config=(Luna< Awesomium::WebConfig >::check(L,1));
		std::string option(lua_tostring(L,2),lua_objlen(L,2));

		addAdditionalOption(config, option);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebConfig* LunaTraits< Awesomium::WebConfig >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebConfig::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebConfig >::_bind_dtor(Awesomium::WebConfig* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebConfig >::className[] = "WebConfig";
const char LunaTraits< Awesomium::WebConfig >::fullName[] = "Awesomium::WebConfig";
const char LunaTraits< Awesomium::WebConfig >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebConfig >::parents[] = {0};
const int LunaTraits< Awesomium::WebConfig >::hash = 51132402;
const int LunaTraits< Awesomium::WebConfig >::uniqueIDs[] = {51132402,0};

luna_RegType LunaTraits< Awesomium::WebConfig >::methods[] = {
	{"addAdditionalOption", &luna_wrapper_Awesomium_WebConfig::_bind_addAdditionalOption},
	{"dynCast", &luna_wrapper_Awesomium_WebConfig::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebConfig::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebConfig >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebConfig >::enumValues[] = {
	{0,0}
};


