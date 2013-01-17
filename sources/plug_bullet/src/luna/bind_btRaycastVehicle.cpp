#include <plug_common.h>

#include <luna/wrappers/wrapper_btRaycastVehicle.h>

class luna_wrapper_btRaycastVehicle {
public:
	typedef Luna< btRaycastVehicle > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btActionInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btActionInterface*)");
		}

		btActionInterface* rhs =(Luna< btActionInterface >::check(L,2));
		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btActionInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btRaycastVehicle* ptr= dynamic_cast< btRaycastVehicle* >(Luna< btActionInterface >::check(L,1));
		btRaycastVehicle* ptr= luna_caster< btActionInterface, btRaycastVehicle >::cast(Luna< btActionInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btRaycastVehicle >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91513369) ) return false;
		if( (!(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1))) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,79998095)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btVehicleRaycaster >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91513369) ) return false;
		if( (!(Luna< btRaycastVehicle::btVehicleTuning >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,79998095)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btVehicleRaycaster >::check(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChassisWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rayCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45065223) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetSuspension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSteeringValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSteeringValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyEngineForce(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWheelTransformWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateWheelTransform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addWheel(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91513369) ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumWheels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelInfo_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWheelInfo_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateWheelTransformsWS(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45065223) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBrake(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPitchControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateSuspension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRigidBody_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBody_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRightAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForwardAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForwardVector(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentSpeedKmHour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRaycastVehicle::btRaycastVehicle(const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster)
	static btRaycastVehicle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRaycastVehicle::btRaycastVehicle(const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster) function, expected prototype:\nbtRaycastVehicle::btRaycastVehicle(const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster)\nClass arguments details:\narg 1 ID = 91513369\narg 2 ID = 85758361\narg 3 ID = 79998095\n");
		}

		const btRaycastVehicle::btVehicleTuning* tuning_ptr=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if( !tuning_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tuning in btRaycastVehicle::btRaycastVehicle function");
		}
		const btRaycastVehicle::btVehicleTuning & tuning=*tuning_ptr;
		btRigidBody* chassis=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		btVehicleRaycaster* raycaster=(Luna< btVehicleRaycaster >::check(L,3));

		return new btRaycastVehicle(tuning, chassis, raycaster);
	}

	// btRaycastVehicle::btRaycastVehicle(lua_Table * data, const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster)
	static btRaycastVehicle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRaycastVehicle::btRaycastVehicle(lua_Table * data, const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster) function, expected prototype:\nbtRaycastVehicle::btRaycastVehicle(lua_Table * data, const btRaycastVehicle::btVehicleTuning & tuning, btRigidBody * chassis, btVehicleRaycaster * raycaster)\nClass arguments details:\narg 2 ID = 91513369\narg 3 ID = 85758361\narg 4 ID = 79998095\n");
		}

		const btRaycastVehicle::btVehicleTuning* tuning_ptr=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,2));
		if( !tuning_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tuning in btRaycastVehicle::btRaycastVehicle function");
		}
		const btRaycastVehicle::btVehicleTuning & tuning=*tuning_ptr;
		btRigidBody* chassis=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		btVehicleRaycaster* raycaster=(Luna< btVehicleRaycaster >::check(L,4));

		return new wrapper_btRaycastVehicle(L,NULL, tuning, chassis, raycaster);
	}

	// Overload binder for btRaycastVehicle::btRaycastVehicle
	static btRaycastVehicle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btRaycastVehicle, cannot match any of the overloads for function btRaycastVehicle:\n  btRaycastVehicle(const btRaycastVehicle::btVehicleTuning &, btRigidBody *, btVehicleRaycaster *)\n  btRaycastVehicle(lua_Table *, const btRaycastVehicle::btVehicleTuning &, btRigidBody *, btVehicleRaycaster *)\n");
		return NULL;
	}


	// Function binds:
	// void btRaycastVehicle::updateAction(btCollisionWorld * collisionWorld, float step)
	static int _bind_updateAction(lua_State *L) {
		if (!_lg_typecheck_updateAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateAction(btCollisionWorld * collisionWorld, float step) function, expected prototype:\nvoid btRaycastVehicle::updateAction(btCollisionWorld * collisionWorld, float step)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float step=(float)lua_tonumber(L,3);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateAction(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateAction(collisionWorld, step);

		return 0;
	}

	// void btRaycastVehicle::debugDraw(btIDebugDraw * debugDrawer)
	static int _bind_debugDraw(lua_State *L) {
		if (!_lg_typecheck_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::debugDraw(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btRaycastVehicle::debugDraw(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::debugDraw(btIDebugDraw *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->debugDraw(debugDrawer);

		return 0;
	}

	// const btTransform & btRaycastVehicle::getChassisWorldTransform() const
	static int _bind_getChassisWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getChassisWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btRaycastVehicle::getChassisWorldTransform() const function, expected prototype:\nconst btTransform & btRaycastVehicle::getChassisWorldTransform() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btRaycastVehicle::getChassisWorldTransform() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btTransform* lret = &self->getChassisWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// float btRaycastVehicle::rayCast(btWheelInfo & wheel)
	static int _bind_rayCast(lua_State *L) {
		if (!_lg_typecheck_rayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::rayCast(btWheelInfo & wheel) function, expected prototype:\nfloat btRaycastVehicle::rayCast(btWheelInfo & wheel)\nClass arguments details:\narg 1 ID = 45065223\n");
		}

		btWheelInfo* wheel_ptr=(Luna< btWheelInfo >::check(L,2));
		if( !wheel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wheel in btRaycastVehicle::rayCast function");
		}
		btWheelInfo & wheel=*wheel_ptr;

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::rayCast(btWheelInfo &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		float lret = self->rayCast(wheel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::updateVehicle(float step)
	static int _bind_updateVehicle(lua_State *L) {
		if (!_lg_typecheck_updateVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateVehicle(float step) function, expected prototype:\nvoid btRaycastVehicle::updateVehicle(float step)\nClass arguments details:\n");
		}

		float step=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateVehicle(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateVehicle(step);

		return 0;
	}

	// void btRaycastVehicle::resetSuspension()
	static int _bind_resetSuspension(lua_State *L) {
		if (!_lg_typecheck_resetSuspension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::resetSuspension() function, expected prototype:\nvoid btRaycastVehicle::resetSuspension()\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::resetSuspension(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->resetSuspension();

		return 0;
	}

	// float btRaycastVehicle::getSteeringValue(int wheel) const
	static int _bind_getSteeringValue(lua_State *L) {
		if (!_lg_typecheck_getSteeringValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::getSteeringValue(int wheel) const function, expected prototype:\nfloat btRaycastVehicle::getSteeringValue(int wheel) const\nClass arguments details:\n");
		}

		int wheel=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::getSteeringValue(int) const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		float lret = self->getSteeringValue(wheel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::setSteeringValue(float steering, int wheel)
	static int _bind_setSteeringValue(lua_State *L) {
		if (!_lg_typecheck_setSteeringValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setSteeringValue(float steering, int wheel) function, expected prototype:\nvoid btRaycastVehicle::setSteeringValue(float steering, int wheel)\nClass arguments details:\n");
		}

		float steering=(float)lua_tonumber(L,2);
		int wheel=(int)lua_tointeger(L,3);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setSteeringValue(float, int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setSteeringValue(steering, wheel);

		return 0;
	}

	// void btRaycastVehicle::applyEngineForce(float force, int wheel)
	static int _bind_applyEngineForce(lua_State *L) {
		if (!_lg_typecheck_applyEngineForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::applyEngineForce(float force, int wheel) function, expected prototype:\nvoid btRaycastVehicle::applyEngineForce(float force, int wheel)\nClass arguments details:\n");
		}

		float force=(float)lua_tonumber(L,2);
		int wheel=(int)lua_tointeger(L,3);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::applyEngineForce(float, int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->applyEngineForce(force, wheel);

		return 0;
	}

	// const btTransform & btRaycastVehicle::getWheelTransformWS(int wheelIndex) const
	static int _bind_getWheelTransformWS(lua_State *L) {
		if (!_lg_typecheck_getWheelTransformWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btRaycastVehicle::getWheelTransformWS(int wheelIndex) const function, expected prototype:\nconst btTransform & btRaycastVehicle::getWheelTransformWS(int wheelIndex) const\nClass arguments details:\n");
		}

		int wheelIndex=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btRaycastVehicle::getWheelTransformWS(int) const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btTransform* lret = &self->getWheelTransformWS(wheelIndex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// void btRaycastVehicle::updateWheelTransform(int wheelIndex, bool interpolatedTransform = true)
	static int _bind_updateWheelTransform(lua_State *L) {
		if (!_lg_typecheck_updateWheelTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateWheelTransform(int wheelIndex, bool interpolatedTransform = true) function, expected prototype:\nvoid btRaycastVehicle::updateWheelTransform(int wheelIndex, bool interpolatedTransform = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int wheelIndex=(int)lua_tointeger(L,2);
		bool interpolatedTransform=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateWheelTransform(int, bool). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateWheelTransform(wheelIndex, interpolatedTransform);

		return 0;
	}

	// btWheelInfo & btRaycastVehicle::addWheel(const btVector3 & connectionPointCS0, const btVector3 & wheelDirectionCS0, const btVector3 & wheelAxleCS, float suspensionRestLength, float wheelRadius, const btRaycastVehicle::btVehicleTuning & tuning, bool isFrontWheel)
	static int _bind_addWheel(lua_State *L) {
		if (!_lg_typecheck_addWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btWheelInfo & btRaycastVehicle::addWheel(const btVector3 & connectionPointCS0, const btVector3 & wheelDirectionCS0, const btVector3 & wheelAxleCS, float suspensionRestLength, float wheelRadius, const btRaycastVehicle::btVehicleTuning & tuning, bool isFrontWheel) function, expected prototype:\nbtWheelInfo & btRaycastVehicle::addWheel(const btVector3 & connectionPointCS0, const btVector3 & wheelDirectionCS0, const btVector3 & wheelAxleCS, float suspensionRestLength, float wheelRadius, const btRaycastVehicle::btVehicleTuning & tuning, bool isFrontWheel)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 6 ID = 91513369\n");
		}

		const btVector3* connectionPointCS0_ptr=(Luna< btVector3 >::check(L,2));
		if( !connectionPointCS0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg connectionPointCS0 in btRaycastVehicle::addWheel function");
		}
		const btVector3 & connectionPointCS0=*connectionPointCS0_ptr;
		const btVector3* wheelDirectionCS0_ptr=(Luna< btVector3 >::check(L,3));
		if( !wheelDirectionCS0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wheelDirectionCS0 in btRaycastVehicle::addWheel function");
		}
		const btVector3 & wheelDirectionCS0=*wheelDirectionCS0_ptr;
		const btVector3* wheelAxleCS_ptr=(Luna< btVector3 >::check(L,4));
		if( !wheelAxleCS_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wheelAxleCS in btRaycastVehicle::addWheel function");
		}
		const btVector3 & wheelAxleCS=*wheelAxleCS_ptr;
		float suspensionRestLength=(float)lua_tonumber(L,5);
		float wheelRadius=(float)lua_tonumber(L,6);
		const btRaycastVehicle::btVehicleTuning* tuning_ptr=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,7));
		if( !tuning_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tuning in btRaycastVehicle::addWheel function");
		}
		const btRaycastVehicle::btVehicleTuning & tuning=*tuning_ptr;
		bool isFrontWheel=(bool)(lua_toboolean(L,8)==1);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btWheelInfo & btRaycastVehicle::addWheel(const btVector3 &, const btVector3 &, const btVector3 &, float, float, const btRaycastVehicle::btVehicleTuning &, bool). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btWheelInfo* lret = &self->addWheel(connectionPointCS0, wheelDirectionCS0, wheelAxleCS, suspensionRestLength, wheelRadius, tuning, isFrontWheel);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btWheelInfo >::push(L,lret,false);

		return 1;
	}

	// int btRaycastVehicle::getNumWheels() const
	static int _bind_getNumWheels(lua_State *L) {
		if (!_lg_typecheck_getNumWheels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getNumWheels() const function, expected prototype:\nint btRaycastVehicle::getNumWheels() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getNumWheels() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getNumWheels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btWheelInfo & btRaycastVehicle::getWheelInfo(int index) const
	static int _bind_getWheelInfo_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWheelInfo_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btWheelInfo & btRaycastVehicle::getWheelInfo(int index) const function, expected prototype:\nconst btWheelInfo & btRaycastVehicle::getWheelInfo(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btWheelInfo & btRaycastVehicle::getWheelInfo(int) const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btWheelInfo* lret = &self->getWheelInfo(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btWheelInfo >::push(L,lret,false);

		return 1;
	}

	// btWheelInfo & btRaycastVehicle::getWheelInfo(int index)
	static int _bind_getWheelInfo_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWheelInfo_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btWheelInfo & btRaycastVehicle::getWheelInfo(int index) function, expected prototype:\nbtWheelInfo & btRaycastVehicle::getWheelInfo(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btWheelInfo & btRaycastVehicle::getWheelInfo(int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btWheelInfo* lret = &self->getWheelInfo(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btWheelInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRaycastVehicle::getWheelInfo
	static int _bind_getWheelInfo(lua_State *L) {
		if (_lg_typecheck_getWheelInfo_overload_1(L)) return _bind_getWheelInfo_overload_1(L);
		if (_lg_typecheck_getWheelInfo_overload_2(L)) return _bind_getWheelInfo_overload_2(L);

		luaL_error(L, "error in function getWheelInfo, cannot match any of the overloads for function getWheelInfo:\n  getWheelInfo(int)\n  getWheelInfo(int)\n");
		return 0;
	}

	// void btRaycastVehicle::updateWheelTransformsWS(btWheelInfo & wheel, bool interpolatedTransform = true)
	static int _bind_updateWheelTransformsWS(lua_State *L) {
		if (!_lg_typecheck_updateWheelTransformsWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateWheelTransformsWS(btWheelInfo & wheel, bool interpolatedTransform = true) function, expected prototype:\nvoid btRaycastVehicle::updateWheelTransformsWS(btWheelInfo & wheel, bool interpolatedTransform = true)\nClass arguments details:\narg 1 ID = 45065223\n");
		}

		int luatop = lua_gettop(L);

		btWheelInfo* wheel_ptr=(Luna< btWheelInfo >::check(L,2));
		if( !wheel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wheel in btRaycastVehicle::updateWheelTransformsWS function");
		}
		btWheelInfo & wheel=*wheel_ptr;
		bool interpolatedTransform=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateWheelTransformsWS(btWheelInfo &, bool). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateWheelTransformsWS(wheel, interpolatedTransform);

		return 0;
	}

	// void btRaycastVehicle::setBrake(float brake, int wheelIndex)
	static int _bind_setBrake(lua_State *L) {
		if (!_lg_typecheck_setBrake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setBrake(float brake, int wheelIndex) function, expected prototype:\nvoid btRaycastVehicle::setBrake(float brake, int wheelIndex)\nClass arguments details:\n");
		}

		float brake=(float)lua_tonumber(L,2);
		int wheelIndex=(int)lua_tointeger(L,3);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setBrake(float, int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setBrake(brake, wheelIndex);

		return 0;
	}

	// void btRaycastVehicle::setPitchControl(float pitch)
	static int _bind_setPitchControl(lua_State *L) {
		if (!_lg_typecheck_setPitchControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setPitchControl(float pitch) function, expected prototype:\nvoid btRaycastVehicle::setPitchControl(float pitch)\nClass arguments details:\n");
		}

		float pitch=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setPitchControl(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setPitchControl(pitch);

		return 0;
	}

	// void btRaycastVehicle::updateSuspension(float deltaTime)
	static int _bind_updateSuspension(lua_State *L) {
		if (!_lg_typecheck_updateSuspension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateSuspension(float deltaTime) function, expected prototype:\nvoid btRaycastVehicle::updateSuspension(float deltaTime)\nClass arguments details:\n");
		}

		float deltaTime=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateSuspension(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateSuspension(deltaTime);

		return 0;
	}

	// void btRaycastVehicle::updateFriction(float timeStep)
	static int _bind_updateFriction(lua_State *L) {
		if (!_lg_typecheck_updateFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::updateFriction(float timeStep) function, expected prototype:\nvoid btRaycastVehicle::updateFriction(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::updateFriction(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateFriction(timeStep);

		return 0;
	}

	// btRigidBody * btRaycastVehicle::getRigidBody()
	static int _bind_getRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody * btRaycastVehicle::getRigidBody() function, expected prototype:\nbtRigidBody * btRaycastVehicle::getRigidBody()\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody * btRaycastVehicle::getRigidBody(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		btRigidBody * lret = self->getRigidBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// const btRigidBody * btRaycastVehicle::getRigidBody() const
	static int _bind_getRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody * btRaycastVehicle::getRigidBody() const function, expected prototype:\nconst btRigidBody * btRaycastVehicle::getRigidBody() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody * btRaycastVehicle::getRigidBody() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		const btRigidBody * lret = self->getRigidBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRaycastVehicle::getRigidBody
	static int _bind_getRigidBody(lua_State *L) {
		if (_lg_typecheck_getRigidBody_overload_1(L)) return _bind_getRigidBody_overload_1(L);
		if (_lg_typecheck_getRigidBody_overload_2(L)) return _bind_getRigidBody_overload_2(L);

		luaL_error(L, "error in function getRigidBody, cannot match any of the overloads for function getRigidBody:\n  getRigidBody()\n  getRigidBody()\n");
		return 0;
	}

	// int btRaycastVehicle::getRightAxis() const
	static int _bind_getRightAxis(lua_State *L) {
		if (!_lg_typecheck_getRightAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getRightAxis() const function, expected prototype:\nint btRaycastVehicle::getRightAxis() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getRightAxis() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getRightAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRaycastVehicle::getUpAxis() const
	static int _bind_getUpAxis(lua_State *L) {
		if (!_lg_typecheck_getUpAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getUpAxis() const function, expected prototype:\nint btRaycastVehicle::getUpAxis() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getUpAxis() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getUpAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRaycastVehicle::getForwardAxis() const
	static int _bind_getForwardAxis(lua_State *L) {
		if (!_lg_typecheck_getForwardAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getForwardAxis() const function, expected prototype:\nint btRaycastVehicle::getForwardAxis() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getForwardAxis() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getForwardAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btRaycastVehicle::getForwardVector() const
	static int _bind_getForwardVector(lua_State *L) {
		if (!_lg_typecheck_getForwardVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btRaycastVehicle::getForwardVector() const function, expected prototype:\nbtVector3 btRaycastVehicle::getForwardVector() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btRaycastVehicle::getForwardVector() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getForwardVector();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btRaycastVehicle::getCurrentSpeedKmHour() const
	static int _bind_getCurrentSpeedKmHour(lua_State *L) {
		if (!_lg_typecheck_getCurrentSpeedKmHour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::getCurrentSpeedKmHour() const function, expected prototype:\nfloat btRaycastVehicle::getCurrentSpeedKmHour() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::getCurrentSpeedKmHour() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		float lret = self->getCurrentSpeedKmHour();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex)
	static int _bind_setCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_setCoordinateSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex) function, expected prototype:\nvoid btRaycastVehicle::setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex)\nClass arguments details:\n");
		}

		int rightIndex=(int)lua_tointeger(L,2);
		int upIndex=(int)lua_tointeger(L,3);
		int forwardIndex=(int)lua_tointeger(L,4);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setCoordinateSystem(int, int, int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setCoordinateSystem(rightIndex, upIndex, forwardIndex);

		return 0;
	}

	// int btRaycastVehicle::getUserConstraintType() const
	static int _bind_getUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getUserConstraintType() const function, expected prototype:\nint btRaycastVehicle::getUserConstraintType() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getUserConstraintType() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getUserConstraintType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::setUserConstraintType(int userConstraintType)
	static int _bind_setUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setUserConstraintType(int userConstraintType) function, expected prototype:\nvoid btRaycastVehicle::setUserConstraintType(int userConstraintType)\nClass arguments details:\n");
		}

		int userConstraintType=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setUserConstraintType(int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setUserConstraintType(userConstraintType);

		return 0;
	}

	// void btRaycastVehicle::setUserConstraintId(int uid)
	static int _bind_setUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::setUserConstraintId(int uid) function, expected prototype:\nvoid btRaycastVehicle::setUserConstraintId(int uid)\nClass arguments details:\n");
		}

		int uid=(int)lua_tointeger(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::setUserConstraintId(int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setUserConstraintId(uid);

		return 0;
	}

	// int btRaycastVehicle::getUserConstraintId() const
	static int _bind_getUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRaycastVehicle::getUserConstraintId() const function, expected prototype:\nint btRaycastVehicle::getUserConstraintId() const\nClass arguments details:\n");
		}


		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRaycastVehicle::getUserConstraintId() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		int lret = self->getUserConstraintId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::base_updateAction(btCollisionWorld * collisionWorld, float step)
	static int _bind_base_updateAction(lua_State *L) {
		if (!_lg_typecheck_base_updateAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::base_updateAction(btCollisionWorld * collisionWorld, float step) function, expected prototype:\nvoid btRaycastVehicle::base_updateAction(btCollisionWorld * collisionWorld, float step)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float step=(float)lua_tonumber(L,3);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::base_updateAction(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btRaycastVehicle::updateAction(collisionWorld, step);

		return 0;
	}

	// void btRaycastVehicle::base_debugDraw(btIDebugDraw * debugDrawer)
	static int _bind_base_debugDraw(lua_State *L) {
		if (!_lg_typecheck_base_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::base_debugDraw(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btRaycastVehicle::base_debugDraw(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::base_debugDraw(btIDebugDraw *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btRaycastVehicle::debugDraw(debugDrawer);

		return 0;
	}

	// void btRaycastVehicle::base_updateVehicle(float step)
	static int _bind_base_updateVehicle(lua_State *L) {
		if (!_lg_typecheck_base_updateVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::base_updateVehicle(float step) function, expected prototype:\nvoid btRaycastVehicle::base_updateVehicle(float step)\nClass arguments details:\n");
		}

		float step=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::base_updateVehicle(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btRaycastVehicle::updateVehicle(step);

		return 0;
	}

	// void btRaycastVehicle::base_updateFriction(float timeStep)
	static int _bind_base_updateFriction(lua_State *L) {
		if (!_lg_typecheck_base_updateFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::base_updateFriction(float timeStep) function, expected prototype:\nvoid btRaycastVehicle::base_updateFriction(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::base_updateFriction(float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btRaycastVehicle::updateFriction(timeStep);

		return 0;
	}

	// void btRaycastVehicle::base_setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex)
	static int _bind_base_setCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::base_setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex) function, expected prototype:\nvoid btRaycastVehicle::base_setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex)\nClass arguments details:\n");
		}

		int rightIndex=(int)lua_tointeger(L,2);
		int upIndex=(int)lua_tointeger(L,3);
		int forwardIndex=(int)lua_tointeger(L,4);

		btRaycastVehicle* self=Luna< btActionInterface >::checkSubType< btRaycastVehicle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::base_setCoordinateSystem(int, int, int). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->btRaycastVehicle::setCoordinateSystem(rightIndex, upIndex, forwardIndex);

		return 0;
	}


	// Operator binds:

};

btRaycastVehicle* LunaTraits< btRaycastVehicle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btRaycastVehicle::_bind_ctor(L);
}

void LunaTraits< btRaycastVehicle >::_bind_dtor(btRaycastVehicle* obj) {
	delete obj;
}

const char LunaTraits< btRaycastVehicle >::className[] = "btRaycastVehicle";
const char LunaTraits< btRaycastVehicle >::fullName[] = "btRaycastVehicle";
const char LunaTraits< btRaycastVehicle >::moduleName[] = "bullet";
const char* LunaTraits< btRaycastVehicle >::parents[] = {"bullet.btActionInterface", 0};
const int LunaTraits< btRaycastVehicle >::hash = 67314365;
const int LunaTraits< btRaycastVehicle >::uniqueIDs[] = {91159321,0};

luna_RegType LunaTraits< btRaycastVehicle >::methods[] = {
	{"updateAction", &luna_wrapper_btRaycastVehicle::_bind_updateAction},
	{"debugDraw", &luna_wrapper_btRaycastVehicle::_bind_debugDraw},
	{"getChassisWorldTransform", &luna_wrapper_btRaycastVehicle::_bind_getChassisWorldTransform},
	{"rayCast", &luna_wrapper_btRaycastVehicle::_bind_rayCast},
	{"updateVehicle", &luna_wrapper_btRaycastVehicle::_bind_updateVehicle},
	{"resetSuspension", &luna_wrapper_btRaycastVehicle::_bind_resetSuspension},
	{"getSteeringValue", &luna_wrapper_btRaycastVehicle::_bind_getSteeringValue},
	{"setSteeringValue", &luna_wrapper_btRaycastVehicle::_bind_setSteeringValue},
	{"applyEngineForce", &luna_wrapper_btRaycastVehicle::_bind_applyEngineForce},
	{"getWheelTransformWS", &luna_wrapper_btRaycastVehicle::_bind_getWheelTransformWS},
	{"updateWheelTransform", &luna_wrapper_btRaycastVehicle::_bind_updateWheelTransform},
	{"addWheel", &luna_wrapper_btRaycastVehicle::_bind_addWheel},
	{"getNumWheels", &luna_wrapper_btRaycastVehicle::_bind_getNumWheels},
	{"getWheelInfo", &luna_wrapper_btRaycastVehicle::_bind_getWheelInfo},
	{"updateWheelTransformsWS", &luna_wrapper_btRaycastVehicle::_bind_updateWheelTransformsWS},
	{"setBrake", &luna_wrapper_btRaycastVehicle::_bind_setBrake},
	{"setPitchControl", &luna_wrapper_btRaycastVehicle::_bind_setPitchControl},
	{"updateSuspension", &luna_wrapper_btRaycastVehicle::_bind_updateSuspension},
	{"updateFriction", &luna_wrapper_btRaycastVehicle::_bind_updateFriction},
	{"getRigidBody", &luna_wrapper_btRaycastVehicle::_bind_getRigidBody},
	{"getRightAxis", &luna_wrapper_btRaycastVehicle::_bind_getRightAxis},
	{"getUpAxis", &luna_wrapper_btRaycastVehicle::_bind_getUpAxis},
	{"getForwardAxis", &luna_wrapper_btRaycastVehicle::_bind_getForwardAxis},
	{"getForwardVector", &luna_wrapper_btRaycastVehicle::_bind_getForwardVector},
	{"getCurrentSpeedKmHour", &luna_wrapper_btRaycastVehicle::_bind_getCurrentSpeedKmHour},
	{"setCoordinateSystem", &luna_wrapper_btRaycastVehicle::_bind_setCoordinateSystem},
	{"getUserConstraintType", &luna_wrapper_btRaycastVehicle::_bind_getUserConstraintType},
	{"setUserConstraintType", &luna_wrapper_btRaycastVehicle::_bind_setUserConstraintType},
	{"setUserConstraintId", &luna_wrapper_btRaycastVehicle::_bind_setUserConstraintId},
	{"getUserConstraintId", &luna_wrapper_btRaycastVehicle::_bind_getUserConstraintId},
	{"base_updateAction", &luna_wrapper_btRaycastVehicle::_bind_base_updateAction},
	{"base_debugDraw", &luna_wrapper_btRaycastVehicle::_bind_base_debugDraw},
	{"base_updateVehicle", &luna_wrapper_btRaycastVehicle::_bind_base_updateVehicle},
	{"base_updateFriction", &luna_wrapper_btRaycastVehicle::_bind_base_updateFriction},
	{"base_setCoordinateSystem", &luna_wrapper_btRaycastVehicle::_bind_base_setCoordinateSystem},
	{"__eq", &luna_wrapper_btRaycastVehicle::_bind___eq},
	{"getTable", &luna_wrapper_btRaycastVehicle::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btRaycastVehicle >::converters[] = {
	{"btActionInterface", &luna_wrapper_btRaycastVehicle::_cast_from_btActionInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btRaycastVehicle >::enumValues[] = {
	{0,0}
};


