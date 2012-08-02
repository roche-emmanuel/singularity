#include <plug_common.h>

class luna_wrapper_osg_CullingSet_StateFrustumList {
public:
	typedef Luna< osg::CullingSet::StateFrustumList > luna_t;

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

		osg::CullingSet::StateFrustumList* self=(Luna< osg::CullingSet::StateFrustumList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CullingSet::StateFrustumList");
		
		return luna_dynamicCast(L,converters,"osg::CullingSet::StateFrustumList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CullingSet::StateFrustumList* LunaTraits< osg::CullingSet::StateFrustumList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CullingSet::StateFrustumList >::_bind_dtor(osg::CullingSet::StateFrustumList* obj) {
	delete obj;
}

const char LunaTraits< osg::CullingSet::StateFrustumList >::className[] = "StateFrustumList";
const char LunaTraits< osg::CullingSet::StateFrustumList >::fullName[] = "osg::CullingSet::StateFrustumList";
const char LunaTraits< osg::CullingSet::StateFrustumList >::moduleName[] = "osg";
const char* LunaTraits< osg::CullingSet::StateFrustumList >::parents[] = {0};
const int LunaTraits< osg::CullingSet::StateFrustumList >::hash = 87204151;
const int LunaTraits< osg::CullingSet::StateFrustumList >::uniqueIDs[] = {87204151,0};

luna_RegType LunaTraits< osg::CullingSet::StateFrustumList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CullingSet_StateFrustumList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullingSet::StateFrustumList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullingSet::StateFrustumList >::enumValues[] = {
	{0,0}
};


