#include <plug_common.h>

#include <luna/wrappers/wrapper_btUniformScalingShape.h>

class luna_wrapper_btUniformScalingShape {
public:
	typedef Luna< btUniformScalingShape > luna_t;

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

		btUniformScalingShape* self= (btUniformScalingShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btUniformScalingShape >::push(L,self,false);
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
		//btUniformScalingShape* ptr= dynamic_cast< btUniformScalingShape* >(Luna< btCollisionShape >::check(L,1));
		btUniformScalingShape* ptr= luna_caster< btCollisionShape, btUniformScalingShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btUniformScalingShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_localGetSupportingVertex(lua_State *L) {
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

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformScalingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPreferredPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreferredPenetrationDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
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

	inline static bool _lg_typecheck_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btUniformScalingShape::btUniformScalingShape(btConvexShape * convexChildShape, float uniformScalingFactor)
	static btUniformScalingShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btUniformScalingShape::btUniformScalingShape(btConvexShape * convexChildShape, float uniformScalingFactor) function, expected prototype:\nbtUniformScalingShape::btUniformScalingShape(btConvexShape * convexChildShape, float uniformScalingFactor)\nClass arguments details:\narg 1 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		btConvexShape* convexChildShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		float uniformScalingFactor=(float)lua_tonumber(L,2);

		return new btUniformScalingShape(convexChildShape, uniformScalingFactor);
	}

	// btUniformScalingShape::btUniformScalingShape(lua_Table * data, btConvexShape * convexChildShape, float uniformScalingFactor)
	static btUniformScalingShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btUniformScalingShape::btUniformScalingShape(lua_Table * data, btConvexShape * convexChildShape, float uniformScalingFactor) function, expected prototype:\nbtUniformScalingShape::btUniformScalingShape(lua_Table * data, btConvexShape * convexChildShape, float uniformScalingFactor)\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		btConvexShape* convexChildShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		float uniformScalingFactor=(float)lua_tonumber(L,3);

		return new wrapper_btUniformScalingShape(L,NULL, convexChildShape, uniformScalingFactor);
	}

	// Overload binder for btUniformScalingShape::btUniformScalingShape
	static btUniformScalingShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btUniformScalingShape, cannot match any of the overloads for function btUniformScalingShape:\n  btUniformScalingShape(btConvexShape *, float)\n  btUniformScalingShape(lua_Table *, btConvexShape *, float)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btUniformScalingShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btUniformScalingShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btUniformScalingShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btUniformScalingShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btUniformScalingShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btUniformScalingShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btUniformScalingShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btUniformScalingShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btUniformScalingShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btUniformScalingShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btUniformScalingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btUniformScalingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btUniformScalingShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btUniformScalingShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btUniformScalingShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// float btUniformScalingShape::getUniformScalingFactor() const
	static int _bind_getUniformScalingFactor(lua_State *L) {
		if (!_lg_typecheck_getUniformScalingFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btUniformScalingShape::getUniformScalingFactor() const function, expected prototype:\nfloat btUniformScalingShape::getUniformScalingFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btUniformScalingShape::getUniformScalingFactor() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getUniformScalingFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btConvexShape * btUniformScalingShape::getChildShape()
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btConvexShape * btUniformScalingShape::getChildShape() function, expected prototype:\nbtConvexShape * btUniformScalingShape::getChildShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btConvexShape * btUniformScalingShape::getChildShape(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btConvexShape * lret = self->getChildShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexShape >::push(L,lret,false);

		return 1;
	}

	// const btConvexShape * btUniformScalingShape::getChildShape() const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btConvexShape * btUniformScalingShape::getChildShape() const function, expected prototype:\nconst btConvexShape * btUniformScalingShape::getChildShape() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btConvexShape * btUniformScalingShape::getChildShape() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexShape * lret = self->getChildShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btUniformScalingShape::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape()\n  getChildShape()\n");
		return 0;
	}

	// const char * btUniformScalingShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btUniformScalingShape::getName() const function, expected prototype:\nconst char * btUniformScalingShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btUniformScalingShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btUniformScalingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btUniformScalingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btUniformScalingShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btUniformScalingShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btUniformScalingShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btUniformScalingShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_getAabbSlow(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btUniformScalingShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btUniformScalingShape::getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btUniformScalingShape::getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btUniformScalingShape::getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btUniformScalingShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btUniformScalingShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btUniformScalingShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btUniformScalingShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniformScalingShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btUniformScalingShape::getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btUniformScalingShape::getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btUniformScalingShape::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::setMargin(float margin) function, expected prototype:\nvoid btUniformScalingShape::setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMargin(margin);

		return 0;
	}

	// float btUniformScalingShape::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btUniformScalingShape::getMargin() const function, expected prototype:\nfloat btUniformScalingShape::getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btUniformScalingShape::getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btUniformScalingShape::getNumPreferredPenetrationDirections() const
	static int _bind_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btUniformScalingShape::getNumPreferredPenetrationDirections() const function, expected prototype:\nint btUniformScalingShape::getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btUniformScalingShape::getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btUniformScalingShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btUniformScalingShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btUniformScalingShape::getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btUniformScalingShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btUniformScalingShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btUniformScalingShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btUniformScalingShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btUniformScalingShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btUniformScalingShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btUniformScalingShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btUniformScalingShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btUniformScalingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btUniformScalingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btUniformScalingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btUniformScalingShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btUniformScalingShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btUniformScalingShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btUniformScalingShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btUniformScalingShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btUniformScalingShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btUniformScalingShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btUniformScalingShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btUniformScalingShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btUniformScalingShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btUniformScalingShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btUniformScalingShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btUniformScalingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btUniformScalingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btUniformScalingShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btUniformScalingShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::project(trans, dir, min, max);

		lua_pushnumber(L,min);
		lua_pushnumber(L,max);
		return 2;
	}

	// btVector3 btUniformScalingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btUniformScalingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btUniformScalingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btUniformScalingShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btUniformScalingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btUniformScalingShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btUniformScalingShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btUniformScalingShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btUniformScalingShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btUniformScalingShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btUniformScalingShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btUniformScalingShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btUniformScalingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btUniformScalingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btUniformScalingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btUniformScalingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btUniformScalingShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btUniformScalingShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btUniformScalingShape::base_getName() const function, expected prototype:\nconst char * btUniformScalingShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btUniformScalingShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btUniformScalingShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btUniformScalingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btUniformScalingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btUniformScalingShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btUniformScalingShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btUniformScalingShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btUniformScalingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btUniformScalingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btUniformScalingShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btUniformScalingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btUniformScalingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btUniformScalingShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btUniformScalingShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btUniformScalingShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btUniformScalingShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniformScalingShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btUniformScalingShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btUniformScalingShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btUniformScalingShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btUniformScalingShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_setMargin(float margin) function, expected prototype:\nvoid btUniformScalingShape::base_setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::setMargin(margin);

		return 0;
	}

	// float btUniformScalingShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btUniformScalingShape::base_getMargin() const function, expected prototype:\nfloat btUniformScalingShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btUniformScalingShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btUniformScalingShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btUniformScalingShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btUniformScalingShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btUniformScalingShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btUniformScalingShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btUniformScalingShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btUniformScalingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btUniformScalingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btUniformScalingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btUniformScalingShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btUniformScalingShape* self=Luna< btCollisionShape >::checkSubType< btUniformScalingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUniformScalingShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btUniformScalingShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}


	// Operator binds:

};

btUniformScalingShape* LunaTraits< btUniformScalingShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btUniformScalingShape::_bind_ctor(L);
}

void LunaTraits< btUniformScalingShape >::_bind_dtor(btUniformScalingShape* obj) {
	delete obj;
}

const char LunaTraits< btUniformScalingShape >::className[] = "btUniformScalingShape";
const char LunaTraits< btUniformScalingShape >::fullName[] = "btUniformScalingShape";
const char LunaTraits< btUniformScalingShape >::moduleName[] = "bullet";
const char* LunaTraits< btUniformScalingShape >::parents[] = {"bullet.btConvexShape", 0};
const int LunaTraits< btUniformScalingShape >::hash = 45695107;
const int LunaTraits< btUniformScalingShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btUniformScalingShape >::methods[] = {
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btUniformScalingShape::_bind_localGetSupportingVertexWithoutMargin},
	{"localGetSupportingVertex", &luna_wrapper_btUniformScalingShape::_bind_localGetSupportingVertex},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btUniformScalingShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"calculateLocalInertia", &luna_wrapper_btUniformScalingShape::_bind_calculateLocalInertia},
	{"getUniformScalingFactor", &luna_wrapper_btUniformScalingShape::_bind_getUniformScalingFactor},
	{"getChildShape", &luna_wrapper_btUniformScalingShape::_bind_getChildShape},
	{"getName", &luna_wrapper_btUniformScalingShape::_bind_getName},
	{"getAabb", &luna_wrapper_btUniformScalingShape::_bind_getAabb},
	{"getAabbSlow", &luna_wrapper_btUniformScalingShape::_bind_getAabbSlow},
	{"setLocalScaling", &luna_wrapper_btUniformScalingShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btUniformScalingShape::_bind_getLocalScaling},
	{"setMargin", &luna_wrapper_btUniformScalingShape::_bind_setMargin},
	{"getMargin", &luna_wrapper_btUniformScalingShape::_bind_getMargin},
	{"getNumPreferredPenetrationDirections", &luna_wrapper_btUniformScalingShape::_bind_getNumPreferredPenetrationDirections},
	{"getPreferredPenetrationDirection", &luna_wrapper_btUniformScalingShape::_bind_getPreferredPenetrationDirection},
	{"base_getBoundingSphere", &luna_wrapper_btUniformScalingShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btUniformScalingShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btUniformScalingShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btUniformScalingShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btUniformScalingShape::_bind_base_calculateSerializeBufferSize},
	{"base_project", &luna_wrapper_btUniformScalingShape::_bind_base_project},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btUniformScalingShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_localGetSupportingVertex", &luna_wrapper_btUniformScalingShape::_bind_base_localGetSupportingVertex},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btUniformScalingShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_calculateLocalInertia", &luna_wrapper_btUniformScalingShape::_bind_base_calculateLocalInertia},
	{"base_getName", &luna_wrapper_btUniformScalingShape::_bind_base_getName},
	{"base_getAabb", &luna_wrapper_btUniformScalingShape::_bind_base_getAabb},
	{"base_getAabbSlow", &luna_wrapper_btUniformScalingShape::_bind_base_getAabbSlow},
	{"base_setLocalScaling", &luna_wrapper_btUniformScalingShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btUniformScalingShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btUniformScalingShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btUniformScalingShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btUniformScalingShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btUniformScalingShape::_bind_base_getPreferredPenetrationDirection},
	{"fromVoid", &luna_wrapper_btUniformScalingShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btUniformScalingShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btUniformScalingShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btUniformScalingShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btUniformScalingShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btUniformScalingShape >::enumValues[] = {
	{0,0}
};


