#include <plug_common.h>

class luna_wrapper_osg_Geometry_ArrayList {
public:
	typedef Luna< osg::Geometry::ArrayList > luna_t;

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

		osg::Geometry::ArrayList* self=(Luna< osg::Geometry::ArrayList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::ArrayList");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::ArrayList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Geometry::ArrayList* LunaTraits< osg::Geometry::ArrayList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Geometry::ArrayList >::_bind_dtor(osg::Geometry::ArrayList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Geometry::ArrayList >::className[] = "ArrayList";
const char LunaTraits< osg::Geometry::ArrayList >::fullName[] = "osg::Geometry::ArrayList";
const char LunaTraits< osg::Geometry::ArrayList >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::ArrayList >::parents[] = {0};
const int LunaTraits< osg::Geometry::ArrayList >::hash = 26926568;
const int LunaTraits< osg::Geometry::ArrayList >::uniqueIDs[] = {26926568,0};

luna_RegType LunaTraits< osg::Geometry::ArrayList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Geometry_ArrayList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::ArrayList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::ArrayList >::enumValues[] = {
	{0,0}
};


