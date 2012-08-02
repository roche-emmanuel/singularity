#include <plug_common.h>

class luna_wrapper_osg_VectorGLubyte {
public:
	typedef Luna< osg::VectorGLubyte > luna_t;

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

		osg::VectorGLubyte* self=(Luna< osg::VectorGLubyte >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VectorGLubyte");
		
		return luna_dynamicCast(L,converters,"osg::VectorGLubyte",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::VectorGLubyte* LunaTraits< osg::VectorGLubyte >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::VectorGLubyte >::_bind_dtor(osg::VectorGLubyte* obj) {
	delete obj;
}

const char LunaTraits< osg::VectorGLubyte >::className[] = "VectorGLubyte";
const char LunaTraits< osg::VectorGLubyte >::fullName[] = "osg::VectorGLubyte";
const char LunaTraits< osg::VectorGLubyte >::moduleName[] = "osg";
const char* LunaTraits< osg::VectorGLubyte >::parents[] = {0};
const int LunaTraits< osg::VectorGLubyte >::hash = 17499950;
const int LunaTraits< osg::VectorGLubyte >::uniqueIDs[] = {17499950,0};

luna_RegType LunaTraits< osg::VectorGLubyte >::methods[] = {
	{"dynCast", &luna_wrapper_osg_VectorGLubyte::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VectorGLubyte >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VectorGLubyte >::enumValues[] = {
	{0,0}
};


