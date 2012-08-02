#include <plug_common.h>

class luna_wrapper_osg_VectorGLsizei {
public:
	typedef Luna< osg::VectorGLsizei > luna_t;

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

		osg::VectorGLsizei* self=(Luna< osg::VectorGLsizei >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VectorGLsizei");
		
		return luna_dynamicCast(L,converters,"osg::VectorGLsizei",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::VectorGLsizei* LunaTraits< osg::VectorGLsizei >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::VectorGLsizei >::_bind_dtor(osg::VectorGLsizei* obj) {
	delete obj;
}

const char LunaTraits< osg::VectorGLsizei >::className[] = "VectorGLsizei";
const char LunaTraits< osg::VectorGLsizei >::fullName[] = "osg::VectorGLsizei";
const char LunaTraits< osg::VectorGLsizei >::moduleName[] = "osg";
const char* LunaTraits< osg::VectorGLsizei >::parents[] = {0};
const int LunaTraits< osg::VectorGLsizei >::hash = 15861945;
const int LunaTraits< osg::VectorGLsizei >::uniqueIDs[] = {15861945,0};

luna_RegType LunaTraits< osg::VectorGLsizei >::methods[] = {
	{"dynCast", &luna_wrapper_osg_VectorGLsizei::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VectorGLsizei >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VectorGLsizei >::enumValues[] = {
	{0,0}
};


