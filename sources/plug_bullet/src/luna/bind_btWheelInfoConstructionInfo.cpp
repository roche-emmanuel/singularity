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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btWheelInfoConstructionInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btWheelInfoConstructionInfo* rhs =(Luna< btWheelInfoConstructionInfo >::check(L,2));
		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
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

		btWheelInfoConstructionInfo* self= (btWheelInfoConstructionInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btWheelInfoConstructionInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65660504) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btWheelInfoConstructionInfo >::check(L,1));
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

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btWheelInfoConstructionInfo");
		
		return luna_dynamicCast(L,converters,"btWheelInfoConstructionInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getChassisConnectionCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelDirectionCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelAxleCS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSuspensionRestLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSuspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelsDampingCompression(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelsDampingRelaxation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrictionSlip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChassisConnectionCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelDirectionCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelAxleCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSuspensionRestLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSuspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelsDampingCompression(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelsDampingRelaxation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrictionSlip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBIsFrontWheel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS()
	static int _bind_getChassisConnectionCS(lua_State *L) {
		if (!_lg_typecheck_getChassisConnectionCS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_chassisConnectionCS(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_chassisConnectionCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS()
	static int _bind_getWheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_getWheelDirectionCS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_wheelDirectionCS(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_wheelDirectionCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS()
	static int _bind_getWheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_getWheelAxleCS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS() function, expected prototype:\nbtVector3 btWheelInfoConstructionInfo::m_wheelAxleCS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfoConstructionInfo::m_wheelAxleCS(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_wheelAxleCS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_suspensionRestLength()
	static int _bind_getSuspensionRestLength(lua_State *L) {
		if (!_lg_typecheck_getSuspensionRestLength(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_suspensionRestLength() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_suspensionRestLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_suspensionRestLength(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_suspensionRestLength;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm()
	static int _bind_getMaxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_getMaxSuspensionTravelCm(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_maxSuspensionTravelCm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxSuspensionTravelCm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelRadius()
	static int _bind_getWheelRadius(lua_State *L) {
		if (!_lg_typecheck_getWheelRadius(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelRadius() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelRadius()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelRadius(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_wheelRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_suspensionStiffness()
	static int _bind_getSuspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_getSuspensionStiffness(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_suspensionStiffness() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_suspensionStiffness()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_suspensionStiffness(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_suspensionStiffness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelsDampingCompression()
	static int _bind_getWheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_getWheelsDampingCompression(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelsDampingCompression() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelsDampingCompression()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelsDampingCompression(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_wheelsDampingCompression;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation()
	static int _bind_getWheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_getWheelsDampingRelaxation(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_wheelsDampingRelaxation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_wheelsDampingRelaxation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_frictionSlip()
	static int _bind_getFrictionSlip(lua_State *L) {
		if (!_lg_typecheck_getFrictionSlip(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_frictionSlip() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_frictionSlip()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_frictionSlip(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_frictionSlip;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btWheelInfoConstructionInfo::m_maxSuspensionForce()
	static int _bind_getMaxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getMaxSuspensionForce(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfoConstructionInfo::m_maxSuspensionForce() function, expected prototype:\nfloat btWheelInfoConstructionInfo::m_maxSuspensionForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfoConstructionInfo::m_maxSuspensionForce(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxSuspensionForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btWheelInfoConstructionInfo::m_bIsFrontWheel()
	static int _bind_getBIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_getBIsFrontWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool btWheelInfoConstructionInfo::m_bIsFrontWheel() function, expected prototype:\nbool btWheelInfoConstructionInfo::m_bIsFrontWheel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btWheelInfoConstructionInfo::m_bIsFrontWheel(). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_bIsFrontWheel;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value)
	static int _bind_setChassisConnectionCS(lua_State *L) {
		if (!_lg_typecheck_setChassisConnectionCS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_chassisConnectionCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_chassisConnectionCS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_chassisConnectionCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value)
	static int _bind_setWheelDirectionCS(lua_State *L) {
		if (!_lg_typecheck_setWheelDirectionCS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_wheelDirectionCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelDirectionCS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelDirectionCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value)
	static int _bind_setWheelAxleCS(lua_State *L) {
		if (!_lg_typecheck_setWheelAxleCS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfoConstructionInfo::m_wheelAxleCS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelAxleCS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelAxleCS = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_suspensionRestLength(float value)
	static int _bind_setSuspensionRestLength(lua_State *L) {
		if (!_lg_typecheck_setSuspensionRestLength(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_suspensionRestLength(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_suspensionRestLength(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_suspensionRestLength(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_suspensionRestLength = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value)
	static int _bind_setMaxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_setMaxSuspensionTravelCm(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_maxSuspensionTravelCm(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxSuspensionTravelCm = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelRadius(float value)
	static int _bind_setWheelRadius(lua_State *L) {
		if (!_lg_typecheck_setWheelRadius(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelRadius(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelRadius(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelRadius(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelRadius = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_suspensionStiffness(float value)
	static int _bind_setSuspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_setSuspensionStiffness(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_suspensionStiffness(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_suspensionStiffness(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_suspensionStiffness(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_suspensionStiffness = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value)
	static int _bind_setWheelsDampingCompression(lua_State *L) {
		if (!_lg_typecheck_setWheelsDampingCompression(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelsDampingCompression(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelsDampingCompression(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelsDampingCompression = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value)
	static int _bind_setWheelsDampingRelaxation(lua_State *L) {
		if (!_lg_typecheck_setWheelsDampingRelaxation(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_wheelsDampingRelaxation(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelsDampingRelaxation = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_frictionSlip(float value)
	static int _bind_setFrictionSlip(lua_State *L) {
		if (!_lg_typecheck_setFrictionSlip(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_frictionSlip(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_frictionSlip(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_frictionSlip(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_frictionSlip = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_maxSuspensionForce(float value)
	static int _bind_setMaxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setMaxSuspensionForce(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_maxSuspensionForce(float value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_maxSuspensionForce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_maxSuspensionForce(float). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxSuspensionForce = value;

		return 0;
	}

	// void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value)
	static int _bind_setBIsFrontWheel(lua_State *L) {
		if (!_lg_typecheck_setBIsFrontWheel(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value) function, expected prototype:\nvoid btWheelInfoConstructionInfo::m_bIsFrontWheel(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btWheelInfoConstructionInfo* self=(Luna< btWheelInfoConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfoConstructionInfo::m_bIsFrontWheel(bool). Got : '%s'\n%s",typeid(Luna< btWheelInfoConstructionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getChassisConnectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getChassisConnectionCS},
	{"getWheelDirectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getWheelDirectionCS},
	{"getWheelAxleCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getWheelAxleCS},
	{"getSuspensionRestLength", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getSuspensionRestLength},
	{"getMaxSuspensionTravelCm", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getMaxSuspensionTravelCm},
	{"getWheelRadius", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getWheelRadius},
	{"getSuspensionStiffness", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getSuspensionStiffness},
	{"getWheelsDampingCompression", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getWheelsDampingCompression},
	{"getWheelsDampingRelaxation", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getWheelsDampingRelaxation},
	{"getFrictionSlip", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getFrictionSlip},
	{"getMaxSuspensionForce", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getMaxSuspensionForce},
	{"getBIsFrontWheel", &luna_wrapper_btWheelInfoConstructionInfo::_bind_getBIsFrontWheel},
	{"setChassisConnectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setChassisConnectionCS},
	{"setWheelDirectionCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setWheelDirectionCS},
	{"setWheelAxleCS", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setWheelAxleCS},
	{"setSuspensionRestLength", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setSuspensionRestLength},
	{"setMaxSuspensionTravelCm", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setMaxSuspensionTravelCm},
	{"setWheelRadius", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setWheelRadius},
	{"setSuspensionStiffness", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setSuspensionStiffness},
	{"setWheelsDampingCompression", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setWheelsDampingCompression},
	{"setWheelsDampingRelaxation", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setWheelsDampingRelaxation},
	{"setFrictionSlip", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setFrictionSlip},
	{"setMaxSuspensionForce", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setMaxSuspensionForce},
	{"setBIsFrontWheel", &luna_wrapper_btWheelInfoConstructionInfo::_bind_setBIsFrontWheel},
	{"dynCast", &luna_wrapper_btWheelInfoConstructionInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btWheelInfoConstructionInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_btWheelInfoConstructionInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btWheelInfoConstructionInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btWheelInfoConstructionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btWheelInfoConstructionInfo >::enumValues[] = {
	{0,0}
};


