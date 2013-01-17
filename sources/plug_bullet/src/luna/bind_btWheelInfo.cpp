#include <plug_common.h>

class luna_wrapper_btWheelInfo {
public:
	typedef Luna< btWheelInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45065223) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btWheelInfo*)");
		}

		btWheelInfo* rhs =(Luna< btWheelInfo >::check(L,2));
		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btWheelInfo");
		
		return luna_dynamicCast(L,converters,"btWheelInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65660504) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getSuspensionRestLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateWheel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,75375071) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_raycastInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_worldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_chassisConnectionPointCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelDirectionCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelAxleCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionRestLength1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelsRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelsDampingCompression(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelsDampingRelaxation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_frictionSlip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_steering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_deltaRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rollInfluence(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_engineForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_brake(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_clientInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_clippedInvContactDotSuspension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionRelativeVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelsSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_skidInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_raycastInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75375071) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_worldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_chassisConnectionPointCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelDirectionCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelAxleCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionRestLength1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelsRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelsDampingCompression(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelsDampingRelaxation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_frictionSlip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_steering(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_deltaRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rollInfluence(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_engineForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_brake(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_clientInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_clippedInvContactDotSuspension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionRelativeVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelsSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_skidInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btWheelInfo::btWheelInfo(btWheelInfoConstructionInfo & ci)
	static btWheelInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btWheelInfo::btWheelInfo(btWheelInfoConstructionInfo & ci) function, expected prototype:\nbtWheelInfo::btWheelInfo(btWheelInfoConstructionInfo & ci)\nClass arguments details:\narg 1 ID = 65660504\n");
		}

		btWheelInfoConstructionInfo* ci_ptr=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btWheelInfo::btWheelInfo function");
		}
		btWheelInfoConstructionInfo & ci=*ci_ptr;

		return new btWheelInfo(ci);
	}


	// Function binds:
	// float btWheelInfo::getSuspensionRestLength() const
	static int _bind_getSuspensionRestLength(lua_State *L) {
		if (!_lg_typecheck_getSuspensionRestLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::getSuspensionRestLength() const function, expected prototype:\nfloat btWheelInfo::getSuspensionRestLength() const\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::getSuspensionRestLength() const. Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->getSuspensionRestLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btWheelInfo::updateWheel(const btRigidBody & chassis, btWheelInfo::RaycastInfo & raycastInfo)
	static int _bind_updateWheel(lua_State *L) {
		if (!_lg_typecheck_updateWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::updateWheel(const btRigidBody & chassis, btWheelInfo::RaycastInfo & raycastInfo) function, expected prototype:\nvoid btWheelInfo::updateWheel(const btRigidBody & chassis, btWheelInfo::RaycastInfo & raycastInfo)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 75375071\n");
		}

		const btRigidBody* chassis_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !chassis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg chassis in btWheelInfo::updateWheel function");
		}
		const btRigidBody & chassis=*chassis_ptr;
		btWheelInfo::RaycastInfo* raycastInfo_ptr=(Luna< btWheelInfo::RaycastInfo >::check(L,3));
		if( !raycastInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raycastInfo in btWheelInfo::updateWheel function");
		}
		btWheelInfo::RaycastInfo & raycastInfo=*raycastInfo_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::updateWheel(const btRigidBody &, btWheelInfo::RaycastInfo &). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->updateWheel(chassis, raycastInfo);

		return 0;
	}

	// btWheelInfo::RaycastInfo btWheelInfo::m_raycastInfo()
	static int _bind_getM_raycastInfo(lua_State *L) {
		if (!_lg_typecheck_getM_raycastInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btWheelInfo::RaycastInfo btWheelInfo::m_raycastInfo() function, expected prototype:\nbtWheelInfo::RaycastInfo btWheelInfo::m_raycastInfo()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btWheelInfo::RaycastInfo btWheelInfo::m_raycastInfo(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		const btWheelInfo::RaycastInfo* lret = &self->m_raycastInfo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btWheelInfo::RaycastInfo >::push(L,lret,false);

		return 1;
	}

	// btTransform btWheelInfo::m_worldTransform()
	static int _bind_getM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btWheelInfo::m_worldTransform() function, expected prototype:\nbtTransform btWheelInfo::m_worldTransform()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btWheelInfo::m_worldTransform(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_worldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::m_chassisConnectionPointCS()
	static int _bind_getM_chassisConnectionPointCS(lua_State *L) {
		if (!_lg_typecheck_getM_chassisConnectionPointCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::m_chassisConnectionPointCS() function, expected prototype:\nbtVector3 btWheelInfo::m_chassisConnectionPointCS()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::m_chassisConnectionPointCS(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_chassisConnectionPointCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::m_wheelDirectionCS()
	static int _bind_getM_wheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelDirectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::m_wheelDirectionCS() function, expected prototype:\nbtVector3 btWheelInfo::m_wheelDirectionCS()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::m_wheelDirectionCS(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelDirectionCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::m_wheelAxleCS()
	static int _bind_getM_wheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelAxleCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::m_wheelAxleCS() function, expected prototype:\nbtVector3 btWheelInfo::m_wheelAxleCS()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::m_wheelAxleCS(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelAxleCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfo::m_suspensionRestLength1()
	static int _bind_getM_suspensionRestLength1(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionRestLength1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_suspensionRestLength1() function, expected prototype:\nfloat btWheelInfo::m_suspensionRestLength1()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_suspensionRestLength1(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionRestLength1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_maxSuspensionTravelCm()
	static int _bind_getM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_maxSuspensionTravelCm() function, expected prototype:\nfloat btWheelInfo::m_maxSuspensionTravelCm()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_maxSuspensionTravelCm(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionTravelCm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_wheelsRadius()
	static int _bind_getM_wheelsRadius(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_wheelsRadius() function, expected prototype:\nfloat btWheelInfo::m_wheelsRadius()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_wheelsRadius(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_suspensionStiffness()
	static int _bind_getM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_suspensionStiffness() function, expected prototype:\nfloat btWheelInfo::m_suspensionStiffness()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_suspensionStiffness(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionStiffness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_wheelsDampingCompression()
	static int _bind_getM_wheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsDampingCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_wheelsDampingCompression() function, expected prototype:\nfloat btWheelInfo::m_wheelsDampingCompression()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_wheelsDampingCompression(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsDampingCompression;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_wheelsDampingRelaxation()
	static int _bind_getM_wheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsDampingRelaxation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_wheelsDampingRelaxation() function, expected prototype:\nfloat btWheelInfo::m_wheelsDampingRelaxation()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_wheelsDampingRelaxation(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsDampingRelaxation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_frictionSlip()
	static int _bind_getM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_getM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_frictionSlip() function, expected prototype:\nfloat btWheelInfo::m_frictionSlip()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_frictionSlip(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_frictionSlip;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_steering()
	static int _bind_getM_steering(lua_State *L) {
		if (!_lg_typecheck_getM_steering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_steering() function, expected prototype:\nfloat btWheelInfo::m_steering()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_steering(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_steering;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_rotation()
	static int _bind_getM_rotation(lua_State *L) {
		if (!_lg_typecheck_getM_rotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_rotation() function, expected prototype:\nfloat btWheelInfo::m_rotation()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_rotation(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_rotation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_deltaRotation()
	static int _bind_getM_deltaRotation(lua_State *L) {
		if (!_lg_typecheck_getM_deltaRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_deltaRotation() function, expected prototype:\nfloat btWheelInfo::m_deltaRotation()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_deltaRotation(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_deltaRotation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_rollInfluence()
	static int _bind_getM_rollInfluence(lua_State *L) {
		if (!_lg_typecheck_getM_rollInfluence(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_rollInfluence() function, expected prototype:\nfloat btWheelInfo::m_rollInfluence()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_rollInfluence(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_rollInfluence;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_maxSuspensionForce()
	static int _bind_getM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_maxSuspensionForce() function, expected prototype:\nfloat btWheelInfo::m_maxSuspensionForce()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_maxSuspensionForce(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_engineForce()
	static int _bind_getM_engineForce(lua_State *L) {
		if (!_lg_typecheck_getM_engineForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_engineForce() function, expected prototype:\nfloat btWheelInfo::m_engineForce()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_engineForce(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_engineForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_brake()
	static int _bind_getM_brake(lua_State *L) {
		if (!_lg_typecheck_getM_brake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_brake() function, expected prototype:\nfloat btWheelInfo::m_brake()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_brake(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_brake;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btWheelInfo::m_bIsFrontWheel()
	static int _bind_getM_bIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_getM_bIsFrontWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btWheelInfo::m_bIsFrontWheel() function, expected prototype:\nbool btWheelInfo::m_bIsFrontWheel()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btWheelInfo::m_bIsFrontWheel(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		bool lret = self->m_bIsFrontWheel;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * btWheelInfo::m_clientInfo()
	static int _bind_getM_clientInfo(lua_State *L) {
		if (!_lg_typecheck_getM_clientInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btWheelInfo::m_clientInfo() function, expected prototype:\nvoid * btWheelInfo::m_clientInfo()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btWheelInfo::m_clientInfo(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		void * lret = self->m_clientInfo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfo::m_clippedInvContactDotSuspension()
	static int _bind_getM_clippedInvContactDotSuspension(lua_State *L) {
		if (!_lg_typecheck_getM_clippedInvContactDotSuspension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_clippedInvContactDotSuspension() function, expected prototype:\nfloat btWheelInfo::m_clippedInvContactDotSuspension()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_clippedInvContactDotSuspension(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_clippedInvContactDotSuspension;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_suspensionRelativeVelocity()
	static int _bind_getM_suspensionRelativeVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionRelativeVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_suspensionRelativeVelocity() function, expected prototype:\nfloat btWheelInfo::m_suspensionRelativeVelocity()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_suspensionRelativeVelocity(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionRelativeVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_wheelsSuspensionForce()
	static int _bind_getM_wheelsSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_wheelsSuspensionForce() function, expected prototype:\nfloat btWheelInfo::m_wheelsSuspensionForce()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_wheelsSuspensionForce(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsSuspensionForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfo::m_skidInfo()
	static int _bind_getM_skidInfo(lua_State *L) {
		if (!_lg_typecheck_getM_skidInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::m_skidInfo() function, expected prototype:\nfloat btWheelInfo::m_skidInfo()\nClass arguments details:\n");
		}


		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::m_skidInfo(). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		float lret = self->m_skidInfo;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btWheelInfo::m_raycastInfo(btWheelInfo::RaycastInfo value)
	static int _bind_setM_raycastInfo(lua_State *L) {
		if (!_lg_typecheck_setM_raycastInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_raycastInfo(btWheelInfo::RaycastInfo value) function, expected prototype:\nvoid btWheelInfo::m_raycastInfo(btWheelInfo::RaycastInfo value)\nClass arguments details:\narg 1 ID = 75375071\n");
		}

		btWheelInfo::RaycastInfo* value_ptr=(Luna< btWheelInfo::RaycastInfo >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::m_raycastInfo function");
		}
		btWheelInfo::RaycastInfo value=*value_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_raycastInfo(btWheelInfo::RaycastInfo). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_raycastInfo = value;

		return 0;
	}

	// void btWheelInfo::m_worldTransform(btTransform value)
	static int _bind_setM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_worldTransform(btTransform value) function, expected prototype:\nvoid btWheelInfo::m_worldTransform(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::m_worldTransform function");
		}
		btTransform value=*value_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_worldTransform(btTransform). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_worldTransform = value;

		return 0;
	}

	// void btWheelInfo::m_chassisConnectionPointCS(btVector3 value)
	static int _bind_setM_chassisConnectionPointCS(lua_State *L) {
		if (!_lg_typecheck_setM_chassisConnectionPointCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_chassisConnectionPointCS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::m_chassisConnectionPointCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::m_chassisConnectionPointCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_chassisConnectionPointCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_chassisConnectionPointCS = value;

		return 0;
	}

	// void btWheelInfo::m_wheelDirectionCS(btVector3 value)
	static int _bind_setM_wheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelDirectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelDirectionCS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::m_wheelDirectionCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::m_wheelDirectionCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelDirectionCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelDirectionCS = value;

		return 0;
	}

	// void btWheelInfo::m_wheelAxleCS(btVector3 value)
	static int _bind_setM_wheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelAxleCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelAxleCS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::m_wheelAxleCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::m_wheelAxleCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelAxleCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelAxleCS = value;

		return 0;
	}

	// void btWheelInfo::m_suspensionRestLength1(float value)
	static int _bind_setM_suspensionRestLength1(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionRestLength1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_suspensionRestLength1(float value) function, expected prototype:\nvoid btWheelInfo::m_suspensionRestLength1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_suspensionRestLength1(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_suspensionRestLength1 = value;

		return 0;
	}

	// void btWheelInfo::m_maxSuspensionTravelCm(float value)
	static int _bind_setM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_maxSuspensionTravelCm(float value) function, expected prototype:\nvoid btWheelInfo::m_maxSuspensionTravelCm(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_maxSuspensionTravelCm(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_maxSuspensionTravelCm = value;

		return 0;
	}

	// void btWheelInfo::m_wheelsRadius(float value)
	static int _bind_setM_wheelsRadius(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelsRadius(float value) function, expected prototype:\nvoid btWheelInfo::m_wheelsRadius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelsRadius(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelsRadius = value;

		return 0;
	}

	// void btWheelInfo::m_suspensionStiffness(float value)
	static int _bind_setM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_suspensionStiffness(float value) function, expected prototype:\nvoid btWheelInfo::m_suspensionStiffness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_suspensionStiffness(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_suspensionStiffness = value;

		return 0;
	}

	// void btWheelInfo::m_wheelsDampingCompression(float value)
	static int _bind_setM_wheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsDampingCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelsDampingCompression(float value) function, expected prototype:\nvoid btWheelInfo::m_wheelsDampingCompression(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelsDampingCompression(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelsDampingCompression = value;

		return 0;
	}

	// void btWheelInfo::m_wheelsDampingRelaxation(float value)
	static int _bind_setM_wheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsDampingRelaxation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelsDampingRelaxation(float value) function, expected prototype:\nvoid btWheelInfo::m_wheelsDampingRelaxation(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelsDampingRelaxation(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelsDampingRelaxation = value;

		return 0;
	}

	// void btWheelInfo::m_frictionSlip(float value)
	static int _bind_setM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_setM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_frictionSlip(float value) function, expected prototype:\nvoid btWheelInfo::m_frictionSlip(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_frictionSlip(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_frictionSlip = value;

		return 0;
	}

	// void btWheelInfo::m_steering(float value)
	static int _bind_setM_steering(lua_State *L) {
		if (!_lg_typecheck_setM_steering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_steering(float value) function, expected prototype:\nvoid btWheelInfo::m_steering(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_steering(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_steering = value;

		return 0;
	}

	// void btWheelInfo::m_rotation(float value)
	static int _bind_setM_rotation(lua_State *L) {
		if (!_lg_typecheck_setM_rotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_rotation(float value) function, expected prototype:\nvoid btWheelInfo::m_rotation(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_rotation(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_rotation = value;

		return 0;
	}

	// void btWheelInfo::m_deltaRotation(float value)
	static int _bind_setM_deltaRotation(lua_State *L) {
		if (!_lg_typecheck_setM_deltaRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_deltaRotation(float value) function, expected prototype:\nvoid btWheelInfo::m_deltaRotation(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_deltaRotation(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_deltaRotation = value;

		return 0;
	}

	// void btWheelInfo::m_rollInfluence(float value)
	static int _bind_setM_rollInfluence(lua_State *L) {
		if (!_lg_typecheck_setM_rollInfluence(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_rollInfluence(float value) function, expected prototype:\nvoid btWheelInfo::m_rollInfluence(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_rollInfluence(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_rollInfluence = value;

		return 0;
	}

	// void btWheelInfo::m_maxSuspensionForce(float value)
	static int _bind_setM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_maxSuspensionForce(float value) function, expected prototype:\nvoid btWheelInfo::m_maxSuspensionForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_maxSuspensionForce(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_maxSuspensionForce = value;

		return 0;
	}

	// void btWheelInfo::m_engineForce(float value)
	static int _bind_setM_engineForce(lua_State *L) {
		if (!_lg_typecheck_setM_engineForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_engineForce(float value) function, expected prototype:\nvoid btWheelInfo::m_engineForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_engineForce(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_engineForce = value;

		return 0;
	}

	// void btWheelInfo::m_brake(float value)
	static int _bind_setM_brake(lua_State *L) {
		if (!_lg_typecheck_setM_brake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_brake(float value) function, expected prototype:\nvoid btWheelInfo::m_brake(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_brake(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_brake = value;

		return 0;
	}

	// void btWheelInfo::m_bIsFrontWheel(bool value)
	static int _bind_setM_bIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_setM_bIsFrontWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_bIsFrontWheel(bool value) function, expected prototype:\nvoid btWheelInfo::m_bIsFrontWheel(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_bIsFrontWheel(bool). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_bIsFrontWheel = value;

		return 0;
	}

	// void btWheelInfo::m_clientInfo(void * value)
	static int _bind_setM_clientInfo(lua_State *L) {
		if (!_lg_typecheck_setM_clientInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_clientInfo(void * value) function, expected prototype:\nvoid btWheelInfo::m_clientInfo(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_clientInfo(void *). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_clientInfo = value;

		return 0;
	}

	// void btWheelInfo::m_clippedInvContactDotSuspension(float value)
	static int _bind_setM_clippedInvContactDotSuspension(lua_State *L) {
		if (!_lg_typecheck_setM_clippedInvContactDotSuspension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_clippedInvContactDotSuspension(float value) function, expected prototype:\nvoid btWheelInfo::m_clippedInvContactDotSuspension(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_clippedInvContactDotSuspension(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_clippedInvContactDotSuspension = value;

		return 0;
	}

	// void btWheelInfo::m_suspensionRelativeVelocity(float value)
	static int _bind_setM_suspensionRelativeVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionRelativeVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_suspensionRelativeVelocity(float value) function, expected prototype:\nvoid btWheelInfo::m_suspensionRelativeVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_suspensionRelativeVelocity(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_suspensionRelativeVelocity = value;

		return 0;
	}

	// void btWheelInfo::m_wheelsSuspensionForce(float value)
	static int _bind_setM_wheelsSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_wheelsSuspensionForce(float value) function, expected prototype:\nvoid btWheelInfo::m_wheelsSuspensionForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_wheelsSuspensionForce(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_wheelsSuspensionForce = value;

		return 0;
	}

	// void btWheelInfo::m_skidInfo(float value)
	static int _bind_setM_skidInfo(lua_State *L) {
		if (!_lg_typecheck_setM_skidInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::m_skidInfo(float value) function, expected prototype:\nvoid btWheelInfo::m_skidInfo(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo* self=(Luna< btWheelInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::m_skidInfo(float). Got : '%s'",typeid(Luna< btWheelInfo >::check(L,1)).name());
		}
		self->m_skidInfo = value;

		return 0;
	}


	// Operator binds:

};

btWheelInfo* LunaTraits< btWheelInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btWheelInfo::_bind_ctor(L);
}

void LunaTraits< btWheelInfo >::_bind_dtor(btWheelInfo* obj) {
	delete obj;
}

const char LunaTraits< btWheelInfo >::className[] = "btWheelInfo";
const char LunaTraits< btWheelInfo >::fullName[] = "btWheelInfo";
const char LunaTraits< btWheelInfo >::moduleName[] = "bullet";
const char* LunaTraits< btWheelInfo >::parents[] = {0};
const int LunaTraits< btWheelInfo >::hash = 45065223;
const int LunaTraits< btWheelInfo >::uniqueIDs[] = {45065223,0};

luna_RegType LunaTraits< btWheelInfo >::methods[] = {
	{"getSuspensionRestLength", &luna_wrapper_btWheelInfo::_bind_getSuspensionRestLength},
	{"updateWheel", &luna_wrapper_btWheelInfo::_bind_updateWheel},
	{"getM_raycastInfo", &luna_wrapper_btWheelInfo::_bind_getM_raycastInfo},
	{"getM_worldTransform", &luna_wrapper_btWheelInfo::_bind_getM_worldTransform},
	{"getM_chassisConnectionPointCS", &luna_wrapper_btWheelInfo::_bind_getM_chassisConnectionPointCS},
	{"getM_wheelDirectionCS", &luna_wrapper_btWheelInfo::_bind_getM_wheelDirectionCS},
	{"getM_wheelAxleCS", &luna_wrapper_btWheelInfo::_bind_getM_wheelAxleCS},
	{"getM_suspensionRestLength1", &luna_wrapper_btWheelInfo::_bind_getM_suspensionRestLength1},
	{"getM_maxSuspensionTravelCm", &luna_wrapper_btWheelInfo::_bind_getM_maxSuspensionTravelCm},
	{"getM_wheelsRadius", &luna_wrapper_btWheelInfo::_bind_getM_wheelsRadius},
	{"getM_suspensionStiffness", &luna_wrapper_btWheelInfo::_bind_getM_suspensionStiffness},
	{"getM_wheelsDampingCompression", &luna_wrapper_btWheelInfo::_bind_getM_wheelsDampingCompression},
	{"getM_wheelsDampingRelaxation", &luna_wrapper_btWheelInfo::_bind_getM_wheelsDampingRelaxation},
	{"getM_frictionSlip", &luna_wrapper_btWheelInfo::_bind_getM_frictionSlip},
	{"getM_steering", &luna_wrapper_btWheelInfo::_bind_getM_steering},
	{"getM_rotation", &luna_wrapper_btWheelInfo::_bind_getM_rotation},
	{"getM_deltaRotation", &luna_wrapper_btWheelInfo::_bind_getM_deltaRotation},
	{"getM_rollInfluence", &luna_wrapper_btWheelInfo::_bind_getM_rollInfluence},
	{"getM_maxSuspensionForce", &luna_wrapper_btWheelInfo::_bind_getM_maxSuspensionForce},
	{"getM_engineForce", &luna_wrapper_btWheelInfo::_bind_getM_engineForce},
	{"getM_brake", &luna_wrapper_btWheelInfo::_bind_getM_brake},
	{"getM_bIsFrontWheel", &luna_wrapper_btWheelInfo::_bind_getM_bIsFrontWheel},
	{"getM_clientInfo", &luna_wrapper_btWheelInfo::_bind_getM_clientInfo},
	{"getM_clippedInvContactDotSuspension", &luna_wrapper_btWheelInfo::_bind_getM_clippedInvContactDotSuspension},
	{"getM_suspensionRelativeVelocity", &luna_wrapper_btWheelInfo::_bind_getM_suspensionRelativeVelocity},
	{"getM_wheelsSuspensionForce", &luna_wrapper_btWheelInfo::_bind_getM_wheelsSuspensionForce},
	{"getM_skidInfo", &luna_wrapper_btWheelInfo::_bind_getM_skidInfo},
	{"setM_raycastInfo", &luna_wrapper_btWheelInfo::_bind_setM_raycastInfo},
	{"setM_worldTransform", &luna_wrapper_btWheelInfo::_bind_setM_worldTransform},
	{"setM_chassisConnectionPointCS", &luna_wrapper_btWheelInfo::_bind_setM_chassisConnectionPointCS},
	{"setM_wheelDirectionCS", &luna_wrapper_btWheelInfo::_bind_setM_wheelDirectionCS},
	{"setM_wheelAxleCS", &luna_wrapper_btWheelInfo::_bind_setM_wheelAxleCS},
	{"setM_suspensionRestLength1", &luna_wrapper_btWheelInfo::_bind_setM_suspensionRestLength1},
	{"setM_maxSuspensionTravelCm", &luna_wrapper_btWheelInfo::_bind_setM_maxSuspensionTravelCm},
	{"setM_wheelsRadius", &luna_wrapper_btWheelInfo::_bind_setM_wheelsRadius},
	{"setM_suspensionStiffness", &luna_wrapper_btWheelInfo::_bind_setM_suspensionStiffness},
	{"setM_wheelsDampingCompression", &luna_wrapper_btWheelInfo::_bind_setM_wheelsDampingCompression},
	{"setM_wheelsDampingRelaxation", &luna_wrapper_btWheelInfo::_bind_setM_wheelsDampingRelaxation},
	{"setM_frictionSlip", &luna_wrapper_btWheelInfo::_bind_setM_frictionSlip},
	{"setM_steering", &luna_wrapper_btWheelInfo::_bind_setM_steering},
	{"setM_rotation", &luna_wrapper_btWheelInfo::_bind_setM_rotation},
	{"setM_deltaRotation", &luna_wrapper_btWheelInfo::_bind_setM_deltaRotation},
	{"setM_rollInfluence", &luna_wrapper_btWheelInfo::_bind_setM_rollInfluence},
	{"setM_maxSuspensionForce", &luna_wrapper_btWheelInfo::_bind_setM_maxSuspensionForce},
	{"setM_engineForce", &luna_wrapper_btWheelInfo::_bind_setM_engineForce},
	{"setM_brake", &luna_wrapper_btWheelInfo::_bind_setM_brake},
	{"setM_bIsFrontWheel", &luna_wrapper_btWheelInfo::_bind_setM_bIsFrontWheel},
	{"setM_clientInfo", &luna_wrapper_btWheelInfo::_bind_setM_clientInfo},
	{"setM_clippedInvContactDotSuspension", &luna_wrapper_btWheelInfo::_bind_setM_clippedInvContactDotSuspension},
	{"setM_suspensionRelativeVelocity", &luna_wrapper_btWheelInfo::_bind_setM_suspensionRelativeVelocity},
	{"setM_wheelsSuspensionForce", &luna_wrapper_btWheelInfo::_bind_setM_wheelsSuspensionForce},
	{"setM_skidInfo", &luna_wrapper_btWheelInfo::_bind_setM_skidInfo},
	{"dynCast", &luna_wrapper_btWheelInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btWheelInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btWheelInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btWheelInfo >::enumValues[] = {
	{0,0}
};


