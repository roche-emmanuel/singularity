#include <plug_common.h>

class luna_wrapper_osg_KdTree_LineSegmentIntersection {
public:
	typedef Luna< osg::KdTree::LineSegmentIntersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2943627) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::LineSegmentIntersection*)");
		}

		osg::KdTree::LineSegmentIntersection* rhs =(Luna< osg::KdTree::LineSegmentIntersection >::check(L,2));
		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
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

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::LineSegmentIntersection");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::LineSegmentIntersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2943627) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::KdTree::LineSegmentIntersection::LineSegmentIntersection()
	static osg::KdTree::LineSegmentIntersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::LineSegmentIntersection::LineSegmentIntersection() function, expected prototype:\nosg::KdTree::LineSegmentIntersection::LineSegmentIntersection()\nClass arguments details:\n");
		}


		return new osg::KdTree::LineSegmentIntersection();
	}


	// Function binds:

	// Operator binds:
	// bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const function, expected prototype:\nbool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const\nClass arguments details:\narg 1 ID = 2943627\n");
		}

		const osg::KdTree::LineSegmentIntersection* rhs_ptr=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::LineSegmentIntersection::operator< function");
		}
		const osg::KdTree::LineSegmentIntersection & rhs=*rhs_ptr;

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::KdTree::LineSegmentIntersection* LunaTraits< osg::KdTree::LineSegmentIntersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::LineSegmentIntersection >::_bind_dtor(osg::KdTree::LineSegmentIntersection* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::LineSegmentIntersection >::className[] = "LineSegmentIntersection";
const char LunaTraits< osg::KdTree::LineSegmentIntersection >::fullName[] = "osg::KdTree::LineSegmentIntersection";
const char LunaTraits< osg::KdTree::LineSegmentIntersection >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::LineSegmentIntersection >::parents[] = {0};
const int LunaTraits< osg::KdTree::LineSegmentIntersection >::hash = 2943627;
const int LunaTraits< osg::KdTree::LineSegmentIntersection >::uniqueIDs[] = {2943627,0};

luna_RegType LunaTraits< osg::KdTree::LineSegmentIntersection >::methods[] = {
	{"__lt", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind___lt},
	{"dynCast", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::LineSegmentIntersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::LineSegmentIntersection >::enumValues[] = {
	{0,0}
};


