#include <plug_common.h>

class luna_wrapper_osg_NodePathList {
public:
	typedef Luna< osg::NodePathList > luna_t;

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

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodePathList");
		
		return luna_dynamicCast(L,converters,"osg::NodePathList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::NodePathList* LunaTraits< osg::NodePathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::NodePathList >::_bind_dtor(osg::NodePathList* obj) {
	delete obj;
}

const char LunaTraits< osg::NodePathList >::className[] = "NodePathList";
const char LunaTraits< osg::NodePathList >::fullName[] = "osg::NodePathList";
const char LunaTraits< osg::NodePathList >::moduleName[] = "osg";
const char* LunaTraits< osg::NodePathList >::parents[] = {0};
const int LunaTraits< osg::NodePathList >::hash = 71600444;
const int LunaTraits< osg::NodePathList >::uniqueIDs[] = {71600444,0};

luna_RegType LunaTraits< osg::NodePathList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_NodePathList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodePathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodePathList >::enumValues[] = {
	{0,0}
};


