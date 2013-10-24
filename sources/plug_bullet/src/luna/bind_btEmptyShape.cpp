#include <plug_common.h>

#include <luna/wrappers/wrapper_btEmptyShape.h>

class luna_wrapper_btEmptyShape {
public:
	typedef Luna< btEmptyShape > luna_t;

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

		btEmptyShape* self= (btEmptyShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btEmptyShape >::push(L,self,false);
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
		//btEmptyShape* ptr= dynamic_cast< btEmptyShape* >(Luna< btCollisionShape >::check(L,1));
		btEmptyShape* ptr= luna_caster< btCollisionShape, btEmptyShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btEmptyShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btEmptyShape::btEmptyShape()
	static btEmptyShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btEmptyShape::btEmptyShape() function, expected prototype:\nbtEmptyShape::btEmptyShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btEmptyShape();
	}

	// btEmptyShape::btEmptyShape(lua_Table * data)
	static btEmptyShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btEmptyShape::btEmptyShape(lua_Table * data) function, expected prototype:\nbtEmptyShape::btEmptyShape(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btEmptyShape(L,NULL);
	}

	// Overload binder for btEmptyShape::btEmptyShape
	static btEmptyShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btEmptyShape, cannot match any of the overloads for function btEmptyShape:\n  btEmptyShape()\n  btEmptyShape(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btEmptyShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btEmptyShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btEmptyShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btEmptyShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btEmptyShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btEmptyShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btEmptyShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btEmptyShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btEmptyShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btEmptyShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btEmptyShape::getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btEmptyShape::getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btEmptyShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btEmptyShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btEmptyShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btEmptyShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btEmptyShape::getName() const function, expected prototype:\nconst char * btEmptyShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btEmptyShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btEmptyShape::processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const function, expected prototype:\nvoid btEmptyShape::processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* _arg1=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* _arg2_ptr=(Luna< btVector3 >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btEmptyShape::processAllTriangles function");
		}
		const btVector3 & _arg2=*_arg2_ptr;
		const btVector3* _arg3_ptr=(Luna< btVector3 >::check(L,4));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in btEmptyShape::processAllTriangles function");
		}
		const btVector3 & _arg3=*_arg3_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processAllTriangles(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btEmptyShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btEmptyShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btEmptyShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btEmptyShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btEmptyShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btEmptyShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btEmptyShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btEmptyShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btEmptyShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btEmptyShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btEmptyShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btEmptyShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btEmptyShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btEmptyShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btEmptyShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btEmptyShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btEmptyShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btEmptyShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btEmptyShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btEmptyShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btEmptyShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btEmptyShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btEmptyShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btEmptyShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btEmptyShape::base_getMargin() const function, expected prototype:\nfloat btEmptyShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btEmptyShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btEmptyShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btEmptyShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btEmptyShape::base_setMargin(float collisionMargin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::setMargin(collisionMargin);

		return 0;
	}

	// void btEmptyShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btEmptyShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btEmptyShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btEmptyShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btEmptyShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btEmptyShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btEmptyShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btEmptyShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btEmptyShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btEmptyShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btEmptyShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btEmptyShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btEmptyShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btEmptyShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btEmptyShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btEmptyShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btEmptyShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btEmptyShape::base_getName() const function, expected prototype:\nconst char * btEmptyShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btEmptyShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btEmptyShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btEmptyShape::base_processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btEmptyShape::base_processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const function, expected prototype:\nvoid btEmptyShape::base_processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* _arg1=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* _arg2_ptr=(Luna< btVector3 >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btEmptyShape::base_processAllTriangles function");
		}
		const btVector3 & _arg2=*_arg2_ptr;
		const btVector3* _arg3_ptr=(Luna< btVector3 >::check(L,4));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in btEmptyShape::base_processAllTriangles function");
		}
		const btVector3 & _arg3=*_arg3_ptr;

		btEmptyShape* self=Luna< btCollisionShape >::checkSubType< btEmptyShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btEmptyShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btEmptyShape::processAllTriangles(_arg1, _arg2, _arg3);

		return 0;
	}


	// Operator binds:

};

btEmptyShape* LunaTraits< btEmptyShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btEmptyShape::_bind_ctor(L);
}

void LunaTraits< btEmptyShape >::_bind_dtor(btEmptyShape* obj) {
	delete obj;
}

const char LunaTraits< btEmptyShape >::className[] = "btEmptyShape";
const char LunaTraits< btEmptyShape >::fullName[] = "btEmptyShape";
const char LunaTraits< btEmptyShape >::moduleName[] = "bullet";
const char* LunaTraits< btEmptyShape >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btEmptyShape >::hash = 23666329;
const int LunaTraits< btEmptyShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btEmptyShape >::methods[] = {
	{"getAabb", &luna_wrapper_btEmptyShape::_bind_getAabb},
	{"setLocalScaling", &luna_wrapper_btEmptyShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btEmptyShape::_bind_getLocalScaling},
	{"calculateLocalInertia", &luna_wrapper_btEmptyShape::_bind_calculateLocalInertia},
	{"getName", &luna_wrapper_btEmptyShape::_bind_getName},
	{"processAllTriangles", &luna_wrapper_btEmptyShape::_bind_processAllTriangles},
	{"base_getBoundingSphere", &luna_wrapper_btEmptyShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btEmptyShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btEmptyShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btEmptyShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btEmptyShape::_bind_base_calculateSerializeBufferSize},
	{"base_getMargin", &luna_wrapper_btEmptyShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btEmptyShape::_bind_base_setMargin},
	{"base_getAabb", &luna_wrapper_btEmptyShape::_bind_base_getAabb},
	{"base_setLocalScaling", &luna_wrapper_btEmptyShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btEmptyShape::_bind_base_getLocalScaling},
	{"base_calculateLocalInertia", &luna_wrapper_btEmptyShape::_bind_base_calculateLocalInertia},
	{"base_getName", &luna_wrapper_btEmptyShape::_bind_base_getName},
	{"base_processAllTriangles", &luna_wrapper_btEmptyShape::_bind_base_processAllTriangles},
	{"fromVoid", &luna_wrapper_btEmptyShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btEmptyShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btEmptyShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btEmptyShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btEmptyShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btEmptyShape >::enumValues[] = {
	{0,0}
};


