#include <plug_common.h>

class luna_wrapper_btContactSolverInfoDoubleData {
public:
	typedef Luna< btContactSolverInfoDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29375914) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btContactSolverInfoDoubleData*)");
		}

		btContactSolverInfoDoubleData* rhs =(Luna< btContactSolverInfoDoubleData >::check(L,2));
		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
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

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btContactSolverInfoDoubleData");
		
		return luna_dynamicCast(L,converters,"btContactSolverInfoDoubleData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_tau(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_damping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_friction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_timeStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_restitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxErrorReduction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_sor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_erp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_erp2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_globalCfm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_splitImpulsePenetrationThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_splitImpulseTurnErp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_linearSlop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_warmstartingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_singleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_solverMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_restingContactRestitutionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_minimumSolverBatchSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_splitImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_tau(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_damping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_friction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_timeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_restitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxErrorReduction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_sor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_erp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_erp2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_globalCfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_splitImpulsePenetrationThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_splitImpulseTurnErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_linearSlop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_warmstartingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_singleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_solverMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_restingContactRestitutionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_minimumSolverBatchSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_splitImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// double btContactSolverInfoDoubleData::m_tau()
	static int _bind_getM_tau(lua_State *L) {
		if (!_lg_typecheck_getM_tau(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_tau() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_tau()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_tau(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_tau;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_damping()
	static int _bind_getM_damping(lua_State *L) {
		if (!_lg_typecheck_getM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_damping() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_damping()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_damping(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_friction()
	static int _bind_getM_friction(lua_State *L) {
		if (!_lg_typecheck_getM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_friction() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_friction()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_friction(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_timeStep()
	static int _bind_getM_timeStep(lua_State *L) {
		if (!_lg_typecheck_getM_timeStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_timeStep() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_timeStep()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_timeStep(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_timeStep;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_restitution()
	static int _bind_getM_restitution(lua_State *L) {
		if (!_lg_typecheck_getM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_restitution() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_restitution()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_restitution(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_maxErrorReduction()
	static int _bind_getM_maxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_getM_maxErrorReduction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_maxErrorReduction() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_maxErrorReduction()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_maxErrorReduction(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_maxErrorReduction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_sor()
	static int _bind_getM_sor(lua_State *L) {
		if (!_lg_typecheck_getM_sor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_sor() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_sor()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_sor(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_sor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_erp()
	static int _bind_getM_erp(lua_State *L) {
		if (!_lg_typecheck_getM_erp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_erp() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_erp()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_erp(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_erp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_erp2()
	static int _bind_getM_erp2(lua_State *L) {
		if (!_lg_typecheck_getM_erp2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_erp2() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_erp2()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_erp2(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_erp2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_globalCfm()
	static int _bind_getM_globalCfm(lua_State *L) {
		if (!_lg_typecheck_getM_globalCfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_globalCfm() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_globalCfm()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_globalCfm(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_globalCfm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold()
	static int _bind_getM_splitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_splitImpulsePenetrationThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_splitImpulsePenetrationThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_splitImpulseTurnErp()
	static int _bind_getM_splitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_getM_splitImpulseTurnErp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_splitImpulseTurnErp() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_splitImpulseTurnErp()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_splitImpulseTurnErp(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_splitImpulseTurnErp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_linearSlop()
	static int _bind_getM_linearSlop(lua_State *L) {
		if (!_lg_typecheck_getM_linearSlop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_linearSlop() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_linearSlop()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_linearSlop(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_linearSlop;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_warmstartingFactor()
	static int _bind_getM_warmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_getM_warmstartingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_warmstartingFactor() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_warmstartingFactor()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_warmstartingFactor(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_warmstartingFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_maxGyroscopicForce()
	static int _bind_getM_maxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxGyroscopicForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_maxGyroscopicForce() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_maxGyroscopicForce()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_maxGyroscopicForce(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_maxGyroscopicForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold()
	static int _bind_getM_singleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_singleAxisRollingFrictionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold() function, expected prototype:\ndouble btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		double lret = self->m_singleAxisRollingFrictionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoDoubleData::m_numIterations()
	static int _bind_getM_numIterations(lua_State *L) {
		if (!_lg_typecheck_getM_numIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoDoubleData::m_numIterations() function, expected prototype:\nint btContactSolverInfoDoubleData::m_numIterations()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactSolverInfoDoubleData::m_numIterations(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		int lret = self->m_numIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoDoubleData::m_solverMode()
	static int _bind_getM_solverMode(lua_State *L) {
		if (!_lg_typecheck_getM_solverMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoDoubleData::m_solverMode() function, expected prototype:\nint btContactSolverInfoDoubleData::m_solverMode()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactSolverInfoDoubleData::m_solverMode(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		int lret = self->m_solverMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold()
	static int _bind_getM_restingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_restingContactRestitutionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold() function, expected prototype:\nint btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		int lret = self->m_restingContactRestitutionThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoDoubleData::m_minimumSolverBatchSize()
	static int _bind_getM_minimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_getM_minimumSolverBatchSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoDoubleData::m_minimumSolverBatchSize() function, expected prototype:\nint btContactSolverInfoDoubleData::m_minimumSolverBatchSize()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactSolverInfoDoubleData::m_minimumSolverBatchSize(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		int lret = self->m_minimumSolverBatchSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btContactSolverInfoDoubleData::m_splitImpulse()
	static int _bind_getM_splitImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_splitImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactSolverInfoDoubleData::m_splitImpulse() function, expected prototype:\nint btContactSolverInfoDoubleData::m_splitImpulse()\nClass arguments details:\n");
		}


		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactSolverInfoDoubleData::m_splitImpulse(). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		int lret = self->m_splitImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btContactSolverInfoDoubleData::m_tau(double value)
	static int _bind_setM_tau(lua_State *L) {
		if (!_lg_typecheck_setM_tau(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_tau(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_tau(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_tau(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_tau = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_damping(double value)
	static int _bind_setM_damping(lua_State *L) {
		if (!_lg_typecheck_setM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_damping(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_damping(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_damping(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_damping = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_friction(double value)
	static int _bind_setM_friction(lua_State *L) {
		if (!_lg_typecheck_setM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_friction(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_friction(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_friction(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_timeStep(double value)
	static int _bind_setM_timeStep(lua_State *L) {
		if (!_lg_typecheck_setM_timeStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_timeStep(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_timeStep(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_timeStep(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_timeStep = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_restitution(double value)
	static int _bind_setM_restitution(lua_State *L) {
		if (!_lg_typecheck_setM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_restitution(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_restitution(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_restitution(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_maxErrorReduction(double value)
	static int _bind_setM_maxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_setM_maxErrorReduction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_maxErrorReduction(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_maxErrorReduction(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_maxErrorReduction(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_maxErrorReduction = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_sor(double value)
	static int _bind_setM_sor(lua_State *L) {
		if (!_lg_typecheck_setM_sor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_sor(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_sor(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_sor(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_sor = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_erp(double value)
	static int _bind_setM_erp(lua_State *L) {
		if (!_lg_typecheck_setM_erp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_erp(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_erp(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_erp(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_erp = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_erp2(double value)
	static int _bind_setM_erp2(lua_State *L) {
		if (!_lg_typecheck_setM_erp2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_erp2(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_erp2(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_erp2(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_erp2 = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_globalCfm(double value)
	static int _bind_setM_globalCfm(lua_State *L) {
		if (!_lg_typecheck_setM_globalCfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_globalCfm(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_globalCfm(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_globalCfm(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_globalCfm = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold(double value)
	static int _bind_setM_splitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_splitImpulsePenetrationThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_splitImpulsePenetrationThreshold(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_splitImpulsePenetrationThreshold = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_splitImpulseTurnErp(double value)
	static int _bind_setM_splitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_setM_splitImpulseTurnErp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_splitImpulseTurnErp(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_splitImpulseTurnErp(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_splitImpulseTurnErp(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_splitImpulseTurnErp = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_linearSlop(double value)
	static int _bind_setM_linearSlop(lua_State *L) {
		if (!_lg_typecheck_setM_linearSlop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_linearSlop(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_linearSlop(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_linearSlop(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_linearSlop = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_warmstartingFactor(double value)
	static int _bind_setM_warmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_setM_warmstartingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_warmstartingFactor(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_warmstartingFactor(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_warmstartingFactor(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_warmstartingFactor = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_maxGyroscopicForce(double value)
	static int _bind_setM_maxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxGyroscopicForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_maxGyroscopicForce(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_maxGyroscopicForce(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_maxGyroscopicForce(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_maxGyroscopicForce = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold(double value)
	static int _bind_setM_singleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_singleAxisRollingFrictionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold(double value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_singleAxisRollingFrictionThreshold(double). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_singleAxisRollingFrictionThreshold = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_numIterations(int value)
	static int _bind_setM_numIterations(lua_State *L) {
		if (!_lg_typecheck_setM_numIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_numIterations(int value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_numIterations(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_numIterations(int). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_numIterations = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_solverMode(int value)
	static int _bind_setM_solverMode(lua_State *L) {
		if (!_lg_typecheck_setM_solverMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_solverMode(int value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_solverMode(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_solverMode(int). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_solverMode = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold(int value)
	static int _bind_setM_restingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_restingContactRestitutionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold(int value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_restingContactRestitutionThreshold(int). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_restingContactRestitutionThreshold = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_minimumSolverBatchSize(int value)
	static int _bind_setM_minimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_setM_minimumSolverBatchSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_minimumSolverBatchSize(int value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_minimumSolverBatchSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_minimumSolverBatchSize(int). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_minimumSolverBatchSize = value;

		return 0;
	}

	// void btContactSolverInfoDoubleData::m_splitImpulse(int value)
	static int _bind_setM_splitImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_splitImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactSolverInfoDoubleData::m_splitImpulse(int value) function, expected prototype:\nvoid btContactSolverInfoDoubleData::m_splitImpulse(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactSolverInfoDoubleData::m_splitImpulse(int). Got : '%s'",typeid(Luna< btContactSolverInfoDoubleData >::check(L,1)).name());
		}
		self->m_splitImpulse = value;

		return 0;
	}


	// Operator binds:

};

btContactSolverInfoDoubleData* LunaTraits< btContactSolverInfoDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btContactSolverInfoDoubleData >::_bind_dtor(btContactSolverInfoDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btContactSolverInfoDoubleData >::className[] = "btContactSolverInfoDoubleData";
const char LunaTraits< btContactSolverInfoDoubleData >::fullName[] = "btContactSolverInfoDoubleData";
const char LunaTraits< btContactSolverInfoDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btContactSolverInfoDoubleData >::parents[] = {0};
const int LunaTraits< btContactSolverInfoDoubleData >::hash = 29375914;
const int LunaTraits< btContactSolverInfoDoubleData >::uniqueIDs[] = {29375914,0};

luna_RegType LunaTraits< btContactSolverInfoDoubleData >::methods[] = {
	{"getM_tau", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_tau},
	{"getM_damping", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_damping},
	{"getM_friction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_friction},
	{"getM_timeStep", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_timeStep},
	{"getM_restitution", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_restitution},
	{"getM_maxErrorReduction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_maxErrorReduction},
	{"getM_sor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_sor},
	{"getM_erp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_erp},
	{"getM_erp2", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_erp2},
	{"getM_globalCfm", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_globalCfm},
	{"getM_splitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_splitImpulsePenetrationThreshold},
	{"getM_splitImpulseTurnErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_splitImpulseTurnErp},
	{"getM_linearSlop", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_linearSlop},
	{"getM_warmstartingFactor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_warmstartingFactor},
	{"getM_maxGyroscopicForce", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_maxGyroscopicForce},
	{"getM_singleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_singleAxisRollingFrictionThreshold},
	{"getM_numIterations", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_numIterations},
	{"getM_solverMode", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_solverMode},
	{"getM_restingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_restingContactRestitutionThreshold},
	{"getM_minimumSolverBatchSize", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_minimumSolverBatchSize},
	{"getM_splitImpulse", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getM_splitImpulse},
	{"setM_tau", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_tau},
	{"setM_damping", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_damping},
	{"setM_friction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_friction},
	{"setM_timeStep", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_timeStep},
	{"setM_restitution", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_restitution},
	{"setM_maxErrorReduction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_maxErrorReduction},
	{"setM_sor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_sor},
	{"setM_erp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_erp},
	{"setM_erp2", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_erp2},
	{"setM_globalCfm", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_globalCfm},
	{"setM_splitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_splitImpulsePenetrationThreshold},
	{"setM_splitImpulseTurnErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_splitImpulseTurnErp},
	{"setM_linearSlop", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_linearSlop},
	{"setM_warmstartingFactor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_warmstartingFactor},
	{"setM_maxGyroscopicForce", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_maxGyroscopicForce},
	{"setM_singleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_singleAxisRollingFrictionThreshold},
	{"setM_numIterations", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_numIterations},
	{"setM_solverMode", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_solverMode},
	{"setM_restingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_restingContactRestitutionThreshold},
	{"setM_minimumSolverBatchSize", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_minimumSolverBatchSize},
	{"setM_splitImpulse", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setM_splitImpulse},
	{"dynCast", &luna_wrapper_btContactSolverInfoDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btContactSolverInfoDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btContactSolverInfoDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btContactSolverInfoDoubleData >::enumValues[] = {
	{0,0}
};


