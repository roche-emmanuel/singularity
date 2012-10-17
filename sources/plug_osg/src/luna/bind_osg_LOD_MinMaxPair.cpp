#include <plug_common.h>

class luna_wrapper_osg_LOD_MinMaxPair {
public:
	typedef Luna< osg::LOD::MinMaxPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2638765) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::LOD::MinMaxPair*)");
		}

		osg::LOD::MinMaxPair* rhs =(Luna< osg::LOD::MinMaxPair >::check(L,2));
		osg::LOD::MinMaxPair* self=(Luna< osg::LOD::MinMaxPair >::check(L,1));
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

		osg::LOD::MinMaxPair* self=(Luna< osg::LOD::MinMaxPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::LOD::MinMaxPair");
		
		return luna_dynamicCast(L,converters,"osg::LOD::MinMaxPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::LOD::MinMaxPair* LunaTraits< osg::LOD::MinMaxPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::LOD::MinMaxPair >::_bind_dtor(osg::LOD::MinMaxPair* obj) {
	delete obj;
}

const char LunaTraits< osg::LOD::MinMaxPair >::className[] = "MinMaxPair";
const char LunaTraits< osg::LOD::MinMaxPair >::fullName[] = "osg::LOD::MinMaxPair";
const char LunaTraits< osg::LOD::MinMaxPair >::moduleName[] = "osg";
const char* LunaTraits< osg::LOD::MinMaxPair >::parents[] = {0};
const int LunaTraits< osg::LOD::MinMaxPair >::hash = 2638765;
const int LunaTraits< osg::LOD::MinMaxPair >::uniqueIDs[] = {2638765,0};

luna_RegType LunaTraits< osg::LOD::MinMaxPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_LOD_MinMaxPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_LOD_MinMaxPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LOD::MinMaxPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LOD::MinMaxPair >::enumValues[] = {
	{0,0}
};


