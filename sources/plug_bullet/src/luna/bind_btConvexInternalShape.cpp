#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexInternalShape.h>

class luna_wrapper_btConvexInternalShape {
public:
	typedef Luna< btConvexInternalShape > luna_t;

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

		btConvexInternalShape* self= (btConvexInternalShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexInternalShape >::push(L,self,false);
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
		//btConvexInternalShape* ptr= dynamic_cast< btConvexInternalShape* >(Luna< btCollisionShape >::check(L,1));
		btConvexInternalShape* ptr= luna_caster< btCollisionShape, btConvexInternalShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexInternalShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImplicitShapeDimensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImplicitShapeDimensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSafeMargin_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSafeMargin_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_getLocalScalingNV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMarginNV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPreferredPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreferredPenetrationDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexInternalShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// const btVector3 & btConvexInternalShape::getImplicitShapeDimensions() const
	static int _bind_getImplicitShapeDimensions(lua_State *L) {
		if (!_lg_typecheck_getImplicitShapeDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexInternalShape::getImplicitShapeDimensions() const function, expected prototype:\nconst btVector3 & btConvexInternalShape::getImplicitShapeDimensions() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexInternalShape::getImplicitShapeDimensions() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getImplicitShapeDimensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexInternalShape::setImplicitShapeDimensions(const btVector3 & dimensions)
	static int _bind_setImplicitShapeDimensions(lua_State *L) {
		if (!_lg_typecheck_setImplicitShapeDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::setImplicitShapeDimensions(const btVector3 & dimensions) function, expected prototype:\nvoid btConvexInternalShape::setImplicitShapeDimensions(const btVector3 & dimensions)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* dimensions_ptr=(Luna< btVector3 >::check(L,2));
		if( !dimensions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dimensions in btConvexInternalShape::setImplicitShapeDimensions function");
		}
		const btVector3 & dimensions=*dimensions_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::setImplicitShapeDimensions(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setImplicitShapeDimensions(dimensions);

		return 0;
	}

	// void btConvexInternalShape::setSafeMargin(float minDimension, float defaultMarginMultiplier = 0.1f)
	static int _bind_setSafeMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_setSafeMargin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::setSafeMargin(float minDimension, float defaultMarginMultiplier = 0.1f) function, expected prototype:\nvoid btConvexInternalShape::setSafeMargin(float minDimension, float defaultMarginMultiplier = 0.1f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float minDimension=(float)lua_tonumber(L,2);
		float defaultMarginMultiplier=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.1f;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::setSafeMargin(float, float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setSafeMargin(minDimension, defaultMarginMultiplier);

		return 0;
	}

	// void btConvexInternalShape::setSafeMargin(const btVector3 & halfExtents, float defaultMarginMultiplier = 0.1f)
	static int _bind_setSafeMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_setSafeMargin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::setSafeMargin(const btVector3 & halfExtents, float defaultMarginMultiplier = 0.1f) function, expected prototype:\nvoid btConvexInternalShape::setSafeMargin(const btVector3 & halfExtents, float defaultMarginMultiplier = 0.1f)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* halfExtents_ptr=(Luna< btVector3 >::check(L,2));
		if( !halfExtents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg halfExtents in btConvexInternalShape::setSafeMargin function");
		}
		const btVector3 & halfExtents=*halfExtents_ptr;
		float defaultMarginMultiplier=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.1f;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::setSafeMargin(const btVector3 &, float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setSafeMargin(halfExtents, defaultMarginMultiplier);

		return 0;
	}

	// Overload binder for btConvexInternalShape::setSafeMargin
	static int _bind_setSafeMargin(lua_State *L) {
		if (_lg_typecheck_setSafeMargin_overload_1(L)) return _bind_setSafeMargin_overload_1(L);
		if (_lg_typecheck_setSafeMargin_overload_2(L)) return _bind_setSafeMargin_overload_2(L);

		luaL_error(L, "error in function setSafeMargin, cannot match any of the overloads for function setSafeMargin:\n  setSafeMargin(float, float)\n  setSafeMargin(const btVector3 &, float)\n");
		return 0;
	}

	// void btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalShape::getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalShape::getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalShape::getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexInternalShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexInternalShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexInternalShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexInternalShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexInternalShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btConvexInternalShape::getLocalScalingNV() const
	static int _bind_getLocalScalingNV(lua_State *L) {
		if (!_lg_typecheck_getLocalScalingNV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexInternalShape::getLocalScalingNV() const function, expected prototype:\nconst btVector3 & btConvexInternalShape::getLocalScalingNV() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexInternalShape::getLocalScalingNV() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScalingNV();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexInternalShape::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::setMargin(float margin) function, expected prototype:\nvoid btConvexInternalShape::setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(margin);

		return 0;
	}

	// float btConvexInternalShape::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShape::getMargin() const function, expected prototype:\nfloat btConvexInternalShape::getMargin() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShape::getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexInternalShape::getMarginNV() const
	static int _bind_getMarginNV(lua_State *L) {
		if (!_lg_typecheck_getMarginNV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShape::getMarginNV() const function, expected prototype:\nfloat btConvexInternalShape::getMarginNV() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShape::getMarginNV() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMarginNV();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	static int _bind_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalShape::getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexInternalShape::getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalShape::getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexInternalShape::getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalShape::calculateSerializeBufferSize() const function, expected prototype:\nint btConvexInternalShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConvexInternalShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConvexInternalShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btConvexInternalShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConvexInternalShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexInternalShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConvexInternalShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexInternalShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexInternalShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConvexInternalShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexInternalShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexInternalShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexInternalShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btConvexInternalShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexInternalShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexInternalShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btConvexInternalShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexInternalShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexInternalShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexInternalShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexInternalShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexInternalShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexInternalShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexInternalShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexInternalShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexInternalShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btConvexInternalShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexInternalShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexInternalShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexInternalShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btConvexInternalShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexInternalShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_setMargin(float margin) function, expected prototype:\nvoid btConvexInternalShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::setMargin(margin);

		return 0;
	}

	// float btConvexInternalShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShape::base_getMargin() const function, expected prototype:\nfloat btConvexInternalShape::base_getMargin() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexInternalShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexInternalShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexInternalShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexInternalShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexInternalShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexInternalShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexInternalShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConvexInternalShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConvexInternalShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexInternalShape* self=Luna< btCollisionShape >::checkSubType< btConvexInternalShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexInternalShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btConvexInternalShape* LunaTraits< btConvexInternalShape >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	// void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	// const char * btCollisionShape::getName() const
}

void LunaTraits< btConvexInternalShape >::_bind_dtor(btConvexInternalShape* obj) {
	delete obj;
}

const char LunaTraits< btConvexInternalShape >::className[] = "btConvexInternalShape";
const char LunaTraits< btConvexInternalShape >::fullName[] = "btConvexInternalShape";
const char LunaTraits< btConvexInternalShape >::moduleName[] = "bullet";
const char* LunaTraits< btConvexInternalShape >::parents[] = {"bullet.btConvexShape", 0};
const int LunaTraits< btConvexInternalShape >::hash = 25835483;
const int LunaTraits< btConvexInternalShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConvexInternalShape >::methods[] = {
	{"localGetSupportingVertex", &luna_wrapper_btConvexInternalShape::_bind_localGetSupportingVertex},
	{"getImplicitShapeDimensions", &luna_wrapper_btConvexInternalShape::_bind_getImplicitShapeDimensions},
	{"setImplicitShapeDimensions", &luna_wrapper_btConvexInternalShape::_bind_setImplicitShapeDimensions},
	{"setSafeMargin", &luna_wrapper_btConvexInternalShape::_bind_setSafeMargin},
	{"getAabb", &luna_wrapper_btConvexInternalShape::_bind_getAabb},
	{"getAabbSlow", &luna_wrapper_btConvexInternalShape::_bind_getAabbSlow},
	{"setLocalScaling", &luna_wrapper_btConvexInternalShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btConvexInternalShape::_bind_getLocalScaling},
	{"getLocalScalingNV", &luna_wrapper_btConvexInternalShape::_bind_getLocalScalingNV},
	{"setMargin", &luna_wrapper_btConvexInternalShape::_bind_setMargin},
	{"getMargin", &luna_wrapper_btConvexInternalShape::_bind_getMargin},
	{"getMarginNV", &luna_wrapper_btConvexInternalShape::_bind_getMarginNV},
	{"getNumPreferredPenetrationDirections", &luna_wrapper_btConvexInternalShape::_bind_getNumPreferredPenetrationDirections},
	{"getPreferredPenetrationDirection", &luna_wrapper_btConvexInternalShape::_bind_getPreferredPenetrationDirection},
	{"calculateSerializeBufferSize", &luna_wrapper_btConvexInternalShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btConvexInternalShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConvexInternalShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConvexInternalShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConvexInternalShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btConvexInternalShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btConvexInternalShape::_bind_base_localGetSupportingVertex},
	{"base_getAabb", &luna_wrapper_btConvexInternalShape::_bind_base_getAabb},
	{"base_getAabbSlow", &luna_wrapper_btConvexInternalShape::_bind_base_getAabbSlow},
	{"base_setLocalScaling", &luna_wrapper_btConvexInternalShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btConvexInternalShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btConvexInternalShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConvexInternalShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConvexInternalShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConvexInternalShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConvexInternalShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btConvexInternalShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexInternalShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexInternalShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexInternalShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexInternalShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConvexInternalShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexInternalShape >::enumValues[] = {
	{0,0}
};


