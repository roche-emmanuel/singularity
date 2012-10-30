#include <plug_common.h>

class luna_wrapper_Awesomium_WebLoginDialogInfo {
public:
	typedef Luna< Awesomium::WebLoginDialogInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90938304) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebLoginDialogInfo*)");
		}

		Awesomium::WebLoginDialogInfo* rhs =(Luna< Awesomium::WebLoginDialogInfo >::check(L,2));
		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
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

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebLoginDialogInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebLoginDialogInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

Awesomium::WebLoginDialogInfo* LunaTraits< Awesomium::WebLoginDialogInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebLoginDialogInfo >::_bind_dtor(Awesomium::WebLoginDialogInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebLoginDialogInfo >::className[] = "WebLoginDialogInfo";
const char LunaTraits< Awesomium::WebLoginDialogInfo >::fullName[] = "Awesomium::WebLoginDialogInfo";
const char LunaTraits< Awesomium::WebLoginDialogInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebLoginDialogInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebLoginDialogInfo >::hash = 90938304;
const int LunaTraits< Awesomium::WebLoginDialogInfo >::uniqueIDs[] = {90938304,0};

luna_RegType LunaTraits< Awesomium::WebLoginDialogInfo >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebLoginDialogInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebLoginDialogInfo >::enumValues[] = {
	{0,0}
};


