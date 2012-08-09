#include <plug_common.h>

class luna_wrapper_osg_ApplicationUsageProxy {
public:
	typedef Luna< osg::ApplicationUsageProxy > luna_t;

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

		osg::ApplicationUsageProxy* self=(Luna< osg::ApplicationUsageProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ApplicationUsageProxy");
		
		return luna_dynamicCast(L,converters,"osg::ApplicationUsageProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ApplicationUsageProxy* LunaTraits< osg::ApplicationUsageProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ApplicationUsageProxy >::_bind_dtor(osg::ApplicationUsageProxy* obj) {
	delete obj;
}

const char LunaTraits< osg::ApplicationUsageProxy >::className[] = "ApplicationUsageProxy";
const char LunaTraits< osg::ApplicationUsageProxy >::fullName[] = "osg::ApplicationUsageProxy";
const char LunaTraits< osg::ApplicationUsageProxy >::moduleName[] = "osg";
const char* LunaTraits< osg::ApplicationUsageProxy >::parents[] = {0};
const int LunaTraits< osg::ApplicationUsageProxy >::hash = 50027641;
const int LunaTraits< osg::ApplicationUsageProxy >::uniqueIDs[] = {50027641,0};

luna_RegType LunaTraits< osg::ApplicationUsageProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ApplicationUsageProxy::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ApplicationUsageProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ApplicationUsageProxy >::enumValues[] = {
	{0,0}
};


