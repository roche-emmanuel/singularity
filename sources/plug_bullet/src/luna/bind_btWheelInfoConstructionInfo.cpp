#include <plug_common.h>

class luna_wrapper_btWheelInfoConstructionInfo {
public:
	typedef Luna< btWheelInfoConstructionInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65660504) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btWheelInfoConstructionInfo*)");
		}

		btWheelInfoConstructionInfo* rhs =(Luna< btWheelInfoConstructionInfo >::check(L,2));
		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
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

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btWheelInfoConstructionInfo");
		
		return luna_dynamicCast(L,converters,"btWheelInfoConstructionInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_chassisConnectionCS(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_suspensionRestLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelRadius(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_chassisConnectionCS(lua_State *L) {
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

	inline static bool _lg_typecheck_setM_suspensionRestLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelRadius(lua_State *L) {
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

	inline static bool _lg_typecheck_setM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS()
	static int _bind_getM_chassisConnectionCS(lua_State *L) {
		if (!_lg_typecheck_getM_chassisConnectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_chassisConnectionCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS()
	static int _bind_getM_wheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelDirectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelDirectionCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS()
	static int _bind_getM_wheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelAxleCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_wheelAxleCS()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelAxleCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_suspensionRestLength()
	static int _bind_getM_suspensionRestLength(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionRestLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_suspensionRestLength() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_suspensionRestLength()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_suspensionRestLength(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionRestLength;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm()
	static int _bind_getM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_maxSuspensionTravelCm()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionTravelCm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelRadius()
	static int _bind_getM_wheelRadius(lua_State *L) {
		if (!_lg_typecheck_getM_wheelRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelRadius() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelRadius()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelRadius(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_suspensionStiffness()
	static int _bind_getM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_suspensionStiffness() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_suspensionStiffness()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_suspensionStiffness(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionStiffness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelsDampingCompression()
	static int _bind_getM_wheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsDampingCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelsDampingCompression() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelsDampingCompression()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelsDampingCompression(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsDampingCompression;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation()
	static int _bind_getM_wheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_getM_wheelsDampingRelaxation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelsDampingRelaxation()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_wheelsDampingRelaxation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_frictionSlip()
	static int _bind_getM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_getM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_frictionSlip() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_frictionSlip()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_frictionSlip(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_frictionSlip;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_maxSuspensionForce()
	static int _bind_getM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_maxSuspensionForce() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_maxSuspensionForce()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_maxSuspensionForce(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btWheelInfoConstructionInfo::m_bIsFrontWheel()
	static int _bind_getM_bIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_getM_bIsFrontWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btWheelInfoConstructionInfo::m_bIsFrontWheel() function, expected prototype:\nbool btWheelInfoConstructionInfo::m_bIsFrontWheel()\nClass arguments details:\n");
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btWheelInfoConstructionInfo::m_bIsFrontWheel(). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		bool lret = self->m_bIsFrontWheel;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value)
	static int _bind_setM_chassisConnectionCS(lua_State *L) {
		if (!_lg_typecheck_setM_chassisConnectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_chassisConnectionCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_chassisConnectionCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value)
	static int _bind_setM_wheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelDirectionCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_wheelDirectionCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_wheelDirectionCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value)
	static int _bind_setM_wheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelAxleCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_wheelAxleCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_wheelAxleCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_suspensionRestLength(float value)
	static int _bind_setM_suspensionRestLength(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionRestLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_suspensionRestLength(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_suspensionRestLength(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_suspensionRestLength(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_suspensionRestLength = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value)
	static int _bind_setM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_maxSuspensionTravelCm = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelRadius(float value)
	static int _bind_setM_wheelRadius(lua_State *L) {
		if (!_lg_typecheck_setM_wheelRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelRadius(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelRadius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelRadius(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_wheelRadius = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_suspensionStiffness(float value)
	static int _bind_setM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_suspensionStiffness(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_suspensionStiffness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_suspensionStiffness(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_suspensionStiffness = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value)
	static int _bind_setM_wheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsDampingCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_wheelsDampingCompression = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value)
	static int _bind_setM_wheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_setM_wheelsDampingRelaxation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_wheelsDampingRelaxation = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_frictionSlip(float value)
	static int _bind_setM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_setM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_frictionSlip(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_frictionSlip(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_frictionSlip(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_frictionSlip = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_maxSuspensionForce(float value)
	static int _bind_setM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_maxSuspensionForce(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_maxSuspensionForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_maxSuspensionForce(float). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_maxSuspensionForce = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value)
	static int _bind_setM_bIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_setM_bIsFrontWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool). Got : '%s'",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name());
		}
		self->m_bIsFrontWheel = value;

		return 0;
	}


	// Operator binds:

};

btWheelInfoConstructionInfo* LunaTraits< btWheelInfoConstructionInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btWheelInfoConstructionInfo >::_bind_dtor(btWheelInfoConstructionInfo* obj) {
	delete obj;
}

const char LunaTraits< btWheelInfoConstructionInfo >::className[] = "btWheelInfoConstructionInfo";
const char LunaTraits< btWheelInfoConstructionInfo >::fullName[] = "btWheelInfoConstructionInfo";
const char LunaTraits< btWheelInfoConstructionInfo >::moduleName[] = "bullet";
const char* LunaTraits< btWheelInfoConstructionInfo >::parents[] = {0};
const int LunaTraits< btWheelInfoConstructionInfo >::hash = 65660504;
const int LunaTraits< btWheelInfoConstructionInfo >::uniqueIDs[] = {65660504,0};

luna_RegType LunaTraits< btWheelInfoConstructionInfo >::methods[] = {
	{"getM_chassisConnectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_chassisConnectionCS},
	{"getM_wheelDirectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_wheelDirectionCS},
	{"getM_wheelAxleCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_wheelAxleCS},
	{"getM_suspensionRestLength", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_suspensionRestLength},
	{"getM_maxSuspensionTravelCm", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_maxSuspensionTravelCm},
	{"getM_wheelRadius", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_wheelRadius},
	{"getM_suspensionStiffness", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_suspensionStiffness},
	{"getM_wheelsDampingCompression", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_wheelsDampingCompression},
	{"getM_wheelsDampingRelaxation", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_wheelsDampingRelaxation},
	{"getM_frictionSlip", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_frictionSlip},
	{"getM_maxSuspensionForce", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_maxSuspensionForce},
	{"getM_bIsFrontWheel", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getM_bIsFrontWheel},
	{"setM_chassisConnectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_chassisConnectionCS},
	{"setM_wheelDirectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_wheelDirectionCS},
	{"setM_wheelAxleCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_wheelAxleCS},
	{"setM_suspensionRestLength", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_suspensionRestLength},
	{"setM_maxSuspensionTravelCm", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_maxSuspensionTravelCm},
	{"setM_wheelRadius", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_wheelRadius},
	{"setM_suspensionStiffness", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_suspensionStiffness},
	{"setM_wheelsDampingCompression", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_wheelsDampingCompression},
	{"setM_wheelsDampingRelaxation", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_wheelsDampingRelaxation},
	{"setM_frictionSlip", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_frictionSlip},
	{"setM_maxSuspensionForce", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_maxSuspensionForce},
	{"setM_bIsFrontWheel", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setM_bIsFrontWheel},
	{"dynCast", &luna_wrapper_btWheelInfoConstructionInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btWheelInfoConstructionInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btWheelInfoConstructionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btWheelInfoConstructionInfo >::enumValues[] = {
	{0,0}
};


