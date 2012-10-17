#include <plug_common.h>

class luna_wrapper_osg_Stats_AttributeMap {
public:
	typedef Luna< osg::Stats::AttributeMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79434031) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Stats::AttributeMap*)");
		}

		osg::Stats::AttributeMap* rhs =(Luna< osg::Stats::AttributeMap >::check(L,2));
		osg::Stats::AttributeMap* self=(Luna< osg::Stats::AttributeMap >::check(L,1));
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

		osg::Stats::AttributeMap* self=(Luna< osg::Stats::AttributeMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Stats::AttributeMap");
		
		return luna_dynamicCast(L,converters,"osg::Stats::AttributeMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Stats::AttributeMap* LunaTraits< osg::Stats::AttributeMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Stats::AttributeMap >::_bind_dtor(osg::Stats::AttributeMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Stats::AttributeMap >::className[] = "AttributeMap";
const char LunaTraits< osg::Stats::AttributeMap >::fullName[] = "osg::Stats::AttributeMap";
const char LunaTraits< osg::Stats::AttributeMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Stats::AttributeMap >::parents[] = {0};
const int LunaTraits< osg::Stats::AttributeMap >::hash = 79434031;
const int LunaTraits< osg::Stats::AttributeMap >::uniqueIDs[] = {79434031,0};

luna_RegType LunaTraits< osg::Stats::AttributeMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Stats_AttributeMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Stats_AttributeMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stats::AttributeMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stats::AttributeMap >::enumValues[] = {
	{0,0}
};


