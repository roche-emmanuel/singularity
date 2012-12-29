#include <plug_common.h>

class luna_wrapper_osgUtil_LineSegmentIntersector_Intersection {
public:
	typedef Luna< osgUtil::LineSegmentIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74825011) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::LineSegmentIntersector::Intersection*)");
		}

		osgUtil::LineSegmentIntersector::Intersection* rhs =(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,2));
		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
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

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::LineSegmentIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::LineSegmentIntersector::Intersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocalIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74825011) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::LineSegmentIntersector::Intersection::Intersection()
	static osgUtil::LineSegmentIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersection::Intersection()\nClass arguments details:\n");
		}


		return new osgUtil::LineSegmentIntersector::Intersection();
	}


	// Function binds:
	// const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const
	static int _bind_getLocalIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const function, expected prototype:\nconst osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const");
		}
		const osg::Vec3d* lret = &self->getLocalIntersectPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const
	static int _bind_getWorldIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const function, expected prototype:\nosg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const");
		}
		osg::Vec3d stack_lret = self->getWorldIntersectPoint();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const
	static int _bind_getLocalIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const function, expected prototype:\nconst osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const");
		}
		const osg::Vec3f* lret = &self->getLocalIntersectNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const
	static int _bind_getWorldIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const function, expected prototype:\nosg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const");
		}
		osg::Vec3f stack_lret = self->getWorldIntersectNormal();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 74825011\n");
		}

		const osgUtil::LineSegmentIntersector::Intersection* rhs_ptr=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::LineSegmentIntersector::Intersection::operator< function");
		}
		const osgUtil::LineSegmentIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::LineSegmentIntersector::Intersection* LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::_bind_dtor(osgUtil::LineSegmentIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::className[] = "LineSegmentIntersector_Intersection";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::fullName[] = "osgUtil::LineSegmentIntersector::Intersection";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::hash = 74825011;
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::uniqueIDs[] = {74825011,0};

luna_RegType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::methods[] = {
	{"getLocalIntersectPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectPoint},
	{"getWorldIntersectPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getWorldIntersectPoint},
	{"getLocalIntersectNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectNormal},
	{"getWorldIntersectNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getWorldIntersectNormal},
	{"__lt", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::enumValues[] = {
	{0,0}
};


