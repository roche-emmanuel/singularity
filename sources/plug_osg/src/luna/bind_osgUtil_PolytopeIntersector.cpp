#include <plug_common.h>

class luna_wrapper_osgUtil_PolytopeIntersector {
public:
	typedef Luna< osgUtil::PolytopeIntersector > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::PolytopeIntersector* ptr= dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PolytopeIntersector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26652350) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_insertIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31087672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstIntersection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDimensionMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDimensionMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencePlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferencePlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope)\nClass arguments details:\narg 1 ID = 26652350\n");
		}

		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,1));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new osgUtil::PolytopeIntersector(polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)\nClass arguments details:\narg 2 ID = 26652350\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new osgUtil::PolytopeIntersector(cf, polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)\nClass arguments details:\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		double xMin=(double)lua_tonumber(L,2);
		double yMin=(double)lua_tonumber(L,3);
		double xMax=(double)lua_tonumber(L,4);
		double yMax=(double)lua_tonumber(L,5);

		return new osgUtil::PolytopeIntersector(cf, xMin, yMin, xMax, yMax);
	}

	// Overload binder for osgUtil::PolytopeIntersector::PolytopeIntersector
	static osgUtil::PolytopeIntersector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function PolytopeIntersector, cannot match any of the overloads for function PolytopeIntersector:\n  PolytopeIntersector(const osg::Polytope &)\n  PolytopeIntersector(osgUtil::Intersector::CoordinateFrame, const osg::Polytope &)\n  PolytopeIntersector(osgUtil::Intersector::CoordinateFrame, double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection)
	static int _bind_insertIntersection(lua_State *L) {
		if (!_lg_typecheck_insertIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection)\nClass arguments details:\narg 1 ID = 31087672\n");
		}

		const osgUtil::PolytopeIntersector::Intersection* intersection_ptr=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgUtil::PolytopeIntersector::insertIntersection function");
		}
		const osgUtil::PolytopeIntersector::Intersection & intersection=*intersection_ptr;

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection &)");
		}
		self->insertIntersection(intersection);

		return 0;
	}

	// osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections()
	static int _bind_getIntersections(lua_State *L) {
		if (!_lg_typecheck_getIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections()");
		}
		const osgUtil::PolytopeIntersector::Intersections* lret = &self->getIntersections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PolytopeIntersector::Intersections >::push(L,lret,false);

		return 1;
	}

	// osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection()
	static int _bind_getFirstIntersection(lua_State *L) {
		if (!_lg_typecheck_getFirstIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection()");
		}
		osgUtil::PolytopeIntersector::Intersection stack_lret = self->getFirstIntersection();
		osgUtil::PolytopeIntersector::Intersection* lret = new osgUtil::PolytopeIntersector::Intersection(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PolytopeIntersector::Intersection >::push(L,lret,true);

		return 1;
	}

	// unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const
	static int _bind_getDimensionMask(lua_State *L) {
		if (!_lg_typecheck_getDimensionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const function, expected prototype:\nunsigned int osgUtil::PolytopeIntersector::getDimensionMask() const\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const");
		}
		unsigned int lret = self->getDimensionMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask)
	static int _bind_setDimensionMask(lua_State *L) {
		if (!_lg_typecheck_setDimensionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask)\nClass arguments details:\n");
		}

		unsigned int dimensionMask=(unsigned int)lua_tointeger(L,2);

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int)");
		}
		self->setDimensionMask(dimensionMask);

		return 0;
	}

	// const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const
	static int _bind_getReferencePlane(lua_State *L) {
		if (!_lg_typecheck_getReferencePlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const function, expected prototype:\nconst osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const");
		}
		const osg::Plane* lret = &self->getReferencePlane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane)
	static int _bind_setReferencePlane(lua_State *L) {
		if (!_lg_typecheck_setReferencePlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PolytopeIntersector::setReferencePlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane &)");
		}
		self->setReferencePlane(plane);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor &)");
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PolytopeIntersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::PolytopeIntersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PolytopeIntersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::enter(const osg::Node &)");
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::leave() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::leave()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::leave()");
		}
		self->leave();

		return 0;
	}

	// void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *)");
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::PolytopeIntersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::reset() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::reset()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::reset()");
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::PolytopeIntersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::containsIntersections() function, expected prototype:\nbool osgUtil::PolytopeIntersector::containsIntersections()\nClass arguments details:\n");
		}


		osgUtil::PolytopeIntersector* self=dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::containsIntersections()");
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::PolytopeIntersector* LunaTraits< osgUtil::PolytopeIntersector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PolytopeIntersector::_bind_ctor(L);
}

void LunaTraits< osgUtil::PolytopeIntersector >::_bind_dtor(osgUtil::PolytopeIntersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PolytopeIntersector >::className[] = "PolytopeIntersector";
const char LunaTraits< osgUtil::PolytopeIntersector >::fullName[] = "osgUtil::PolytopeIntersector";
const char LunaTraits< osgUtil::PolytopeIntersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PolytopeIntersector >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::PolytopeIntersector >::hash = 2263597;
const int LunaTraits< osgUtil::PolytopeIntersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PolytopeIntersector >::methods[] = {
	{"insertIntersection", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_insertIntersection},
	{"getIntersections", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getIntersections},
	{"getFirstIntersection", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getFirstIntersection},
	{"getDimensionMask", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getDimensionMask},
	{"setDimensionMask", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_setDimensionMask},
	{"getReferencePlane", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getReferencePlane},
	{"setReferencePlane", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_setReferencePlane},
	{"clone", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_containsIntersections},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PolytopeIntersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PolytopeIntersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PolytopeIntersector >::enumValues[] = {
	{"DimZero", osgUtil::PolytopeIntersector::DimZero},
	{"DimOne", osgUtil::PolytopeIntersector::DimOne},
	{"DimTwo", osgUtil::PolytopeIntersector::DimTwo},
	{"AllDims", osgUtil::PolytopeIntersector::AllDims},
	{0,0}
};

