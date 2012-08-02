#include <plug_common.h>

class luna_wrapper_osg_Vec3Array {
public:
	typedef Luna< osg::Vec3Array > luna_t;

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

		osg::Vec3Array* self=(Luna< osg::Vec3Array >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3Array");
		
		return luna_dynamicCast(L,converters,"osg::Vec3Array",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3Array* LunaTraits< osg::Vec3Array >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec3Array >::_bind_dtor(osg::Vec3Array* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec3Array >::className[] = "Vec3Array";
const char LunaTraits< osg::Vec3Array >::fullName[] = "osg::Vec3Array";
const char LunaTraits< osg::Vec3Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3Array >::parents[] = {0};
const int LunaTraits< osg::Vec3Array >::hash = 7204710;
const int LunaTraits< osg::Vec3Array >::uniqueIDs[] = {7204710,0};

luna_RegType LunaTraits< osg::Vec3Array >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3Array::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3Array >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3Array >::enumValues[] = {
	{0,0}
};


