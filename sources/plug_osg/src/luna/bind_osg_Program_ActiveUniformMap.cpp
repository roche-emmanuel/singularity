#include <plug_common.h>

class luna_wrapper_osg_Program_ActiveUniformMap {
public:
	typedef Luna< osg::Program::ActiveUniformMap > luna_t;

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

		osg::Program::ActiveUniformMap* self=(Luna< osg::Program::ActiveUniformMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::ActiveUniformMap");
		
		return luna_dynamicCast(L,converters,"osg::Program::ActiveUniformMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Program::ActiveUniformMap* LunaTraits< osg::Program::ActiveUniformMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Program::ActiveUniformMap >::_bind_dtor(osg::Program::ActiveUniformMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::ActiveUniformMap >::className[] = "ActiveUniformMap";
const char LunaTraits< osg::Program::ActiveUniformMap >::fullName[] = "osg::Program::ActiveUniformMap";
const char LunaTraits< osg::Program::ActiveUniformMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ActiveUniformMap >::parents[] = {0};
const int LunaTraits< osg::Program::ActiveUniformMap >::hash = 87388636;
const int LunaTraits< osg::Program::ActiveUniformMap >::uniqueIDs[] = {87388636,0};

luna_RegType LunaTraits< osg::Program::ActiveUniformMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_ActiveUniformMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ActiveUniformMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ActiveUniformMap >::enumValues[] = {
	{0,0}
};


