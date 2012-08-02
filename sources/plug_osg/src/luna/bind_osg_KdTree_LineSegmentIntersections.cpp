#include <plug_common.h>

class luna_wrapper_osg_KdTree_LineSegmentIntersections {
public:
	typedef Luna< osg::KdTree::LineSegmentIntersections > luna_t;

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

		osg::KdTree::LineSegmentIntersections* self=(Luna< osg::KdTree::LineSegmentIntersections >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::LineSegmentIntersections");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::LineSegmentIntersections",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::KdTree::LineSegmentIntersections* LunaTraits< osg::KdTree::LineSegmentIntersections >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::KdTree::LineSegmentIntersections >::_bind_dtor(osg::KdTree::LineSegmentIntersections* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::LineSegmentIntersections >::className[] = "LineSegmentIntersections";
const char LunaTraits< osg::KdTree::LineSegmentIntersections >::fullName[] = "osg::KdTree::LineSegmentIntersections";
const char LunaTraits< osg::KdTree::LineSegmentIntersections >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::LineSegmentIntersections >::parents[] = {0};
const int LunaTraits< osg::KdTree::LineSegmentIntersections >::hash = 91252552;
const int LunaTraits< osg::KdTree::LineSegmentIntersections >::uniqueIDs[] = {91252552,0};

luna_RegType LunaTraits< osg::KdTree::LineSegmentIntersections >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_LineSegmentIntersections::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::LineSegmentIntersections >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::LineSegmentIntersections >::enumValues[] = {
	{0,0}
};


