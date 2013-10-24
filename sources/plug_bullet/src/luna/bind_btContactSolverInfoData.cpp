#include <plug_common.h>

class luna_wrapper_btContactSolverInfoData {
public:
	typedef Luna< btContactSolverInfoData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5410878) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btContactSolverInfoData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btContactSolverInfoData* rhs =(Luna< btContactSolverInfoData >::check(L,2));
		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
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

		btContactSolverInfoData* self= (btContactSolverInfoData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btContactSolverInfoData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5410878) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btContactSolverInfoData >::check(L,1));
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

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btContactSolverInfoData");
		
		return luna_dynamicCast(L,converters,"btContactSolverInfoData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getTau(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxErrorReduction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getErp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getErp2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlobalCfm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitImpulsePenetrationThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitImpulseTurnErp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearSlop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWarmstartingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolverMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestingContactRestitutionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumSolverBatchSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSingleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTau(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxErrorReduction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setErp2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalCfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulsePenetrationThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulseTurnErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearSlop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWarmstartingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolverMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestingContactRestitutionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumSolverBatchSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSingleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float btContactSolverInfoData::m_tau()
	static int _bind_getTau(lua_State *L) {
		if (!_lg_typecheck_getTau(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_tau() function, expected prototype:\nfloat btContactSolverInfoData::m_tau()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_tau(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_tau;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_damping()
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_damping() function, expected prototype:\nfloat btContactSolverInfoData::m_damping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_damping(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_friction()
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_friction() function, expected prototype:\nfloat btContactSolverInfoData::m_friction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_friction(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_timeStep()
	static int _bind_getTimeStep(lua_State *L) {
		if (!_lg_typecheck_getTimeStep(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_timeStep() function, expected prototype:\nfloat btContactSolverInfoData::m_timeStep()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_timeStep(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_timeStep;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_restitution()
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_restitution() function, expected prototype:\nfloat btContactSolverInfoData::m_restitution()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_restitution(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoData::m_numIterations()
	static int _bind_getNumIterations(lua_State *L) {
		if (!_lg_typecheck_getNumIterations(L)) {
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoData::m_numIterations() function, expected prototype:\nint btContactSolverInfoData::m_numIterations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btContactSolverInfoData::m_numIterations(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_maxErrorReduction()
	static int _bind_getMaxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_getMaxErrorReduction(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_maxErrorReduction() function, expected prototype:\nfloat btContactSolverInfoData::m_maxErrorReduction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_maxErrorReduction(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxErrorReduction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_sor()
	static int _bind_getSor(lua_State *L) {
		if (!_lg_typecheck_getSor(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_sor() function, expected prototype:\nfloat btContactSolverInfoData::m_sor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_sor(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_sor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_erp()
	static int _bind_getErp(lua_State *L) {
		if (!_lg_typecheck_getErp(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_erp() function, expected prototype:\nfloat btContactSolverInfoData::m_erp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_erp(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_erp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_erp2()
	static int _bind_getErp2(lua_State *L) {
		if (!_lg_typecheck_getErp2(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_erp2() function, expected prototype:\nfloat btContactSolverInfoData::m_erp2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_erp2(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_erp2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_globalCfm()
	static int _bind_getGlobalCfm(lua_State *L) {
		if (!_lg_typecheck_getGlobalCfm(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_globalCfm() function, expected prototype:\nfloat btContactSolverInfoData::m_globalCfm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_globalCfm(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_globalCfm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoData::m_splitImpulse()
	static int _bind_getSplitImpulse(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulse(L)) {
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoData::m_splitImpulse() function, expected prototype:\nint btContactSolverInfoData::m_splitImpulse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btContactSolverInfoData::m_splitImpulse(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_splitImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_splitImpulsePenetrationThreshold()
	static int _bind_getSplitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulsePenetrationThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_splitImpulsePenetrationThreshold() function, expected prototype:\nfloat btContactSolverInfoData::m_splitImpulsePenetrationThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_splitImpulsePenetrationThreshold(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_splitImpulsePenetrationThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_splitImpulseTurnErp()
	static int _bind_getSplitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulseTurnErp(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_splitImpulseTurnErp() function, expected prototype:\nfloat btContactSolverInfoData::m_splitImpulseTurnErp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_splitImpulseTurnErp(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_splitImpulseTurnErp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_linearSlop()
	static int _bind_getLinearSlop(lua_State *L) {
		if (!_lg_typecheck_getLinearSlop(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_linearSlop() function, expected prototype:\nfloat btContactSolverInfoData::m_linearSlop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_linearSlop(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_linearSlop;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_warmstartingFactor()
	static int _bind_getWarmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_getWarmstartingFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_warmstartingFactor() function, expected prototype:\nfloat btContactSolverInfoData::m_warmstartingFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_warmstartingFactor(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_warmstartingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoData::m_solverMode()
	static int _bind_getSolverMode(lua_State *L) {
		if (!_lg_typecheck_getSolverMode(L)) {
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoData::m_solverMode() function, expected prototype:\nint btContactSolverInfoData::m_solverMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btContactSolverInfoData::m_solverMode(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_solverMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoData::m_restingContactRestitutionThreshold()
	static int _bind_getRestingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_getRestingContactRestitutionThreshold(L)) {
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoData::m_restingContactRestitutionThreshold() function, expected prototype:\nint btContactSolverInfoData::m_restingContactRestitutionThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btContactSolverInfoData::m_restingContactRestitutionThreshold(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_restingContactRestitutionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoData::m_minimumSolverBatchSize()
	static int _bind_getMinimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_getMinimumSolverBatchSize(L)) {
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoData::m_minimumSolverBatchSize() function, expected prototype:\nint btContactSolverInfoData::m_minimumSolverBatchSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btContactSolverInfoData::m_minimumSolverBatchSize(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_minimumSolverBatchSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_maxGyroscopicForce()
	static int _bind_getMaxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_getMaxGyroscopicForce(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_maxGyroscopicForce() function, expected prototype:\nfloat btContactSolverInfoData::m_maxGyroscopicForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_maxGyroscopicForce(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxGyroscopicForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btContactSolverInfoData::m_singleAxisRollingFrictionThreshold()
	static int _bind_getSingleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_getSingleAxisRollingFrictionThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btContactSolverInfoData::m_singleAxisRollingFrictionThreshold() function, expected prototype:\nfloat btContactSolverInfoData::m_singleAxisRollingFrictionThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btContactSolverInfoData::m_singleAxisRollingFrictionThreshold(). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_singleAxisRollingFrictionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btContactSolverInfoData::m_tau(float value)
	static int _bind_setTau(lua_State *L) {
		if (!_lg_typecheck_setTau(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_tau(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_tau(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_tau(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_tau = value;

		return 0;
	}

	// void btContactSolverInfoData::m_damping(float value)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_damping(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_damping(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_damping(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_damping = value;

		return 0;
	}

	// void btContactSolverInfoData::m_friction(float value)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_friction(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_friction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_friction(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_friction = value;

		return 0;
	}

	// void btContactSolverInfoData::m_timeStep(float value)
	static int _bind_setTimeStep(lua_State *L) {
		if (!_lg_typecheck_setTimeStep(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_timeStep(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_timeStep(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_timeStep(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_timeStep = value;

		return 0;
	}

	// void btContactSolverInfoData::m_restitution(float value)
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_restitution(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_restitution(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_restitution(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btContactSolverInfoData::m_numIterations(int value)
	static int _bind_setNumIterations(lua_State *L) {
		if (!_lg_typecheck_setNumIterations(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_numIterations(int value) function, expected prototype:\nvoid btContactSolverInfoData::m_numIterations(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_numIterations(int). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numIterations = value;

		return 0;
	}

	// void btContactSolverInfoData::m_maxErrorReduction(float value)
	static int _bind_setMaxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_setMaxErrorReduction(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_maxErrorReduction(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_maxErrorReduction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_maxErrorReduction(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxErrorReduction = value;

		return 0;
	}

	// void btContactSolverInfoData::m_sor(float value)
	static int _bind_setSor(lua_State *L) {
		if (!_lg_typecheck_setSor(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_sor(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_sor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_sor(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_sor = value;

		return 0;
	}

	// void btContactSolverInfoData::m_erp(float value)
	static int _bind_setErp(lua_State *L) {
		if (!_lg_typecheck_setErp(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_erp(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_erp(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_erp(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_erp = value;

		return 0;
	}

	// void btContactSolverInfoData::m_erp2(float value)
	static int _bind_setErp2(lua_State *L) {
		if (!_lg_typecheck_setErp2(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_erp2(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_erp2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_erp2(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_erp2 = value;

		return 0;
	}

	// void btContactSolverInfoData::m_globalCfm(float value)
	static int _bind_setGlobalCfm(lua_State *L) {
		if (!_lg_typecheck_setGlobalCfm(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_globalCfm(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_globalCfm(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_globalCfm(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_globalCfm = value;

		return 0;
	}

	// void btContactSolverInfoData::m_splitImpulse(int value)
	static int _bind_setSplitImpulse(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulse(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_splitImpulse(int value) function, expected prototype:\nvoid btContactSolverInfoData::m_splitImpulse(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_splitImpulse(int). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_splitImpulse = value;

		return 0;
	}

	// void btContactSolverInfoData::m_splitImpulsePenetrationThreshold(float value)
	static int _bind_setSplitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulsePenetrationThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_splitImpulsePenetrationThreshold(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_splitImpulsePenetrationThreshold(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_splitImpulsePenetrationThreshold(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_splitImpulsePenetrationThreshold = value;

		return 0;
	}

	// void btContactSolverInfoData::m_splitImpulseTurnErp(float value)
	static int _bind_setSplitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulseTurnErp(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_splitImpulseTurnErp(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_splitImpulseTurnErp(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_splitImpulseTurnErp(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_splitImpulseTurnErp = value;

		return 0;
	}

	// void btContactSolverInfoData::m_linearSlop(float value)
	static int _bind_setLinearSlop(lua_State *L) {
		if (!_lg_typecheck_setLinearSlop(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_linearSlop(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_linearSlop(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_linearSlop(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_linearSlop = value;

		return 0;
	}

	// void btContactSolverInfoData::m_warmstartingFactor(float value)
	static int _bind_setWarmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_setWarmstartingFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_warmstartingFactor(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_warmstartingFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_warmstartingFactor(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_warmstartingFactor = value;

		return 0;
	}

	// void btContactSolverInfoData::m_solverMode(int value)
	static int _bind_setSolverMode(lua_State *L) {
		if (!_lg_typecheck_setSolverMode(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_solverMode(int value) function, expected prototype:\nvoid btContactSolverInfoData::m_solverMode(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_solverMode(int). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_solverMode = value;

		return 0;
	}

	// void btContactSolverInfoData::m_restingContactRestitutionThreshold(int value)
	static int _bind_setRestingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_setRestingContactRestitutionThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_restingContactRestitutionThreshold(int value) function, expected prototype:\nvoid btContactSolverInfoData::m_restingContactRestitutionThreshold(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_restingContactRestitutionThreshold(int). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_restingContactRestitutionThreshold = value;

		return 0;
	}

	// void btContactSolverInfoData::m_minimumSolverBatchSize(int value)
	static int _bind_setMinimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_setMinimumSolverBatchSize(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_minimumSolverBatchSize(int value) function, expected prototype:\nvoid btContactSolverInfoData::m_minimumSolverBatchSize(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_minimumSolverBatchSize(int). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_minimumSolverBatchSize = value;

		return 0;
	}

	// void btContactSolverInfoData::m_maxGyroscopicForce(float value)
	static int _bind_setMaxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_setMaxGyroscopicForce(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_maxGyroscopicForce(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_maxGyroscopicForce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_maxGyroscopicForce(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxGyroscopicForce = value;

		return 0;
	}

	// void btContactSolverInfoData::m_singleAxisRollingFrictionThreshold(float value)
	static int _bind_setSingleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_setSingleAxisRollingFrictionThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoData::m_singleAxisRollingFrictionThreshold(float value) function, expected prototype:\nvoid btContactSolverInfoData::m_singleAxisRollingFrictionThreshold(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btContactSolverInfoData* self=(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btContactSolverInfoData::m_singleAxisRollingFrictionThreshold(float). Got : '%s'\n%s",typeid(Luna< btContactSolverInfoData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_singleAxisRollingFrictionThreshold = value;

		return 0;
	}


	// Operator binds:

};

btContactSolverInfoData* LunaTraits< btContactSolverInfoData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btContactSolverInfoData >::_bind_dtor(btContactSolverInfoData* obj) {
	delete obj;
}

const char LunaTraits< btContactSolverInfoData >::className[] = "btContactSolverInfoData";
const char LunaTraits< btContactSolverInfoData >::fullName[] = "btContactSolverInfoData";
const char LunaTraits< btContactSolverInfoData >::moduleName[] = "bullet";
const char* LunaTraits< btContactSolverInfoData >::parents[] = {0};
const int LunaTraits< btContactSolverInfoData >::hash = 5410878;
const int LunaTraits< btContactSolverInfoData >::uniqueIDs[] = {5410878,0};

luna_RegType LunaTraits< btContactSolverInfoData >::methods[] = {
	{"getTau", &luna_wrapper_btContactSolverInfoData::_bind_getTau},
	{"getDamping", &luna_wrapper_btContactSolverInfoData::_bind_getDamping},
	{"getFriction", &luna_wrapper_btContactSolverInfoData::_bind_getFriction},
	{"getTimeStep", &luna_wrapper_btContactSolverInfoData::_bind_getTimeStep},
	{"getRestitution", &luna_wrapper_btContactSolverInfoData::_bind_getRestitution},
	{"getNumIterations", &luna_wrapper_btContactSolverInfoData::_bind_getNumIterations},
	{"getMaxErrorReduction", &luna_wrapper_btContactSolverInfoData::_bind_getMaxErrorReduction},
	{"getSor", &luna_wrapper_btContactSolverInfoData::_bind_getSor},
	{"getErp", &luna_wrapper_btContactSolverInfoData::_bind_getErp},
	{"getErp2", &luna_wrapper_btContactSolverInfoData::_bind_getErp2},
	{"getGlobalCfm", &luna_wrapper_btContactSolverInfoData::_bind_getGlobalCfm},
	{"getSplitImpulse", &luna_wrapper_btContactSolverInfoData::_bind_getSplitImpulse},
	{"getSplitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoData::_bind_getSplitImpulsePenetrationThreshold},
	{"getSplitImpulseTurnErp", &luna_wrapper_btContactSolverInfoData::_bind_getSplitImpulseTurnErp},
	{"getLinearSlop", &luna_wrapper_btContactSolverInfoData::_bind_getLinearSlop},
	{"getWarmstartingFactor", &luna_wrapper_btContactSolverInfoData::_bind_getWarmstartingFactor},
	{"getSolverMode", &luna_wrapper_btContactSolverInfoData::_bind_getSolverMode},
	{"getRestingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoData::_bind_getRestingContactRestitutionThreshold},
	{"getMinimumSolverBatchSize", &luna_wrapper_btContactSolverInfoData::_bind_getMinimumSolverBatchSize},
	{"getMaxGyroscopicForce", &luna_wrapper_btContactSolverInfoData::_bind_getMaxGyroscopicForce},
	{"getSingleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoData::_bind_getSingleAxisRollingFrictionThreshold},
	{"setTau", &luna_wrapper_btContactSolverInfoData::_bind_setTau},
	{"setDamping", &luna_wrapper_btContactSolverInfoData::_bind_setDamping},
	{"setFriction", &luna_wrapper_btContactSolverInfoData::_bind_setFriction},
	{"setTimeStep", &luna_wrapper_btContactSolverInfoData::_bind_setTimeStep},
	{"setRestitution", &luna_wrapper_btContactSolverInfoData::_bind_setRestitution},
	{"setNumIterations", &luna_wrapper_btContactSolverInfoData::_bind_setNumIterations},
	{"setMaxErrorReduction", &luna_wrapper_btContactSolverInfoData::_bind_setMaxErrorReduction},
	{"setSor", &luna_wrapper_btContactSolverInfoData::_bind_setSor},
	{"setErp", &luna_wrapper_btContactSolverInfoData::_bind_setErp},
	{"setErp2", &luna_wrapper_btContactSolverInfoData::_bind_setErp2},
	{"setGlobalCfm", &luna_wrapper_btContactSolverInfoData::_bind_setGlobalCfm},
	{"setSplitImpulse", &luna_wrapper_btContactSolverInfoData::_bind_setSplitImpulse},
	{"setSplitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoData::_bind_setSplitImpulsePenetrationThreshold},
	{"setSplitImpulseTurnErp", &luna_wrapper_btContactSolverInfoData::_bind_setSplitImpulseTurnErp},
	{"setLinearSlop", &luna_wrapper_btContactSolverInfoData::_bind_setLinearSlop},
	{"setWarmstartingFactor", &luna_wrapper_btContactSolverInfoData::_bind_setWarmstartingFactor},
	{"setSolverMode", &luna_wrapper_btContactSolverInfoData::_bind_setSolverMode},
	{"setRestingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoData::_bind_setRestingContactRestitutionThreshold},
	{"setMinimumSolverBatchSize", &luna_wrapper_btContactSolverInfoData::_bind_setMinimumSolverBatchSize},
	{"setMaxGyroscopicForce", &luna_wrapper_btContactSolverInfoData::_bind_setMaxGyroscopicForce},
	{"setSingleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoData::_bind_setSingleAxisRollingFrictionThreshold},
	{"dynCast", &luna_wrapper_btContactSolverInfoData::_bind_dynCast},
	{"__eq", &luna_wrapper_btContactSolverInfoData::_bind___eq},
	{"fromVoid", &luna_wrapper_btContactSolverInfoData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btContactSolverInfoData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btContactSolverInfoData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btContactSolverInfoData >::enumValues[] = {
	{0,0}
};


