#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_TriangleMap {
public:
	typedef Luna< osgUtil::EdgeCollector::TriangleMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62982009) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::EdgeCollector::TriangleMap*)");
		}

		osgUtil::EdgeCollector::TriangleMap* rhs =(Luna< osgUtil::EdgeCollector::TriangleMap >::check(L,2));
		osgUtil::EdgeCollector::TriangleMap* self=(Luna< osgUtil::EdgeCollector::TriangleMap >::check(L,1));
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

		osgUtil::EdgeCollector::TriangleMap* self=(Luna< osgUtil::EdgeCollector::TriangleMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::TriangleMap");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::TriangleMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::TriangleMap* LunaTraits< osgUtil::EdgeCollector::TriangleMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::TriangleMap >::_bind_dtor(osgUtil::EdgeCollector::TriangleMap* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::TriangleMap >::className[] = "TriangleMap";
const char LunaTraits< osgUtil::EdgeCollector::TriangleMap >::fullName[] = "osgUtil::EdgeCollector::TriangleMap";
const char LunaTraits< osgUtil::EdgeCollector::TriangleMap >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::TriangleMap >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::TriangleMap >::hash = 62982009;
const int LunaTraits< osgUtil::EdgeCollector::TriangleMap >::uniqueIDs[] = {62982009,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::TriangleMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_TriangleMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_TriangleMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::TriangleMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::TriangleMap >::enumValues[] = {
	{0,0}
};


