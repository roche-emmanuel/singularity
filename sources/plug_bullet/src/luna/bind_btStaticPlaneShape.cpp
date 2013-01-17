#include <plug_common.h>

#include <luna/wrappers/wrapper_btStaticPlaneShape.h>

class luna_wrapper_btStaticPlaneShape {
public:
	typedef Luna< btStaticPlaneShape > luna_t;

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
		//btStaticPlaneShape* ptr= dynamic_cast< btStaticPlaneShape* >(Luna< btCollisionShape >::check(L,1));
		btStaticPlaneShape* ptr= luna_caster< btCollisionShape, btStaticPlaneShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btStaticPlaneShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_getPlaneNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlaneConstant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btStaticPlaneShape::btStaticPlaneShape(const btVector3 & planeNormal, float planeConstant)
	static btStaticPlaneShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStaticPlaneShape::btStaticPlaneShape(const btVector3 & planeNormal, float planeConstant) function, expected prototype:\nbtStaticPlaneShape::btStaticPlaneShape(const btVector3 & planeNormal, float planeConstant)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,1));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btStaticPlaneShape::btStaticPlaneShape function");
		}
		const btVector3 & planeNormal=*planeNormal_ptr;
		float planeConstant=(float)lua_tonumber(L,2);

		return new btStaticPlaneShape(planeNormal, planeConstant);
	}

	// btStaticPlaneShape::btStaticPlaneShape(lua_Table * data, const btVector3 & planeNormal, float planeConstant)
	static btStaticPlaneShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStaticPlaneShape::btStaticPlaneShape(lua_Table * data, const btVector3 & planeNormal, float planeConstant) function, expected prototype:\nbtStaticPlaneShape::btStaticPlaneShape(lua_Table * data, const btVector3 & planeNormal, float planeConstant)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		const btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btStaticPlaneShape::btStaticPlaneShape function");
		}
		const btVector3 & planeNormal=*planeNormal_ptr;
		float planeConstant=(float)lua_tonumber(L,3);

		return new wrapper_btStaticPlaneShape(L,NULL, planeNormal, planeConstant);
	}

	// Overload binder for btStaticPlaneShape::btStaticPlaneShape
	static btStaticPlaneShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btStaticPlaneShape, cannot match any of the overloads for function btStaticPlaneShape:\n  btStaticPlaneShape(const btVector3 &, float)\n  btStaticPlaneShape(lua_Table *, const btVector3 &, float)\n");
		return NULL;
	}


	// Function binds:
	// void btStaticPlaneShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btStaticPlaneShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btStaticPlaneShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStaticPlaneShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStaticPlaneShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btStaticPlaneShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStaticPlaneShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStaticPlaneShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStaticPlaneShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btStaticPlaneShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btStaticPlaneShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btStaticPlaneShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btStaticPlaneShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btStaticPlaneShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btStaticPlaneShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btStaticPlaneShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btStaticPlaneShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btStaticPlaneShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btStaticPlaneShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btStaticPlaneShape::getPlaneNormal() const
	static int _bind_getPlaneNormal(lua_State *L) {
		if (!_lg_typecheck_getPlaneNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btStaticPlaneShape::getPlaneNormal() const function, expected prototype:\nconst btVector3 & btStaticPlaneShape::getPlaneNormal() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btStaticPlaneShape::getPlaneNormal() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPlaneNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const float & btStaticPlaneShape::getPlaneConstant() const
	static int _bind_getPlaneConstant(lua_State *L) {
		if (!_lg_typecheck_getPlaneConstant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btStaticPlaneShape::getPlaneConstant() const function, expected prototype:\nconst float & btStaticPlaneShape::getPlaneConstant() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btStaticPlaneShape::getPlaneConstant() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const float & lret = self->getPlaneConstant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btStaticPlaneShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btStaticPlaneShape::getName() const function, expected prototype:\nconst char * btStaticPlaneShape::getName() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btStaticPlaneShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btStaticPlaneShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStaticPlaneShape::calculateSerializeBufferSize() const function, expected prototype:\nint btStaticPlaneShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStaticPlaneShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStaticPlaneShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btStaticPlaneShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btStaticPlaneShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btStaticPlaneShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btStaticPlaneShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btStaticPlaneShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btStaticPlaneShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btStaticPlaneShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btStaticPlaneShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btStaticPlaneShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btStaticPlaneShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btStaticPlaneShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btStaticPlaneShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btStaticPlaneShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btStaticPlaneShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btStaticPlaneShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btStaticPlaneShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btStaticPlaneShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btStaticPlaneShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btStaticPlaneShape::base_getMargin() const function, expected prototype:\nfloat btStaticPlaneShape::base_getMargin() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btStaticPlaneShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btStaticPlaneShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStaticPlaneShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btStaticPlaneShape::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::setMargin(collisionMargin);

		return 0;
	}

	// void btStaticPlaneShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btStaticPlaneShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btStaticPlaneShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStaticPlaneShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStaticPlaneShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btStaticPlaneShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStaticPlaneShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStaticPlaneShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStaticPlaneShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btStaticPlaneShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btStaticPlaneShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btStaticPlaneShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btStaticPlaneShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btStaticPlaneShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btStaticPlaneShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btStaticPlaneShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btStaticPlaneShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btStaticPlaneShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btStaticPlaneShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btStaticPlaneShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btStaticPlaneShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const char * btStaticPlaneShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btStaticPlaneShape::base_getName() const function, expected prototype:\nconst char * btStaticPlaneShape::base_getName() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btStaticPlaneShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btStaticPlaneShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btStaticPlaneShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStaticPlaneShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btStaticPlaneShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btStaticPlaneShape* self=Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStaticPlaneShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btStaticPlaneShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btStaticPlaneShape* LunaTraits< btStaticPlaneShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btStaticPlaneShape::_bind_ctor(L);
}

void LunaTraits< btStaticPlaneShape >::_bind_dtor(btStaticPlaneShape* obj) {
	delete obj;
}

const char LunaTraits< btStaticPlaneShape >::className[] = "btStaticPlaneShape";
const char LunaTraits< btStaticPlaneShape >::fullName[] = "btStaticPlaneShape";
const char LunaTraits< btStaticPlaneShape >::moduleName[] = "bullet";
const char* LunaTraits< btStaticPlaneShape >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btStaticPlaneShape >::hash = 17261695;
const int LunaTraits< btStaticPlaneShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btStaticPlaneShape >::methods[] = {
	{"getAabb", &luna_wrapper_btStaticPlaneShape::_bind_getAabb},
	{"processAllTriangles", &luna_wrapper_btStaticPlaneShape::_bind_processAllTriangles},
	{"calculateLocalInertia", &luna_wrapper_btStaticPlaneShape::_bind_calculateLocalInertia},
	{"setLocalScaling", &luna_wrapper_btStaticPlaneShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btStaticPlaneShape::_bind_getLocalScaling},
	{"getPlaneNormal", &luna_wrapper_btStaticPlaneShape::_bind_getPlaneNormal},
	{"getPlaneConstant", &luna_wrapper_btStaticPlaneShape::_bind_getPlaneConstant},
	{"getName", &luna_wrapper_btStaticPlaneShape::_bind_getName},
	{"calculateSerializeBufferSize", &luna_wrapper_btStaticPlaneShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btStaticPlaneShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btStaticPlaneShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btStaticPlaneShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btStaticPlaneShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getMargin", &luna_wrapper_btStaticPlaneShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btStaticPlaneShape::_bind_base_setMargin},
	{"base_getAabb", &luna_wrapper_btStaticPlaneShape::_bind_base_getAabb},
	{"base_processAllTriangles", &luna_wrapper_btStaticPlaneShape::_bind_base_processAllTriangles},
	{"base_calculateLocalInertia", &luna_wrapper_btStaticPlaneShape::_bind_base_calculateLocalInertia},
	{"base_setLocalScaling", &luna_wrapper_btStaticPlaneShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btStaticPlaneShape::_bind_base_getLocalScaling},
	{"base_getName", &luna_wrapper_btStaticPlaneShape::_bind_base_getName},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btStaticPlaneShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btStaticPlaneShape::_bind___eq},
	{"getTable", &luna_wrapper_btStaticPlaneShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btStaticPlaneShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btStaticPlaneShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btStaticPlaneShape >::enumValues[] = {
	{0,0}
};


