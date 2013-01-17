#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexHullShape.h>

class luna_wrapper_btConvexHullShape {
public:
	typedef Luna< btConvexHullShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionShape,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionShape*)");
		}

		btCollisionShape* rhs =(Luna< btCollisionShape >::check(L,2));
		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexHullShape* ptr= dynamic_cast< btConvexHullShape* >(Luna< btCollisionShape >::check(L,1));
		btConvexHullShape* ptr= luna_caster< btCollisionShape, btConvexHullShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexHullShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnscaledPoints_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnscaledPoints_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaledPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_project(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPreferredPenetrationDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_initializePolyhedralFeatures(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexHullShape::btConvexHullShape(const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 ))
	static btConvexHullShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexHullShape::btConvexHullShape(const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 )) function, expected prototype:\nbtConvexHullShape::btConvexHullShape(const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 ))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float points=luatop>0 ? (float)lua_tonumber(L,1) : 0;
		int numPoints=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int stride=luatop>2 ? (int)lua_tointeger(L,3) : sizeof( btVector3 );

		return new btConvexHullShape(&points, numPoints, stride);
	}

	// btConvexHullShape::btConvexHullShape(lua_Table * data, const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 ))
	static btConvexHullShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexHullShape::btConvexHullShape(lua_Table * data, const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 )) function, expected prototype:\nbtConvexHullShape::btConvexHullShape(lua_Table * data, const float * points = 0, int numPoints = 0, int stride = sizeof( btVector3 ))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float points=luatop>1 ? (float)lua_tonumber(L,2) : 0;
		int numPoints=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int stride=luatop>3 ? (int)lua_tointeger(L,4) : sizeof( btVector3 );

		return new wrapper_btConvexHullShape(L,NULL, &points, numPoints, stride);
	}

	// Overload binder for btConvexHullShape::btConvexHullShape
	static btConvexHullShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexHullShape, cannot match any of the overloads for function btConvexHullShape:\n  btConvexHullShape(const float *, int, int)\n  btConvexHullShape(lua_Table *, const float *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexHullShape::addPoint(const btVector3 & point)
	static int _bind_addPoint(lua_State *L) {
		if (!_lg_typecheck_addPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::addPoint(const btVector3 & point) function, expected prototype:\nvoid btConvexHullShape::addPoint(const btVector3 & point)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* point_ptr=(Luna< btVector3 >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btConvexHullShape::addPoint function");
		}
		const btVector3 & point=*point_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::addPoint(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->addPoint(point);

		return 0;
	}

	// btVector3 * btConvexHullShape::getUnscaledPoints()
	static int _bind_getUnscaledPoints_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPoints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 * btConvexHullShape::getUnscaledPoints() function, expected prototype:\nbtVector3 * btConvexHullShape::getUnscaledPoints()\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 * btConvexHullShape::getUnscaledPoints(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 * lret = self->getUnscaledPoints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 * btConvexHullShape::getUnscaledPoints() const
	static int _bind_getUnscaledPoints_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPoints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * btConvexHullShape::getUnscaledPoints() const function, expected prototype:\nconst btVector3 * btConvexHullShape::getUnscaledPoints() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * btConvexHullShape::getUnscaledPoints() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3 * lret = self->getUnscaledPoints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btConvexHullShape::getUnscaledPoints
	static int _bind_getUnscaledPoints(lua_State *L) {
		if (_lg_typecheck_getUnscaledPoints_overload_1(L)) return _bind_getUnscaledPoints_overload_1(L);
		if (_lg_typecheck_getUnscaledPoints_overload_2(L)) return _bind_getUnscaledPoints_overload_2(L);

		luaL_error(L, "error in function getUnscaledPoints, cannot match any of the overloads for function getUnscaledPoints:\n  getUnscaledPoints()\n  getUnscaledPoints()\n");
		return 0;
	}

	// const btVector3 * btConvexHullShape::getPoints() const
	static int _bind_getPoints(lua_State *L) {
		if (!_lg_typecheck_getPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * btConvexHullShape::getPoints() const function, expected prototype:\nconst btVector3 * btConvexHullShape::getPoints() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * btConvexHullShape::getPoints() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3 * lret = self->getPoints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexHullShape::getScaledPoint(int i) const
	static int _bind_getScaledPoint(lua_State *L) {
		if (!_lg_typecheck_getScaledPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::getScaledPoint(int i) const function, expected prototype:\nbtVector3 btConvexHullShape::getScaledPoint(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::getScaledPoint(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getScaledPoint(i);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btConvexHullShape::getNumPoints() const
	static int _bind_getNumPoints(lua_State *L) {
		if (!_lg_typecheck_getNumPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::getNumPoints() const function, expected prototype:\nint btConvexHullShape::getNumPoints() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::getNumPoints() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPoints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexHullShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexHullShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexHullShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexHullShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexHullShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexHullShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btConvexHullShape::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const
	static int _bind_project(lua_State *L) {
		if (!_lg_typecheck_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const function, expected prototype:\nvoid btConvexHullShape::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexHullShape::project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexHullShape::project function");
		}
		const btVector3 & dir=*dir_ptr;
		float minProj=(float)lua_tonumber(L,4);
		float maxProj=(float)lua_tonumber(L,5);
		btVector3* witnesPtMin_ptr=(Luna< btVector3 >::check(L,6));
		if( !witnesPtMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMin in btConvexHullShape::project function");
		}
		btVector3 & witnesPtMin=*witnesPtMin_ptr;
		btVector3* witnesPtMax_ptr=(Luna< btVector3 >::check(L,7));
		if( !witnesPtMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMax in btConvexHullShape::project function");
		}
		btVector3 & witnesPtMax=*witnesPtMax_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::project(const btTransform &, const btVector3 &, float &, float &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->project(trans, dir, minProj, maxProj, witnesPtMin, witnesPtMax);

		return 0;
	}

	// const char * btConvexHullShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btConvexHullShape::getName() const function, expected prototype:\nconst char * btConvexHullShape::getName() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btConvexHullShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexHullShape::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::getNumVertices() const function, expected prototype:\nint btConvexHullShape::getNumVertices() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexHullShape::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::getNumEdges() const function, expected prototype:\nint btConvexHullShape::getNumEdges() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexHullShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexHullShape::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexHullShape::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexHullShape::getVertex(int i, btVector3 & vtx) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexHullShape::getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexHullShape::getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getVertex(i, vtx);

		return 0;
	}

	// int btConvexHullShape::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::getNumPlanes() const function, expected prototype:\nint btConvexHullShape::getNumPlanes() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexHullShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexHullShape::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexHullShape::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexHullShape::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexHullShape::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexHullShape::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexHullShape::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexHullShape::isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexHullShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexHullShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexHullShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// int btConvexHullShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::calculateSerializeBufferSize() const function, expected prototype:\nint btConvexHullShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConvexHullShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConvexHullShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btConvexHullShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexHullShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConvexHullShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexHullShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexHullShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexHullShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexHullShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConvexHullShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexHullShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexHullShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexHullShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConvexHullShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexHullShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexHullShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexHullShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexHullShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexHullShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexHullShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btConvexHullShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexHullShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexHullShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexHullShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btConvexHullShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexHullShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_setMargin(float margin) function, expected prototype:\nvoid btConvexHullShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::setMargin(margin);

		return 0;
	}

	// float btConvexHullShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexHullShape::base_getMargin() const function, expected prototype:\nfloat btConvexHullShape::base_getMargin() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexHullShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexHullShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexHullShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexHullShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexHullShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexHullShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexHullShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// bool btConvexHullShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexHullShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btConvexHullShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexHullShape::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btConvexHullShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexHullShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btConvexHullShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btConvexHullShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btConvexHullShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexHullShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexHullShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexHullShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexHullShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// btVector3 btConvexHullShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexHullShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexHullShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexHullShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexHullShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexHullShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexHullShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexHullShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexHullShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexHullShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexHullShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexHullShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btConvexHullShape::base_project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const function, expected prototype:\nvoid btConvexHullShape::base_project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexHullShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexHullShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float minProj=(float)lua_tonumber(L,4);
		float maxProj=(float)lua_tonumber(L,5);
		btVector3* witnesPtMin_ptr=(Luna< btVector3 >::check(L,6));
		if( !witnesPtMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMin in btConvexHullShape::base_project function");
		}
		btVector3 & witnesPtMin=*witnesPtMin_ptr;
		btVector3* witnesPtMax_ptr=(Luna< btVector3 >::check(L,7));
		if( !witnesPtMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMax in btConvexHullShape::base_project function");
		}
		btVector3 & witnesPtMax=*witnesPtMax_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_project(const btTransform &, const btVector3 &, float &, float &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::project(trans, dir, minProj, maxProj, witnesPtMin, witnesPtMax);

		return 0;
	}

	// const char * btConvexHullShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btConvexHullShape::base_getName() const function, expected prototype:\nconst char * btConvexHullShape::base_getName() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btConvexHullShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btConvexHullShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexHullShape::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::base_getNumVertices() const function, expected prototype:\nint btConvexHullShape::base_getNumVertices() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::base_getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexHullShape::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexHullShape::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::base_getNumEdges() const function, expected prototype:\nint btConvexHullShape::base_getNumEdges() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::base_getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexHullShape::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexHullShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexHullShape::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexHullShape::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexHullShape::base_getVertex(int i, btVector3 & vtx) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexHullShape::base_getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexHullShape::base_getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getVertex(i, vtx);

		return 0;
	}

	// int btConvexHullShape::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::base_getNumPlanes() const function, expected prototype:\nint btConvexHullShape::base_getNumPlanes() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::base_getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexHullShape::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexHullShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexHullShape::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexHullShape::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexHullShape::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexHullShape::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexHullShape::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexHullShape::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexHullShape::base_isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btConvexHullShape::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexHullShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexHullShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexHullShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexHullShape::setLocalScaling(scaling);

		return 0;
	}

	// int btConvexHullShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConvexHullShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexHullShape* self=Luna< btCollisionShape >::checkSubType< btConvexHullShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexHullShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btConvexHullShape* LunaTraits< btConvexHullShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexHullShape::_bind_ctor(L);
}

void LunaTraits< btConvexHullShape >::_bind_dtor(btConvexHullShape* obj) {
	delete obj;
}

const char LunaTraits< btConvexHullShape >::className[] = "btConvexHullShape";
const char LunaTraits< btConvexHullShape >::fullName[] = "btConvexHullShape";
const char LunaTraits< btConvexHullShape >::moduleName[] = "bullet";
const char* LunaTraits< btConvexHullShape >::parents[] = {"bullet.btPolyhedralConvexAabbCachingShape", 0};
const int LunaTraits< btConvexHullShape >::hash = 7640516;
const int LunaTraits< btConvexHullShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConvexHullShape >::methods[] = {
	{"addPoint", &luna_wrapper_btConvexHullShape::_bind_addPoint},
	{"getUnscaledPoints", &luna_wrapper_btConvexHullShape::_bind_getUnscaledPoints},
	{"getPoints", &luna_wrapper_btConvexHullShape::_bind_getPoints},
	{"getScaledPoint", &luna_wrapper_btConvexHullShape::_bind_getScaledPoint},
	{"getNumPoints", &luna_wrapper_btConvexHullShape::_bind_getNumPoints},
	{"localGetSupportingVertex", &luna_wrapper_btConvexHullShape::_bind_localGetSupportingVertex},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexHullShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexHullShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"project", &luna_wrapper_btConvexHullShape::_bind_project},
	{"getName", &luna_wrapper_btConvexHullShape::_bind_getName},
	{"getNumVertices", &luna_wrapper_btConvexHullShape::_bind_getNumVertices},
	{"getNumEdges", &luna_wrapper_btConvexHullShape::_bind_getNumEdges},
	{"getEdge", &luna_wrapper_btConvexHullShape::_bind_getEdge},
	{"getVertex", &luna_wrapper_btConvexHullShape::_bind_getVertex},
	{"getNumPlanes", &luna_wrapper_btConvexHullShape::_bind_getNumPlanes},
	{"getPlane", &luna_wrapper_btConvexHullShape::_bind_getPlane},
	{"isInside", &luna_wrapper_btConvexHullShape::_bind_isInside},
	{"setLocalScaling", &luna_wrapper_btConvexHullShape::_bind_setLocalScaling},
	{"calculateSerializeBufferSize", &luna_wrapper_btConvexHullShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btConvexHullShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConvexHullShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConvexHullShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConvexHullShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getAabbSlow", &luna_wrapper_btConvexHullShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btConvexHullShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btConvexHullShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConvexHullShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConvexHullShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConvexHullShape::_bind_base_getPreferredPenetrationDirection},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btConvexHullShape::_bind_base_initializePolyhedralFeatures},
	{"base_calculateLocalInertia", &luna_wrapper_btConvexHullShape::_bind_base_calculateLocalInertia},
	{"base_getAabb", &luna_wrapper_btConvexHullShape::_bind_base_getAabb},
	{"base_localGetSupportingVertex", &luna_wrapper_btConvexHullShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexHullShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexHullShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_project", &luna_wrapper_btConvexHullShape::_bind_base_project},
	{"base_getName", &luna_wrapper_btConvexHullShape::_bind_base_getName},
	{"base_getNumVertices", &luna_wrapper_btConvexHullShape::_bind_base_getNumVertices},
	{"base_getNumEdges", &luna_wrapper_btConvexHullShape::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btConvexHullShape::_bind_base_getEdge},
	{"base_getVertex", &luna_wrapper_btConvexHullShape::_bind_base_getVertex},
	{"base_getNumPlanes", &luna_wrapper_btConvexHullShape::_bind_base_getNumPlanes},
	{"base_getPlane", &luna_wrapper_btConvexHullShape::_bind_base_getPlane},
	{"base_isInside", &luna_wrapper_btConvexHullShape::_bind_base_isInside},
	{"base_setLocalScaling", &luna_wrapper_btConvexHullShape::_bind_base_setLocalScaling},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConvexHullShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btConvexHullShape::_bind___eq},
	{"getTable", &luna_wrapper_btConvexHullShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexHullShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConvexHullShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexHullShape >::enumValues[] = {
	{0,0}
};


