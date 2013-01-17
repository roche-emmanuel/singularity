#include <plug_common.h>

class luna_wrapper_btCollisionObjectFloatData {
public:
	typedef Luna< btCollisionObjectFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5462649) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObjectFloatData*)");
		}

		btCollisionObjectFloatData* rhs =(Luna< btCollisionObjectFloatData >::check(L,2));
		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
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

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionObjectFloatData");
		
		return luna_dynamicCast(L,converters,"btCollisionObjectFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_broadphaseHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rootCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_worldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_interpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_interpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_interpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_anisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_deactivationTime(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_hitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_ccdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_ccdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hasAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_islandTag1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_companionId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_activationState1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_internalType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_checkCollideWith(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_broadphaseHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rootCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,94025107)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_worldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_anisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_deactivationTime(lua_State *L) {
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

	inline static bool _lg_typecheck_setM_hitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_ccdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_ccdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hasAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_islandTag1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_companionId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_activationState1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_internalType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_checkCollideWith(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * btCollisionObjectFloatData::m_broadphaseHandle()
	static int _bind_getM_broadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_getM_broadphaseHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObjectFloatData::m_broadphaseHandle() function, expected prototype:\nvoid * btCollisionObjectFloatData::m_broadphaseHandle()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObjectFloatData::m_broadphaseHandle(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		void * lret = self->m_broadphaseHandle;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * btCollisionObjectFloatData::m_collisionShape()
	static int _bind_getM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObjectFloatData::m_collisionShape() function, expected prototype:\nvoid * btCollisionObjectFloatData::m_collisionShape()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObjectFloatData::m_collisionShape(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		void * lret = self->m_collisionShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// btCollisionShapeData * btCollisionObjectFloatData::m_rootCollisionShape()
	static int _bind_getM_rootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_getM_rootCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData * btCollisionObjectFloatData::m_rootCollisionShape() function, expected prototype:\nbtCollisionShapeData * btCollisionObjectFloatData::m_rootCollisionShape()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData * btCollisionObjectFloatData::m_rootCollisionShape(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		btCollisionShapeData * lret = self->m_rootCollisionShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// char * btCollisionObjectFloatData::m_name()
	static int _bind_getM_name(lua_State *L) {
		if (!_lg_typecheck_getM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * btCollisionObjectFloatData::m_name() function, expected prototype:\nchar * btCollisionObjectFloatData::m_name()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * btCollisionObjectFloatData::m_name(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		char * lret = self->m_name;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// btTransformFloatData btCollisionObjectFloatData::m_worldTransform()
	static int _bind_getM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btCollisionObjectFloatData::m_worldTransform() function, expected prototype:\nbtTransformFloatData btCollisionObjectFloatData::m_worldTransform()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btCollisionObjectFloatData::m_worldTransform(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_worldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btCollisionObjectFloatData::m_interpolationWorldTransform()
	static int _bind_getM_interpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btCollisionObjectFloatData::m_interpolationWorldTransform() function, expected prototype:\nbtTransformFloatData btCollisionObjectFloatData::m_interpolationWorldTransform()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btCollisionObjectFloatData::m_interpolationWorldTransform(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_interpolationWorldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btCollisionObjectFloatData::m_interpolationLinearVelocity()
	static int _bind_getM_interpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btCollisionObjectFloatData::m_interpolationLinearVelocity() function, expected prototype:\nbtVector3FloatData btCollisionObjectFloatData::m_interpolationLinearVelocity()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btCollisionObjectFloatData::m_interpolationLinearVelocity(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_interpolationLinearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btCollisionObjectFloatData::m_interpolationAngularVelocity()
	static int _bind_getM_interpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btCollisionObjectFloatData::m_interpolationAngularVelocity() function, expected prototype:\nbtVector3FloatData btCollisionObjectFloatData::m_interpolationAngularVelocity()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btCollisionObjectFloatData::m_interpolationAngularVelocity(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_interpolationAngularVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btCollisionObjectFloatData::m_anisotropicFriction()
	static int _bind_getM_anisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getM_anisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btCollisionObjectFloatData::m_anisotropicFriction() function, expected prototype:\nbtVector3FloatData btCollisionObjectFloatData::m_anisotropicFriction()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btCollisionObjectFloatData::m_anisotropicFriction(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_anisotropicFriction;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btCollisionObjectFloatData::m_contactProcessingThreshold()
	static int _bind_getM_contactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_contactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_contactProcessingThreshold() function, expected prototype:\nfloat btCollisionObjectFloatData::m_contactProcessingThreshold()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_contactProcessingThreshold(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_contactProcessingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_deactivationTime()
	static int _bind_getM_deactivationTime(lua_State *L) {
		if (!_lg_typecheck_getM_deactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_deactivationTime() function, expected prototype:\nfloat btCollisionObjectFloatData::m_deactivationTime()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_deactivationTime(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_deactivationTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_friction()
	static int _bind_getM_friction(lua_State *L) {
		if (!_lg_typecheck_getM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_friction() function, expected prototype:\nfloat btCollisionObjectFloatData::m_friction()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_friction(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_rollingFriction()
	static int _bind_getM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_getM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_rollingFriction() function, expected prototype:\nfloat btCollisionObjectFloatData::m_rollingFriction()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_rollingFriction(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_rollingFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_restitution()
	static int _bind_getM_restitution(lua_State *L) {
		if (!_lg_typecheck_getM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_restitution() function, expected prototype:\nfloat btCollisionObjectFloatData::m_restitution()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_restitution(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_hitFraction()
	static int _bind_getM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_getM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_hitFraction() function, expected prototype:\nfloat btCollisionObjectFloatData::m_hitFraction()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_hitFraction(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_hitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_ccdSweptSphereRadius()
	static int _bind_getM_ccdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_getM_ccdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_ccdSweptSphereRadius() function, expected prototype:\nfloat btCollisionObjectFloatData::m_ccdSweptSphereRadius()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_ccdSweptSphereRadius(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_ccdSweptSphereRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObjectFloatData::m_ccdMotionThreshold()
	static int _bind_getM_ccdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_ccdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObjectFloatData::m_ccdMotionThreshold() function, expected prototype:\nfloat btCollisionObjectFloatData::m_ccdMotionThreshold()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObjectFloatData::m_ccdMotionThreshold(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		float lret = self->m_ccdMotionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_hasAnisotropicFriction()
	static int _bind_getM_hasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getM_hasAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_hasAnisotropicFriction() function, expected prototype:\nint btCollisionObjectFloatData::m_hasAnisotropicFriction()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_hasAnisotropicFriction(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_hasAnisotropicFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_collisionFlags()
	static int _bind_getM_collisionFlags(lua_State *L) {
		if (!_lg_typecheck_getM_collisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_collisionFlags() function, expected prototype:\nint btCollisionObjectFloatData::m_collisionFlags()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_collisionFlags(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_collisionFlags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_islandTag1()
	static int _bind_getM_islandTag1(lua_State *L) {
		if (!_lg_typecheck_getM_islandTag1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_islandTag1() function, expected prototype:\nint btCollisionObjectFloatData::m_islandTag1()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_islandTag1(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_islandTag1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_companionId()
	static int _bind_getM_companionId(lua_State *L) {
		if (!_lg_typecheck_getM_companionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_companionId() function, expected prototype:\nint btCollisionObjectFloatData::m_companionId()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_companionId(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_companionId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_activationState1()
	static int _bind_getM_activationState1(lua_State *L) {
		if (!_lg_typecheck_getM_activationState1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_activationState1() function, expected prototype:\nint btCollisionObjectFloatData::m_activationState1()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_activationState1(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_activationState1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_internalType()
	static int _bind_getM_internalType(lua_State *L) {
		if (!_lg_typecheck_getM_internalType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_internalType() function, expected prototype:\nint btCollisionObjectFloatData::m_internalType()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_internalType(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_internalType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectFloatData::m_checkCollideWith()
	static int _bind_getM_checkCollideWith(lua_State *L) {
		if (!_lg_typecheck_getM_checkCollideWith(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectFloatData::m_checkCollideWith() function, expected prototype:\nint btCollisionObjectFloatData::m_checkCollideWith()\nClass arguments details:\n");
		}


		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectFloatData::m_checkCollideWith(). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		int lret = self->m_checkCollideWith;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObjectFloatData::m_broadphaseHandle(void * value)
	static int _bind_setM_broadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_setM_broadphaseHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_broadphaseHandle(void * value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_broadphaseHandle(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_broadphaseHandle(void *). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_broadphaseHandle = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_collisionShape(void * value)
	static int _bind_setM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_collisionShape(void * value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_collisionShape(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_collisionShape(void *). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_collisionShape = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_rootCollisionShape(btCollisionShapeData * value)
	static int _bind_setM_rootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_setM_rootCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_rootCollisionShape(btCollisionShapeData * value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_rootCollisionShape(btCollisionShapeData * value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value=(Luna< btCollisionShapeData >::check(L,2));

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_rootCollisionShape(btCollisionShapeData *). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_rootCollisionShape = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_name(char * value)
	static int _bind_setM_name(lua_State *L) {
		if (!_lg_typecheck_setM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_name(char * value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_name(char * value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_name(char *). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_name = &value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_worldTransform(btTransformFloatData value)
	static int _bind_setM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_worldTransform(btTransformFloatData value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_worldTransform(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectFloatData::m_worldTransform function");
		}
		btTransformFloatData value=*value_ptr;

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_worldTransform(btTransformFloatData). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_worldTransform = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_interpolationWorldTransform(btTransformFloatData value)
	static int _bind_setM_interpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_interpolationWorldTransform(btTransformFloatData value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_interpolationWorldTransform(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectFloatData::m_interpolationWorldTransform function");
		}
		btTransformFloatData value=*value_ptr;

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_interpolationWorldTransform(btTransformFloatData). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_interpolationWorldTransform = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_interpolationLinearVelocity(btVector3FloatData value)
	static int _bind_setM_interpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_interpolationLinearVelocity(btVector3FloatData value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_interpolationLinearVelocity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectFloatData::m_interpolationLinearVelocity function");
		}
		btVector3FloatData value=*value_ptr;

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_interpolationLinearVelocity(btVector3FloatData). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_interpolationLinearVelocity = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_interpolationAngularVelocity(btVector3FloatData value)
	static int _bind_setM_interpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_interpolationAngularVelocity(btVector3FloatData value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_interpolationAngularVelocity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectFloatData::m_interpolationAngularVelocity function");
		}
		btVector3FloatData value=*value_ptr;

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_interpolationAngularVelocity(btVector3FloatData). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_interpolationAngularVelocity = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_anisotropicFriction(btVector3FloatData value)
	static int _bind_setM_anisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setM_anisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_anisotropicFriction(btVector3FloatData value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_anisotropicFriction(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectFloatData::m_anisotropicFriction function");
		}
		btVector3FloatData value=*value_ptr;

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_anisotropicFriction(btVector3FloatData). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_anisotropicFriction = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_contactProcessingThreshold(float value)
	static int _bind_setM_contactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_contactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_contactProcessingThreshold(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_contactProcessingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_contactProcessingThreshold(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_contactProcessingThreshold = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_deactivationTime(float value)
	static int _bind_setM_deactivationTime(lua_State *L) {
		if (!_lg_typecheck_setM_deactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_deactivationTime(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_deactivationTime(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_deactivationTime(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_deactivationTime = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_friction(float value)
	static int _bind_setM_friction(lua_State *L) {
		if (!_lg_typecheck_setM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_friction(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_friction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_friction(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_rollingFriction(float value)
	static int _bind_setM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_setM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_rollingFriction(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_rollingFriction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_rollingFriction(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_rollingFriction = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_restitution(float value)
	static int _bind_setM_restitution(lua_State *L) {
		if (!_lg_typecheck_setM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_restitution(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_restitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_restitution(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_hitFraction(float value)
	static int _bind_setM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_setM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_hitFraction(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_hitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_hitFraction(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_hitFraction = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_ccdSweptSphereRadius(float value)
	static int _bind_setM_ccdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_setM_ccdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_ccdSweptSphereRadius(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_ccdSweptSphereRadius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_ccdSweptSphereRadius(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_ccdSweptSphereRadius = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_ccdMotionThreshold(float value)
	static int _bind_setM_ccdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_ccdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_ccdMotionThreshold(float value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_ccdMotionThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_ccdMotionThreshold(float). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_ccdMotionThreshold = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_hasAnisotropicFriction(int value)
	static int _bind_setM_hasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setM_hasAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_hasAnisotropicFriction(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_hasAnisotropicFriction(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_hasAnisotropicFriction(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_hasAnisotropicFriction = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_collisionFlags(int value)
	static int _bind_setM_collisionFlags(lua_State *L) {
		if (!_lg_typecheck_setM_collisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_collisionFlags(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_collisionFlags(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_collisionFlags(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_collisionFlags = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_islandTag1(int value)
	static int _bind_setM_islandTag1(lua_State *L) {
		if (!_lg_typecheck_setM_islandTag1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_islandTag1(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_islandTag1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_islandTag1(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_islandTag1 = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_companionId(int value)
	static int _bind_setM_companionId(lua_State *L) {
		if (!_lg_typecheck_setM_companionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_companionId(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_companionId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_companionId(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_companionId = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_activationState1(int value)
	static int _bind_setM_activationState1(lua_State *L) {
		if (!_lg_typecheck_setM_activationState1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_activationState1(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_activationState1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_activationState1(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_activationState1 = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_internalType(int value)
	static int _bind_setM_internalType(lua_State *L) {
		if (!_lg_typecheck_setM_internalType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_internalType(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_internalType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_internalType(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_internalType = value;

		return 0;
	}

	// void btCollisionObjectFloatData::m_checkCollideWith(int value)
	static int _bind_setM_checkCollideWith(lua_State *L) {
		if (!_lg_typecheck_setM_checkCollideWith(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectFloatData::m_checkCollideWith(int value) function, expected prototype:\nvoid btCollisionObjectFloatData::m_checkCollideWith(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectFloatData::m_checkCollideWith(int). Got : '%s'",typeid(Luna< btCollisionObjectFloatData >::check(L,1)).name());
		}
		self->m_checkCollideWith = value;

		return 0;
	}


	// Operator binds:

};

btCollisionObjectFloatData* LunaTraits< btCollisionObjectFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCollisionObjectFloatData >::_bind_dtor(btCollisionObjectFloatData* obj) {
	delete obj;
}

const char LunaTraits< btCollisionObjectFloatData >::className[] = "btCollisionObjectFloatData";
const char LunaTraits< btCollisionObjectFloatData >::fullName[] = "btCollisionObjectFloatData";
const char LunaTraits< btCollisionObjectFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionObjectFloatData >::parents[] = {0};
const int LunaTraits< btCollisionObjectFloatData >::hash = 5462649;
const int LunaTraits< btCollisionObjectFloatData >::uniqueIDs[] = {5462649,0};

luna_RegType LunaTraits< btCollisionObjectFloatData >::methods[] = {
	{"getM_broadphaseHandle", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_broadphaseHandle},
	{"getM_collisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_collisionShape},
	{"getM_rootCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_rootCollisionShape},
	{"getM_name", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_name},
	{"getM_worldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_worldTransform},
	{"getM_interpolationWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_interpolationWorldTransform},
	{"getM_interpolationLinearVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_interpolationLinearVelocity},
	{"getM_interpolationAngularVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_interpolationAngularVelocity},
	{"getM_anisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_anisotropicFriction},
	{"getM_contactProcessingThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_contactProcessingThreshold},
	{"getM_deactivationTime", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_deactivationTime},
	{"getM_friction", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_friction},
	{"getM_rollingFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_rollingFriction},
	{"getM_restitution", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_restitution},
	{"getM_hitFraction", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_hitFraction},
	{"getM_ccdSweptSphereRadius", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_ccdSweptSphereRadius},
	{"getM_ccdMotionThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_ccdMotionThreshold},
	{"getM_hasAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_hasAnisotropicFriction},
	{"getM_collisionFlags", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_collisionFlags},
	{"getM_islandTag1", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_islandTag1},
	{"getM_companionId", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_companionId},
	{"getM_activationState1", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_activationState1},
	{"getM_internalType", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_internalType},
	{"getM_checkCollideWith", &luna_wrapper_btCollisionObjectFloatData::_bind_getM_checkCollideWith},
	{"setM_broadphaseHandle", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_broadphaseHandle},
	{"setM_collisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_collisionShape},
	{"setM_rootCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_rootCollisionShape},
	{"setM_name", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_name},
	{"setM_worldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_worldTransform},
	{"setM_interpolationWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_interpolationWorldTransform},
	{"setM_interpolationLinearVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_interpolationLinearVelocity},
	{"setM_interpolationAngularVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_interpolationAngularVelocity},
	{"setM_anisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_anisotropicFriction},
	{"setM_contactProcessingThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_contactProcessingThreshold},
	{"setM_deactivationTime", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_deactivationTime},
	{"setM_friction", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_friction},
	{"setM_rollingFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_rollingFriction},
	{"setM_restitution", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_restitution},
	{"setM_hitFraction", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_hitFraction},
	{"setM_ccdSweptSphereRadius", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_ccdSweptSphereRadius},
	{"setM_ccdMotionThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_ccdMotionThreshold},
	{"setM_hasAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_hasAnisotropicFriction},
	{"setM_collisionFlags", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_collisionFlags},
	{"setM_islandTag1", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_islandTag1},
	{"setM_companionId", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_companionId},
	{"setM_activationState1", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_activationState1},
	{"setM_internalType", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_internalType},
	{"setM_checkCollideWith", &luna_wrapper_btCollisionObjectFloatData::_bind_setM_checkCollideWith},
	{"dynCast", &luna_wrapper_btCollisionObjectFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionObjectFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionObjectFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionObjectFloatData >::enumValues[] = {
	{0,0}
};


