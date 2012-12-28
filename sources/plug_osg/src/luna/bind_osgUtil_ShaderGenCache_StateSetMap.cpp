#include <plug_common.h>

class luna_wrapper_osgUtil_ShaderGenCache_StateSetMap {
public:
	typedef Luna< osgUtil::ShaderGenCache::StateSetMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11745068) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::ShaderGenCache::StateSetMap*)");
		}

		osgUtil::ShaderGenCache::StateSetMap* rhs =(Luna< osgUtil::ShaderGenCache::StateSetMap >::check(L,2));
		osgUtil::ShaderGenCache::StateSetMap* self=(Luna< osgUtil::ShaderGenCache::StateSetMap >::check(L,1));
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

		osgUtil::ShaderGenCache::StateSetMap* self=(Luna< osgUtil::ShaderGenCache::StateSetMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::ShaderGenCache::StateSetMap");
		
		return luna_dynamicCast(L,converters,"osgUtil::ShaderGenCache::StateSetMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::ShaderGenCache::StateSetMap* LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::_bind_dtor(osgUtil::ShaderGenCache::StateSetMap* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::className[] = "StateSetMap";
const char LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::fullName[] = "osgUtil::ShaderGenCache::StateSetMap";
const char LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::parents[] = {0};
const int LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::hash = 11745068;
const int LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::uniqueIDs[] = {11745068,0};

luna_RegType LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_ShaderGenCache_StateSetMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_ShaderGenCache_StateSetMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ShaderGenCache::StateSetMap >::enumValues[] = {
	{0,0}
};


