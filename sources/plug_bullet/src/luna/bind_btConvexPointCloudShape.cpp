#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexPointCloudShape.h>

class luna_wrapper_btConvexPointCloudShape {
public:
	typedef Luna< btConvexPointCloudShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConvexPointCloudShape* self= (btConvexPointCloudShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexPointCloudShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexPointCloudShape* ptr= dynamic_cast< btConvexPointCloudShape* >(Luna< btCollisionShape >::check(L,1));
		btConvexPointCloudShape* ptr= luna_caster< btCollisionShape, btConvexPointCloudShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexPointCloudShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91544891)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btVector3 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btVector3 >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPoints(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
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

	inline static bool _lg_typecheck_getNumPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaledPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_initializePolyhedralFeatures(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexPointCloudShape::btConvexPointCloudShape()
	static btConvexPointCloudShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPointCloudShape::btConvexPointCloudShape() function, expected prototype:\nbtConvexPointCloudShape::btConvexPointCloudShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btConvexPointCloudShape();
	}

	// btConvexPointCloudShape::btConvexPointCloudShape(btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true)
	static btConvexPointCloudShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPointCloudShape::btConvexPointCloudShape(btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true) function, expected prototype:\nbtConvexPointCloudShape::btConvexPointCloudShape(btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		btVector3* points=(Luna< btVector3 >::check(L,1));
		int numPoints=(int)lua_tointeger(L,2);
		const btVector3* localScaling_ptr=(Luna< btVector3 >::check(L,3));
		if( !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btConvexPointCloudShape::btConvexPointCloudShape function");
		}
		const btVector3 & localScaling=*localScaling_ptr;
		bool computeAabb=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new btConvexPointCloudShape(points, numPoints, localScaling, computeAabb);
	}

	// btConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data)
	static btConvexPointCloudShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data) function, expected prototype:\nbtConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btConvexPointCloudShape(L,NULL);
	}

	// btConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data, btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true)
	static btConvexPointCloudShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data, btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true) function, expected prototype:\nbtConvexPointCloudShape::btConvexPointCloudShape(lua_Table * data, btVector3 * points, int numPoints, const btVector3 & localScaling, bool computeAabb = true)\nClass arguments details:\narg 2 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		btVector3* points=(Luna< btVector3 >::check(L,2));
		int numPoints=(int)lua_tointeger(L,3);
		const btVector3* localScaling_ptr=(Luna< btVector3 >::check(L,4));
		if( !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btConvexPointCloudShape::btConvexPointCloudShape function");
		}
		const btVector3 & localScaling=*localScaling_ptr;
		bool computeAabb=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		return new wrapper_btConvexPointCloudShape(L,NULL, points, numPoints, localScaling, computeAabb);
	}

	// Overload binder for btConvexPointCloudShape::btConvexPointCloudShape
	static btConvexPointCloudShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btConvexPointCloudShape, cannot match any of the overloads for function btConvexPointCloudShape:\n  btConvexPointCloudShape()\n  btConvexPointCloudShape(btVector3 *, int, const btVector3 &, bool)\n  btConvexPointCloudShape(lua_Table *)\n  btConvexPointCloudShape(lua_Table *, btVector3 *, int, const btVector3 &, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexPointCloudShape::setPoints(btVector3 * points, int numPoints, bool computeAabb = true, const btVector3 & localScaling = btVector3 (1.f, 1.f, 1.f))
	static int _bind_setPoints(lua_State *L) {
		if (!_lg_typecheck_setPoints(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::setPoints(btVector3 * points, int numPoints, bool computeAabb = true, const btVector3 & localScaling = btVector3 (1.f, 1.f, 1.f)) function, expected prototype:\nvoid btConvexPointCloudShape::setPoints(btVector3 * points, int numPoints, bool computeAabb = true, const btVector3 & localScaling = btVector3 (1.f, 1.f, 1.f))\nClass arguments details:\narg 1 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		btVector3* points=(Luna< btVector3 >::check(L,2));
		int numPoints=(int)lua_tointeger(L,3);
		bool computeAabb=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		const btVector3* localScaling_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btConvexPointCloudShape::setPoints function");
		}
		const btVector3 & localScaling=luatop>4 ? *localScaling_ptr : (const btVector3&)btVector3 (1.f, 1.f, 1.f);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::setPoints(btVector3 *, int, bool, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPoints(points, numPoints, computeAabb, localScaling);

		return 0;
	}

	// btVector3 * btConvexPointCloudShape::getUnscaledPoints()
	static int _bind_getUnscaledPoints_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPoints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 * btConvexPointCloudShape::getUnscaledPoints() function, expected prototype:\nbtVector3 * btConvexPointCloudShape::getUnscaledPoints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 * btConvexPointCloudShape::getUnscaledPoints(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 * lret = self->getUnscaledPoints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 * btConvexPointCloudShape::getUnscaledPoints() const
	static int _bind_getUnscaledPoints_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPoints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 * btConvexPointCloudShape::getUnscaledPoints() const function, expected prototype:\nconst btVector3 * btConvexPointCloudShape::getUnscaledPoints() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 * btConvexPointCloudShape::getUnscaledPoints() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3 * lret = self->getUnscaledPoints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btConvexPointCloudShape::getUnscaledPoints
	static int _bind_getUnscaledPoints(lua_State *L) {
		if (_lg_typecheck_getUnscaledPoints_overload_1(L)) return _bind_getUnscaledPoints_overload_1(L);
		if (_lg_typecheck_getUnscaledPoints_overload_2(L)) return _bind_getUnscaledPoints_overload_2(L);

		luaL_error(L, "error in function getUnscaledPoints, cannot match any of the overloads for function getUnscaledPoints:\n  getUnscaledPoints()\n  getUnscaledPoints()\n");
		return 0;
	}

	// int btConvexPointCloudShape::getNumPoints() const
	static int _bind_getNumPoints(lua_State *L) {
		if (!_lg_typecheck_getNumPoints(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::getNumPoints() const function, expected prototype:\nint btConvexPointCloudShape::getNumPoints() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::getNumPoints() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumPoints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexPointCloudShape::getScaledPoint(int index) const
	static int _bind_getScaledPoint(lua_State *L) {
		if (!_lg_typecheck_getScaledPoint(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::getScaledPoint(int index) const function, expected prototype:\nbtVector3 btConvexPointCloudShape::getScaledPoint(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::getScaledPoint(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->getScaledPoint(index);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexPointCloudShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexPointCloudShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexPointCloudShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexPointCloudShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btConvexPointCloudShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btConvexPointCloudShape::getName() const function, expected prototype:\nconst char * btConvexPointCloudShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btConvexPointCloudShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexPointCloudShape::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::getNumVertices() const function, expected prototype:\nint btConvexPointCloudShape::getNumVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::getNumVertices() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexPointCloudShape::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::getNumEdges() const function, expected prototype:\nint btConvexPointCloudShape::getNumEdges() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::getNumEdges() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPointCloudShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexPointCloudShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexPointCloudShape::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexPointCloudShape::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexPointCloudShape::getVertex(int i, btVector3 & vtx) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexPointCloudShape::getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexPointCloudShape::getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::getVertex(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getVertex(i, vtx);

		return 0;
	}

	// int btConvexPointCloudShape::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::getNumPlanes() const function, expected prototype:\nint btConvexPointCloudShape::getNumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::getNumPlanes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPointCloudShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexPointCloudShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexPointCloudShape::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexPointCloudShape::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexPointCloudShape::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool btConvexPointCloudShape::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexPointCloudShape::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexPointCloudShape::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btConvexPointCloudShape::isInside(const btVector3 &, float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexPointCloudShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexPointCloudShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexPointCloudShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// void btConvexPointCloudShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConvexPointCloudShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btConvexPointCloudShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btConvexPointCloudShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConvexPointCloudShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConvexPointCloudShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btConvexPointCloudShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexPointCloudShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btConvexPointCloudShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConvexPointCloudShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConvexPointCloudShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btConvexPointCloudShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexPointCloudShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConvexPointCloudShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btConvexPointCloudShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexPointCloudShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btConvexPointCloudShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexPointCloudShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexPointCloudShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::project(trans, dir, min, max);

		lua_pushnumber(L,min);
		lua_pushnumber(L,max);
		return 2;
	}

	// void btConvexPointCloudShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexPointCloudShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexPointCloudShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexPointCloudShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btConvexPointCloudShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexPointCloudShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexPointCloudShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexPointCloudShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btConvexPointCloudShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexPointCloudShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_setMargin(float margin) function, expected prototype:\nvoid btConvexPointCloudShape::base_setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::setMargin(margin);

		return 0;
	}

	// float btConvexPointCloudShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btConvexPointCloudShape::base_getMargin() const function, expected prototype:\nfloat btConvexPointCloudShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConvexPointCloudShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btConvexPointCloudShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexPointCloudShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexPointCloudShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btConvexPointCloudShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPointCloudShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexPointCloudShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConvexPointCloudShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConvexPointCloudShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btConvexPointCloudShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btConvexPointCloudShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luaL_error(L, "luna typecheck failed in bool btConvexPointCloudShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btConvexPointCloudShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btConvexPointCloudShape::base_initializePolyhedralFeatures(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btConvexPointCloudShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexPointCloudShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btConvexPointCloudShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btConvexPointCloudShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btConvexPointCloudShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexPointCloudShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexPointCloudShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexPointCloudShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// btVector3 btConvexPointCloudShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexPointCloudShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexPointCloudShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btConvexPointCloudShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexPointCloudShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPointCloudShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexPointCloudShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexPointCloudShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btConvexPointCloudShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexPointCloudShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexPointCloudShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btConvexPointCloudShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btConvexPointCloudShape::base_getName() const function, expected prototype:\nconst char * btConvexPointCloudShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btConvexPointCloudShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btConvexPointCloudShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexPointCloudShape::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::base_getNumVertices() const function, expected prototype:\nint btConvexPointCloudShape::base_getNumVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::base_getNumVertices() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btConvexPointCloudShape::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexPointCloudShape::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::base_getNumEdges() const function, expected prototype:\nint btConvexPointCloudShape::base_getNumEdges() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::base_getNumEdges() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btConvexPointCloudShape::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPointCloudShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexPointCloudShape::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexPointCloudShape::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexPointCloudShape::base_getVertex(int i, btVector3 & vtx) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexPointCloudShape::base_getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getVertex(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getVertex(i, vtx);

		return 0;
	}

	// int btConvexPointCloudShape::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPointCloudShape::base_getNumPlanes() const function, expected prototype:\nint btConvexPointCloudShape::base_getNumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPointCloudShape::base_getNumPlanes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btConvexPointCloudShape::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPointCloudShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexPointCloudShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexPointCloudShape::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexPointCloudShape::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexPointCloudShape::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool btConvexPointCloudShape::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexPointCloudShape::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexPointCloudShape::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btConvexPointCloudShape::base_isInside(const btVector3 &, float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btConvexPointCloudShape::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexPointCloudShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPointCloudShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexPointCloudShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexPointCloudShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexPointCloudShape* self=Luna< btCollisionShape >::checkSubType< btConvexPointCloudShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPointCloudShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btConvexPointCloudShape::setLocalScaling(scaling);

		return 0;
	}


	// Operator binds:

};

btConvexPointCloudShape* LunaTraits< btConvexPointCloudShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexPointCloudShape::_bind_ctor(L);
}

void LunaTraits< btConvexPointCloudShape >::_bind_dtor(btConvexPointCloudShape* obj) {
	delete obj;
}

const char LunaTraits< btConvexPointCloudShape >::className[] = "btConvexPointCloudShape";
const char LunaTraits< btConvexPointCloudShape >::fullName[] = "btConvexPointCloudShape";
const char LunaTraits< btConvexPointCloudShape >::moduleName[] = "bullet";
const char* LunaTraits< btConvexPointCloudShape >::parents[] = {"bullet.btPolyhedralConvexAabbCachingShape", 0};
const int LunaTraits< btConvexPointCloudShape >::hash = 14031142;
const int LunaTraits< btConvexPointCloudShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConvexPointCloudShape >::methods[] = {
	{"setPoints", &luna_wrapper_btConvexPointCloudShape::_bind_setPoints},
	{"getUnscaledPoints", &luna_wrapper_btConvexPointCloudShape::_bind_getUnscaledPoints},
	{"getNumPoints", &luna_wrapper_btConvexPointCloudShape::_bind_getNumPoints},
	{"getScaledPoint", &luna_wrapper_btConvexPointCloudShape::_bind_getScaledPoint},
	{"localGetSupportingVertex", &luna_wrapper_btConvexPointCloudShape::_bind_localGetSupportingVertex},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexPointCloudShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexPointCloudShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"getName", &luna_wrapper_btConvexPointCloudShape::_bind_getName},
	{"getNumVertices", &luna_wrapper_btConvexPointCloudShape::_bind_getNumVertices},
	{"getNumEdges", &luna_wrapper_btConvexPointCloudShape::_bind_getNumEdges},
	{"getEdge", &luna_wrapper_btConvexPointCloudShape::_bind_getEdge},
	{"getVertex", &luna_wrapper_btConvexPointCloudShape::_bind_getVertex},
	{"getNumPlanes", &luna_wrapper_btConvexPointCloudShape::_bind_getNumPlanes},
	{"getPlane", &luna_wrapper_btConvexPointCloudShape::_bind_getPlane},
	{"isInside", &luna_wrapper_btConvexPointCloudShape::_bind_isInside},
	{"setLocalScaling", &luna_wrapper_btConvexPointCloudShape::_bind_setLocalScaling},
	{"base_getBoundingSphere", &luna_wrapper_btConvexPointCloudShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConvexPointCloudShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConvexPointCloudShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConvexPointCloudShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btConvexPointCloudShape::_bind_base_project},
	{"base_getAabbSlow", &luna_wrapper_btConvexPointCloudShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btConvexPointCloudShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btConvexPointCloudShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConvexPointCloudShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConvexPointCloudShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConvexPointCloudShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConvexPointCloudShape::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btConvexPointCloudShape::_bind_base_initializePolyhedralFeatures},
	{"base_calculateLocalInertia", &luna_wrapper_btConvexPointCloudShape::_bind_base_calculateLocalInertia},
	{"base_getAabb", &luna_wrapper_btConvexPointCloudShape::_bind_base_getAabb},
	{"base_localGetSupportingVertex", &luna_wrapper_btConvexPointCloudShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexPointCloudShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexPointCloudShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getName", &luna_wrapper_btConvexPointCloudShape::_bind_base_getName},
	{"base_getNumVertices", &luna_wrapper_btConvexPointCloudShape::_bind_base_getNumVertices},
	{"base_getNumEdges", &luna_wrapper_btConvexPointCloudShape::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btConvexPointCloudShape::_bind_base_getEdge},
	{"base_getVertex", &luna_wrapper_btConvexPointCloudShape::_bind_base_getVertex},
	{"base_getNumPlanes", &luna_wrapper_btConvexPointCloudShape::_bind_base_getNumPlanes},
	{"base_getPlane", &luna_wrapper_btConvexPointCloudShape::_bind_base_getPlane},
	{"base_isInside", &luna_wrapper_btConvexPointCloudShape::_bind_base_isInside},
	{"base_setLocalScaling", &luna_wrapper_btConvexPointCloudShape::_bind_base_setLocalScaling},
	{"fromVoid", &luna_wrapper_btConvexPointCloudShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexPointCloudShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexPointCloudShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexPointCloudShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConvexPointCloudShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexPointCloudShape >::enumValues[] = {
	{0,0}
};


