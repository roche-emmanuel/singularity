#include <plug_common.h>

class luna_wrapper_Awesomium_WebPreferences {
public:
	typedef Luna< Awesomium::WebPreferences > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51772222) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebPreferences*)");
		}

		Awesomium::WebPreferences* rhs =(Luna< Awesomium::WebPreferences >::check(L,2));
		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
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

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebPreferences");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebPreferences",name);
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
	// Awesomium::WebPreferences::WebPreferences()
	static Awesomium::WebPreferences* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebPreferences::WebPreferences() function, expected prototype:\nAwesomium::WebPreferences::WebPreferences()\nClass arguments details:\n");
		}


		return new Awesomium::WebPreferences();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::WebPreferences* LunaTraits< Awesomium::WebPreferences >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebPreferences::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebPreferences >::_bind_dtor(Awesomium::WebPreferences* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebPreferences >::className[] = "WebPreferences";
const char LunaTraits< Awesomium::WebPreferences >::fullName[] = "Awesomium::WebPreferences";
const char LunaTraits< Awesomium::WebPreferences >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebPreferences >::parents[] = {0};
const int LunaTraits< Awesomium::WebPreferences >::hash = 51772222;
const int LunaTraits< Awesomium::WebPreferences >::uniqueIDs[] = {51772222,0};

luna_RegType LunaTraits< Awesomium::WebPreferences >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebPreferences::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebPreferences::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebPreferences >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebPreferences >::enumValues[] = {
	{0,0}
};


