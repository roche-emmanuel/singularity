#include <plug_common.h>

class luna_wrapper_osg_VectorGLuint {
public:
	typedef Luna< osg::VectorGLuint > luna_t;

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

		osg::VectorGLuint* self=(Luna< osg::VectorGLuint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VectorGLuint");
		
		return luna_dynamicCast(L,converters,"osg::VectorGLuint",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::VectorGLuint* LunaTraits< osg::VectorGLuint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::VectorGLuint >::_bind_dtor(osg::VectorGLuint* obj) {
	delete obj;
}

const char LunaTraits< osg::VectorGLuint >::className[] = "VectorGLuint";
const char LunaTraits< osg::VectorGLuint >::fullName[] = "osg::VectorGLuint";
const char LunaTraits< osg::VectorGLuint >::moduleName[] = "osg";
const char* LunaTraits< osg::VectorGLuint >::parents[] = {0};
const int LunaTraits< osg::VectorGLuint >::hash = 74764459;
const int LunaTraits< osg::VectorGLuint >::uniqueIDs[] = {74764459,0};

luna_RegType LunaTraits< osg::VectorGLuint >::methods[] = {
	{"dynCast", &luna_wrapper_osg_VectorGLuint::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VectorGLuint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VectorGLuint >::enumValues[] = {
	{0,0}
};


