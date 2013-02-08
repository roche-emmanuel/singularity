#include <plug_common.h>

#include <luna/wrappers/wrapper_btPolyhedralConvexAabbCachingShape.h>

class luna_wrapper_btPolyhedralConvexAabbCachingShape {
public:
	typedef Luna< btPolyhedralConvexAabbCachingShape > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btPolyhedralConvexAabbCachingShape* self= (btPolyhedralConvexAabbCachingShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPolyhedralConvexAabbCachingShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//btPolyhedralConvexAabbCachingShape* ptr= dynamic_cast< btPolyhedralConvexAabbCachingShape* >(Luna< btCollisionShape >::check(L,1));
		btPolyhedralConvexAabbCachingShape* ptr= luna_caster< btCollisionShape, btPolyhedralConvexAabbCachingShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btPolyhedralConvexAabbCachingShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNonvirtualAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_recalcLocalAabb(lua_State *L) {
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

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_initializePolyhedralFeatures(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape(lua_Table * data)
	static btPolyhedralConvexAabbCachingShape* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape(lua_Table * data) function, expected prototype:\nbtPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btPolyhedralConvexAabbCachingShape(L,NULL);
	}


	// Function binds:
	// void btPolyhedralConvexAabbCachingShape::getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const
	static int _bind_getNonvirtualAabb(lua_State *L) {
		if (!_lg_typecheck_getNonvirtualAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btPolyhedralConvexAabbCachingShape::getNonvirtualAabb function");
		}
		const btTransform & trans=*trans_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::getNonvirtualAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::getNonvirtualAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;
		float margin=(float)lua_tonumber(L,5);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::getNonvirtualAabb(const btTransform &, btVector3 &, btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getNonvirtualAabb(trans, aabbMin, aabbMax, margin);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btPolyhedralConvexAabbCachingShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btPolyhedralConvexAabbCachingShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::recalcLocalAabb()
	static int _bind_recalcLocalAabb(lua_State *L) {
		if (!_lg_typecheck_recalcLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::recalcLocalAabb() function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::recalcLocalAabb()\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::recalcLocalAabb(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->recalcLocalAabb();

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btPolyhedralConvexAabbCachingShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btPolyhedralConvexAabbCachingShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPolyhedralConvexAabbCachingShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btPolyhedralConvexAabbCachingShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPolyhedralConvexAabbCachingShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btPolyhedralConvexAabbCachingShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btPolyhedralConvexAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPolyhedralConvexAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btPolyhedralConvexAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPolyhedralConvexAabbCachingShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btPolyhedralConvexAabbCachingShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btPolyhedralConvexAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btPolyhedralConvexAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btPolyhedralConvexAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btPolyhedralConvexAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btPolyhedralConvexAabbCachingShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btPolyhedralConvexAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btPolyhedralConvexAabbCachingShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btPolyhedralConvexAabbCachingShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btPolyhedralConvexAabbCachingShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btPolyhedralConvexAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btPolyhedralConvexAabbCachingShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btPolyhedralConvexAabbCachingShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btPolyhedralConvexAabbCachingShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btPolyhedralConvexAabbCachingShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btPolyhedralConvexAabbCachingShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btPolyhedralConvexAabbCachingShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btPolyhedralConvexAabbCachingShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_setMargin(float margin) function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::setMargin(margin);

		return 0;
	}

	// float btPolyhedralConvexAabbCachingShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPolyhedralConvexAabbCachingShape::base_getMargin() const function, expected prototype:\nfloat btPolyhedralConvexAabbCachingShape::base_getMargin() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPolyhedralConvexAabbCachingShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btPolyhedralConvexAabbCachingShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPolyhedralConvexAabbCachingShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPolyhedralConvexAabbCachingShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btPolyhedralConvexAabbCachingShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPolyhedralConvexAabbCachingShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btPolyhedralConvexAabbCachingShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPolyhedralConvexAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btPolyhedralConvexAabbCachingShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btPolyhedralConvexAabbCachingShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPolyhedralConvexAabbCachingShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btPolyhedralConvexAabbCachingShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPolyhedralConvexAabbCachingShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btPolyhedralConvexAabbCachingShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btPolyhedralConvexAabbCachingShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPolyhedralConvexAabbCachingShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btPolyhedralConvexAabbCachingShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPolyhedralConvexAabbCachingShape::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btPolyhedralConvexAabbCachingShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btPolyhedralConvexAabbCachingShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btPolyhedralConvexAabbCachingShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btPolyhedralConvexAabbCachingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btPolyhedralConvexAabbCachingShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btPolyhedralConvexAabbCachingShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::setLocalScaling(scaling);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btPolyhedralConvexAabbCachingShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btPolyhedralConvexAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btPolyhedralConvexAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btPolyhedralConvexAabbCachingShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btPolyhedralConvexAabbCachingShape* LunaTraits< btPolyhedralConvexAabbCachingShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int btPolyhedralConvexShape::getNumVertices() const
	// int btPolyhedralConvexShape::getNumEdges() const
	// void btPolyhedralConvexShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	// void btPolyhedralConvexShape::getVertex(int i, btVector3 & vtx) const
	// int btPolyhedralConvexShape::getNumPlanes() const
	// void btPolyhedralConvexShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	// bool btPolyhedralConvexShape::isInside(const btVector3 & pt, float tolerance) const
	// const char * btCollisionShape::getName() const
}

void LunaTraits< btPolyhedralConvexAabbCachingShape >::_bind_dtor(btPolyhedralConvexAabbCachingShape* obj) {
	delete obj;
}

const char LunaTraits< btPolyhedralConvexAabbCachingShape >::className[] = "btPolyhedralConvexAabbCachingShape";
const char LunaTraits< btPolyhedralConvexAabbCachingShape >::fullName[] = "btPolyhedralConvexAabbCachingShape";
const char LunaTraits< btPolyhedralConvexAabbCachingShape >::moduleName[] = "bullet";
const char* LunaTraits< btPolyhedralConvexAabbCachingShape >::parents[] = {"bullet.btPolyhedralConvexShape", 0};
const int LunaTraits< btPolyhedralConvexAabbCachingShape >::hash = 40768216;
const int LunaTraits< btPolyhedralConvexAabbCachingShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btPolyhedralConvexAabbCachingShape >::methods[] = {
	{"getNonvirtualAabb", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_getNonvirtualAabb},
	{"setLocalScaling", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_setLocalScaling},
	{"getAabb", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_getAabb},
	{"recalcLocalAabb", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_recalcLocalAabb},
	{"base_getBoundingSphere", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_initializePolyhedralFeatures},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_calculateLocalInertia", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_calculateLocalInertia},
	{"base_setLocalScaling", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_setLocalScaling},
	{"base_getAabb", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_base_getAabb},
	{"__eq", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btPolyhedralConvexAabbCachingShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btPolyhedralConvexAabbCachingShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btPolyhedralConvexAabbCachingShape >::enumValues[] = {
	{0,0}
};


