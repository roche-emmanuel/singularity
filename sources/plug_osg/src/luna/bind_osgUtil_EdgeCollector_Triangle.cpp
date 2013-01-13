#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Triangle.h>

class luna_wrapper_osgUtil_EdgeCollector_Triangle {
public:
	typedef Luna< osgUtil::EdgeCollector::Triangle > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgUtil::EdgeCollector::Triangle* ptr= dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Triangle* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Triangle >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Triangle >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrderedPoints(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBoundaryTriangle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_p1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_p2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_p3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_op1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_op2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_op3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_e1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_e2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_e3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_plane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_p1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_p2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_p3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_op1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_op2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_op3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_e1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_e2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_e3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_plane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::EdgeCollector::Triangle::Triangle()
	static osgUtil::EdgeCollector::Triangle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle::Triangle() function, expected prototype:\nosgUtil::EdgeCollector::Triangle::Triangle()\nClass arguments details:\n");
		}


		return new osgUtil::EdgeCollector::Triangle();
	}

	// osgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data)
	static osgUtil::EdgeCollector::Triangle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_EdgeCollector_Triangle(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Triangle::Triangle
	static osgUtil::EdgeCollector::Triangle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Triangle, cannot match any of the overloads for function Triangle:\n  Triangle()\n  Triangle(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Triangle::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::clear()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::clear(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)
	static int _bind_setOrderedPoints(lua_State *L) {
		if (!_lg_typecheck_setOrderedPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));
		osgUtil::EdgeCollector::Point* p3=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,4));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setOrderedPoints(p1, p2, p3);

		return 0;
	}

	// float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const
	static int _bind_distance(lua_State *L) {
		if (!_lg_typecheck_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const function, expected prototype:\nfloat osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* vertex_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in osgUtil::EdgeCollector::Triangle::distance function");
		}
		const osg::Vec3f & vertex=*vertex_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->distance(vertex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const
	static int _bind_isBoundaryTriangle(lua_State *L) {
		if (!_lg_typecheck_isBoundaryTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isBoundaryTriangle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1()
	static int _bind_get_p1(lua_State *L) {
		if (!_lg_typecheck_get_p1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2()
	static int _bind_get_p2(lua_State *L) {
		if (!_lg_typecheck_get_p2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3()
	static int _bind_get_p3(lua_State *L) {
		if (!_lg_typecheck_get_p3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p3;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1()
	static int _bind_get_op1(lua_State *L) {
		if (!_lg_typecheck_get_op1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2()
	static int _bind_get_op2(lua_State *L) {
		if (!_lg_typecheck_get_op2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3()
	static int _bind_get_op3(lua_State *L) {
		if (!_lg_typecheck_get_op3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op3;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1()
	static int _bind_get_e1(lua_State *L) {
		if (!_lg_typecheck_get_e1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e1;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2()
	static int _bind_get_e2(lua_State *L) {
		if (!_lg_typecheck_get_e2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e2;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3()
	static int _bind_get_e3(lua_State *L) {
		if (!_lg_typecheck_get_e3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e3;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Plane osgUtil::EdgeCollector::Triangle::_plane()
	static int _bind_get_plane(lua_State *L) {
		if (!_lg_typecheck_get_plane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Plane osgUtil::EdgeCollector::Triangle::_plane() function, expected prototype:\nosg::Plane osgUtil::EdgeCollector::Triangle::_plane()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Plane osgUtil::EdgeCollector::Triangle::_plane(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Plane* lret = &self->_plane;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_p1(lua_State *L) {
		if (!_lg_typecheck_set_p1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_p1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_p2(lua_State *L) {
		if (!_lg_typecheck_set_p2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_p2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_p3(lua_State *L) {
		if (!_lg_typecheck_set_p3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_p3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_op1(lua_State *L) {
		if (!_lg_typecheck_set_op1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_op1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_op2(lua_State *L) {
		if (!_lg_typecheck_set_op2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_op2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_set_op3(lua_State *L) {
		if (!_lg_typecheck_set_op3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_op3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_set_e1(lua_State *L) {
		if (!_lg_typecheck_set_e1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_e1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_set_e2(lua_State *L) {
		if (!_lg_typecheck_set_e2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_e2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_set_e3(lua_State *L) {
		if (!_lg_typecheck_set_e3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_e3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value)
	static int _bind_set_plane(lua_State *L) {
		if (!_lg_typecheck_set_plane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Triangle::_plane function");
		}
		osg::Plane value=*value_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_plane = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Triangle::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Triangle* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Triangle::operator< function");
		}
		const osgUtil::EdgeCollector::Triangle & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Triangle* LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_dtor(osgUtil::EdgeCollector::Triangle* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Triangle >::className[] = "EdgeCollector_Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::fullName[] = "osgUtil::EdgeCollector::Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Triangle >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::hash = 34878428;
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Triangle >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_clear},
	{"setOrderedPoints", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOrderedPoints},
	{"distance", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_distance},
	{"isBoundaryTriangle", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_isBoundaryTriangle},
	{"get_p1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_p1},
	{"get_p2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_p2},
	{"get_p3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_p3},
	{"get_op1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_op1},
	{"get_op2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_op2},
	{"get_op3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_op3},
	{"get_e1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_e1},
	{"get_e2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_e2},
	{"get_e3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_e3},
	{"get_plane", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_get_plane},
	{"set_p1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_p1},
	{"set_p2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_p2},
	{"set_p3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_p3},
	{"set_op1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_op1},
	{"set_op2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_op2},
	{"set_op3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_op3},
	{"set_e1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_e1},
	{"set_e2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_e2},
	{"set_e3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_e3},
	{"set_plane", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_set_plane},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_base_setThreadSafeRefUnref},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind___lt},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Triangle >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Triangle >::enumValues[] = {
	{0,0}
};


