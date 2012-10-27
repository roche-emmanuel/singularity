#include <plug_common.h>

class luna_wrapper_osgUtil_LineSegmentIntersector {
public:
	typedef Luna< osgUtil::LineSegmentIntersector > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::LineSegmentIntersector* ptr= dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::LineSegmentIntersector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_insertIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74825011) ) return false;
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

	inline static bool _lg_typecheck_setStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgUtil::LineSegmentIntersector::LineSegmentIntersector(const osg::Vec3d & start, const osg::Vec3d & end)
	static osgUtil::LineSegmentIntersector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::LineSegmentIntersector(const osg::Vec3d & start, const osg::Vec3d & end) function, expected prototype:\nosgUtil::LineSegmentIntersector::LineSegmentIntersector(const osg::Vec3d & start, const osg::Vec3d & end)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osgUtil::LineSegmentIntersector::LineSegmentIntersector function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osgUtil::LineSegmentIntersector::LineSegmentIntersector function");
		}
		const osg::Vec3d & end=*end_ptr;

		return new osgUtil::LineSegmentIntersector(start, end);
	}

	// osgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Vec3d & start, const osg::Vec3d & end)
	static osgUtil::LineSegmentIntersector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Vec3d & start, const osg::Vec3d & end) function, expected prototype:\nosgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Vec3d & start, const osg::Vec3d & end)\nClass arguments details:\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osgUtil::LineSegmentIntersector::LineSegmentIntersector function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osgUtil::LineSegmentIntersector::LineSegmentIntersector function");
		}
		const osg::Vec3d & end=*end_ptr;

		return new osgUtil::LineSegmentIntersector(cf, start, end);
	}

	// osgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, double x, double y)
	static osgUtil::LineSegmentIntersector* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, double x, double y) function, expected prototype:\nosgUtil::LineSegmentIntersector::LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame cf, double x, double y)\nClass arguments details:\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);

		return new osgUtil::LineSegmentIntersector(cf, x, y);
	}

	// Overload binder for osgUtil::LineSegmentIntersector::LineSegmentIntersector
	static osgUtil::LineSegmentIntersector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function LineSegmentIntersector, cannot match any of the overloads for function LineSegmentIntersector:\n  LineSegmentIntersector(const osg::Vec3d &, const osg::Vec3d &)\n  LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame, const osg::Vec3d &, const osg::Vec3d &)\n  LineSegmentIntersector(osgUtil::Intersector::CoordinateFrame, double, double)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::LineSegmentIntersector::insertIntersection(const osgUtil::LineSegmentIntersector::Intersection & intersection)
	static int _bind_insertIntersection(lua_State *L) {
		if (!_lg_typecheck_insertIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::insertIntersection(const osgUtil::LineSegmentIntersector::Intersection & intersection) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::insertIntersection(const osgUtil::LineSegmentIntersector::Intersection & intersection)\nClass arguments details:\narg 1 ID = 74825011\n");
		}

		const osgUtil::LineSegmentIntersector::Intersection* intersection_ptr=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,2));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgUtil::LineSegmentIntersector::insertIntersection function");
		}
		const osgUtil::LineSegmentIntersector::Intersection & intersection=*intersection_ptr;

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::insertIntersection(const osgUtil::LineSegmentIntersector::Intersection &)");
		}
		self->insertIntersection(intersection);

		return 0;
	}

	// osgUtil::LineSegmentIntersector::Intersections & osgUtil::LineSegmentIntersector::getIntersections()
	static int _bind_getIntersections(lua_State *L) {
		if (!_lg_typecheck_getIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersections & osgUtil::LineSegmentIntersector::getIntersections() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersections & osgUtil::LineSegmentIntersector::getIntersections()\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::LineSegmentIntersector::Intersections & osgUtil::LineSegmentIntersector::getIntersections()");
		}
		const osgUtil::LineSegmentIntersector::Intersections* lret = &self->getIntersections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::LineSegmentIntersector::Intersections >::push(L,lret,false);

		return 1;
	}

	// osgUtil::LineSegmentIntersector::Intersection osgUtil::LineSegmentIntersector::getFirstIntersection()
	static int _bind_getFirstIntersection(lua_State *L) {
		if (!_lg_typecheck_getFirstIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersection osgUtil::LineSegmentIntersector::getFirstIntersection() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersection osgUtil::LineSegmentIntersector::getFirstIntersection()\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::LineSegmentIntersector::Intersection osgUtil::LineSegmentIntersector::getFirstIntersection()");
		}
		osgUtil::LineSegmentIntersector::Intersection stack_lret = self->getFirstIntersection();
		osgUtil::LineSegmentIntersector::Intersection* lret = new osgUtil::LineSegmentIntersector::Intersection(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::LineSegmentIntersector::Intersection >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::LineSegmentIntersector::setStart(const osg::Vec3d & start)
	static int _bind_setStart(lua_State *L) {
		if (!_lg_typecheck_setStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::setStart(const osg::Vec3d & start) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::setStart(const osg::Vec3d & start)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osgUtil::LineSegmentIntersector::setStart function");
		}
		const osg::Vec3d & start=*start_ptr;

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::setStart(const osg::Vec3d &)");
		}
		self->setStart(start);

		return 0;
	}

	// const osg::Vec3d & osgUtil::LineSegmentIntersector::getStart() const
	static int _bind_getStart(lua_State *L) {
		if (!_lg_typecheck_getStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgUtil::LineSegmentIntersector::getStart() const function, expected prototype:\nconst osg::Vec3d & osgUtil::LineSegmentIntersector::getStart() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgUtil::LineSegmentIntersector::getStart() const");
		}
		const osg::Vec3d* lret = &self->getStart();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::LineSegmentIntersector::setEnd(const osg::Vec3d & end)
	static int _bind_setEnd(lua_State *L) {
		if (!_lg_typecheck_setEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::setEnd(const osg::Vec3d & end) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::setEnd(const osg::Vec3d & end)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osgUtil::LineSegmentIntersector::setEnd function");
		}
		const osg::Vec3d & end=*end_ptr;

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::setEnd(const osg::Vec3d &)");
		}
		self->setEnd(end);

		return 0;
	}

	// const osg::Vec3d & osgUtil::LineSegmentIntersector::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgUtil::LineSegmentIntersector::getEnd() const function, expected prototype:\nconst osg::Vec3d & osgUtil::LineSegmentIntersector::getEnd() const\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgUtil::LineSegmentIntersector::getEnd() const");
		}
		const osg::Vec3d* lret = &self->getEnd();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::LineSegmentIntersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor &)");
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::LineSegmentIntersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::LineSegmentIntersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::LineSegmentIntersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::enter(const osg::Node &)");
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::LineSegmentIntersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::leave() function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::leave()\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::leave()");
		}
		self->leave();

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::LineSegmentIntersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *)");
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::reset() function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::reset()\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::reset()");
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::LineSegmentIntersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::containsIntersections() function, expected prototype:\nbool osgUtil::LineSegmentIntersector::containsIntersections()\nClass arguments details:\n");
		}


		osgUtil::LineSegmentIntersector* self=dynamic_cast< osgUtil::LineSegmentIntersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::containsIntersections()");
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::LineSegmentIntersector* LunaTraits< osgUtil::LineSegmentIntersector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_LineSegmentIntersector::_bind_ctor(L);
}

void LunaTraits< osgUtil::LineSegmentIntersector >::_bind_dtor(osgUtil::LineSegmentIntersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::LineSegmentIntersector >::className[] = "LineSegmentIntersector";
const char LunaTraits< osgUtil::LineSegmentIntersector >::fullName[] = "osgUtil::LineSegmentIntersector";
const char LunaTraits< osgUtil::LineSegmentIntersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::LineSegmentIntersector >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::LineSegmentIntersector >::hash = 80894072;
const int LunaTraits< osgUtil::LineSegmentIntersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::LineSegmentIntersector >::methods[] = {
	{"insertIntersection", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_insertIntersection},
	{"getIntersections", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_getIntersections},
	{"getFirstIntersection", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_getFirstIntersection},
	{"setStart", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_setStart},
	{"getStart", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_getStart},
	{"setEnd", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_setEnd},
	{"getEnd", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_getEnd},
	{"clone", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind_containsIntersections},
	{"__eq", &luna_wrapper_osgUtil_LineSegmentIntersector::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::LineSegmentIntersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_LineSegmentIntersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::LineSegmentIntersector >::enumValues[] = {
	{0,0}
};


