#include <plug_common.h>

#include <luna/wrappers/wrapper_btCylinderShapeZ.h>

class luna_wrapper_btCylinderShapeZ {
public:
	typedef Luna< btCylinderShapeZ > luna_t;

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

		btCylinderShapeZ* self= (btCylinderShapeZ*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCylinderShapeZ >::push(L,self,false);
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
		//btCylinderShapeZ* ptr= dynamic_cast< btCylinderShapeZ* >(Luna< btCollisionShape >::check(L,1));
		btCylinderShapeZ* ptr= luna_caster< btCollisionShape, btCylinderShapeZ >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCylinderShapeZ >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCylinderShapeZ::btCylinderShapeZ(const btVector3 & halfExtents)
	static btCylinderShapeZ* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btCylinderShapeZ::btCylinderShapeZ(const btVector3 & halfExtents) function, expected prototype:\nbtCylinderShapeZ::btCylinderShapeZ(const btVector3 & halfExtents)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* halfExtents_ptr=(Luna< btVector3 >::check(L,1));
		if( !halfExtents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg halfExtents in btCylinderShapeZ::btCylinderShapeZ function");
		}
		const btVector3 & halfExtents=*halfExtents_ptr;

		return new btCylinderShapeZ(halfExtents);
	}

	// btCylinderShapeZ::btCylinderShapeZ(lua_Table * data, const btVector3 & halfExtents)
	static btCylinderShapeZ* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btCylinderShapeZ::btCylinderShapeZ(lua_Table * data, const btVector3 & halfExtents) function, expected prototype:\nbtCylinderShapeZ::btCylinderShapeZ(lua_Table * data, const btVector3 & halfExtents)\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* halfExtents_ptr=(Luna< btVector3 >::check(L,2));
		if( !halfExtents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg halfExtents in btCylinderShapeZ::btCylinderShapeZ function");
		}
		const btVector3 & halfExtents=*halfExtents_ptr;

		return new wrapper_btCylinderShapeZ(L,NULL, halfExtents);
	}

	// Overload binder for btCylinderShapeZ::btCylinderShapeZ
	static btCylinderShapeZ* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCylinderShapeZ, cannot match any of the overloads for function btCylinderShapeZ:\n  btCylinderShapeZ(const btVector3 &)\n  btCylinderShapeZ(lua_Table *, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btCylinderShapeZ::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btCylinderShapeZ::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btCylinderShapeZ::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btCylinderShapeZ::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btCylinderShapeZ::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btCylinderShapeZ::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btCylinderShapeZ::getName() const function, expected prototype:\nconst char * btCylinderShapeZ::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btCylinderShapeZ::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// float btCylinderShapeZ::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float btCylinderShapeZ::getRadius() const function, expected prototype:\nfloat btCylinderShapeZ::getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCylinderShapeZ::getRadius() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCylinderShapeZ::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btCylinderShapeZ::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btCylinderShapeZ::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btCylinderShapeZ::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btCylinderShapeZ::base_getAngularMotionDisc() const function, expected prototype:\nfloat btCylinderShapeZ::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCylinderShapeZ::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btCylinderShapeZ::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCylinderShapeZ::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btCylinderShapeZ::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btCylinderShapeZ::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCylinderShapeZ::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btCylinderShapeZ::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCylinderShapeZ::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btCylinderShapeZ::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btCylinderShapeZ::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btCylinderShapeZ::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::project(trans, dir, min, max);

		lua_pushnumber(L,min);
		lua_pushnumber(L,max);
		return 2;
	}

	// void btCylinderShapeZ::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCylinderShapeZ::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCylinderShapeZ::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCylinderShapeZ::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCylinderShapeZ::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btCylinderShapeZ::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btCylinderShapeZ::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btCylinderShapeZ::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btCylinderShapeZ::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btCylinderShapeZ::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btCylinderShapeZ::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btCylinderShapeZ::base_getMargin() const function, expected prototype:\nfloat btCylinderShapeZ::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCylinderShapeZ::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btCylinderShapeZ::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCylinderShapeZ::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btCylinderShapeZ::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btCylinderShapeZ::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCylinderShapeZ::base_getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btCylinderShapeZ::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCylinderShapeZ::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btCylinderShapeZ::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btCylinderShapeZ::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btCylinderShapeZ::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCylinderShapeZ::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCylinderShapeZ::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCylinderShapeZ::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCylinderShapeZ::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btCylinderShapeZ::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btCylinderShapeZ::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCylinderShapeZ::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btCylinderShapeZ::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btCylinderShapeZ::base_setMargin(float collisionMargin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::setMargin(collisionMargin);

		return 0;
	}

	// btVector3 btCylinderShapeZ::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btCylinderShapeZ::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btCylinderShapeZ::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btCylinderShapeZ::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btCylinderShapeZ::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btCylinderShapeZ::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btCylinderShapeZ::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btCylinderShapeZ::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btCylinderShapeZ::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btCylinderShapeZ::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btCylinderShapeZ::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCylinderShapeZ::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btCylinderShapeZ::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btCylinderShapeZ::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::setLocalScaling(scaling);

		return 0;
	}

	// int btCylinderShapeZ::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btCylinderShapeZ::base_calculateSerializeBufferSize() const function, expected prototype:\nint btCylinderShapeZ::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCylinderShapeZ::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btCylinderShapeZ::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCylinderShapeZ::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btCylinderShapeZ::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btCylinderShapeZ::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btCylinderShapeZ::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btCylinderShapeZ::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btCylinderShapeZ::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCylinderShapeZ::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeZ::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btCylinderShapeZ::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeZ::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btCylinderShapeZ::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btCylinderShapeZ::base_getName() const function, expected prototype:\nconst char * btCylinderShapeZ::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btCylinderShapeZ::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btCylinderShapeZ::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// float btCylinderShapeZ::base_getRadius() const
	static int _bind_base_getRadius(lua_State *L) {
		if (!_lg_typecheck_base_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float btCylinderShapeZ::base_getRadius() const function, expected prototype:\nfloat btCylinderShapeZ::base_getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeZ* self=Luna< btCollisionShape >::checkSubType< btCylinderShapeZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCylinderShapeZ::base_getRadius() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btCylinderShapeZ::getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCylinderShapeZ* LunaTraits< btCylinderShapeZ >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCylinderShapeZ::_bind_ctor(L);
}

void LunaTraits< btCylinderShapeZ >::_bind_dtor(btCylinderShapeZ* obj) {
	delete obj;
}

const char LunaTraits< btCylinderShapeZ >::className[] = "btCylinderShapeZ";
const char LunaTraits< btCylinderShapeZ >::fullName[] = "btCylinderShapeZ";
const char LunaTraits< btCylinderShapeZ >::moduleName[] = "bullet";
const char* LunaTraits< btCylinderShapeZ >::parents[] = {"bullet.btCylinderShape", 0};
const int LunaTraits< btCylinderShapeZ >::hash = 40363645;
const int LunaTraits< btCylinderShapeZ >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btCylinderShapeZ >::methods[] = {
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btCylinderShapeZ::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btCylinderShapeZ::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"getName", &luna_wrapper_btCylinderShapeZ::_bind_getName},
	{"getRadius", &luna_wrapper_btCylinderShapeZ::_bind_getRadius},
	{"base_getBoundingSphere", &luna_wrapper_btCylinderShapeZ::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btCylinderShapeZ::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btCylinderShapeZ::_bind_base_getContactBreakingThreshold},
	{"base_project", &luna_wrapper_btCylinderShapeZ::_bind_base_project},
	{"base_getAabbSlow", &luna_wrapper_btCylinderShapeZ::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btCylinderShapeZ::_bind_base_getLocalScaling},
	{"base_getMargin", &luna_wrapper_btCylinderShapeZ::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btCylinderShapeZ::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btCylinderShapeZ::_bind_base_getPreferredPenetrationDirection},
	{"base_getAabb", &luna_wrapper_btCylinderShapeZ::_bind_base_getAabb},
	{"base_calculateLocalInertia", &luna_wrapper_btCylinderShapeZ::_bind_base_calculateLocalInertia},
	{"base_setMargin", &luna_wrapper_btCylinderShapeZ::_bind_base_setMargin},
	{"base_localGetSupportingVertex", &luna_wrapper_btCylinderShapeZ::_bind_base_localGetSupportingVertex},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btCylinderShapeZ::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_setLocalScaling", &luna_wrapper_btCylinderShapeZ::_bind_base_setLocalScaling},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btCylinderShapeZ::_bind_base_calculateSerializeBufferSize},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btCylinderShapeZ::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btCylinderShapeZ::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getName", &luna_wrapper_btCylinderShapeZ::_bind_base_getName},
	{"base_getRadius", &luna_wrapper_btCylinderShapeZ::_bind_base_getRadius},
	{"fromVoid", &luna_wrapper_btCylinderShapeZ::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCylinderShapeZ::_bind_asVoid},
	{"getTable", &luna_wrapper_btCylinderShapeZ::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCylinderShapeZ >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btCylinderShapeZ::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btCylinderShapeZ >::enumValues[] = {
	{0,0}
};


