#include <plug_common.h>

class luna_wrapper_osg_CullingSet_StateFrustumPair {
public:
	typedef Luna< osg::CullingSet::StateFrustumPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87315315) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::CullingSet::StateFrustumPair*)");
		}

		osg::CullingSet::StateFrustumPair* rhs =(Luna< osg::CullingSet::StateFrustumPair >::check(L,2));
		osg::CullingSet::StateFrustumPair* self=(Luna< osg::CullingSet::StateFrustumPair >::check(L,1));
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

		osg::CullingSet::StateFrustumPair* self=(Luna< osg::CullingSet::StateFrustumPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CullingSet::StateFrustumPair");
		
		return luna_dynamicCast(L,converters,"osg::CullingSet::StateFrustumPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CullingSet::StateFrustumPair* LunaTraits< osg::CullingSet::StateFrustumPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::CullingSet::StateFrustumPair >::_bind_dtor(osg::CullingSet::StateFrustumPair* obj) {
	delete obj;
}

const char LunaTraits< osg::CullingSet::StateFrustumPair >::className[] = "StateFrustumPair";
const char LunaTraits< osg::CullingSet::StateFrustumPair >::fullName[] = "osg::CullingSet::StateFrustumPair";
const char LunaTraits< osg::CullingSet::StateFrustumPair >::moduleName[] = "osg";
const char* LunaTraits< osg::CullingSet::StateFrustumPair >::parents[] = {0};
const int LunaTraits< osg::CullingSet::StateFrustumPair >::hash = 87315315;
const int LunaTraits< osg::CullingSet::StateFrustumPair >::uniqueIDs[] = {87315315,0};

luna_RegType LunaTraits< osg::CullingSet::StateFrustumPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CullingSet_StateFrustumPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_CullingSet_StateFrustumPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullingSet::StateFrustumPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullingSet::StateFrustumPair >::enumValues[] = {
	{0,0}
};


