#include <plug_common.h>

class luna_wrapper_btRigidBodyDoubleData {
public:
	typedef Luna< btRigidBodyDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50557776) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRigidBodyDoubleData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btRigidBodyDoubleData* rhs =(Luna< btRigidBodyDoubleData >::check(L,2));
		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btRigidBodyDoubleData* self= (btRigidBodyDoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btRigidBodyDoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50557776) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btRigidBodyDoubleData");
		
		return luna_dynamicCast(L,converters,"btRigidBodyDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,73944842) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvInertiaTensorWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48479346) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_gravity_acceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvInertiaLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotalForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotalTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInverseMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalAngularDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdditionalDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionObjectDoubleData btRigidBodyDoubleData::m_collisionObjectData()
	static int _bind_getCollisionObjectData(lua_State *L) {
		if (!_lg_typecheck_getCollisionObjectData(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionObjectDoubleData btRigidBodyDoubleData::m_collisionObjectData() function, expected prototype:\nbtCollisionObjectDoubleData btRigidBodyDoubleData::m_collisionObjectData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionObjectDoubleData btRigidBodyDoubleData::m_collisionObjectData(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btCollisionObjectDoubleData* lret = &self->m_collisionObjectData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectDoubleData >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3DoubleData btRigidBodyDoubleData::m_invInertiaTensorWorld()
	static int _bind_getInvInertiaTensorWorld(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaTensorWorld(L)) {
			luaL_error(L, "luna typecheck failed in btMatrix3x3DoubleData btRigidBodyDoubleData::m_invInertiaTensorWorld() function, expected prototype:\nbtMatrix3x3DoubleData btRigidBodyDoubleData::m_invInertiaTensorWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btMatrix3x3DoubleData btRigidBodyDoubleData::m_invInertiaTensorWorld(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btMatrix3x3DoubleData* lret = &self->m_invInertiaTensorWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_linearVelocity()
	static int _bind_getLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getLinearVelocity(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_linearVelocity() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_linearVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_linearVelocity(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_linearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_angularVelocity()
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_angularVelocity() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_angularVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_angularVelocity(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_angularVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_angularFactor()
	static int _bind_getAngularFactor(lua_State *L) {
		if (!_lg_typecheck_getAngularFactor(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_angularFactor() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_angularFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_angularFactor(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_angularFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_linearFactor()
	static int _bind_getLinearFactor(lua_State *L) {
		if (!_lg_typecheck_getLinearFactor(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_linearFactor() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_linearFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_linearFactor(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_linearFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_gravity()
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_gravity() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_gravity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_gravity(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_gravity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_gravity_acceleration()
	static int _bind_get_gravity_acceleration(lua_State *L) {
		if (!_lg_typecheck_get_gravity_acceleration(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_gravity_acceleration() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_gravity_acceleration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_gravity_acceleration(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_gravity_acceleration;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_invInertiaLocal()
	static int _bind_getInvInertiaLocal(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaLocal(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_invInertiaLocal() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_invInertiaLocal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_invInertiaLocal(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_invInertiaLocal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_totalForce()
	static int _bind_getTotalForce(lua_State *L) {
		if (!_lg_typecheck_getTotalForce(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_totalForce() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_totalForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_totalForce(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_totalForce;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btRigidBodyDoubleData::m_totalTorque()
	static int _bind_getTotalTorque(lua_State *L) {
		if (!_lg_typecheck_getTotalTorque(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btRigidBodyDoubleData::m_totalTorque() function, expected prototype:\nbtVector3DoubleData btRigidBodyDoubleData::m_totalTorque()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btRigidBodyDoubleData::m_totalTorque(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_totalTorque;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// double btRigidBodyDoubleData::m_inverseMass()
	static int _bind_getInverseMass(lua_State *L) {
		if (!_lg_typecheck_getInverseMass(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_inverseMass() function, expected prototype:\ndouble btRigidBodyDoubleData::m_inverseMass()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_inverseMass(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_inverseMass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_linearDamping()
	static int _bind_getLinearDamping(lua_State *L) {
		if (!_lg_typecheck_getLinearDamping(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_linearDamping() function, expected prototype:\ndouble btRigidBodyDoubleData::m_linearDamping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_linearDamping(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_linearDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_angularDamping()
	static int _bind_getAngularDamping(lua_State *L) {
		if (!_lg_typecheck_getAngularDamping(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_angularDamping() function, expected prototype:\ndouble btRigidBodyDoubleData::m_angularDamping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_angularDamping(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_angularDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_additionalDampingFactor()
	static int _bind_getAdditionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getAdditionalDampingFactor(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_additionalDampingFactor() function, expected prototype:\ndouble btRigidBodyDoubleData::m_additionalDampingFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_additionalDampingFactor(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_additionalDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr()
	static int _bind_getAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getAdditionalLinearDampingThresholdSqr(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr() function, expected prototype:\ndouble btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_additionalLinearDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr()
	static int _bind_getAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getAdditionalAngularDampingThresholdSqr(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr() function, expected prototype:\ndouble btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_additionalAngularDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_additionalAngularDampingFactor()
	static int _bind_getAdditionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getAdditionalAngularDampingFactor(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_additionalAngularDampingFactor() function, expected prototype:\ndouble btRigidBodyDoubleData::m_additionalAngularDampingFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_additionalAngularDampingFactor(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_additionalAngularDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_linearSleepingThreshold()
	static int _bind_getLinearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getLinearSleepingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_linearSleepingThreshold() function, expected prototype:\ndouble btRigidBodyDoubleData::m_linearSleepingThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_linearSleepingThreshold(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_linearSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btRigidBodyDoubleData::m_angularSleepingThreshold()
	static int _bind_getAngularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getAngularSleepingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in double btRigidBodyDoubleData::m_angularSleepingThreshold() function, expected prototype:\ndouble btRigidBodyDoubleData::m_angularSleepingThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double btRigidBodyDoubleData::m_angularSleepingThreshold(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_angularSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRigidBodyDoubleData::m_additionalDamping()
	static int _bind_getAdditionalDamping(lua_State *L) {
		if (!_lg_typecheck_getAdditionalDamping(L)) {
			luaL_error(L, "luna typecheck failed in int btRigidBodyDoubleData::m_additionalDamping() function, expected prototype:\nint btRigidBodyDoubleData::m_additionalDamping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btRigidBodyDoubleData::m_additionalDamping(). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_additionalDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBodyDoubleData::m_collisionObjectData(btCollisionObjectDoubleData value)
	static int _bind_setCollisionObjectData(lua_State *L) {
		if (!_lg_typecheck_setCollisionObjectData(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_collisionObjectData(btCollisionObjectDoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_collisionObjectData(btCollisionObjectDoubleData value)\nClass arguments details:\narg 1 ID = 73944842\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObjectDoubleData* value_ptr=(Luna< btCollisionObjectDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_collisionObjectData function");
		}
		btCollisionObjectDoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_collisionObjectData(btCollisionObjectDoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_collisionObjectData = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_invInertiaTensorWorld(btMatrix3x3DoubleData value)
	static int _bind_setInvInertiaTensorWorld(lua_State *L) {
		if (!_lg_typecheck_setInvInertiaTensorWorld(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_invInertiaTensorWorld(btMatrix3x3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_invInertiaTensorWorld(btMatrix3x3DoubleData value)\nClass arguments details:\narg 1 ID = 48479346\n\n%s",luna_dumpStack(L).c_str());
		}

		btMatrix3x3DoubleData* value_ptr=(Luna< btMatrix3x3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_invInertiaTensorWorld function");
		}
		btMatrix3x3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_invInertiaTensorWorld(btMatrix3x3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_invInertiaTensorWorld = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_linearVelocity(btVector3DoubleData value)
	static int _bind_setLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setLinearVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_linearVelocity(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_linearVelocity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_linearVelocity function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_linearVelocity(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_linearVelocity = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_angularVelocity(btVector3DoubleData value)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_angularVelocity(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_angularVelocity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_angularVelocity function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_angularVelocity(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_angularVelocity = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_angularFactor(btVector3DoubleData value)
	static int _bind_setAngularFactor(lua_State *L) {
		if (!_lg_typecheck_setAngularFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_angularFactor(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_angularFactor(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_angularFactor function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_angularFactor(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_angularFactor = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_linearFactor(btVector3DoubleData value)
	static int _bind_setLinearFactor(lua_State *L) {
		if (!_lg_typecheck_setLinearFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_linearFactor(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_linearFactor(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_linearFactor function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_linearFactor(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_linearFactor = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_gravity(btVector3DoubleData value)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_gravity(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_gravity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_gravity function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_gravity(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_gravity = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_gravity_acceleration(btVector3DoubleData value)
	static int _bind_set_gravity_acceleration(lua_State *L) {
		if (!_lg_typecheck_set_gravity_acceleration(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_gravity_acceleration(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_gravity_acceleration(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_gravity_acceleration function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_gravity_acceleration(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_gravity_acceleration = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_invInertiaLocal(btVector3DoubleData value)
	static int _bind_setInvInertiaLocal(lua_State *L) {
		if (!_lg_typecheck_setInvInertiaLocal(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_invInertiaLocal(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_invInertiaLocal(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_invInertiaLocal function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_invInertiaLocal(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_invInertiaLocal = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_totalForce(btVector3DoubleData value)
	static int _bind_setTotalForce(lua_State *L) {
		if (!_lg_typecheck_setTotalForce(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_totalForce(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_totalForce(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_totalForce function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_totalForce(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_totalForce = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_totalTorque(btVector3DoubleData value)
	static int _bind_setTotalTorque(lua_State *L) {
		if (!_lg_typecheck_setTotalTorque(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_totalTorque(btVector3DoubleData value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_totalTorque(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBodyDoubleData::m_totalTorque function");
		}
		btVector3DoubleData value=*value_ptr;

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_totalTorque(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_totalTorque = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_inverseMass(double value)
	static int _bind_setInverseMass(lua_State *L) {
		if (!_lg_typecheck_setInverseMass(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_inverseMass(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_inverseMass(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_inverseMass(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_inverseMass = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_linearDamping(double value)
	static int _bind_setLinearDamping(lua_State *L) {
		if (!_lg_typecheck_setLinearDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_linearDamping(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_linearDamping(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_linearDamping(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_linearDamping = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_angularDamping(double value)
	static int _bind_setAngularDamping(lua_State *L) {
		if (!_lg_typecheck_setAngularDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_angularDamping(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_angularDamping(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_angularDamping(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_angularDamping = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_additionalDampingFactor(double value)
	static int _bind_setAdditionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setAdditionalDampingFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_additionalDampingFactor(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_additionalDampingFactor(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_additionalDampingFactor(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_additionalDampingFactor = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr(double value)
	static int _bind_setAdditionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setAdditionalLinearDampingThresholdSqr(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_additionalLinearDampingThresholdSqr(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_additionalLinearDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr(double value)
	static int _bind_setAdditionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setAdditionalAngularDampingThresholdSqr(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_additionalAngularDampingThresholdSqr(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_additionalAngularDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_additionalAngularDampingFactor(double value)
	static int _bind_setAdditionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setAdditionalAngularDampingFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_additionalAngularDampingFactor(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_additionalAngularDampingFactor(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_additionalAngularDampingFactor(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_additionalAngularDampingFactor = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_linearSleepingThreshold(double value)
	static int _bind_setLinearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setLinearSleepingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_linearSleepingThreshold(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_linearSleepingThreshold(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_linearSleepingThreshold(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_linearSleepingThreshold = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_angularSleepingThreshold(double value)
	static int _bind_setAngularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setAngularSleepingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_angularSleepingThreshold(double value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_angularSleepingThreshold(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_angularSleepingThreshold(double). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_angularSleepingThreshold = value;

		return 0;
	}

	// void btRigidBodyDoubleData::m_additionalDamping(int value)
	static int _bind_setAdditionalDamping(lua_State *L) {
		if (!_lg_typecheck_setAdditionalDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btRigidBodyDoubleData::m_additionalDamping(int value) function, expected prototype:\nvoid btRigidBodyDoubleData::m_additionalDamping(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btRigidBodyDoubleData* self=(Luna< btRigidBodyDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRigidBodyDoubleData::m_additionalDamping(int). Got : '%s'\n%s",typeid(Luna< btRigidBodyDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_additionalDamping = value;

		return 0;
	}


	// Operator binds:

};

btRigidBodyDoubleData* LunaTraits< btRigidBodyDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btRigidBodyDoubleData >::_bind_dtor(btRigidBodyDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btRigidBodyDoubleData >::className[] = "btRigidBodyDoubleData";
const char LunaTraits< btRigidBodyDoubleData >::fullName[] = "btRigidBodyDoubleData";
const char LunaTraits< btRigidBodyDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btRigidBodyDoubleData >::parents[] = {0};
const int LunaTraits< btRigidBodyDoubleData >::hash = 50557776;
const int LunaTraits< btRigidBodyDoubleData >::uniqueIDs[] = {50557776,0};

luna_RegType LunaTraits< btRigidBodyDoubleData >::methods[] = {
	{"getCollisionObjectData", &luna_wrapper_btRigidBodyDoubleData::_bind_getCollisionObjectData},
	{"getInvInertiaTensorWorld", &luna_wrapper_btRigidBodyDoubleData::_bind_getInvInertiaTensorWorld},
	{"getLinearVelocity", &luna_wrapper_btRigidBodyDoubleData::_bind_getLinearVelocity},
	{"getAngularVelocity", &luna_wrapper_btRigidBodyDoubleData::_bind_getAngularVelocity},
	{"getAngularFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_getAngularFactor},
	{"getLinearFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_getLinearFactor},
	{"getGravity", &luna_wrapper_btRigidBodyDoubleData::_bind_getGravity},
	{"get_gravity_acceleration", &luna_wrapper_btRigidBodyDoubleData::_bind_get_gravity_acceleration},
	{"getInvInertiaLocal", &luna_wrapper_btRigidBodyDoubleData::_bind_getInvInertiaLocal},
	{"getTotalForce", &luna_wrapper_btRigidBodyDoubleData::_bind_getTotalForce},
	{"getTotalTorque", &luna_wrapper_btRigidBodyDoubleData::_bind_getTotalTorque},
	{"getInverseMass", &luna_wrapper_btRigidBodyDoubleData::_bind_getInverseMass},
	{"getLinearDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_getLinearDamping},
	{"getAngularDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_getAngularDamping},
	{"getAdditionalDampingFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_getAdditionalDampingFactor},
	{"getAdditionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBodyDoubleData::_bind_getAdditionalLinearDampingThresholdSqr},
	{"getAdditionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBodyDoubleData::_bind_getAdditionalAngularDampingThresholdSqr},
	{"getAdditionalAngularDampingFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_getAdditionalAngularDampingFactor},
	{"getLinearSleepingThreshold", &luna_wrapper_btRigidBodyDoubleData::_bind_getLinearSleepingThreshold},
	{"getAngularSleepingThreshold", &luna_wrapper_btRigidBodyDoubleData::_bind_getAngularSleepingThreshold},
	{"getAdditionalDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_getAdditionalDamping},
	{"setCollisionObjectData", &luna_wrapper_btRigidBodyDoubleData::_bind_setCollisionObjectData},
	{"setInvInertiaTensorWorld", &luna_wrapper_btRigidBodyDoubleData::_bind_setInvInertiaTensorWorld},
	{"setLinearVelocity", &luna_wrapper_btRigidBodyDoubleData::_bind_setLinearVelocity},
	{"setAngularVelocity", &luna_wrapper_btRigidBodyDoubleData::_bind_setAngularVelocity},
	{"setAngularFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_setAngularFactor},
	{"setLinearFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_setLinearFactor},
	{"setGravity", &luna_wrapper_btRigidBodyDoubleData::_bind_setGravity},
	{"set_gravity_acceleration", &luna_wrapper_btRigidBodyDoubleData::_bind_set_gravity_acceleration},
	{"setInvInertiaLocal", &luna_wrapper_btRigidBodyDoubleData::_bind_setInvInertiaLocal},
	{"setTotalForce", &luna_wrapper_btRigidBodyDoubleData::_bind_setTotalForce},
	{"setTotalTorque", &luna_wrapper_btRigidBodyDoubleData::_bind_setTotalTorque},
	{"setInverseMass", &luna_wrapper_btRigidBodyDoubleData::_bind_setInverseMass},
	{"setLinearDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_setLinearDamping},
	{"setAngularDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_setAngularDamping},
	{"setAdditionalDampingFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_setAdditionalDampingFactor},
	{"setAdditionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBodyDoubleData::_bind_setAdditionalLinearDampingThresholdSqr},
	{"setAdditionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBodyDoubleData::_bind_setAdditionalAngularDampingThresholdSqr},
	{"setAdditionalAngularDampingFactor", &luna_wrapper_btRigidBodyDoubleData::_bind_setAdditionalAngularDampingFactor},
	{"setLinearSleepingThreshold", &luna_wrapper_btRigidBodyDoubleData::_bind_setLinearSleepingThreshold},
	{"setAngularSleepingThreshold", &luna_wrapper_btRigidBodyDoubleData::_bind_setAngularSleepingThreshold},
	{"setAdditionalDamping", &luna_wrapper_btRigidBodyDoubleData::_bind_setAdditionalDamping},
	{"dynCast", &luna_wrapper_btRigidBodyDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btRigidBodyDoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btRigidBodyDoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btRigidBodyDoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btRigidBodyDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRigidBodyDoubleData >::enumValues[] = {
	{0,0}
};


