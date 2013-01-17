#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexInternalAabbCachingShape.h>

class luna_wrapper_btConvexInternalAabbCachingShape {
public:
	typedef Luna< btConvexInternalAabbCachingShape > luna_t;

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
		//btConvexInternalAabbCachingShape* ptr= dynamic_cast< btConvexInternalAabbCachingShape* >(Luna< btCollisionShape >::check(L,1));
		btConvexInternalAabbCachingShape* ptr= luna_caster< btCollisionShape, btConvexInternalAabbCachingShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexInternalAabbCachingShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
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

	// Function binds:
	// void btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexInternalAabbCachingShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalAabbCachingShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::recalcLocalAabb()
	static int _bind_recalcLocalAabb(lua_State *L) {
		if (!_lg_typecheck_recalcLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::recalcLocalAabb() function, expected prototype:\nvoid btConvexInternalAabbCachingShape::recalcLocalAabb()\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::recalcLocalAabb(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->recalcLocalAabb();

		return 0;
	}

	// void btConvexInternalAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConvexInternalAabbCachingShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btConvexInternalAabbCachingShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalAabbCachingShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConvexInternalAabbCachingShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalAabbCachingShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalAabbCachingShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexInternalAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConvexInternalAabbCachingShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalAabbCachingShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalAabbCachingShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexInternalAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexInternalAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConvexInternalAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexInternalAabbCachingShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexInternalAabbCachingShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexInternalAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexInternalAabbCachingShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexInternalAabbCachingShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btConvexInternalAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexInternalAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexInternalAabbCachingShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexInternalAabbCachingShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexInternalAabbCachingShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexInternalAabbCachingShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexInternalAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalAabbCachingShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btConvexInternalAabbCachingShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexInternalAabbCachingShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexInternalAabbCachingShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexInternalAabbCachingShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btConvexInternalAabbCachingShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexInternalAabbCachingShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_setMargin(float margin) function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::setMargin(margin);

		return 0;
	}

	// float btConvexInternalAabbCachingShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalAabbCachingShape::base_getMargin() const function, expected prototype:\nfloat btConvexInternalAabbCachingShape::base_getMargin() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalAabbCachingShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalAabbCachingShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexInternalAabbCachingShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalAabbCachingShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexInternalAabbCachingShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalAabbCachingShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexInternalAabbCachingShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexInternalAabbCachingShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConvexInternalAabbCachingShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalAabbCachingShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConvexInternalAabbCachingShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalAabbCachingShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexInternalAabbCachingShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalAabbCachingShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexInternalAabbCachingShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::setLocalScaling(scaling);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalAabbCachingShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalAabbCachingShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btConvexInternalAabbCachingShape* LunaTraits< btConvexInternalAabbCachingShape >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	// void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	// const char * btCollisionShape::getName() const
}

void LunaTraits< btConvexInternalAabbCachingShape >::_bind_dtor(btConvexInternalAabbCachingShape* obj) {
	delete obj;
}

const char LunaTraits< btConvexInternalAabbCachingShape >::className[] = "btConvexInternalAabbCachingShape";
const char LunaTraits< btConvexInternalAabbCachingShape >::fullName[] = "btConvexInternalAabbCachingShape";
const char LunaTraits< btConvexInternalAabbCachingShape >::moduleName[] = "bullet";
const char* LunaTraits< btConvexInternalAabbCachingShape >::parents[] = {"bullet.btConvexInternalShape", 0};
const int LunaTraits< btConvexInternalAabbCachingShape >::hash = 35423948;
const int LunaTraits< btConvexInternalAabbCachingShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConvexInternalAabbCachingShape >::methods[] = {
	{"setLocalScaling", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_setLocalScaling},
	{"getAabb", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_getAabb},
	{"recalcLocalAabb", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_recalcLocalAabb},
	{"base_getBoundingSphere", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_calculateSerializeBufferSize},
	{"base_setLocalScaling", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_setLocalScaling},
	{"base_getAabb", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_base_getAabb},
	{"__eq", &luna_wrapper_btConvexInternalAabbCachingShape::_bind___eq},
	{"getTable", &luna_wrapper_btConvexInternalAabbCachingShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexInternalAabbCachingShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConvexInternalAabbCachingShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexInternalAabbCachingShape >::enumValues[] = {
	{0,0}
};


