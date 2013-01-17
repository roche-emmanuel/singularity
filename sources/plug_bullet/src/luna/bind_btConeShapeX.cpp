#include <plug_common.h>

#include <luna/wrappers/wrapper_btConeShapeX.h>

class luna_wrapper_btConeShapeX {
public:
	typedef Luna< btConeShapeX > luna_t;

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
		//btConeShapeX* ptr= dynamic_cast< btConeShapeX* >(Luna< btCollisionShape >::check(L,1));
		btConeShapeX* ptr= luna_caster< btCollisionShape, btConeShapeX >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConeShapeX >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAnisotropicRollingFrictionDirection(lua_State *L) {
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

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
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

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConeShapeX::btConeShapeX(float radius, float height)
	static btConeShapeX* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeShapeX::btConeShapeX(float radius, float height) function, expected prototype:\nbtConeShapeX::btConeShapeX(float radius, float height)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,1);
		float height=(float)lua_tonumber(L,2);

		return new btConeShapeX(radius, height);
	}

	// btConeShapeX::btConeShapeX(lua_Table * data, float radius, float height)
	static btConeShapeX* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeShapeX::btConeShapeX(lua_Table * data, float radius, float height) function, expected prototype:\nbtConeShapeX::btConeShapeX(lua_Table * data, float radius, float height)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);

		return new wrapper_btConeShapeX(L,NULL, radius, height);
	}

	// Overload binder for btConeShapeX::btConeShapeX
	static btConeShapeX* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConeShapeX, cannot match any of the overloads for function btConeShapeX:\n  btConeShapeX(float, float)\n  btConeShapeX(lua_Table *, float, float)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btConeShapeX::getAnisotropicRollingFrictionDirection() const
	static int _bind_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConeShapeX::getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConeShapeX::getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConeShapeX::getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConeShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConeShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConeShapeX::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::getBoundingSphere(center, radius);

		return 0;
	}

	// float btConeShapeX::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeShapeX::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConeShapeX::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeShapeX::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConeShapeX::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConeShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeShapeX::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConeShapeX::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btConeShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConeShapeX::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConeShapeX::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::project(trans, dir, min, max);

		return 0;
	}

	// void btConeShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConeShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConeShapeX::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConeShapeX::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConeShapeX::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConeShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConeShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConeShapeX::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConeShapeX::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConeShapeX::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btConeShapeX::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConeShapeX::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConeShapeX::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConeShapeX::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btConeShapeX::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConeShapeX::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_setMargin(float margin) function, expected prototype:\nvoid btConeShapeX::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::setMargin(margin);

		return 0;
	}

	// float btConeShapeX::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeShapeX::base_getMargin() const function, expected prototype:\nfloat btConeShapeX::base_getMargin() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeShapeX::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConeShapeX::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConeShapeX::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeShapeX::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConeShapeX::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeShapeX::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConeShapeX::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConeShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConeShapeX::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConeShapeX::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeShapeX::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConeShapeX::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeShapeX::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConeShapeX::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConeShapeX::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConeShapeX::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConeShapeX::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConeShapeX::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConeShapeX::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConeShapeX::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConeShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConeShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConeShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConeShapeX::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConeShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConeShapeX::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConeShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConeShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btConeShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btConeShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btConeShapeX::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btConeShapeX::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btConeShapeX::base_getName() const function, expected prototype:\nconst char * btConeShapeX::base_getName() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btConeShapeX::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btConeShapeX::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btConeShapeX::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeShapeX::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConeShapeX::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConeShapeX::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeShapeX::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConeShapeX::setLocalScaling(scaling);

		return 0;
	}

	// btVector3 btConeShapeX::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConeShapeX::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConeShapeX::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConeShapeX* self=Luna< btCollisionShape >::checkSubType< btConeShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConeShapeX::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConeShapeX::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

btConeShapeX* LunaTraits< btConeShapeX >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConeShapeX::_bind_ctor(L);
}

void LunaTraits< btConeShapeX >::_bind_dtor(btConeShapeX* obj) {
	delete obj;
}

const char LunaTraits< btConeShapeX >::className[] = "btConeShapeX";
const char LunaTraits< btConeShapeX >::fullName[] = "btConeShapeX";
const char LunaTraits< btConeShapeX >::moduleName[] = "bullet";
const char* LunaTraits< btConeShapeX >::parents[] = {"bullet.btConeShape", 0};
const int LunaTraits< btConeShapeX >::hash = 59546217;
const int LunaTraits< btConeShapeX >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConeShapeX >::methods[] = {
	{"getAnisotropicRollingFrictionDirection", &luna_wrapper_btConeShapeX::_bind_getAnisotropicRollingFrictionDirection},
	{"base_getBoundingSphere", &luna_wrapper_btConeShapeX::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConeShapeX::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConeShapeX::_bind_base_getContactBreakingThreshold},
	{"base_project", &luna_wrapper_btConeShapeX::_bind_base_project},
	{"base_getAabb", &luna_wrapper_btConeShapeX::_bind_base_getAabb},
	{"base_getAabbSlow", &luna_wrapper_btConeShapeX::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btConeShapeX::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btConeShapeX::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConeShapeX::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConeShapeX::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConeShapeX::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConeShapeX::_bind_base_calculateSerializeBufferSize},
	{"base_localGetSupportingVertex", &luna_wrapper_btConeShapeX::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btConeShapeX::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConeShapeX::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_calculateLocalInertia", &luna_wrapper_btConeShapeX::_bind_base_calculateLocalInertia},
	{"base_getName", &luna_wrapper_btConeShapeX::_bind_base_getName},
	{"base_setLocalScaling", &luna_wrapper_btConeShapeX::_bind_base_setLocalScaling},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConeShapeX::_bind_base_getAnisotropicRollingFrictionDirection},
	{"__eq", &luna_wrapper_btConeShapeX::_bind___eq},
	{"getTable", &luna_wrapper_btConeShapeX::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConeShapeX >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConeShapeX::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConeShapeX >::enumValues[] = {
	{0,0}
};

