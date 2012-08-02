#include <plug_common.h>

class luna_wrapper_osg_Program_ActiveVarInfoMap {
public:
	typedef Luna< osg::Program::ActiveVarInfoMap > luna_t;

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

		osg::Program::ActiveVarInfoMap* self=(Luna< osg::Program::ActiveVarInfoMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::ActiveVarInfoMap");
		
		return luna_dynamicCast(L,converters,"osg::Program::ActiveVarInfoMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Program::ActiveVarInfoMap* LunaTraits< osg::Program::ActiveVarInfoMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Program::ActiveVarInfoMap >::_bind_dtor(osg::Program::ActiveVarInfoMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::ActiveVarInfoMap >::className[] = "ActiveVarInfoMap";
const char LunaTraits< osg::Program::ActiveVarInfoMap >::fullName[] = "osg::Program::ActiveVarInfoMap";
const char LunaTraits< osg::Program::ActiveVarInfoMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ActiveVarInfoMap >::parents[] = {0};
const int LunaTraits< osg::Program::ActiveVarInfoMap >::hash = 58119214;
const int LunaTraits< osg::Program::ActiveVarInfoMap >::uniqueIDs[] = {58119214,0};

luna_RegType LunaTraits< osg::Program::ActiveVarInfoMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_ActiveVarInfoMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ActiveVarInfoMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ActiveVarInfoMap >::enumValues[] = {
	{0,0}
};


