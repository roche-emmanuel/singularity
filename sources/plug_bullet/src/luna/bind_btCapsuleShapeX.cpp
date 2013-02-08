#include <plug_common.h>

#include <luna/wrappers/wrapper_btCapsuleShapeX.h>

class luna_wrapper_btCapsuleShapeX {
public:
	typedef Luna< btCapsuleShapeX > luna_t;

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

		btCapsuleShapeX* self= (btCapsuleShapeX*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCapsuleShapeX >::push(L,self,false);
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
		//btCapsuleShapeX* ptr= dynamic_cast< btCapsuleShapeX* >(Luna< btCollisionShape >::check(L,1));
		btCapsuleShapeX* ptr= luna_caster< btCollisionShape, btCapsuleShapeX >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCapsuleShapeX >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getName(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCapsuleShapeX::btCapsuleShapeX(float radius, float height)
	static btCapsuleShapeX* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCapsuleShapeX::btCapsuleShapeX(float radius, float height) function, expected prototype:\nbtCapsuleShapeX::btCapsuleShapeX(float radius, float height)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,1);
		float height=(float)lua_tonumber(L,2);

		return new btCapsuleShapeX(radius, height);
	}

	// btCapsuleShapeX::btCapsuleShapeX(lua_Table * data, float radius, float height)
	static btCapsuleShapeX* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCapsuleShapeX::btCapsuleShapeX(lua_Table * data, float radius, float height) function, expected prototype:\nbtCapsuleShapeX::btCapsuleShapeX(lua_Table * data, float radius, float height)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);

		return new wrapper_btCapsuleShapeX(L,NULL, radius, height);
	}

	// Overload binder for btCapsuleShapeX::btCapsuleShapeX
	static btCapsuleShapeX* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCapsuleShapeX, cannot match any of the overloads for function btCapsuleShapeX:\n  btCapsuleShapeX(float, float)\n  btCapsuleShapeX(lua_Table *, float, float)\n");
		return NULL;
	}


	// Function binds:
	// const char * btCapsuleShapeX::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btCapsuleShapeX::getName() const function, expected prototype:\nconst char * btCapsuleShapeX::getName() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btCapsuleShapeX::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btCapsuleShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btCapsuleShapeX::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btCapsuleShapeX::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::getBoundingSphere(center, radius);

		return 0;
	}

	// float btCapsuleShapeX::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCapsuleShapeX::base_getAngularMotionDisc() const function, expected prototype:\nfloat btCapsuleShapeX::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCapsuleShapeX::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCapsuleShapeX::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCapsuleShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCapsuleShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btCapsuleShapeX::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCapsuleShapeX::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCapsuleShapeX::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCapsuleShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btCapsuleShapeX::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btCapsuleShapeX::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btCapsuleShapeX::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btCapsuleShapeX::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCapsuleShapeX::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btCapsuleShapeX::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btCapsuleShapeX::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCapsuleShapeX::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btCapsuleShapeX::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCapsuleShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCapsuleShapeX::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCapsuleShapeX::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCapsuleShapeX::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCapsuleShapeX::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btCapsuleShapeX::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCapsuleShapeX::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btCapsuleShapeX::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCapsuleShapeX::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btCapsuleShapeX::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btCapsuleShapeX::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCapsuleShapeX::base_getMargin() const function, expected prototype:\nfloat btCapsuleShapeX::base_getMargin() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCapsuleShapeX::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCapsuleShapeX::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCapsuleShapeX::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCapsuleShapeX::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btCapsuleShapeX::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCapsuleShapeX::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btCapsuleShapeX::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCapsuleShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btCapsuleShapeX::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btCapsuleShapeX::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btCapsuleShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btCapsuleShapeX::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCapsuleShapeX::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// btVector3 btCapsuleShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCapsuleShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btCapsuleShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btCapsuleShapeX::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCapsuleShapeX::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btCapsuleShapeX::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCapsuleShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btCapsuleShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btCapsuleShapeX::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btCapsuleShapeX::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::setMargin(collisionMargin);

		return 0;
	}

	// void btCapsuleShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCapsuleShapeX::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCapsuleShapeX::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCapsuleShapeX::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCapsuleShapeX::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btCapsuleShapeX::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeX::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btCapsuleShapeX::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btCapsuleShapeX::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeX::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCapsuleShapeX::setLocalScaling(scaling);

		return 0;
	}

	// btVector3 btCapsuleShapeX::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCapsuleShapeX::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btCapsuleShapeX::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCapsuleShapeX::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btCapsuleShapeX::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btCapsuleShapeX::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCapsuleShapeX::base_calculateSerializeBufferSize() const function, expected prototype:\nint btCapsuleShapeX::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCapsuleShapeX::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btCapsuleShapeX::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btCapsuleShapeX::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btCapsuleShapeX::base_getName() const function, expected prototype:\nconst char * btCapsuleShapeX::base_getName() const\nClass arguments details:\n");
		}


		btCapsuleShapeX* self=Luna< btCollisionShape >::checkSubType< btCapsuleShapeX >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btCapsuleShapeX::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btCapsuleShapeX::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btCapsuleShapeX* LunaTraits< btCapsuleShapeX >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCapsuleShapeX::_bind_ctor(L);
}

void LunaTraits< btCapsuleShapeX >::_bind_dtor(btCapsuleShapeX* obj) {
	delete obj;
}

const char LunaTraits< btCapsuleShapeX >::className[] = "btCapsuleShapeX";
const char LunaTraits< btCapsuleShapeX >::fullName[] = "btCapsuleShapeX";
const char LunaTraits< btCapsuleShapeX >::moduleName[] = "bullet";
const char* LunaTraits< btCapsuleShapeX >::parents[] = {"bullet.btCapsuleShape", 0};
const int LunaTraits< btCapsuleShapeX >::hash = 65766482;
const int LunaTraits< btCapsuleShapeX >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btCapsuleShapeX >::methods[] = {
	{"getName", &luna_wrapper_btCapsuleShapeX::_bind_getName},
	{"base_getBoundingSphere", &luna_wrapper_btCapsuleShapeX::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btCapsuleShapeX::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btCapsuleShapeX::_bind_base_getContactBreakingThreshold},
	{"base_project", &luna_wrapper_btCapsuleShapeX::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btCapsuleShapeX::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btCapsuleShapeX::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btCapsuleShapeX::_bind_base_getLocalScaling},
	{"base_getMargin", &luna_wrapper_btCapsuleShapeX::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btCapsuleShapeX::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btCapsuleShapeX::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateLocalInertia", &luna_wrapper_btCapsuleShapeX::_bind_base_calculateLocalInertia},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btCapsuleShapeX::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btCapsuleShapeX::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_setMargin", &luna_wrapper_btCapsuleShapeX::_bind_base_setMargin},
	{"base_getAabb", &luna_wrapper_btCapsuleShapeX::_bind_base_getAabb},
	{"base_setLocalScaling", &luna_wrapper_btCapsuleShapeX::_bind_base_setLocalScaling},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btCapsuleShapeX::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btCapsuleShapeX::_bind_base_calculateSerializeBufferSize},
	{"base_getName", &luna_wrapper_btCapsuleShapeX::_bind_base_getName},
	{"__eq", &luna_wrapper_btCapsuleShapeX::_bind___eq},
	{"fromVoid", &luna_wrapper_btCapsuleShapeX::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCapsuleShapeX::_bind_asVoid},
	{"getTable", &luna_wrapper_btCapsuleShapeX::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCapsuleShapeX >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btCapsuleShapeX::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btCapsuleShapeX >::enumValues[] = {
	{0,0}
};


