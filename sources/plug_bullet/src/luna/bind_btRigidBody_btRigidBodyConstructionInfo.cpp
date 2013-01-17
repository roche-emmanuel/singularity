#include <plug_common.h>

class luna_wrapper_btRigidBody_btRigidBodyConstructionInfo {
public:
	typedef Luna< btRigidBody::btRigidBodyConstructionInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13789036) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRigidBody::btRigidBodyConstructionInfo*)");
		}

		btRigidBody::btRigidBodyConstructionInfo* rhs =(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,2));
		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
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

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btRigidBody::btRigidBodyConstructionInfo");
		
		return luna_dynamicCast(L,converters,"btRigidBody::btRigidBodyConstructionInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,40784278)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_mass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_motionState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_startWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localInertia(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_linearDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_friction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rollingFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_restitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_linearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_additionalDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_additionalDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_additionalLinearDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_additionalAngularDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_additionalAngularDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_mass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_motionState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,40784278)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_startWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_localInertia(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_linearDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_friction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rollingFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_restitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_linearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_additionalDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_additionalDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_additionalLinearDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_additionalAngularDampingThresholdSqr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_additionalAngularDampingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRigidBody::btRigidBodyConstructionInfo::btRigidBodyConstructionInfo(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))
	static btRigidBody::btRigidBodyConstructionInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody::btRigidBodyConstructionInfo::btRigidBodyConstructionInfo(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0)) function, expected prototype:\nbtRigidBody::btRigidBodyConstructionInfo::btRigidBodyConstructionInfo(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))\nClass arguments details:\narg 2 ID = 40784278\narg 3 ID = 58243831\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		float mass=(float)lua_tonumber(L,1);
		btMotionState* motionState=(Luna< btMotionState >::check(L,2));
		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* localInertia_ptr=luatop>3 ? (Luna< btVector3 >::check(L,4)) : NULL;
		if( luatop>3 && !localInertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localInertia in btRigidBody::btRigidBodyConstructionInfo::btRigidBodyConstructionInfo function");
		}
		const btVector3 & localInertia=luatop>3 ? *localInertia_ptr : btVector3 (0, 0, 0);

		return new btRigidBody::btRigidBodyConstructionInfo(mass, motionState, collisionShape, localInertia);
	}


	// Function binds:
	// float btRigidBody::btRigidBodyConstructionInfo::m_mass()
	static int _bind_getM_mass(lua_State *L) {
		if (!_lg_typecheck_getM_mass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_mass() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_mass()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_mass(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_mass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btMotionState * btRigidBody::btRigidBodyConstructionInfo::m_motionState()
	static int _bind_getM_motionState(lua_State *L) {
		if (!_lg_typecheck_getM_motionState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMotionState * btRigidBody::btRigidBodyConstructionInfo::m_motionState() function, expected prototype:\nbtMotionState * btRigidBody::btRigidBodyConstructionInfo::m_motionState()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMotionState * btRigidBody::btRigidBodyConstructionInfo::m_motionState(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		btMotionState * lret = self->m_motionState;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMotionState >::push(L,lret,false);

		return 1;
	}

	// btTransform btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform()
	static int _bind_getM_startWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_startWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform() function, expected prototype:\nbtTransform btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_startWorldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btCollisionShape * btRigidBody::btRigidBodyConstructionInfo::m_collisionShape()
	static int _bind_getM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btRigidBody::btRigidBodyConstructionInfo::m_collisionShape() function, expected prototype:\nbtCollisionShape * btRigidBody::btRigidBodyConstructionInfo::m_collisionShape()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btRigidBody::btRigidBodyConstructionInfo::m_collisionShape(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		btCollisionShape * lret = self->m_collisionShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// btVector3 btRigidBody::btRigidBodyConstructionInfo::m_localInertia()
	static int _bind_getM_localInertia(lua_State *L) {
		if (!_lg_typecheck_getM_localInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btRigidBody::btRigidBodyConstructionInfo::m_localInertia() function, expected prototype:\nbtVector3 btRigidBody::btRigidBodyConstructionInfo::m_localInertia()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btRigidBody::btRigidBodyConstructionInfo::m_localInertia(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_localInertia;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_linearDamping()
	static int _bind_getM_linearDamping(lua_State *L) {
		if (!_lg_typecheck_getM_linearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_linearDamping() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_linearDamping()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_linearDamping(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_linearDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_angularDamping()
	static int _bind_getM_angularDamping(lua_State *L) {
		if (!_lg_typecheck_getM_angularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_angularDamping() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_angularDamping()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_angularDamping(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_angularDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_friction()
	static int _bind_getM_friction(lua_State *L) {
		if (!_lg_typecheck_getM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_friction() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_friction()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_friction(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction()
	static int _bind_getM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_getM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_rollingFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_restitution()
	static int _bind_getM_restitution(lua_State *L) {
		if (!_lg_typecheck_getM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_restitution() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_restitution()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_restitution(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold()
	static int _bind_getM_linearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_linearSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_linearSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold()
	static int _bind_getM_angularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_angularSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_angularSleepingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping()
	static int _bind_getM_additionalDamping(lua_State *L) {
		if (!_lg_typecheck_getM_additionalDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping() function, expected prototype:\nbool btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		bool lret = self->m_additionalDamping;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor()
	static int _bind_getM_additionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getM_additionalDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_additionalDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr()
	static int _bind_getM_additionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getM_additionalLinearDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_additionalLinearDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr()
	static int _bind_getM_additionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_getM_additionalAngularDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_additionalAngularDampingThresholdSqr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor()
	static int _bind_getM_additionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_getM_additionalAngularDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor() function, expected prototype:\nfloat btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor()\nClass arguments details:\n");
		}


		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor(). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_additionalAngularDampingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_mass(float value)
	static int _bind_setM_mass(lua_State *L) {
		if (!_lg_typecheck_setM_mass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_mass(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_mass(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_mass(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_mass = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_motionState(btMotionState * value)
	static int _bind_setM_motionState(lua_State *L) {
		if (!_lg_typecheck_setM_motionState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_motionState(btMotionState * value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_motionState(btMotionState * value)\nClass arguments details:\narg 1 ID = 40784278\n");
		}

		btMotionState* value=(Luna< btMotionState >::check(L,2));

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_motionState(btMotionState *). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_motionState = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform(btTransform value)
	static int _bind_setM_startWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_startWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform(btTransform value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform function");
		}
		btTransform value=*value_ptr;

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_startWorldTransform(btTransform). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_startWorldTransform = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_collisionShape(btCollisionShape * value)
	static int _bind_setM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_collisionShape(btCollisionShape * value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_collisionShape(btCollisionShape * value)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* value=(Luna< btCollisionShape >::check(L,2));

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_collisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_collisionShape = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_localInertia(btVector3 value)
	static int _bind_setM_localInertia(lua_State *L) {
		if (!_lg_typecheck_setM_localInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_localInertia(btVector3 value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_localInertia(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btRigidBody::btRigidBodyConstructionInfo::m_localInertia function");
		}
		btVector3 value=*value_ptr;

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_localInertia(btVector3). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_localInertia = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_linearDamping(float value)
	static int _bind_setM_linearDamping(lua_State *L) {
		if (!_lg_typecheck_setM_linearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_linearDamping(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_linearDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_linearDamping(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_linearDamping = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_angularDamping(float value)
	static int _bind_setM_angularDamping(lua_State *L) {
		if (!_lg_typecheck_setM_angularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_angularDamping(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_angularDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_angularDamping(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_angularDamping = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_friction(float value)
	static int _bind_setM_friction(lua_State *L) {
		if (!_lg_typecheck_setM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_friction(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_friction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_friction(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction(float value)
	static int _bind_setM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_setM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_rollingFriction(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_rollingFriction = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_restitution(float value)
	static int _bind_setM_restitution(lua_State *L) {
		if (!_lg_typecheck_setM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_restitution(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_restitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_restitution(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold(float value)
	static int _bind_setM_linearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_linearSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_linearSleepingThreshold(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_linearSleepingThreshold = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold(float value)
	static int _bind_setM_angularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_angularSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_angularSleepingThreshold(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_angularSleepingThreshold = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping(bool value)
	static int _bind_setM_additionalDamping(lua_State *L) {
		if (!_lg_typecheck_setM_additionalDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping(bool value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_additionalDamping(bool). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_additionalDamping = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor(float value)
	static int _bind_setM_additionalDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setM_additionalDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_additionalDampingFactor(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_additionalDampingFactor = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr(float value)
	static int _bind_setM_additionalLinearDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setM_additionalLinearDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_additionalLinearDampingThresholdSqr(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_additionalLinearDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr(float value)
	static int _bind_setM_additionalAngularDampingThresholdSqr(lua_State *L) {
		if (!_lg_typecheck_setM_additionalAngularDampingThresholdSqr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingThresholdSqr(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_additionalAngularDampingThresholdSqr = value;

		return 0;
	}

	// void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor(float value)
	static int _bind_setM_additionalAngularDampingFactor(lua_State *L) {
		if (!_lg_typecheck_setM_additionalAngularDampingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor(float value) function, expected prototype:\nvoid btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRigidBody::btRigidBodyConstructionInfo* self=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::btRigidBodyConstructionInfo::m_additionalAngularDampingFactor(float). Got : '%s'",typeid(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1)).name());
		}
		self->m_additionalAngularDampingFactor = value;

		return 0;
	}


	// Operator binds:

};

btRigidBody::btRigidBodyConstructionInfo* LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_ctor(L);
}

void LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::_bind_dtor(btRigidBody::btRigidBodyConstructionInfo* obj) {
	delete obj;
}

const char LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::className[] = "btRigidBody_btRigidBodyConstructionInfo";
const char LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::fullName[] = "btRigidBody::btRigidBodyConstructionInfo";
const char LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::moduleName[] = "bullet";
const char* LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::parents[] = {0};
const int LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::hash = 13789036;
const int LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::uniqueIDs[] = {13789036,0};

luna_RegType LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::methods[] = {
	{"getM_mass", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_mass},
	{"getM_motionState", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_motionState},
	{"getM_startWorldTransform", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_startWorldTransform},
	{"getM_collisionShape", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_collisionShape},
	{"getM_localInertia", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_localInertia},
	{"getM_linearDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_linearDamping},
	{"getM_angularDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_angularDamping},
	{"getM_friction", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_friction},
	{"getM_rollingFriction", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_rollingFriction},
	{"getM_restitution", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_restitution},
	{"getM_linearSleepingThreshold", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_linearSleepingThreshold},
	{"getM_angularSleepingThreshold", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_angularSleepingThreshold},
	{"getM_additionalDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_additionalDamping},
	{"getM_additionalDampingFactor", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_additionalDampingFactor},
	{"getM_additionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_additionalLinearDampingThresholdSqr},
	{"getM_additionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_additionalAngularDampingThresholdSqr},
	{"getM_additionalAngularDampingFactor", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_getM_additionalAngularDampingFactor},
	{"setM_mass", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_mass},
	{"setM_motionState", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_motionState},
	{"setM_startWorldTransform", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_startWorldTransform},
	{"setM_collisionShape", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_collisionShape},
	{"setM_localInertia", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_localInertia},
	{"setM_linearDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_linearDamping},
	{"setM_angularDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_angularDamping},
	{"setM_friction", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_friction},
	{"setM_rollingFriction", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_rollingFriction},
	{"setM_restitution", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_restitution},
	{"setM_linearSleepingThreshold", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_linearSleepingThreshold},
	{"setM_angularSleepingThreshold", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_angularSleepingThreshold},
	{"setM_additionalDamping", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_additionalDamping},
	{"setM_additionalDampingFactor", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_additionalDampingFactor},
	{"setM_additionalLinearDampingThresholdSqr", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_additionalLinearDampingThresholdSqr},
	{"setM_additionalAngularDampingThresholdSqr", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_additionalAngularDampingThresholdSqr},
	{"setM_additionalAngularDampingFactor", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_setM_additionalAngularDampingFactor},
	{"dynCast", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btRigidBody_btRigidBodyConstructionInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRigidBody::btRigidBodyConstructionInfo >::enumValues[] = {
	{0,0}
};


