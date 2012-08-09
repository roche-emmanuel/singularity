#include <plug_common.h>

class luna_wrapper_osgText_Bevel_Vertices {
public:
	typedef Luna< osgText::Bevel::Vertices > luna_t;

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

		osgText::Bevel::Vertices* self=(Luna< osgText::Bevel::Vertices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Bevel::Vertices");
		
		return luna_dynamicCast(L,converters,"osgText::Bevel::Vertices",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgText::Bevel::Vertices* LunaTraits< osgText::Bevel::Vertices >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgText::Bevel::Vertices >::_bind_dtor(osgText::Bevel::Vertices* obj) {
	delete obj;
}

const char LunaTraits< osgText::Bevel::Vertices >::className[] = "Vertices";
const char LunaTraits< osgText::Bevel::Vertices >::fullName[] = "osgText::Bevel::Vertices";
const char LunaTraits< osgText::Bevel::Vertices >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Bevel::Vertices >::parents[] = {0};
const int LunaTraits< osgText::Bevel::Vertices >::hash = 78061823;
const int LunaTraits< osgText::Bevel::Vertices >::uniqueIDs[] = {78061823,0};

luna_RegType LunaTraits< osgText::Bevel::Vertices >::methods[] = {
	{"dynCast", &luna_wrapper_osgText_Bevel_Vertices::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Bevel::Vertices >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Bevel::Vertices >::enumValues[] = {
	{0,0}
};


