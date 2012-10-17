#include <plug_common.h>

class luna_wrapper_osg_Shader_CodeInjectionMap {
public:
	typedef Luna< osg::Shader::CodeInjectionMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87506632) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Shader::CodeInjectionMap*)");
		}

		osg::Shader::CodeInjectionMap* rhs =(Luna< osg::Shader::CodeInjectionMap >::check(L,2));
		osg::Shader::CodeInjectionMap* self=(Luna< osg::Shader::CodeInjectionMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::Shader::CodeInjectionMap* self=(Luna< osg::Shader::CodeInjectionMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Shader::CodeInjectionMap");
		
		return luna_dynamicCast(L,converters,"osg::Shader::CodeInjectionMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Shader::CodeInjectionMap* LunaTraits< osg::Shader::CodeInjectionMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Shader::CodeInjectionMap >::_bind_dtor(osg::Shader::CodeInjectionMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Shader::CodeInjectionMap >::className[] = "CodeInjectionMap";
const char LunaTraits< osg::Shader::CodeInjectionMap >::fullName[] = "osg::Shader::CodeInjectionMap";
const char LunaTraits< osg::Shader::CodeInjectionMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Shader::CodeInjectionMap >::parents[] = {0};
const int LunaTraits< osg::Shader::CodeInjectionMap >::hash = 87506632;
const int LunaTraits< osg::Shader::CodeInjectionMap >::uniqueIDs[] = {87506632,0};

luna_RegType LunaTraits< osg::Shader::CodeInjectionMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Shader_CodeInjectionMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Shader_CodeInjectionMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Shader::CodeInjectionMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Shader::CodeInjectionMap >::enumValues[] = {
	{0,0}
};


