#include <plug_common.h>

class luna_wrapper_osg_CullStack_CullingStack {
public:
	typedef Luna< osg::CullStack::CullingStack > luna_t;

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

		osg::CullStack::CullingStack* self=(Luna< osg::CullStack::CullingStack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CullStack::CullingStack");
		
		return luna_dynamicCast(L,converters,"osg::CullStack::CullingStack",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CullStack::CullingStack* LunaTraits< osg::CullStack::CullingStack >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CullStack::CullingStack >::_bind_dtor(osg::CullStack::CullingStack* obj) {
	delete obj;
}

const char LunaTraits< osg::CullStack::CullingStack >::className[] = "CullingStack";
const char LunaTraits< osg::CullStack::CullingStack >::fullName[] = "osg::CullStack::CullingStack";
const char LunaTraits< osg::CullStack::CullingStack >::moduleName[] = "osg";
const char* LunaTraits< osg::CullStack::CullingStack >::parents[] = {0};
const int LunaTraits< osg::CullStack::CullingStack >::hash = 71916660;
const int LunaTraits< osg::CullStack::CullingStack >::uniqueIDs[] = {71916660,0};

luna_RegType LunaTraits< osg::CullStack::CullingStack >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CullStack_CullingStack::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullStack::CullingStack >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullStack::CullingStack >::enumValues[] = {
	{0,0}
};

