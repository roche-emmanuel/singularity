#include <plug_common.h>

class luna_wrapper_Awesomium_WebMenuItem {
public:
	typedef Luna< Awesomium::WebMenuItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2194484) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebMenuItem*)");
		}

		Awesomium::WebMenuItem* rhs =(Luna< Awesomium::WebMenuItem >::check(L,2));
		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
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

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebMenuItem");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebMenuItem",name);
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
	// Awesomium::WebMenuItem::WebMenuItem()
	static Awesomium::WebMenuItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItem::WebMenuItem() function, expected prototype:\nAwesomium::WebMenuItem::WebMenuItem()\nClass arguments details:\n");
		}


		return new Awesomium::WebMenuItem();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::WebMenuItem* LunaTraits< Awesomium::WebMenuItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebMenuItem::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebMenuItem >::_bind_dtor(Awesomium::WebMenuItem* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebMenuItem >::className[] = "WebMenuItem";
const char LunaTraits< Awesomium::WebMenuItem >::fullName[] = "Awesomium::WebMenuItem";
const char LunaTraits< Awesomium::WebMenuItem >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebMenuItem >::parents[] = {0};
const int LunaTraits< Awesomium::WebMenuItem >::hash = 2194484;
const int LunaTraits< Awesomium::WebMenuItem >::uniqueIDs[] = {2194484,0};

luna_RegType LunaTraits< Awesomium::WebMenuItem >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebMenuItem::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebMenuItem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebMenuItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebMenuItem >::enumValues[] = {
	{0,0}
};


