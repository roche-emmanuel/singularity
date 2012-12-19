#include <plug_common.h>

class luna_wrapper_osg_KdTree_LineSegmentIntersection_RatioList {
public:
	typedef Luna< osg::KdTree::LineSegmentIntersection::RatioList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14271479) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::LineSegmentIntersection::RatioList*)");
		}

		osg::KdTree::LineSegmentIntersection::RatioList* rhs =(Luna< osg::KdTree::LineSegmentIntersection::RatioList >::check(L,2));
		osg::KdTree::LineSegmentIntersection::RatioList* self=(Luna< osg::KdTree::LineSegmentIntersection::RatioList >::check(L,1));
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

		osg::KdTree::LineSegmentIntersection::RatioList* self=(Luna< osg::KdTree::LineSegmentIntersection::RatioList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::LineSegmentIntersection::RatioList");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::LineSegmentIntersection::RatioList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::KdTree::LineSegmentIntersection::RatioList* LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::_bind_dtor(osg::KdTree::LineSegmentIntersection::RatioList* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::className[] = "RatioList";
const char LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::fullName[] = "osg::KdTree::LineSegmentIntersection::RatioList";
const char LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::parents[] = {0};
const int LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::hash = 14271479;
const int LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::uniqueIDs[] = {14271479,0};

luna_RegType LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_LineSegmentIntersection_RatioList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_LineSegmentIntersection_RatioList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::LineSegmentIntersection::RatioList >::enumValues[] = {
	{0,0}
};


