#include <plug_common.h>

class luna_wrapper_osg_Stats_CollectMap {
public:
	typedef Luna< osg::Stats::CollectMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36973735) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Stats::CollectMap*)");
		}

		osg::Stats::CollectMap* rhs =(Luna< osg::Stats::CollectMap >::check(L,2));
		osg::Stats::CollectMap* self=(Luna< osg::Stats::CollectMap >::check(L,1));
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

		osg::Stats::CollectMap* self=(Luna< osg::Stats::CollectMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Stats::CollectMap");
		
		return luna_dynamicCast(L,converters,"osg::Stats::CollectMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Stats::CollectMap* LunaTraits< osg::Stats::CollectMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Stats::CollectMap >::_bind_dtor(osg::Stats::CollectMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Stats::CollectMap >::className[] = "CollectMap";
const char LunaTraits< osg::Stats::CollectMap >::fullName[] = "osg::Stats::CollectMap";
const char LunaTraits< osg::Stats::CollectMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Stats::CollectMap >::parents[] = {0};
const int LunaTraits< osg::Stats::CollectMap >::hash = 36973735;
const int LunaTraits< osg::Stats::CollectMap >::uniqueIDs[] = {36973735,0};

luna_RegType LunaTraits< osg::Stats::CollectMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Stats_CollectMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Stats_CollectMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stats::CollectMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stats::CollectMap >::enumValues[] = {
	{0,0}
};


