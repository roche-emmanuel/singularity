#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_PointList {
public:
	typedef Luna< osgUtil::EdgeCollector::PointList > luna_t;

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

		osgUtil::EdgeCollector::PointList* self=(Luna< osgUtil::EdgeCollector::PointList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::PointList");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::PointList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::PointList* LunaTraits< osgUtil::EdgeCollector::PointList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::PointList >::_bind_dtor(osgUtil::EdgeCollector::PointList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::PointList >::className[] = "PointList";
const char LunaTraits< osgUtil::EdgeCollector::PointList >::fullName[] = "osgUtil::EdgeCollector::PointList";
const char LunaTraits< osgUtil::EdgeCollector::PointList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::PointList >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::PointList >::hash = 57205837;
const int LunaTraits< osgUtil::EdgeCollector::PointList >::uniqueIDs[] = {57205837,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::PointList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_PointList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::PointList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::PointList >::enumValues[] = {
	{0,0}
};


