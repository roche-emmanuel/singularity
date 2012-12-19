#include <plug_common.h>

class luna_wrapper_osgUtil_LineSegmentIntersector_Intersections {
public:
	typedef Luna< osgUtil::LineSegmentIntersector::Intersections > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19574398) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::LineSegmentIntersector::Intersections*)");
		}

		osgUtil::LineSegmentIntersector::Intersections* rhs =(Luna< osgUtil::LineSegmentIntersector::Intersections >::check(L,2));
		osgUtil::LineSegmentIntersector::Intersections* self=(Luna< osgUtil::LineSegmentIntersector::Intersections >::check(L,1));
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

		osgUtil::LineSegmentIntersector::Intersections* self=(Luna< osgUtil::LineSegmentIntersector::Intersections >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::LineSegmentIntersector::Intersections");
		
		return luna_dynamicCast(L,converters,"osgUtil::LineSegmentIntersector::Intersections",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::LineSegmentIntersector::Intersections* LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::_bind_dtor(osgUtil::LineSegmentIntersector::Intersections* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::className[] = "Intersections";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::fullName[] = "osgUtil::LineSegmentIntersector::Intersections";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::parents[] = {0};
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::hash = 19574398;
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::uniqueIDs[] = {19574398,0};

luna_RegType LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersections::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersections::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::LineSegmentIntersector::Intersections >::enumValues[] = {
	{0,0}
};


