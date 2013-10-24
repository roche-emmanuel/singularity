#include <plug_common.h>

#include <luna/wrappers/wrapper_btScaledBvhTriangleMeshShape.h>

class luna_wrapper_btScaledBvhTriangleMeshShape {
public:
	typedef Luna< btScaledBvhTriangleMeshShape > luna_t;

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

		btScaledBvhTriangleMeshShape* self= (btScaledBvhTriangleMeshShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btScaledBvhTriangleMeshShape >::push(L,self,false);
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
		//btScaledBvhTriangleMeshShape* ptr= dynamic_cast< btScaledBvhTriangleMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btScaledBvhTriangleMeshShape* ptr= luna_caster< btCollisionShape, btScaledBvhTriangleMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btScaledBvhTriangleMeshShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
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

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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
	// btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape * childShape, const btVector3 & localScaling)
	static btScaledBvhTriangleMeshShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape * childShape, const btVector3 & localScaling) function, expected prototype:\nbtScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape * childShape, const btVector3 & localScaling)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btBvhTriangleMeshShape* childShape=(Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1));
		const btVector3* localScaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape function");
		}
		const btVector3 & localScaling=*localScaling_ptr;

		return new btScaledBvhTriangleMeshShape(childShape, localScaling);
	}

	// btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(lua_Table * data, btBvhTriangleMeshShape * childShape, const btVector3 & localScaling)
	static btScaledBvhTriangleMeshShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(lua_Table * data, btBvhTriangleMeshShape * childShape, const btVector3 & localScaling) function, expected prototype:\nbtScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(lua_Table * data, btBvhTriangleMeshShape * childShape, const btVector3 & localScaling)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btBvhTriangleMeshShape* childShape=(Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,2));
		const btVector3* localScaling_ptr=(Luna< btVector3 >::check(L,3));
		if( !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape function");
		}
		const btVector3 & localScaling=*localScaling_ptr;

		return new wrapper_btScaledBvhTriangleMeshShape(L,NULL, childShape, localScaling);
	}

	// Overload binder for btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape
	static btScaledBvhTriangleMeshShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btScaledBvhTriangleMeshShape, cannot match any of the overloads for function btScaledBvhTriangleMeshShape:\n  btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape *, const btVector3 &)\n  btScaledBvhTriangleMeshShape(lua_Table *, btBvhTriangleMeshShape *, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// void btScaledBvhTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btScaledBvhTriangleMeshShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btScaledBvhTriangleMeshShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btScaledBvhTriangleMeshShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btScaledBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btScaledBvhTriangleMeshShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btScaledBvhTriangleMeshShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btScaledBvhTriangleMeshShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btScaledBvhTriangleMeshShape::getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btScaledBvhTriangleMeshShape::getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btScaledBvhTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btScaledBvhTriangleMeshShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btScaledBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btScaledBvhTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btScaledBvhTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape()
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape() function, expected prototype:\nbtBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btBvhTriangleMeshShape * lret = self->getChildShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBvhTriangleMeshShape >::push(L,lret,false);

		return 1;
	}

	// const btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape() const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape() const function, expected prototype:\nconst btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btBvhTriangleMeshShape * btScaledBvhTriangleMeshShape::getChildShape() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btBvhTriangleMeshShape * lret = self->getChildShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBvhTriangleMeshShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btScaledBvhTriangleMeshShape::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape()\n  getChildShape()\n");
		return 0;
	}

	// const char * btScaledBvhTriangleMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btScaledBvhTriangleMeshShape::getName() const function, expected prototype:\nconst char * btScaledBvhTriangleMeshShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btScaledBvhTriangleMeshShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btScaledBvhTriangleMeshShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btScaledBvhTriangleMeshShape::calculateSerializeBufferSize() const function, expected prototype:\nint btScaledBvhTriangleMeshShape::calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btScaledBvhTriangleMeshShape::calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btScaledBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btScaledBvhTriangleMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btScaledBvhTriangleMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btScaledBvhTriangleMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btScaledBvhTriangleMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btScaledBvhTriangleMeshShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btScaledBvhTriangleMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btScaledBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btScaledBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btScaledBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btScaledBvhTriangleMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btScaledBvhTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btScaledBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btScaledBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btScaledBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btScaledBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btScaledBvhTriangleMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btScaledBvhTriangleMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btScaledBvhTriangleMeshShape::base_getMargin() const function, expected prototype:\nfloat btScaledBvhTriangleMeshShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btScaledBvhTriangleMeshShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btScaledBvhTriangleMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btScaledBvhTriangleMeshShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_setMargin(float collisionMargin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::setMargin(collisionMargin);

		return 0;
	}

	// void btScaledBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btScaledBvhTriangleMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btScaledBvhTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btScaledBvhTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btScaledBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btScaledBvhTriangleMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btScaledBvhTriangleMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btScaledBvhTriangleMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btScaledBvhTriangleMeshShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btScaledBvhTriangleMeshShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btScaledBvhTriangleMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btScaledBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btScaledBvhTriangleMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btScaledBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btScaledBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btScaledBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btScaledBvhTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btScaledBvhTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btScaledBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btScaledBvhTriangleMeshShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// const char * btScaledBvhTriangleMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btScaledBvhTriangleMeshShape::base_getName() const function, expected prototype:\nconst char * btScaledBvhTriangleMeshShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btScaledBvhTriangleMeshShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btScaledBvhTriangleMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btScaledBvhTriangleMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btScaledBvhTriangleMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btScaledBvhTriangleMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btScaledBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btScaledBvhTriangleMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btScaledBvhTriangleMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btScaledBvhTriangleMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btScaledBvhTriangleMeshShape* LunaTraits< btScaledBvhTriangleMeshShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btScaledBvhTriangleMeshShape::_bind_ctor(L);
}

void LunaTraits< btScaledBvhTriangleMeshShape >::_bind_dtor(btScaledBvhTriangleMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btScaledBvhTriangleMeshShape >::className[] = "btScaledBvhTriangleMeshShape";
const char LunaTraits< btScaledBvhTriangleMeshShape >::fullName[] = "btScaledBvhTriangleMeshShape";
const char LunaTraits< btScaledBvhTriangleMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btScaledBvhTriangleMeshShape >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btScaledBvhTriangleMeshShape >::hash = 84517597;
const int LunaTraits< btScaledBvhTriangleMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btScaledBvhTriangleMeshShape >::methods[] = {
	{"getAabb", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_getAabb},
	{"setLocalScaling", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_getLocalScaling},
	{"calculateLocalInertia", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_calculateLocalInertia},
	{"processAllTriangles", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_processAllTriangles},
	{"getChildShape", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_getChildShape},
	{"getName", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_getName},
	{"calculateSerializeBufferSize", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getMargin", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_setMargin},
	{"base_getAabb", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getAabb},
	{"base_setLocalScaling", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getLocalScaling},
	{"base_calculateLocalInertia", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_calculateLocalInertia},
	{"base_processAllTriangles", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_processAllTriangles},
	{"base_getName", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_getName},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_base_calculateSerializeBufferSize},
	{"fromVoid", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btScaledBvhTriangleMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btScaledBvhTriangleMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btScaledBvhTriangleMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btScaledBvhTriangleMeshShape >::enumValues[] = {
	{0,0}
};


