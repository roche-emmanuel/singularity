#include <plug_common.h>

class luna_wrapper_Awesomium_WebPopupMenuInfo {
public:
	typedef Luna< Awesomium::WebPopupMenuInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93395030) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebPopupMenuInfo*)");
		}

		Awesomium::WebPopupMenuInfo* rhs =(Luna< Awesomium::WebPopupMenuInfo >::check(L,2));
		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
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

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebPopupMenuInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebPopupMenuInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

Awesomium::WebPopupMenuInfo* LunaTraits< Awesomium::WebPopupMenuInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebPopupMenuInfo >::_bind_dtor(Awesomium::WebPopupMenuInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebPopupMenuInfo >::className[] = "WebPopupMenuInfo";
const char LunaTraits< Awesomium::WebPopupMenuInfo >::fullName[] = "Awesomium::WebPopupMenuInfo";
const char LunaTraits< Awesomium::WebPopupMenuInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebPopupMenuInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebPopupMenuInfo >::hash = 93395030;
const int LunaTraits< Awesomium::WebPopupMenuInfo >::uniqueIDs[] = {93395030,0};

luna_RegType LunaTraits< Awesomium::WebPopupMenuInfo >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebPopupMenuInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebPopupMenuInfo >::enumValues[] = {
	{0,0}
};

