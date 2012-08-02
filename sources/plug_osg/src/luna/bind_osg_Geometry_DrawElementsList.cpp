#include <plug_common.h>

class luna_wrapper_osg_Geometry_DrawElementsList {
public:
	typedef Luna< osg::Geometry::DrawElementsList > luna_t;

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

		osg::Geometry::DrawElementsList* self=(Luna< osg::Geometry::DrawElementsList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::DrawElementsList");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::DrawElementsList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Geometry::DrawElementsList* LunaTraits< osg::Geometry::DrawElementsList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Geometry::DrawElementsList >::_bind_dtor(osg::Geometry::DrawElementsList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Geometry::DrawElementsList >::className[] = "DrawElementsList";
const char LunaTraits< osg::Geometry::DrawElementsList >::fullName[] = "osg::Geometry::DrawElementsList";
const char LunaTraits< osg::Geometry::DrawElementsList >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::DrawElementsList >::parents[] = {0};
const int LunaTraits< osg::Geometry::DrawElementsList >::hash = 9739566;
const int LunaTraits< osg::Geometry::DrawElementsList >::uniqueIDs[] = {9739566,0};

luna_RegType LunaTraits< osg::Geometry::DrawElementsList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Geometry_DrawElementsList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::DrawElementsList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::DrawElementsList >::enumValues[] = {
	{0,0}
};


