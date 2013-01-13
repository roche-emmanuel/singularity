#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_KdTree_LineSegmentIntersection {
public:
	typedef Luna< std::vector< osg::KdTree::LineSegmentIntersection > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63704215) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::KdTree::LineSegmentIntersection >*)");
		}

		std::vector< osg::KdTree::LineSegmentIntersection >* rhs =(Luna< std::vector< osg::KdTree::LineSegmentIntersection > >::check(L,2));
		std::vector< osg::KdTree::LineSegmentIntersection >* self=(Luna< std::vector< osg::KdTree::LineSegmentIntersection > >::check(L,1));
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

		std::vector< osg::KdTree::LineSegmentIntersection >* self=(Luna< std::vector< osg::KdTree::LineSegmentIntersection > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::KdTree::LineSegmentIntersection >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::KdTree::LineSegmentIntersection >",name);
	}

};

std::vector< osg::KdTree::LineSegmentIntersection >* LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::KdTree::LineSegmentIntersection >();
}

void LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::_bind_dtor(std::vector< osg::KdTree::LineSegmentIntersection >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::className[] = "std_vector_osg_KdTree_LineSegmentIntersection";
const char LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::fullName[] = "std::vector< osg::KdTree::LineSegmentIntersection >";
const char LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::parents[] = {0};
const int LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::hash = 63704215;
const int LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::uniqueIDs[] = {63704215,0};

luna_RegType LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_KdTree_LineSegmentIntersection::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_KdTree_LineSegmentIntersection::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > >::enumValues[] = {
	{0,0}
};


