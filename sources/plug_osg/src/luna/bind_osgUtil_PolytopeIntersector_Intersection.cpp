#include <plug_common.h>

class luna_wrapper_osgUtil_PolytopeIntersector_Intersection {
public:
	typedef Luna< osgUtil::PolytopeIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31087672) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PolytopeIntersector::Intersection*)");
		}

		osgUtil::PolytopeIntersector::Intersection* rhs =(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
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

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PolytopeIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::PolytopeIntersector::Intersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumIntersectionPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83725871) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91334477) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumIntersectionPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31087672) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::PolytopeIntersector::Intersection::Intersection()
	static osgUtil::PolytopeIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersection::Intersection()\nClass arguments details:\n");
		}


		return new osgUtil::PolytopeIntersector::Intersection();
	}


	// Function binds:
	// double osgUtil::PolytopeIntersector::Intersection::distance()
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::PolytopeIntersector::Intersection::distance() function, expected prototype:\ndouble osgUtil::PolytopeIntersector::Intersection::distance()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::PolytopeIntersector::Intersection::distance(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		double lret = self->distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgUtil::PolytopeIntersector::Intersection::maxDistance()
	static int _bind_getMaxDistance(lua_State *L) {
		if (!_lg_typecheck_getMaxDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::PolytopeIntersector::Intersection::maxDistance() function, expected prototype:\ndouble osgUtil::PolytopeIntersector::Intersection::maxDistance()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::PolytopeIntersector::Intersection::maxDistance(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		double lret = self->maxDistance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::NodePath osgUtil::PolytopeIntersector::Intersection::nodePath()
	static int _bind_getNodePath(lua_State *L) {
		if (!_lg_typecheck_getNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osgUtil::PolytopeIntersector::Intersection::nodePath() function, expected prototype:\nosg::NodePath osgUtil::PolytopeIntersector::Intersection::nodePath()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osgUtil::PolytopeIntersector::Intersection::nodePath(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		const osg::NodePath* lret = &self->nodePath;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Drawable > osgUtil::PolytopeIntersector::Intersection::drawable()
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Drawable > osgUtil::PolytopeIntersector::Intersection::drawable() function, expected prototype:\nosg::ref_ptr< osg::Drawable > osgUtil::PolytopeIntersector::Intersection::drawable()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Drawable > osgUtil::PolytopeIntersector::Intersection::drawable(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		osg::ref_ptr< osg::Drawable > lret = self->drawable;
		Luna< osg::Drawable >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::PolytopeIntersector::Intersection::matrix()
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::PolytopeIntersector::Intersection::matrix() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::PolytopeIntersector::Intersection::matrix()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::PolytopeIntersector::Intersection::matrix(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->matrix;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Vec3f osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint()
	static int _bind_getLocalIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint() function, expected prototype:\nosg::Vec3f osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		const osg::Vec3f* lret = &self->localIntersectionPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints()
	static int _bind_getNumIntersectionPoints(lua_State *L) {
		if (!_lg_typecheck_getNumIntersectionPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints() function, expected prototype:\nunsigned int osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		unsigned int lret = self->numIntersectionPoints;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::PolytopeIntersector::Intersection::primitiveIndex()
	static int _bind_getPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::PolytopeIntersector::Intersection::primitiveIndex() function, expected prototype:\nunsigned int osgUtil::PolytopeIntersector::Intersection::primitiveIndex()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::PolytopeIntersector::Intersection::primitiveIndex(). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		unsigned int lret = self->primitiveIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::Intersection::distance(double value)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::distance(double value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::distance(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::distance(double). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->distance = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::maxDistance(double value)
	static int _bind_setMaxDistance(lua_State *L) {
		if (!_lg_typecheck_setMaxDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::maxDistance(double value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::maxDistance(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::maxDistance(double). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->maxDistance = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::nodePath(osg::NodePath value)
	static int _bind_setNodePath(lua_State *L) {
		if (!_lg_typecheck_setNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::nodePath(osg::NodePath value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::nodePath(osg::NodePath value)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		osg::NodePath* value_ptr=(Luna< std::vector< osg::Node * > >::checkSubType< osg::NodePath >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::PolytopeIntersector::Intersection::nodePath function");
		}
		osg::NodePath value=*value_ptr;

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::nodePath(osg::NodePath). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->nodePath = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Drawable > value = dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable >). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->drawable = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->matrix = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint(osg::Vec3f value)
	static int _bind_setLocalIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_setLocalIntersectionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint(osg::Vec3f value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint function");
		}
		osg::Vec3f value=*value_ptr;

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::localIntersectionPoint(osg::Vec3f). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->localIntersectionPoint = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints(unsigned int value)
	static int _bind_setNumIntersectionPoints(lua_State *L) {
		if (!_lg_typecheck_setNumIntersectionPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints(unsigned int value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::numIntersectionPoints(unsigned int). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->numIntersectionPoints = value;

		return 0;
	}

	// void osgUtil::PolytopeIntersector::Intersection::primitiveIndex(unsigned int value)
	static int _bind_setPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::Intersection::primitiveIndex(unsigned int value) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::Intersection::primitiveIndex(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::Intersection::primitiveIndex(unsigned int). Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		self->primitiveIndex = value;

		return 0;
	}


	// Operator binds:
	// bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 31087672\n");
		}

		const osgUtil::PolytopeIntersector::Intersection* rhs_ptr=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::PolytopeIntersector::Intersection::operator< function");
		}
		const osgUtil::PolytopeIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection &) const. Got : '%s'",typeid(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::PolytopeIntersector::Intersection* LunaTraits< osgUtil::PolytopeIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PolytopeIntersector::Intersection >::_bind_dtor(osgUtil::PolytopeIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::className[] = "PolytopeIntersector_Intersection";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::fullName[] = "osgUtil::PolytopeIntersector::Intersection";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PolytopeIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::PolytopeIntersector::Intersection >::hash = 31087672;
const int LunaTraits< osgUtil::PolytopeIntersector::Intersection >::uniqueIDs[] = {31087672,0};

luna_RegType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::methods[] = {
	{"getDistance", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getDistance},
	{"getMaxDistance", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getMaxDistance},
	{"getNodePath", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getNodePath},
	{"getDrawable", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getDrawable},
	{"getMatrix", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getMatrix},
	{"getLocalIntersectionPoint", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getLocalIntersectionPoint},
	{"getNumIntersectionPoints", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getNumIntersectionPoints},
	{"getPrimitiveIndex", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_getPrimitiveIndex},
	{"setDistance", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setDistance},
	{"setMaxDistance", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setMaxDistance},
	{"setNodePath", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setNodePath},
	{"setDrawable", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setDrawable},
	{"setMatrix", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setMatrix},
	{"setLocalIntersectionPoint", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setLocalIntersectionPoint},
	{"setNumIntersectionPoints", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setNumIntersectionPoints},
	{"setPrimitiveIndex", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_setPrimitiveIndex},
	{"__lt", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::enumValues[] = {
	{"MaxNumIntesectionPoints", osgUtil::PolytopeIntersector::Intersection::MaxNumIntesectionPoints},
	{0,0}
};


