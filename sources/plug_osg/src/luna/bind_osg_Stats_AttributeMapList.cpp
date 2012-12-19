#include <plug_common.h>

class luna_wrapper_osg_Stats_AttributeMapList {
public:
	typedef Luna< osg::Stats::AttributeMapList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79753172) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Stats::AttributeMapList*)");
		}

		osg::Stats::AttributeMapList* rhs =(Luna< osg::Stats::AttributeMapList >::check(L,2));
		osg::Stats::AttributeMapList* self=(Luna< osg::Stats::AttributeMapList >::check(L,1));
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

		osg::Stats::AttributeMapList* self=(Luna< osg::Stats::AttributeMapList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Stats::AttributeMapList");
		
		return luna_dynamicCast(L,converters,"osg::Stats::AttributeMapList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Stats::AttributeMapList* LunaTraits< osg::Stats::AttributeMapList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Stats::AttributeMapList >::_bind_dtor(osg::Stats::AttributeMapList* obj) {
	delete obj;
}

const char LunaTraits< osg::Stats::AttributeMapList >::className[] = "AttributeMapList";
const char LunaTraits< osg::Stats::AttributeMapList >::fullName[] = "osg::Stats::AttributeMapList";
const char LunaTraits< osg::Stats::AttributeMapList >::moduleName[] = "osg";
const char* LunaTraits< osg::Stats::AttributeMapList >::parents[] = {0};
const int LunaTraits< osg::Stats::AttributeMapList >::hash = 79753172;
const int LunaTraits< osg::Stats::AttributeMapList >::uniqueIDs[] = {79753172,0};

luna_RegType LunaTraits< osg::Stats::AttributeMapList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Stats_AttributeMapList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Stats_AttributeMapList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stats::AttributeMapList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stats::AttributeMapList >::enumValues[] = {
	{0,0}
};


