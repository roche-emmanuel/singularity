#include <plug_common.h>

class luna_wrapper_osg_ShaderComposer_Shaders {
public:
	typedef Luna< osg::ShaderComposer::Shaders > luna_t;

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

		osg::ShaderComposer::Shaders* self=(Luna< osg::ShaderComposer::Shaders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShaderComposer::Shaders");
		
		return luna_dynamicCast(L,converters,"osg::ShaderComposer::Shaders",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShaderComposer::Shaders* LunaTraits< osg::ShaderComposer::Shaders >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ShaderComposer::Shaders >::_bind_dtor(osg::ShaderComposer::Shaders* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::ShaderComposer::Shaders >::className[] = "Shaders";
const char LunaTraits< osg::ShaderComposer::Shaders >::fullName[] = "osg::ShaderComposer::Shaders";
const char LunaTraits< osg::ShaderComposer::Shaders >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderComposer::Shaders >::parents[] = {0};
const int LunaTraits< osg::ShaderComposer::Shaders >::hash = 39219188;
const int LunaTraits< osg::ShaderComposer::Shaders >::uniqueIDs[] = {39219188,0};

luna_RegType LunaTraits< osg::ShaderComposer::Shaders >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShaderComposer_Shaders::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderComposer::Shaders >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderComposer::Shaders >::enumValues[] = {
	{0,0}
};


