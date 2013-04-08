#include <plug_common.h>

class luna_wrapper_btRigidBodyFloatData {
public:
	typedef Luna< btRigidBodyFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1580424) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRigidBodyFloatData*)");
		}

		btRigidBodyFloatData* rhs =(Luna< btRigidBodyFloatData >::check(L,2));
		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		btRigidBodyFloatData* self= (btRigidBodyFloatData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btRigidBodyFloatData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1580424) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btRigidBodyFloatData");
		
		return luna_dynamicCast(L,converters,"btRigidBodyFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCollisionObjectData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvInertiaTensorWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_gravity_acceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvInertiaLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalTorque(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdditionalDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdditionalAngularDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdditionalDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionObjectData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5462649) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvInertiaTensorWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4769007) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_gravity_acceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvInertiaLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotalForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotalTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInverseMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalAngularDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionObjectFloatData btRigidBodyFloatData::m_collisionObjectData()
	static int _bind_getCollisionObjectData(lua_State *L) {
		if (!_lg_typecheck_getCollisionObjectData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionObjectFloatData btRigidBodyFloatData::m_collisionObjectData() function, expected prototype:\nbtCollisionObjectFloatData btRigidBodyFloatData::m_collisionObjectData()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionObjectFloatData btRigidBodyFloatData::m_collisionObjectData(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btCollisionObjectFloatData* lret = &self->m_collisionObjectData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectFloatData >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3FloatData btRigidBodyFloatData::m_invInertiaTensorWorld()
	static int _bind_getInvInertiaTensorWorld(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaTensorWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3FloatData btRigidBodyFloatData::m_invInertiaTensorWorld() function, expected prototype:\nbtMatrix3x3FloatData btRigidBodyFloatData::m_invInertiaTensorWorld()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3FloatData btRigidBodyFloatData::m_invInertiaTensorWorld(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btMatrix3x3FloatData* lret = &self->m_invInertiaTensorWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_linearVelocity()
	static int _bind_getLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_linearVelocity() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_linearVelocity()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_linearVelocity(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_linearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_angularVelocity()
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_angularVelocity() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_angularVelocity()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_angularVelocity(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_angularVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_angularFactor()
	static int _bind_getAngularFactor(lua_State *L) {
		if (!_lg_typecheck_getAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_angularFactor() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_angularFactor()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_angularFactor(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_angularFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_linearFactor()
	static int _bind_getLinearFactor(lua_State *L) {
		if (!_lg_typecheck_getLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_linearFactor() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_linearFactor()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_linearFactor(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_linearFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_gravity()
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_gravity() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_gravity()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_gravity(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_gravity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_gravity_acceleration()
	static int _bind_get_gravity_acceleration(lua_State *L) {
		if (!_lg_typecheck_get_gravity_acceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_gravity_acceleration() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_gravity_acceleration()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_gravity_acceleration(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_gravity_acceleration;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_invInertiaLocal()
	static int _bind_getInvInertiaLocal(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_invInertiaLocal() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_invInertiaLocal()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_invInertiaLocal(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_invInertiaLocal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_totalForce()
	static int _bind_getTotalForce(lua_State *L) {
		if (!_lg_typecheck_getTotalForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_totalForce() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_totalForce()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_totalForce(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_totalForce;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btRigidBodyFloatData::m_totalTorque()
	static int _bind_getTotalTorque(lua_State *L) {
		if (!_lg_typecheck_getTotalTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btRigidBodyFloatData::m_totalTorque() function, expected prototype:\nbtVector3FloatData btRigidBodyFloatData::m_totalTorque()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btRigidBodyFloatData::m_totalTorque(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_totalTorque;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btRigidBodyFloatData::m_inverseMass()
	static int _bind_getInverseMass(lua_State *L) {
		if (!_lg_typecheck_getInverseMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_inverseMass() function, expected prototype:\nfloat btRigidBodyFloatData::m_inverseMass()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_inverseMass(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_inverseMass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_linearDamping()
	static int _bind_getLinearDamping(lua_State *L) {
		if (!_lg_typecheck_getLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_linearDamping() function, expected prototype:\nfloat btRigidBodyFloatData::m_linearDamping()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_linearDamping(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_linearDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_angularDamping()
	static int _bind_getAngularDamping(lua_State *L) {
		if (!_lg_typecheck_getAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_angularDamping() function, expected prototype:\nfloat btRigidBodyFloatData::m_angularDamping()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_angularDamping(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_angularDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_additionalDampingFactor()
	static int _bind_getAdditionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getAdditionalDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_additionalDampingFactor() function, expected prototype:\nfloat btRigidBodyFloatData::m_additionalDampingFactor()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_additionalDampingFactor(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_additionalDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr()
	static int _bind_getAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getAdditionalLinearDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr() function, expected prototype:\nfloat btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_additionalLinearDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr()
	static int _bind_getAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getAdditionalAngularDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr() function, expected prototype:\nfloat btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_additionalAngularDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_additionalAngularDampingFactor()
	static int _bind_getAdditionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getAdditionalAngularDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_additionalAngularDampingFactor() function, expected prototype:\nfloat btRigidBodyFloatData::m_additionalAngularDampingFactor()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_additionalAngularDampingFactor(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_additionalAngularDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_linearSleepingThreshold()
	static int _bind_getLinearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getLinearSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_linearSleepingThreshold() function, expected prototype:\nfloat btRigidBodyFloatData::m_linearSleepingThreshold()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_linearSleepingThreshold(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_linearSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBodyFloatData::m_angularSleepingThreshold()
	static int _bind_getAngularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getAngularSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBodyFloatData::m_angularSleepingThreshold() function, expected prototype:\nfloat btRigidBodyFloatData::m_angularSleepingThreshold()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBodyFloatData::m_angularSleepingThreshold(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		float lret = self->m_angularSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRigidBodyFloatData::m_additionalDamping()
	static int _bind_getAdditionalDamping(lua_State *L) {
		if (!_lg_typecheck_getAdditionalDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBodyFloatData::m_additionalDamping() function, expected prototype:\nint btRigidBodyFloatData::m_additionalDamping()\nClass arguments details:\n");
		}


		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBodyFloatData::m_additionalDamping(). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		int lret = self->m_additionalDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBodyFloatData::m_collisionObjectData(btCollisionObjectFloatData value)
	static int _bind_setCollisionObjectData(lua_State *L) {
		if (!_lg_typecheck_setCollisionObjectData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_collisionObjectData(btCollisionObjectFloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_collisionObjectData(btCollisionObjectFloatData value)\nClass arguments details:\narg 1 ID = 5462649\n");
		}

		btCollisionObjectFloatData* value_ptr=(Luna< btCollisionObjectFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_collisionObjectData function");
		}
		btCollisionObjectFloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_collisionObjectData(btCollisionObjectFloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_collisionObjectData = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_invInertiaTensorWorld(btMatrix3x3FloatData value)
	static int _bind_setInvInertiaTensorWorld(lua_State *L) {
		if (!_lg_typecheck_setInvInertiaTensorWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_invInertiaTensorWorld(btMatrix3x3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_invInertiaTensorWorld(btMatrix3x3FloatData value)\nClass arguments details:\narg 1 ID = 4769007\n");
		}

		btMatrix3x3FloatData* value_ptr=(Luna< btMatrix3x3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_invInertiaTensorWorld function");
		}
		btMatrix3x3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_invInertiaTensorWorld(btMatrix3x3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_invInertiaTensorWorld = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_linearVelocity(btVector3FloatData value)
	static int _bind_setLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_linearVelocity(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_linearVelocity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_linearVelocity function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_linearVelocity(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_linearVelocity = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_angularVelocity(btVector3FloatData value)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_angularVelocity(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_angularVelocity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_angularVelocity function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_angularVelocity(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_angularVelocity = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_angularFactor(btVector3FloatData value)
	static int _bind_setAngularFactor(lua_State *L) {
		if (!_lg_typecheck_setAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_angularFactor(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_angularFactor(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_angularFactor function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_angularFactor(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_angularFactor = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_linearFactor(btVector3FloatData value)
	static int _bind_setLinearFactor(lua_State *L) {
		if (!_lg_typecheck_setLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_linearFactor(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_linearFactor(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_linearFactor function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_linearFactor(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_linearFactor = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_gravity(btVector3FloatData value)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_gravity(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_gravity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_gravity function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_gravity(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_gravity = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_gravity_acceleration(btVector3FloatData value)
	static int _bind_set_gravity_acceleration(lua_State *L) {
		if (!_lg_typecheck_set_gravity_acceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_gravity_acceleration(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_gravity_acceleration(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_gravity_acceleration function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_gravity_acceleration(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_gravity_acceleration = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_invInertiaLocal(btVector3FloatData value)
	static int _bind_setInvInertiaLocal(lua_State *L) {
		if (!_lg_typecheck_setInvInertiaLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_invInertiaLocal(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_invInertiaLocal(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_invInertiaLocal function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_invInertiaLocal(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_invInertiaLocal = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_totalForce(btVector3FloatData value)
	static int _bind_setTotalForce(lua_State *L) {
		if (!_lg_typecheck_setTotalForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_totalForce(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_totalForce(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_totalForce function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_totalForce(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_totalForce = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_totalTorque(btVector3FloatData value)
	static int _bind_setTotalTorque(lua_State *L) {
		if (!_lg_typecheck_setTotalTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_totalTorque(btVector3FloatData value) function, expected prototype:\nvoid btRigidBodyFloatData::m_totalTorque(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyFloatData::m_totalTorque function");
		}
		btVector3FloatData value=*value_ptr;

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_totalTorque(btVector3FloatData). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_totalTorque = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_inverseMass(float value)
	static int _bind_setInverseMass(lua_State *L) {
		if (!_lg_typecheck_setInverseMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_inverseMass(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_inverseMass(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_inverseMass(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_inverseMass = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_linearDamping(float value)
	static int _bind_setLinearDamping(lua_State *L) {
		if (!_lg_typecheck_setLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_linearDamping(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_linearDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_linearDamping(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_linearDamping = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_angularDamping(float value)
	static int _bind_setAngularDamping(lua_State *L) {
		if (!_lg_typecheck_setAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_angularDamping(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_angularDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_angularDamping(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_angularDamping = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_additionalDampingFactor(float value)
	static int _bind_setAdditionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setAdditionalDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_additionalDampingFactor(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_additionalDampingFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_additionalDampingFactor(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_additionalDampingFactor = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr(float value)
	static int _bind_setAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setAdditionalLinearDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_additionalLinearDampingThresholdSqr(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_additionalLinearDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr(float value)
	static int _bind_setAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setAdditionalAngularDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_additionalAngularDampingThresholdSqr(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_additionalAngularDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_additionalAngularDampingFactor(float value)
	static int _bind_setAdditionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setAdditionalAngularDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_additionalAngularDampingFactor(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_additionalAngularDampingFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_additionalAngularDampingFactor(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_additionalAngularDampingFactor = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_linearSleepingThreshold(float value)
	static int _bind_setLinearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setLinearSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_linearSleepingThreshold(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_linearSleepingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_linearSleepingThreshold(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_linearSleepingThreshold = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_angularSleepingThreshold(float value)
	static int _bind_setAngularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setAngularSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_angularSleepingThreshold(float value) function, expected prototype:\nvoid btRigidBodyFloatData::m_angularSleepingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_angularSleepingThreshold(float). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_angularSleepingThreshold = value;

		return 0;
	}

	// void btRigidBodyFloatData::m_additionalDamping(int value)
	static int _bind_setAdditionalDamping(lua_State *L) {
		if (!_lg_typecheck_setAdditionalDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBodyFloatData::m_additionalDamping(int value) function, expected prototype:\nvoid btRigidBodyFloatData::m_additionalDamping(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btRigidBodyFloatData* self=(Luna< btRigidBodyFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBodyFloatData::m_additionalDamping(int). Got : '%s'",typeid(Luna< btRigidBodyFloatData >::check(L,1)).name());
		}
		self->m_additionalDamping = value;

		return 0;
	}


	// Operator binds:

};

btRigidBodyFloatData* LunaTraits< btRigidBodyFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btRigidBodyFloatData >::_bind_dtor(btRigidBodyFloatData* obj) {
	delete obj;
}

const char LunaTraits< btRigidBodyFloatData >::className[] = "btRigidBodyFloatData";
const char LunaTraits< btRigidBodyFloatData >::fullName[] = "btRigidBodyFloatData";
const char LunaTraits< btRigidBodyFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btRigidBodyFloatData >::parents[] = {0};
const int LunaTraits< btRigidBodyFloatData >::hash = 1580424;
const int LunaTraits< btRigidBodyFloatData >::uniqueIDs[] = {1580424,0};

luna_RegType LunaTraits< btRigidBodyFloatData >::methods[] = {
	{"getCollisionObjectData", &luna_wrapper_btRigidBodyFloatData::_bind_getCollisionObjectData},
	{"getInvInertiaTensorWorld", &luna_wrapper_btRigidBodyFloatData::_bind_getInvInertiaTensorWorld},
	{"getLinearVelocity", &luna_wrapper_btRigidBodyFloatData::_bind_getLinearVelocity},
	{"getAngularVelocity", &luna_wrapper_btRigidBodyFloatData::_bind_getAngularVelocity},
	{"getAngularFactor", &luna_wrapper_btRigidBodyFloatData::_bind_getAngularFactor},
	{"getLinearFactor", &luna_wrapper_btRigidBodyFloatData::_bind_getLinearFactor},
	{"getGravity", &luna_wrapper_btRigidBodyFloatData::_bind_getGravity},
	{"get_gravity_acceleration", &luna_wrapper_btRigidBodyFloatData::_bind_get_gravity_acceleration},
	{"getInvInertiaLocal", &luna_wrapper_btRigidBodyFloatData::_bind_getInvInertiaLocal},
	{"getTotalForce", &luna_wrapper_btRigidBodyFloatData::_bind_getTotalForce},
	{"getTotalTorque", &luna_wrapper_btRigidBodyFloatData::_bind_getTotalTorque},
	{"getInverseMass", &luna_wrapper_btRigidBodyFloatData::_bind_getInverseMass},
	{"getLinearDamping", &luna_wrapper_btRigidBodyFloatData::_bind_getLinearDamping},
	{"getAngularDamping", &luna_wrapper_btRigidBodyFloatData::_bind_getAngularDamping},
	{"getAdditionalDampingFactor", &luna_wrapper_btRigidBodyFloatData::_bind_getAdditionalDampingFactor},
	{"getAdditionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBodyFloatData::_bind_getAdditionalLinearDampingThresholdSqr},
	{"getAdditionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBodyFloatData::_bind_getAdditionalAngularDampingThresholdSqr},
	{"getAdditionalAngularDampingFactor", &luna_wrapper_btRigidBodyFloatData::_bind_getAdditionalAngularDampingFactor},
	{"getLinearSleepingThreshold", &luna_wrapper_btRigidBodyFloatData::_bind_getLinearSleepingThreshold},
	{"getAngularSleepingThreshold", &luna_wrapper_btRigidBodyFloatData::_bind_getAngularSleepingThreshold},
	{"getAdditionalDamping", &luna_wrapper_btRigidBodyFloatData::_bind_getAdditionalDamping},
	{"setCollisionObjectData", &luna_wrapper_btRigidBodyFloatData::_bind_setCollisionObjectData},
	{"setInvInertiaTensorWorld", &luna_wrapper_btRigidBodyFloatData::_bind_setInvInertiaTensorWorld},
	{"setLinearVelocity", &luna_wrapper_btRigidBodyFloatData::_bind_setLinearVelocity},
	{"setAngularVelocity", &luna_wrapper_btRigidBodyFloatData::_bind_setAngularVelocity},
	{"setAngularFactor", &luna_wrapper_btRigidBodyFloatData::_bind_setAngularFactor},
	{"setLinearFactor", &luna_wrapper_btRigidBodyFloatData::_bind_setLinearFactor},
	{"setGravity", &luna_wrapper_btRigidBodyFloatData::_bind_setGravity},
	{"set_gravity_acceleration", &luna_wrapper_btRigidBodyFloatData::_bind_set_gravity_acceleration},
	{"setInvInertiaLocal", &luna_wrapper_btRigidBodyFloatData::_bind_setInvInertiaLocal},
	{"setTotalForce", &luna_wrapper_btRigidBodyFloatData::_bind_setTotalForce},
	{"setTotalTorque", &luna_wrapper_btRigidBodyFloatData::_bind_setTotalTorque},
	{"setInverseMass", &luna_wrapper_btRigidBodyFloatData::_bind_setInverseMass},
	{"setLinearDamping", &luna_wrapper_btRigidBodyFloatData::_bind_setLinearDamping},
	{"setAngularDamping", &luna_wrapper_btRigidBodyFloatData::_bind_setAngularDamping},
	{"setAdditionalDampingFactor", &luna_wrapper_btRigidBodyFloatData::_bind_setAdditionalDampingFactor},
	{"setAdditionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBodyFloatData::_bind_setAdditionalLinearDampingThresholdSqr},
	{"setAdditionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBodyFloatData::_bind_setAdditionalAngularDampingThresholdSqr},
	{"setAdditionalAngularDampingFactor", &luna_wrapper_btRigidBodyFloatData::_bind_setAdditionalAngularDampingFactor},
	{"setLinearSleepingThreshold", &luna_wrapper_btRigidBodyFloatData::_bind_setLinearSleepingThreshold},
	{"setAngularSleepingThreshold", &luna_wrapper_btRigidBodyFloatData::_bind_setAngularSleepingThreshold},
	{"setAdditionalDamping", &luna_wrapper_btRigidBodyFloatData::_bind_setAdditionalDamping},
	{"dynCast", &luna_wrapper_btRigidBodyFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btRigidBodyFloatData::_bind___eq},
	{"fromVoid", &luna_wrapper_btRigidBodyFloatData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btRigidBodyFloatData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btRigidBodyFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRigidBodyFloatData >::enumValues[] = {
	{0,0}
};


