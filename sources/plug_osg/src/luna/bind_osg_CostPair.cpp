#include <plug_common.h>

class luna_wrapper_osg_CostPair {
public:
	typedef Luna< osg::CostPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57409252) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::CostPair*)");
		}

		osg::CostPair* rhs =(Luna< osg::CostPair >::check(L,2));
		osg::CostPair* self=(Luna< osg::CostPair >::check(L,1));
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

		osg::CostPair* self=(Luna< osg::CostPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CostPair");
		
		return luna_dynamicCast(L,converters,"osg::CostPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CostPair* LunaTraits< osg::CostPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CostPair >::_bind_dtor(osg::CostPair* obj) {
	delete obj;
}

const char LunaTraits< osg::CostPair >::className[] = "CostPair";
const char LunaTraits< osg::CostPair >::fullName[] = "osg::CostPair";
const char LunaTraits< osg::CostPair >::moduleName[] = "osg";
const char* LunaTraits< osg::CostPair >::parents[] = {0};
const int LunaTraits< osg::CostPair >::hash = 57409252;
const int LunaTraits< osg::CostPair >::uniqueIDs[] = {57409252,0};

luna_RegType LunaTraits< osg::CostPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CostPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_CostPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CostPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CostPair >::enumValues[] = {
	{0,0}
};


