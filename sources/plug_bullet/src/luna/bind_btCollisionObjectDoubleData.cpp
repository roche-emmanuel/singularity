#include <plug_common.h>

class luna_wrapper_btCollisionObjectDoubleData {
public:
	typedef Luna< btCollisionObjectDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73944842) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObjectDoubleData*)");
		}

		btCollisionObjectDoubleData* rhs =(Luna< btCollisionObjectDoubleData >::check(L,2));
		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
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

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionObjectDoubleData");
		
		return luna_dynamicCast(L,converters,"btCollisionObjectDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_interpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_anisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
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
	// void * btCollisionObjectDoubleData::m_broadphaseHandle()
	static int _bind_getM_broadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_getM_broadphaseHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObjectDoubleData::m_broadphaseHandle() function, expected prototype:\nvoid * btCollisionObjectDoubleData::m_broadphaseHandle()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObjectDoubleData::m_broadphaseHandle(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		void * lret = self->m_broadphaseHandle;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * btCollisionObjectDoubleData::m_collisionShape()
	static int _bind_getM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObjectDoubleData::m_collisionShape() function, expected prototype:\nvoid * btCollisionObjectDoubleData::m_collisionShape()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObjectDoubleData::m_collisionShape(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		void * lret = self->m_collisionShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// btCollisionShapeData * btCollisionObjectDoubleData::m_rootCollisionShape()
	static int _bind_getM_rootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_getM_rootCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData * btCollisionObjectDoubleData::m_rootCollisionShape() function, expected prototype:\nbtCollisionShapeData * btCollisionObjectDoubleData::m_rootCollisionShape()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData * btCollisionObjectDoubleData::m_rootCollisionShape(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		btCollisionShapeData * lret = self->m_rootCollisionShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// char * btCollisionObjectDoubleData::m_name()
	static int _bind_getM_name(lua_State *L) {
		if (!_lg_typecheck_getM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * btCollisionObjectDoubleData::m_name() function, expected prototype:\nchar * btCollisionObjectDoubleData::m_name()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * btCollisionObjectDoubleData::m_name(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		char * lret = self->m_name;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// btTransformDoubleData btCollisionObjectDoubleData::m_worldTransform()
	static int _bind_getM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformDoubleData btCollisionObjectDoubleData::m_worldTransform() function, expected prototype:\nbtTransformDoubleData btCollisionObjectDoubleData::m_worldTransform()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformDoubleData btCollisionObjectDoubleData::m_worldTransform(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		const btTransformDoubleData* lret = &self->m_worldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformDoubleData >::push(L,lret,false);

		return 1;
	}

	// btTransformDoubleData btCollisionObjectDoubleData::m_interpolationWorldTransform()
	static int _bind_getM_interpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformDoubleData btCollisionObjectDoubleData::m_interpolationWorldTransform() function, expected prototype:\nbtTransformDoubleData btCollisionObjectDoubleData::m_interpolationWorldTransform()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformDoubleData btCollisionObjectDoubleData::m_interpolationWorldTransform(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		const btTransformDoubleData* lret = &self->m_interpolationWorldTransform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformDoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btCollisionObjectDoubleData::m_interpolationLinearVelocity()
	static int _bind_getM_interpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btCollisionObjectDoubleData::m_interpolationLinearVelocity() function, expected prototype:\nbtVector3DoubleData btCollisionObjectDoubleData::m_interpolationLinearVelocity()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btCollisionObjectDoubleData::m_interpolationLinearVelocity(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_interpolationLinearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btCollisionObjectDoubleData::m_interpolationAngularVelocity()
	static int _bind_getM_interpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_interpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btCollisionObjectDoubleData::m_interpolationAngularVelocity() function, expected prototype:\nbtVector3DoubleData btCollisionObjectDoubleData::m_interpolationAngularVelocity()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btCollisionObjectDoubleData::m_interpolationAngularVelocity(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_interpolationAngularVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btCollisionObjectDoubleData::m_anisotropicFriction()
	static int _bind_getM_anisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getM_anisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btCollisionObjectDoubleData::m_anisotropicFriction() function, expected prototype:\nbtVector3DoubleData btCollisionObjectDoubleData::m_anisotropicFriction()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btCollisionObjectDoubleData::m_anisotropicFriction(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_anisotropicFriction;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_contactProcessingThreshold()
	static int _bind_getM_contactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_contactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_contactProcessingThreshold() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_contactProcessingThreshold()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_contactProcessingThreshold(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_contactProcessingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_deactivationTime()
	static int _bind_getM_deactivationTime(lua_State *L) {
		if (!_lg_typecheck_getM_deactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_deactivationTime() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_deactivationTime()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_deactivationTime(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_deactivationTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_friction()
	static int _bind_getM_friction(lua_State *L) {
		if (!_lg_typecheck_getM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_friction() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_friction()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_friction(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_rollingFriction()
	static int _bind_getM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_getM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_rollingFriction() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_rollingFriction()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_rollingFriction(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_rollingFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_restitution()
	static int _bind_getM_restitution(lua_State *L) {
		if (!_lg_typecheck_getM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_restitution() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_restitution()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_restitution(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_hitFraction()
	static int _bind_getM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_getM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_hitFraction() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_hitFraction()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_hitFraction(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_hitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_ccdSweptSphereRadius()
	static int _bind_getM_ccdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_getM_ccdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_ccdSweptSphereRadius() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_ccdSweptSphereRadius()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_ccdSweptSphereRadius(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_ccdSweptSphereRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btCollisionObjectDoubleData::m_ccdMotionThreshold()
	static int _bind_getM_ccdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_ccdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btCollisionObjectDoubleData::m_ccdMotionThreshold() function, expected prototype:\ndouble btCollisionObjectDoubleData::m_ccdMotionThreshold()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btCollisionObjectDoubleData::m_ccdMotionThreshold(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		double lret = self->m_ccdMotionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_hasAnisotropicFriction()
	static int _bind_getM_hasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getM_hasAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_hasAnisotropicFriction() function, expected prototype:\nint btCollisionObjectDoubleData::m_hasAnisotropicFriction()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_hasAnisotropicFriction(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_hasAnisotropicFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_collisionFlags()
	static int _bind_getM_collisionFlags(lua_State *L) {
		if (!_lg_typecheck_getM_collisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_collisionFlags() function, expected prototype:\nint btCollisionObjectDoubleData::m_collisionFlags()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_collisionFlags(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_collisionFlags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_islandTag1()
	static int _bind_getM_islandTag1(lua_State *L) {
		if (!_lg_typecheck_getM_islandTag1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_islandTag1() function, expected prototype:\nint btCollisionObjectDoubleData::m_islandTag1()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_islandTag1(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_islandTag1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_companionId()
	static int _bind_getM_companionId(lua_State *L) {
		if (!_lg_typecheck_getM_companionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_companionId() function, expected prototype:\nint btCollisionObjectDoubleData::m_companionId()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_companionId(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_companionId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_activationState1()
	static int _bind_getM_activationState1(lua_State *L) {
		if (!_lg_typecheck_getM_activationState1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_activationState1() function, expected prototype:\nint btCollisionObjectDoubleData::m_activationState1()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_activationState1(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_activationState1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_internalType()
	static int _bind_getM_internalType(lua_State *L) {
		if (!_lg_typecheck_getM_internalType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_internalType() function, expected prototype:\nint btCollisionObjectDoubleData::m_internalType()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_internalType(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_internalType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObjectDoubleData::m_checkCollideWith()
	static int _bind_getM_checkCollideWith(lua_State *L) {
		if (!_lg_typecheck_getM_checkCollideWith(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObjectDoubleData::m_checkCollideWith() function, expected prototype:\nint btCollisionObjectDoubleData::m_checkCollideWith()\nClass arguments details:\n");
		}


		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObjectDoubleData::m_checkCollideWith(). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		int lret = self->m_checkCollideWith;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObjectDoubleData::m_broadphaseHandle(void * value)
	static int _bind_setM_broadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_setM_broadphaseHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_broadphaseHandle(void * value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_broadphaseHandle(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_broadphaseHandle(void *). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_broadphaseHandle = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_collisionShape(void * value)
	static int _bind_setM_collisionShape(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_collisionShape(void * value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_collisionShape(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_collisionShape(void *). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_collisionShape = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_rootCollisionShape(btCollisionShapeData * value)
	static int _bind_setM_rootCollisionShape(lua_State *L) {
		if (!_lg_typecheck_setM_rootCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_rootCollisionShape(btCollisionShapeData * value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_rootCollisionShape(btCollisionShapeData * value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value=(Luna< btCollisionShapeData >::check(L,2));

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_rootCollisionShape(btCollisionShapeData *). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_rootCollisionShape = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_name(char * value)
	static int _bind_setM_name(lua_State *L) {
		if (!_lg_typecheck_setM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_name(char * value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_name(char * value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_name(char *). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_name = &value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_worldTransform(btTransformDoubleData value)
	static int _bind_setM_worldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_worldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_worldTransform(btTransformDoubleData value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_worldTransform(btTransformDoubleData value)\nClass arguments details:\narg 1 ID = 10173309\n");
		}

		btTransformDoubleData* value_ptr=(Luna< btTransformDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectDoubleData::m_worldTransform function");
		}
		btTransformDoubleData value=*value_ptr;

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_worldTransform(btTransformDoubleData). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_worldTransform = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_interpolationWorldTransform(btTransformDoubleData value)
	static int _bind_setM_interpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_interpolationWorldTransform(btTransformDoubleData value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_interpolationWorldTransform(btTransformDoubleData value)\nClass arguments details:\narg 1 ID = 10173309\n");
		}

		btTransformDoubleData* value_ptr=(Luna< btTransformDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectDoubleData::m_interpolationWorldTransform function");
		}
		btTransformDoubleData value=*value_ptr;

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_interpolationWorldTransform(btTransformDoubleData). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_interpolationWorldTransform = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_interpolationLinearVelocity(btVector3DoubleData value)
	static int _bind_setM_interpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_interpolationLinearVelocity(btVector3DoubleData value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_interpolationLinearVelocity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectDoubleData::m_interpolationLinearVelocity function");
		}
		btVector3DoubleData value=*value_ptr;

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_interpolationLinearVelocity(btVector3DoubleData). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_interpolationLinearVelocity = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_interpolationAngularVelocity(btVector3DoubleData value)
	static int _bind_setM_interpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_interpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_interpolationAngularVelocity(btVector3DoubleData value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_interpolationAngularVelocity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectDoubleData::m_interpolationAngularVelocity function");
		}
		btVector3DoubleData value=*value_ptr;

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_interpolationAngularVelocity(btVector3DoubleData). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_interpolationAngularVelocity = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_anisotropicFriction(btVector3DoubleData value)
	static int _bind_setM_anisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setM_anisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_anisotropicFriction(btVector3DoubleData value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_anisotropicFriction(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionObjectDoubleData::m_anisotropicFriction function");
		}
		btVector3DoubleData value=*value_ptr;

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_anisotropicFriction(btVector3DoubleData). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_anisotropicFriction = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_contactProcessingThreshold(double value)
	static int _bind_setM_contactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_contactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_contactProcessingThreshold(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_contactProcessingThreshold(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_contactProcessingThreshold(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_contactProcessingThreshold = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_deactivationTime(double value)
	static int _bind_setM_deactivationTime(lua_State *L) {
		if (!_lg_typecheck_setM_deactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_deactivationTime(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_deactivationTime(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_deactivationTime(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_deactivationTime = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_friction(double value)
	static int _bind_setM_friction(lua_State *L) {
		if (!_lg_typecheck_setM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_friction(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_friction(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_friction(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_rollingFriction(double value)
	static int _bind_setM_rollingFriction(lua_State *L) {
		if (!_lg_typecheck_setM_rollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_rollingFriction(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_rollingFriction(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_rollingFriction(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_rollingFriction = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_restitution(double value)
	static int _bind_setM_restitution(lua_State *L) {
		if (!_lg_typecheck_setM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_restitution(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_restitution(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_restitution(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_hitFraction(double value)
	static int _bind_setM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_setM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_hitFraction(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_hitFraction(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_hitFraction(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_hitFraction = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_ccdSweptSphereRadius(double value)
	static int _bind_setM_ccdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_setM_ccdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_ccdSweptSphereRadius(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_ccdSweptSphereRadius(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_ccdSweptSphereRadius(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_ccdSweptSphereRadius = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_ccdMotionThreshold(double value)
	static int _bind_setM_ccdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_ccdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_ccdMotionThreshold(double value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_ccdMotionThreshold(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_ccdMotionThreshold(double). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_ccdMotionThreshold = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_hasAnisotropicFriction(int value)
	static int _bind_setM_hasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setM_hasAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_hasAnisotropicFriction(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_hasAnisotropicFriction(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_hasAnisotropicFriction(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_hasAnisotropicFriction = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_collisionFlags(int value)
	static int _bind_setM_collisionFlags(lua_State *L) {
		if (!_lg_typecheck_setM_collisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_collisionFlags(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_collisionFlags(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_collisionFlags(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_collisionFlags = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_islandTag1(int value)
	static int _bind_setM_islandTag1(lua_State *L) {
		if (!_lg_typecheck_setM_islandTag1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_islandTag1(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_islandTag1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_islandTag1(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_islandTag1 = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_companionId(int value)
	static int _bind_setM_companionId(lua_State *L) {
		if (!_lg_typecheck_setM_companionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_companionId(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_companionId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_companionId(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_companionId = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_activationState1(int value)
	static int _bind_setM_activationState1(lua_State *L) {
		if (!_lg_typecheck_setM_activationState1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_activationState1(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_activationState1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_activationState1(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_activationState1 = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_internalType(int value)
	static int _bind_setM_internalType(lua_State *L) {
		if (!_lg_typecheck_setM_internalType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_internalType(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_internalType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_internalType(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_internalType = value;

		return 0;
	}

	// void btCollisionObjectDoubleData::m_checkCollideWith(int value)
	static int _bind_setM_checkCollideWith(lua_State *L) {
		if (!_lg_typecheck_setM_checkCollideWith(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObjectDoubleData::m_checkCollideWith(int value) function, expected prototype:\nvoid btCollisionObjectDoubleData::m_checkCollideWith(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionObjectDoubleData* self=(Luna< btCollisionObjectDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObjectDoubleData::m_checkCollideWith(int). Got : '%s'",typeid(Luna< btCollisionObjectDoubleData >::check(L,1)).name());
		}
		self->m_checkCollideWith = value;

		return 0;
	}


	// Operator binds:

};

btCollisionObjectDoubleData* LunaTraits< btCollisionObjectDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCollisionObjectDoubleData >::_bind_dtor(btCollisionObjectDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btCollisionObjectDoubleData >::className[] = "btCollisionObjectDoubleData";
const char LunaTraits< btCollisionObjectDoubleData >::fullName[] = "btCollisionObjectDoubleData";
const char LunaTraits< btCollisionObjectDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionObjectDoubleData >::parents[] = {0};
const int LunaTraits< btCollisionObjectDoubleData >::hash = 73944842;
const int LunaTraits< btCollisionObjectDoubleData >::uniqueIDs[] = {73944842,0};

luna_RegType LunaTraits< btCollisionObjectDoubleData >::methods[] = {
	{"getM_broadphaseHandle", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_broadphaseHandle},
	{"getM_collisionShape", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_collisionShape},
	{"getM_rootCollisionShape", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_rootCollisionShape},
	{"getM_name", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_name},
	{"getM_worldTransform", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_worldTransform},
	{"getM_interpolationWorldTransform", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_interpolationWorldTransform},
	{"getM_interpolationLinearVelocity", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_interpolationLinearVelocity},
	{"getM_interpolationAngularVelocity", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_interpolationAngularVelocity},
	{"getM_anisotropicFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_anisotropicFriction},
	{"getM_contactProcessingThreshold", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_contactProcessingThreshold},
	{"getM_deactivationTime", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_deactivationTime},
	{"getM_friction", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_friction},
	{"getM_rollingFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_rollingFriction},
	{"getM_restitution", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_restitution},
	{"getM_hitFraction", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_hitFraction},
	{"getM_ccdSweptSphereRadius", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_ccdSweptSphereRadius},
	{"getM_ccdMotionThreshold", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_ccdMotionThreshold},
	{"getM_hasAnisotropicFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_hasAnisotropicFriction},
	{"getM_collisionFlags", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_collisionFlags},
	{"getM_islandTag1", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_islandTag1},
	{"getM_companionId", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_companionId},
	{"getM_activationState1", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_activationState1},
	{"getM_internalType", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_internalType},
	{"getM_checkCollideWith", &luna_wrapper_btCollisionObjectDoubleData::_bind_getM_checkCollideWith},
	{"setM_broadphaseHandle", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_broadphaseHandle},
	{"setM_collisionShape", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_collisionShape},
	{"setM_rootCollisionShape", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_rootCollisionShape},
	{"setM_name", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_name},
	{"setM_worldTransform", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_worldTransform},
	{"setM_interpolationWorldTransform", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_interpolationWorldTransform},
	{"setM_interpolationLinearVelocity", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_interpolationLinearVelocity},
	{"setM_interpolationAngularVelocity", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_interpolationAngularVelocity},
	{"setM_anisotropicFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_anisotropicFriction},
	{"setM_contactProcessingThreshold", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_contactProcessingThreshold},
	{"setM_deactivationTime", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_deactivationTime},
	{"setM_friction", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_friction},
	{"setM_rollingFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_rollingFriction},
	{"setM_restitution", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_restitution},
	{"setM_hitFraction", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_hitFraction},
	{"setM_ccdSweptSphereRadius", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_ccdSweptSphereRadius},
	{"setM_ccdMotionThreshold", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_ccdMotionThreshold},
	{"setM_hasAnisotropicFriction", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_hasAnisotropicFriction},
	{"setM_collisionFlags", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_collisionFlags},
	{"setM_islandTag1", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_islandTag1},
	{"setM_companionId", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_companionId},
	{"setM_activationState1", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_activationState1},
	{"setM_internalType", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_internalType},
	{"setM_checkCollideWith", &luna_wrapper_btCollisionObjectDoubleData::_bind_setM_checkCollideWith},
	{"dynCast", &luna_wrapper_btCollisionObjectDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionObjectDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionObjectDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionObjectDoubleData >::enumValues[] = {
	{0,0}
};


