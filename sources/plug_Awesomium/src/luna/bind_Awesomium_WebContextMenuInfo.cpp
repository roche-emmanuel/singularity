#include <plug_common.h>

class luna_wrapper_Awesomium_WebContextMenuInfo {
public:
	typedef Luna< Awesomium::WebContextMenuInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8209039) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebContextMenuInfo*)");
		}

		Awesomium::WebContextMenuInfo* rhs =(Luna< Awesomium::WebContextMenuInfo >::check(L,2));
		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
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

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebContextMenuInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebContextMenuInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

Awesomium::WebContextMenuInfo* LunaTraits< Awesomium::WebContextMenuInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebContextMenuInfo >::_bind_dtor(Awesomium::WebContextMenuInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebContextMenuInfo >::className[] = "WebContextMenuInfo";
const char LunaTraits< Awesomium::WebContextMenuInfo >::fullName[] = "Awesomium::WebContextMenuInfo";
const char LunaTraits< Awesomium::WebContextMenuInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebContextMenuInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebContextMenuInfo >::hash = 8209039;
const int LunaTraits< Awesomium::WebContextMenuInfo >::uniqueIDs[] = {8209039,0};

luna_RegType LunaTraits< Awesomium::WebContextMenuInfo >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebContextMenuInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebContextMenuInfo >::enumValues[] = {
	{0,0}
};


