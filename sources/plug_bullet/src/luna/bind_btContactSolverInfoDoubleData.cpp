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

		btContactSolverInfoDoubleData* self= (btContactSolverInfoDoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btContactSolverInfoDoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29375914) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btContactSolverInfoDoubleData >::check(L,1));
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

		btContactSolverInfoDoubleData* self=(Luna< btContactSolverInfoDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btContactSolverInfoDoubleData");
		
		return luna_dynamicCast(L,converters,"btContactSolverInfoDoubleData",name);
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

	inline static bool _lg_typecheck_getMaxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSingleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumIterations(lua_State *L) {
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

	inline static bool _lg_typecheck_getSplitImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTau(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxErrorReduction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setErp2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalCfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulsePenetrationThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulseTurnErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearSlop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWarmstartingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSingleAxisRollingFrictionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolverMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestingContactRestitutionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumSolverBatchSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// double btContactSolverInfoDoubleData::m_tau()
	static int _bind_getTau(lua_State *L) {
		if (!_lg_typecheck_getTau(L)) {
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
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
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
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
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
	static int _bind_getTimeStep(lua_State *L) {
		if (!_lg_typecheck_getTimeStep(L)) {
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
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
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
	static int _bind_getMaxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_getMaxErrorReduction(L)) {
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
	static int _bind_getSor(lua_State *L) {
		if (!_lg_typecheck_getSor(L)) {
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
	static int _bind_getErp(lua_State *L) {
		if (!_lg_typecheck_getErp(L)) {
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
	static int _bind_getErp2(lua_State *L) {
		if (!_lg_typecheck_getErp2(L)) {
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
	static int _bind_getGlobalCfm(lua_State *L) {
		if (!_lg_typecheck_getGlobalCfm(L)) {
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
	static int _bind_getSplitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulsePenetrationThreshold(L)) {
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
	static int _bind_getSplitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulseTurnErp(L)) {
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
	static int _bind_getLinearSlop(lua_State *L) {
		if (!_lg_typecheck_getLinearSlop(L)) {
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
	static int _bind_getWarmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_getWarmstartingFactor(L)) {
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
	static int _bind_getMaxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_getMaxGyroscopicForce(L)) {
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
	static int _bind_getSingleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_getSingleAxisRollingFrictionThreshold(L)) {
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
	static int _bind_getNumIterations(lua_State *L) {
		if (!_lg_typecheck_getNumIterations(L)) {
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
	static int _bind_getSolverMode(lua_State *L) {
		if (!_lg_typecheck_getSolverMode(L)) {
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
	static int _bind_getRestingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_getRestingContactRestitutionThreshold(L)) {
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
	static int _bind_getMinimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_getMinimumSolverBatchSize(L)) {
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
	static int _bind_getSplitImpulse(lua_State *L) {
		if (!_lg_typecheck_getSplitImpulse(L)) {
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
	static int _bind_setTau(lua_State *L) {
		if (!_lg_typecheck_setTau(L)) {
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
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
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
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
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
	static int _bind_setTimeStep(lua_State *L) {
		if (!_lg_typecheck_setTimeStep(L)) {
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
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
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
	static int _bind_setMaxErrorReduction(lua_State *L) {
		if (!_lg_typecheck_setMaxErrorReduction(L)) {
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
	static int _bind_setSor(lua_State *L) {
		if (!_lg_typecheck_setSor(L)) {
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
	static int _bind_setErp(lua_State *L) {
		if (!_lg_typecheck_setErp(L)) {
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
	static int _bind_setErp2(lua_State *L) {
		if (!_lg_typecheck_setErp2(L)) {
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
	static int _bind_setGlobalCfm(lua_State *L) {
		if (!_lg_typecheck_setGlobalCfm(L)) {
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
	static int _bind_setSplitImpulsePenetrationThreshold(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulsePenetrationThreshold(L)) {
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
	static int _bind_setSplitImpulseTurnErp(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulseTurnErp(L)) {
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
	static int _bind_setLinearSlop(lua_State *L) {
		if (!_lg_typecheck_setLinearSlop(L)) {
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
	static int _bind_setWarmstartingFactor(lua_State *L) {
		if (!_lg_typecheck_setWarmstartingFactor(L)) {
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
	static int _bind_setMaxGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_setMaxGyroscopicForce(L)) {
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
	static int _bind_setSingleAxisRollingFrictionThreshold(lua_State *L) {
		if (!_lg_typecheck_setSingleAxisRollingFrictionThreshold(L)) {
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
	static int _bind_setNumIterations(lua_State *L) {
		if (!_lg_typecheck_setNumIterations(L)) {
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
	static int _bind_setSolverMode(lua_State *L) {
		if (!_lg_typecheck_setSolverMode(L)) {
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
	static int _bind_setRestingContactRestitutionThreshold(lua_State *L) {
		if (!_lg_typecheck_setRestingContactRestitutionThreshold(L)) {
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
	static int _bind_setMinimumSolverBatchSize(lua_State *L) {
		if (!_lg_typecheck_setMinimumSolverBatchSize(L)) {
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
	static int _bind_setSplitImpulse(lua_State *L) {
		if (!_lg_typecheck_setSplitImpulse(L)) {
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
	{"getTau", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getTau},
	{"getDamping", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getDamping},
	{"getFriction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getFriction},
	{"getTimeStep", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getTimeStep},
	{"getRestitution", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getRestitution},
	{"getMaxErrorReduction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getMaxErrorReduction},
	{"getSor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSor},
	{"getErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getErp},
	{"getErp2", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getErp2},
	{"getGlobalCfm", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getGlobalCfm},
	{"getSplitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSplitImpulsePenetrationThreshold},
	{"getSplitImpulseTurnErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSplitImpulseTurnErp},
	{"getLinearSlop", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getLinearSlop},
	{"getWarmstartingFactor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getWarmstartingFactor},
	{"getMaxGyroscopicForce", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getMaxGyroscopicForce},
	{"getSingleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSingleAxisRollingFrictionThreshold},
	{"getNumIterations", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getNumIterations},
	{"getSolverMode", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSolverMode},
	{"getRestingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getRestingContactRestitutionThreshold},
	{"getMinimumSolverBatchSize", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getMinimumSolverBatchSize},
	{"getSplitImpulse", &luna_wrapper_btContactSolverInfoDoubleData::_bind_getSplitImpulse},
	{"setTau", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setTau},
	{"setDamping", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setDamping},
	{"setFriction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setFriction},
	{"setTimeStep", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setTimeStep},
	{"setRestitution", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setRestitution},
	{"setMaxErrorReduction", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setMaxErrorReduction},
	{"setSor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSor},
	{"setErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setErp},
	{"setErp2", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setErp2},
	{"setGlobalCfm", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setGlobalCfm},
	{"setSplitImpulsePenetrationThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSplitImpulsePenetrationThreshold},
	{"setSplitImpulseTurnErp", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSplitImpulseTurnErp},
	{"setLinearSlop", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setLinearSlop},
	{"setWarmstartingFactor", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setWarmstartingFactor},
	{"setMaxGyroscopicForce", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setMaxGyroscopicForce},
	{"setSingleAxisRollingFrictionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSingleAxisRollingFrictionThreshold},
	{"setNumIterations", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setNumIterations},
	{"setSolverMode", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSolverMode},
	{"setRestingContactRestitutionThreshold", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setRestingContactRestitutionThreshold},
	{"setMinimumSolverBatchSize", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setMinimumSolverBatchSize},
	{"setSplitImpulse", &luna_wrapper_btContactSolverInfoDoubleData::_bind_setSplitImpulse},
	{"dynCast", &luna_wrapper_btContactSolverInfoDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btContactSolverInfoDoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btContactSolverInfoDoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btContactSolverInfoDoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btContactSolverInfoDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btContactSolverInfoDoubleData >::enumValues[] = {
	{0,0}
};


