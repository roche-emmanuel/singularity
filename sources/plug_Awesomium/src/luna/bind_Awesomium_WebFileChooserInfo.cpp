#include <plug_common.h>

class luna_wrapper_Awesomium_WebFileChooserInfo {
public:
	typedef Luna< Awesomium::WebFileChooserInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95946160) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebFileChooserInfo*)");
		}

		Awesomium::WebFileChooserInfo* rhs =(Luna< Awesomium::WebFileChooserInfo >::check(L,2));
		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
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

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebFileChooserInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebFileChooserInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

Awesomium::WebFileChooserInfo* LunaTraits< Awesomium::WebFileChooserInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebFileChooserInfo >::_bind_dtor(Awesomium::WebFileChooserInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebFileChooserInfo >::className[] = "WebFileChooserInfo";
const char LunaTraits< Awesomium::WebFileChooserInfo >::fullName[] = "Awesomium::WebFileChooserInfo";
const char LunaTraits< Awesomium::WebFileChooserInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebFileChooserInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebFileChooserInfo >::hash = 95946160;
const int LunaTraits< Awesomium::WebFileChooserInfo >::uniqueIDs[] = {95946160,0};

luna_RegType LunaTraits< Awesomium::WebFileChooserInfo >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebFileChooserInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebFileChooserInfo >::enumValues[] = {
	{0,0}
};


