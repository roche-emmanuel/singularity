#include <plug_common.h>

class luna_wrapper_osgText_FontResolution {
public:
	typedef Luna< osgText::FontResolution > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17799265) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::FontResolution*)");
		}

		osgText::FontResolution* rhs =(Luna< osgText::FontResolution >::check(L,2));
		osgText::FontResolution* self=(Luna< osgText::FontResolution >::check(L,1));
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

		osgText::FontResolution* self=(Luna< osgText::FontResolution >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::FontResolution");
		
		return luna_dynamicCast(L,converters,"osgText::FontResolution",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::FontResolution* LunaTraits< osgText::FontResolution >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgText::FontResolution >::_bind_dtor(osgText::FontResolution* obj) {
	delete obj;
}

const char LunaTraits< osgText::FontResolution >::className[] = "FontResolution";
const char LunaTraits< osgText::FontResolution >::fullName[] = "osgText::FontResolution";
const char LunaTraits< osgText::FontResolution >::moduleName[] = "osgText";
const char* LunaTraits< osgText::FontResolution >::parents[] = {0};
const int LunaTraits< osgText::FontResolution >::hash = 17799265;
const int LunaTraits< osgText::FontResolution >::uniqueIDs[] = {17799265,0};

luna_RegType LunaTraits< osgText::FontResolution >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_FontResolution::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_FontResolution::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::FontResolution >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::FontResolution >::enumValues[] = {
	{0,0}
};


