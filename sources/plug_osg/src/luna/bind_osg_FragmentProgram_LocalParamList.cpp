#include <plug_common.h>

class luna_wrapper_osg_FragmentProgram_LocalParamList {
public:
	typedef Luna< osg::FragmentProgram::LocalParamList > luna_t;

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

		osg::FragmentProgram::LocalParamList* self=(Luna< osg::FragmentProgram::LocalParamList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FragmentProgram::LocalParamList");
		
		return luna_dynamicCast(L,converters,"osg::FragmentProgram::LocalParamList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FragmentProgram::LocalParamList* LunaTraits< osg::FragmentProgram::LocalParamList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::FragmentProgram::LocalParamList >::_bind_dtor(osg::FragmentProgram::LocalParamList* obj) {
	delete obj;
}

const char LunaTraits< osg::FragmentProgram::LocalParamList >::className[] = "LocalParamList";
const char LunaTraits< osg::FragmentProgram::LocalParamList >::fullName[] = "osg::FragmentProgram::LocalParamList";
const char LunaTraits< osg::FragmentProgram::LocalParamList >::moduleName[] = "osg";
const char* LunaTraits< osg::FragmentProgram::LocalParamList >::parents[] = {0};
const int LunaTraits< osg::FragmentProgram::LocalParamList >::hash = 13846292;
const int LunaTraits< osg::FragmentProgram::LocalParamList >::uniqueIDs[] = {13846292,0};

luna_RegType LunaTraits< osg::FragmentProgram::LocalParamList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FragmentProgram_LocalParamList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FragmentProgram::LocalParamList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FragmentProgram::LocalParamList >::enumValues[] = {
	{0,0}
};


