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

		btCollisionObjectFloatData* self= (btCollisionObjectFloatData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionObjectFloatData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5462649) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionObjectFloatData >::check(L,1));
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

		btCollisionObjectFloatData* self=(Luna< btCollisionObjectFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionObjectFloatData");
		
		return luna_dynamicCast(L,converters,"btCollisionObjectFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBroadphaseHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRootCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeactivationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCcdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCcdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHasAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIslandTag1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompanionId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActivationState1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCheckCollideWith(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBroadphaseHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRootCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,94025107)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInterpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInterpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInterpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeactivationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCcdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCcdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHasAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIslandTag1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompanionId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActivationState1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInternalType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCheckCollideWith(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * btCollisionObjectFloatData::m_broadphaseHandle()
	static int _bind_getBroadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseHandle(L)) {
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
	static int _bind_getCollisionShape(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape(L)) {
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
	static int _bind_getRootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_getRootCollisionShape(L)) {
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
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
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
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
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
	static int _bind_getInterpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getInterpolationWorldTransform(L)) {
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
	static int _bind_getInterpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getInterpolationLinearVelocity(L)) {
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
	static int _bind_getInterpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getInterpolationAngularVelocity(L)) {
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
	static int _bind_getAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getAnisotropicFriction(L)) {
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
	static int _bind_getContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_getContactProcessingThreshold(L)) {
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
	static int _bind_getDeactivationTime(lua_State *L) {
		if (!_lg_typecheck_getDeactivationTime(L)) {
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
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
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
	static int _bind_getRollingFriction(lua_State *L) {
		if (!_lg_typecheck_getRollingFriction(L)) {
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
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
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
	static int _bind_getHitFraction(lua_State *L) {
		if (!_lg_typecheck_getHitFraction(L)) {
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
	static int _bind_getCcdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_getCcdSweptSphereRadius(L)) {
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
	static int _bind_getCcdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_getCcdMotionThreshold(L)) {
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
	static int _bind_getHasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getHasAnisotropicFriction(L)) {
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
	static int _bind_getCollisionFlags(lua_State *L) {
		if (!_lg_typecheck_getCollisionFlags(L)) {
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
	static int _bind_getIslandTag1(lua_State *L) {
		if (!_lg_typecheck_getIslandTag1(L)) {
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
	static int _bind_getCompanionId(lua_State *L) {
		if (!_lg_typecheck_getCompanionId(L)) {
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
	static int _bind_getActivationState1(lua_State *L) {
		if (!_lg_typecheck_getActivationState1(L)) {
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
	static int _bind_getInternalType(lua_State *L) {
		if (!_lg_typecheck_getInternalType(L)) {
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
	static int _bind_getCheckCollideWith(lua_State *L) {
		if (!_lg_typecheck_getCheckCollideWith(L)) {
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
	static int _bind_setBroadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_setBroadphaseHandle(L)) {
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
	static int _bind_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_setCollisionShape(L)) {
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
	static int _bind_setRootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_setRootCollisionShape(L)) {
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
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
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
	static int _bind_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setWorldTransform(L)) {
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
	static int _bind_setInterpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setInterpolationWorldTransform(L)) {
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
	static int _bind_setInterpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setInterpolationLinearVelocity(L)) {
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
	static int _bind_setInterpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setInterpolationAngularVelocity(L)) {
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
	static int _bind_setAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setAnisotropicFriction(L)) {
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
	static int _bind_setContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_setContactProcessingThreshold(L)) {
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
	static int _bind_setDeactivationTime(lua_State *L) {
		if (!_lg_typecheck_setDeactivationTime(L)) {
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
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
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
	static int _bind_setRollingFriction(lua_State *L) {
		if (!_lg_typecheck_setRollingFriction(L)) {
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
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
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
	static int _bind_setHitFraction(lua_State *L) {
		if (!_lg_typecheck_setHitFraction(L)) {
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
	static int _bind_setCcdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_setCcdSweptSphereRadius(L)) {
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
	static int _bind_setCcdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_setCcdMotionThreshold(L)) {
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
	static int _bind_setHasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setHasAnisotropicFriction(L)) {
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
	static int _bind_setCollisionFlags(lua_State *L) {
		if (!_lg_typecheck_setCollisionFlags(L)) {
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
	static int _bind_setIslandTag1(lua_State *L) {
		if (!_lg_typecheck_setIslandTag1(L)) {
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
	static int _bind_setCompanionId(lua_State *L) {
		if (!_lg_typecheck_setCompanionId(L)) {
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
	static int _bind_setActivationState1(lua_State *L) {
		if (!_lg_typecheck_setActivationState1(L)) {
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
	static int _bind_setInternalType(lua_State *L) {
		if (!_lg_typecheck_setInternalType(L)) {
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
	static int _bind_setCheckCollideWith(lua_State *L) {
		if (!_lg_typecheck_setCheckCollideWith(L)) {
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
	{"getBroadphaseHandle", &luna_wrapper_btCollisionObjectFloatData::_bind_getBroadphaseHandle},
	{"getCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_getCollisionShape},
	{"getRootCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_getRootCollisionShape},
	{"getName", &luna_wrapper_btCollisionObjectFloatData::_bind_getName},
	{"getWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_getWorldTransform},
	{"getInterpolationWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_getInterpolationWorldTransform},
	{"getInterpolationLinearVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_getInterpolationLinearVelocity},
	{"getInterpolationAngularVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_getInterpolationAngularVelocity},
	{"getAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getAnisotropicFriction},
	{"getContactProcessingThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_getContactProcessingThreshold},
	{"getDeactivationTime", &luna_wrapper_btCollisionObjectFloatData::_bind_getDeactivationTime},
	{"getFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getFriction},
	{"getRollingFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getRollingFriction},
	{"getRestitution", &luna_wrapper_btCollisionObjectFloatData::_bind_getRestitution},
	{"getHitFraction", &luna_wrapper_btCollisionObjectFloatData::_bind_getHitFraction},
	{"getCcdSweptSphereRadius", &luna_wrapper_btCollisionObjectFloatData::_bind_getCcdSweptSphereRadius},
	{"getCcdMotionThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_getCcdMotionThreshold},
	{"getHasAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_getHasAnisotropicFriction},
	{"getCollisionFlags", &luna_wrapper_btCollisionObjectFloatData::_bind_getCollisionFlags},
	{"getIslandTag1", &luna_wrapper_btCollisionObjectFloatData::_bind_getIslandTag1},
	{"getCompanionId", &luna_wrapper_btCollisionObjectFloatData::_bind_getCompanionId},
	{"getActivationState1", &luna_wrapper_btCollisionObjectFloatData::_bind_getActivationState1},
	{"getInternalType", &luna_wrapper_btCollisionObjectFloatData::_bind_getInternalType},
	{"getCheckCollideWith", &luna_wrapper_btCollisionObjectFloatData::_bind_getCheckCollideWith},
	{"setBroadphaseHandle", &luna_wrapper_btCollisionObjectFloatData::_bind_setBroadphaseHandle},
	{"setCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_setCollisionShape},
	{"setRootCollisionShape", &luna_wrapper_btCollisionObjectFloatData::_bind_setRootCollisionShape},
	{"setName", &luna_wrapper_btCollisionObjectFloatData::_bind_setName},
	{"setWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_setWorldTransform},
	{"setInterpolationWorldTransform", &luna_wrapper_btCollisionObjectFloatData::_bind_setInterpolationWorldTransform},
	{"setInterpolationLinearVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_setInterpolationLinearVelocity},
	{"setInterpolationAngularVelocity", &luna_wrapper_btCollisionObjectFloatData::_bind_setInterpolationAngularVelocity},
	{"setAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setAnisotropicFriction},
	{"setContactProcessingThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_setContactProcessingThreshold},
	{"setDeactivationTime", &luna_wrapper_btCollisionObjectFloatData::_bind_setDeactivationTime},
	{"setFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setFriction},
	{"setRollingFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setRollingFriction},
	{"setRestitution", &luna_wrapper_btCollisionObjectFloatData::_bind_setRestitution},
	{"setHitFraction", &luna_wrapper_btCollisionObjectFloatData::_bind_setHitFraction},
	{"setCcdSweptSphereRadius", &luna_wrapper_btCollisionObjectFloatData::_bind_setCcdSweptSphereRadius},
	{"setCcdMotionThreshold", &luna_wrapper_btCollisionObjectFloatData::_bind_setCcdMotionThreshold},
	{"setHasAnisotropicFriction", &luna_wrapper_btCollisionObjectFloatData::_bind_setHasAnisotropicFriction},
	{"setCollisionFlags", &luna_wrapper_btCollisionObjectFloatData::_bind_setCollisionFlags},
	{"setIslandTag1", &luna_wrapper_btCollisionObjectFloatData::_bind_setIslandTag1},
	{"setCompanionId", &luna_wrapper_btCollisionObjectFloatData::_bind_setCompanionId},
	{"setActivationState1", &luna_wrapper_btCollisionObjectFloatData::_bind_setActivationState1},
	{"setInternalType", &luna_wrapper_btCollisionObjectFloatData::_bind_setInternalType},
	{"setCheckCollideWith", &luna_wrapper_btCollisionObjectFloatData::_bind_setCheckCollideWith},
	{"dynCast", &luna_wrapper_btCollisionObjectFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionObjectFloatData::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionObjectFloatData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionObjectFloatData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionObjectFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionObjectFloatData >::enumValues[] = {
	{0,0}
};


