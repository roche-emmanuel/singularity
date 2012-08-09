#include <plug_common.h>

class luna_wrapper_osgUtil_PolytopeIntersector_Intersections {
public:
	typedef Luna< osgUtil::PolytopeIntersector::Intersections > luna_t;

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

		osgUtil::PolytopeIntersector::Intersections* self=(Luna< osgUtil::PolytopeIntersector::Intersections >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PolytopeIntersector::Intersections");
		
		return luna_dynamicCast(L,converters,"osgUtil::PolytopeIntersector::Intersections",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::PolytopeIntersector::Intersections* LunaTraits< osgUtil::PolytopeIntersector::Intersections >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::PolytopeIntersector::Intersections >::_bind_dtor(osgUtil::PolytopeIntersector::Intersections* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PolytopeIntersector::Intersections >::className[] = "Intersections";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersections >::fullName[] = "osgUtil::PolytopeIntersector::Intersections";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersections >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PolytopeIntersector::Intersections >::parents[] = {0};
const int LunaTraits< osgUtil::PolytopeIntersector::Intersections >::hash = 63717560;
const int LunaTraits< osgUtil::PolytopeIntersector::Intersections >::uniqueIDs[] = {63717560,0};

luna_RegType LunaTraits< osgUtil::PolytopeIntersector::Intersections >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_PolytopeIntersector_Intersections::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PolytopeIntersector::Intersections >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PolytopeIntersector::Intersections >::enumValues[] = {
	{0,0}
};


