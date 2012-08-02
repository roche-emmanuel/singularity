#include <plug_common.h>

class luna_wrapper_osg_VectorGLushort {
public:
	typedef Luna< osg::VectorGLushort > luna_t;

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

		osg::VectorGLushort* self=(Luna< osg::VectorGLushort >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VectorGLushort");
		
		return luna_dynamicCast(L,converters,"osg::VectorGLushort",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::VectorGLushort* LunaTraits< osg::VectorGLushort >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::VectorGLushort >::_bind_dtor(osg::VectorGLushort* obj) {
	delete obj;
}

const char LunaTraits< osg::VectorGLushort >::className[] = "VectorGLushort";
const char LunaTraits< osg::VectorGLushort >::fullName[] = "osg::VectorGLushort";
const char LunaTraits< osg::VectorGLushort >::moduleName[] = "osg";
const char* LunaTraits< osg::VectorGLushort >::parents[] = {0};
const int LunaTraits< osg::VectorGLushort >::hash = 57687479;
const int LunaTraits< osg::VectorGLushort >::uniqueIDs[] = {57687479,0};

luna_RegType LunaTraits< osg::VectorGLushort >::methods[] = {
	{"dynCast", &luna_wrapper_osg_VectorGLushort::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VectorGLushort >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VectorGLushort >::enumValues[] = {
	{0,0}
};


