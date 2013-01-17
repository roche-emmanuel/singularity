#include <plug_common.h>

class luna_wrapper_btSolverConstraint {
public:
	typedef Luna< btSolverConstraint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67106554) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSolverConstraint*)");
		}

		btSolverConstraint* rhs =(Luna< btSolverConstraint >::check(L,2));
		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
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

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSolverConstraint");
		
		return luna_dynamicCast(L,converters,"btSolverConstraint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_relpos1CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_relpos2CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularComponentA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularComponentB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedPushImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_friction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_jacDiagABInv(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rhs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cfm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rhsPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_originalContactPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_unusedPadding4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_overrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_frictionIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_solverBodyIdA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_solverBodyIdB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_relpos1CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_relpos2CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularComponentA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularComponentB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedPushImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_friction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_jacDiagABInv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rhs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rhsPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_originalContactPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_unusedPadding4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_overrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_frictionIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_solverBodyIdA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_solverBodyIdB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btSolverConstraint::m_relpos1CrossNormal()
	static int _bind_getM_relpos1CrossNormal(lua_State *L) {
		if (!_lg_typecheck_getM_relpos1CrossNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverConstraint::m_relpos1CrossNormal() function, expected prototype:\nbtVector3 btSolverConstraint::m_relpos1CrossNormal()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverConstraint::m_relpos1CrossNormal(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_relpos1CrossNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverConstraint::m_contactNormal()
	static int _bind_getM_contactNormal(lua_State *L) {
		if (!_lg_typecheck_getM_contactNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverConstraint::m_contactNormal() function, expected prototype:\nbtVector3 btSolverConstraint::m_contactNormal()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverConstraint::m_contactNormal(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_contactNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverConstraint::m_relpos2CrossNormal()
	static int _bind_getM_relpos2CrossNormal(lua_State *L) {
		if (!_lg_typecheck_getM_relpos2CrossNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverConstraint::m_relpos2CrossNormal() function, expected prototype:\nbtVector3 btSolverConstraint::m_relpos2CrossNormal()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverConstraint::m_relpos2CrossNormal(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_relpos2CrossNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverConstraint::m_angularComponentA()
	static int _bind_getM_angularComponentA(lua_State *L) {
		if (!_lg_typecheck_getM_angularComponentA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverConstraint::m_angularComponentA() function, expected prototype:\nbtVector3 btSolverConstraint::m_angularComponentA()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverConstraint::m_angularComponentA(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_angularComponentA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverConstraint::m_angularComponentB()
	static int _bind_getM_angularComponentB(lua_State *L) {
		if (!_lg_typecheck_getM_angularComponentB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverConstraint::m_angularComponentB() function, expected prototype:\nbtVector3 btSolverConstraint::m_angularComponentB()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverConstraint::m_angularComponentB(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_angularComponentB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btSolverConstraint::m_appliedPushImpulse()
	static int _bind_getM_appliedPushImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_appliedPushImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_appliedPushImpulse() function, expected prototype:\nfloat btSolverConstraint::m_appliedPushImpulse()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_appliedPushImpulse(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_appliedPushImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_appliedImpulse()
	static int _bind_getM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_appliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_appliedImpulse() function, expected prototype:\nfloat btSolverConstraint::m_appliedImpulse()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_appliedImpulse(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_appliedImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_friction()
	static int _bind_getM_friction(lua_State *L) {
		if (!_lg_typecheck_getM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_friction() function, expected prototype:\nfloat btSolverConstraint::m_friction()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_friction(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_jacDiagABInv()
	static int _bind_getM_jacDiagABInv(lua_State *L) {
		if (!_lg_typecheck_getM_jacDiagABInv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_jacDiagABInv() function, expected prototype:\nfloat btSolverConstraint::m_jacDiagABInv()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_jacDiagABInv(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_jacDiagABInv;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_rhs()
	static int _bind_getM_rhs(lua_State *L) {
		if (!_lg_typecheck_getM_rhs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_rhs() function, expected prototype:\nfloat btSolverConstraint::m_rhs()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_rhs(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_rhs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_cfm()
	static int _bind_getM_cfm(lua_State *L) {
		if (!_lg_typecheck_getM_cfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_cfm() function, expected prototype:\nfloat btSolverConstraint::m_cfm()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_cfm(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_cfm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_lowerLimit()
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_lowerLimit() function, expected prototype:\nfloat btSolverConstraint::m_lowerLimit()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_lowerLimit(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_upperLimit()
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_upperLimit() function, expected prototype:\nfloat btSolverConstraint::m_upperLimit()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_upperLimit(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSolverConstraint::m_rhsPenetration()
	static int _bind_getM_rhsPenetration(lua_State *L) {
		if (!_lg_typecheck_getM_rhsPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_rhsPenetration() function, expected prototype:\nfloat btSolverConstraint::m_rhsPenetration()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_rhsPenetration(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_rhsPenetration;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btSolverConstraint::m_originalContactPoint()
	static int _bind_getM_originalContactPoint(lua_State *L) {
		if (!_lg_typecheck_getM_originalContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btSolverConstraint::m_originalContactPoint() function, expected prototype:\nvoid * btSolverConstraint::m_originalContactPoint()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btSolverConstraint::m_originalContactPoint(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		void * lret = self->m_originalContactPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float btSolverConstraint::m_unusedPadding4()
	static int _bind_getM_unusedPadding4(lua_State *L) {
		if (!_lg_typecheck_getM_unusedPadding4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSolverConstraint::m_unusedPadding4() function, expected prototype:\nfloat btSolverConstraint::m_unusedPadding4()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSolverConstraint::m_unusedPadding4(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		float lret = self->m_unusedPadding4;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSolverConstraint::m_overrideNumSolverIterations()
	static int _bind_getM_overrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_getM_overrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSolverConstraint::m_overrideNumSolverIterations() function, expected prototype:\nint btSolverConstraint::m_overrideNumSolverIterations()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSolverConstraint::m_overrideNumSolverIterations(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		int lret = self->m_overrideNumSolverIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSolverConstraint::m_frictionIndex()
	static int _bind_getM_frictionIndex(lua_State *L) {
		if (!_lg_typecheck_getM_frictionIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSolverConstraint::m_frictionIndex() function, expected prototype:\nint btSolverConstraint::m_frictionIndex()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSolverConstraint::m_frictionIndex(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		int lret = self->m_frictionIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSolverConstraint::m_solverBodyIdA()
	static int _bind_getM_solverBodyIdA(lua_State *L) {
		if (!_lg_typecheck_getM_solverBodyIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSolverConstraint::m_solverBodyIdA() function, expected prototype:\nint btSolverConstraint::m_solverBodyIdA()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSolverConstraint::m_solverBodyIdA(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		int lret = self->m_solverBodyIdA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSolverConstraint::m_solverBodyIdB()
	static int _bind_getM_solverBodyIdB(lua_State *L) {
		if (!_lg_typecheck_getM_solverBodyIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSolverConstraint::m_solverBodyIdB() function, expected prototype:\nint btSolverConstraint::m_solverBodyIdB()\nClass arguments details:\n");
		}


		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSolverConstraint::m_solverBodyIdB(). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		int lret = self->m_solverBodyIdB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSolverConstraint::m_relpos1CrossNormal(btVector3 value)
	static int _bind_setM_relpos1CrossNormal(lua_State *L) {
		if (!_lg_typecheck_setM_relpos1CrossNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_relpos1CrossNormal(btVector3 value) function, expected prototype:\nvoid btSolverConstraint::m_relpos1CrossNormal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverConstraint::m_relpos1CrossNormal function");
		}
		btVector3 value=*value_ptr;

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_relpos1CrossNormal(btVector3). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_relpos1CrossNormal = value;

		return 0;
	}

	// void btSolverConstraint::m_contactNormal(btVector3 value)
	static int _bind_setM_contactNormal(lua_State *L) {
		if (!_lg_typecheck_setM_contactNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_contactNormal(btVector3 value) function, expected prototype:\nvoid btSolverConstraint::m_contactNormal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverConstraint::m_contactNormal function");
		}
		btVector3 value=*value_ptr;

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_contactNormal(btVector3). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_contactNormal = value;

		return 0;
	}

	// void btSolverConstraint::m_relpos2CrossNormal(btVector3 value)
	static int _bind_setM_relpos2CrossNormal(lua_State *L) {
		if (!_lg_typecheck_setM_relpos2CrossNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_relpos2CrossNormal(btVector3 value) function, expected prototype:\nvoid btSolverConstraint::m_relpos2CrossNormal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverConstraint::m_relpos2CrossNormal function");
		}
		btVector3 value=*value_ptr;

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_relpos2CrossNormal(btVector3). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_relpos2CrossNormal = value;

		return 0;
	}

	// void btSolverConstraint::m_angularComponentA(btVector3 value)
	static int _bind_setM_angularComponentA(lua_State *L) {
		if (!_lg_typecheck_setM_angularComponentA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_angularComponentA(btVector3 value) function, expected prototype:\nvoid btSolverConstraint::m_angularComponentA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverConstraint::m_angularComponentA function");
		}
		btVector3 value=*value_ptr;

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_angularComponentA(btVector3). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_angularComponentA = value;

		return 0;
	}

	// void btSolverConstraint::m_angularComponentB(btVector3 value)
	static int _bind_setM_angularComponentB(lua_State *L) {
		if (!_lg_typecheck_setM_angularComponentB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_angularComponentB(btVector3 value) function, expected prototype:\nvoid btSolverConstraint::m_angularComponentB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverConstraint::m_angularComponentB function");
		}
		btVector3 value=*value_ptr;

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_angularComponentB(btVector3). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_angularComponentB = value;

		return 0;
	}

	// void btSolverConstraint::m_appliedPushImpulse(float value)
	static int _bind_setM_appliedPushImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_appliedPushImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_appliedPushImpulse(float value) function, expected prototype:\nvoid btSolverConstraint::m_appliedPushImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_appliedPushImpulse(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_appliedPushImpulse = value;

		return 0;
	}

	// void btSolverConstraint::m_appliedImpulse(float value)
	static int _bind_setM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_appliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_appliedImpulse(float value) function, expected prototype:\nvoid btSolverConstraint::m_appliedImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_appliedImpulse(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_appliedImpulse = value;

		return 0;
	}

	// void btSolverConstraint::m_friction(float value)
	static int _bind_setM_friction(lua_State *L) {
		if (!_lg_typecheck_setM_friction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_friction(float value) function, expected prototype:\nvoid btSolverConstraint::m_friction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_friction(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btSolverConstraint::m_jacDiagABInv(float value)
	static int _bind_setM_jacDiagABInv(lua_State *L) {
		if (!_lg_typecheck_setM_jacDiagABInv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_jacDiagABInv(float value) function, expected prototype:\nvoid btSolverConstraint::m_jacDiagABInv(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_jacDiagABInv(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_jacDiagABInv = value;

		return 0;
	}

	// void btSolverConstraint::m_rhs(float value)
	static int _bind_setM_rhs(lua_State *L) {
		if (!_lg_typecheck_setM_rhs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_rhs(float value) function, expected prototype:\nvoid btSolverConstraint::m_rhs(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_rhs(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_rhs = value;

		return 0;
	}

	// void btSolverConstraint::m_cfm(float value)
	static int _bind_setM_cfm(lua_State *L) {
		if (!_lg_typecheck_setM_cfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_cfm(float value) function, expected prototype:\nvoid btSolverConstraint::m_cfm(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_cfm(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_cfm = value;

		return 0;
	}

	// void btSolverConstraint::m_lowerLimit(float value)
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_lowerLimit(float value) function, expected prototype:\nvoid btSolverConstraint::m_lowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_lowerLimit(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btSolverConstraint::m_upperLimit(float value)
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_upperLimit(float value) function, expected prototype:\nvoid btSolverConstraint::m_upperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_upperLimit(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btSolverConstraint::m_rhsPenetration(float value)
	static int _bind_setM_rhsPenetration(lua_State *L) {
		if (!_lg_typecheck_setM_rhsPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_rhsPenetration(float value) function, expected prototype:\nvoid btSolverConstraint::m_rhsPenetration(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_rhsPenetration(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_rhsPenetration = value;

		return 0;
	}

	// void btSolverConstraint::m_originalContactPoint(void * value)
	static int _bind_setM_originalContactPoint(lua_State *L) {
		if (!_lg_typecheck_setM_originalContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_originalContactPoint(void * value) function, expected prototype:\nvoid btSolverConstraint::m_originalContactPoint(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_originalContactPoint(void *). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_originalContactPoint = value;

		return 0;
	}

	// void btSolverConstraint::m_unusedPadding4(float value)
	static int _bind_setM_unusedPadding4(lua_State *L) {
		if (!_lg_typecheck_setM_unusedPadding4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_unusedPadding4(float value) function, expected prototype:\nvoid btSolverConstraint::m_unusedPadding4(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_unusedPadding4(float). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_unusedPadding4 = value;

		return 0;
	}

	// void btSolverConstraint::m_overrideNumSolverIterations(int value)
	static int _bind_setM_overrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_setM_overrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_overrideNumSolverIterations(int value) function, expected prototype:\nvoid btSolverConstraint::m_overrideNumSolverIterations(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_overrideNumSolverIterations(int). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_overrideNumSolverIterations = value;

		return 0;
	}

	// void btSolverConstraint::m_frictionIndex(int value)
	static int _bind_setM_frictionIndex(lua_State *L) {
		if (!_lg_typecheck_setM_frictionIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_frictionIndex(int value) function, expected prototype:\nvoid btSolverConstraint::m_frictionIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_frictionIndex(int). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_frictionIndex = value;

		return 0;
	}

	// void btSolverConstraint::m_solverBodyIdA(int value)
	static int _bind_setM_solverBodyIdA(lua_State *L) {
		if (!_lg_typecheck_setM_solverBodyIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_solverBodyIdA(int value) function, expected prototype:\nvoid btSolverConstraint::m_solverBodyIdA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_solverBodyIdA(int). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_solverBodyIdA = value;

		return 0;
	}

	// void btSolverConstraint::m_solverBodyIdB(int value)
	static int _bind_setM_solverBodyIdB(lua_State *L) {
		if (!_lg_typecheck_setM_solverBodyIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverConstraint::m_solverBodyIdB(int value) function, expected prototype:\nvoid btSolverConstraint::m_solverBodyIdB(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverConstraint::m_solverBodyIdB(int). Got : '%s'",typeid(Luna< btSolverConstraint >::check(L,1)).name());
		}
		self->m_solverBodyIdB = value;

		return 0;
	}


	// Operator binds:

};

btSolverConstraint* LunaTraits< btSolverConstraint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btSolverConstraint >::_bind_dtor(btSolverConstraint* obj) {
	delete obj;
}

const char LunaTraits< btSolverConstraint >::className[] = "btSolverConstraint";
const char LunaTraits< btSolverConstraint >::fullName[] = "btSolverConstraint";
const char LunaTraits< btSolverConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btSolverConstraint >::parents[] = {0};
const int LunaTraits< btSolverConstraint >::hash = 67106554;
const int LunaTraits< btSolverConstraint >::uniqueIDs[] = {67106554,0};

luna_RegType LunaTraits< btSolverConstraint >::methods[] = {
	{"getM_relpos1CrossNormal", &luna_wrapper_btSolverConstraint::_bind_getM_relpos1CrossNormal},
	{"getM_contactNormal", &luna_wrapper_btSolverConstraint::_bind_getM_contactNormal},
	{"getM_relpos2CrossNormal", &luna_wrapper_btSolverConstraint::_bind_getM_relpos2CrossNormal},
	{"getM_angularComponentA", &luna_wrapper_btSolverConstraint::_bind_getM_angularComponentA},
	{"getM_angularComponentB", &luna_wrapper_btSolverConstraint::_bind_getM_angularComponentB},
	{"getM_appliedPushImpulse", &luna_wrapper_btSolverConstraint::_bind_getM_appliedPushImpulse},
	{"getM_appliedImpulse", &luna_wrapper_btSolverConstraint::_bind_getM_appliedImpulse},
	{"getM_friction", &luna_wrapper_btSolverConstraint::_bind_getM_friction},
	{"getM_jacDiagABInv", &luna_wrapper_btSolverConstraint::_bind_getM_jacDiagABInv},
	{"getM_rhs", &luna_wrapper_btSolverConstraint::_bind_getM_rhs},
	{"getM_cfm", &luna_wrapper_btSolverConstraint::_bind_getM_cfm},
	{"getM_lowerLimit", &luna_wrapper_btSolverConstraint::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btSolverConstraint::_bind_getM_upperLimit},
	{"getM_rhsPenetration", &luna_wrapper_btSolverConstraint::_bind_getM_rhsPenetration},
	{"getM_originalContactPoint", &luna_wrapper_btSolverConstraint::_bind_getM_originalContactPoint},
	{"getM_unusedPadding4", &luna_wrapper_btSolverConstraint::_bind_getM_unusedPadding4},
	{"getM_overrideNumSolverIterations", &luna_wrapper_btSolverConstraint::_bind_getM_overrideNumSolverIterations},
	{"getM_frictionIndex", &luna_wrapper_btSolverConstraint::_bind_getM_frictionIndex},
	{"getM_solverBodyIdA", &luna_wrapper_btSolverConstraint::_bind_getM_solverBodyIdA},
	{"getM_solverBodyIdB", &luna_wrapper_btSolverConstraint::_bind_getM_solverBodyIdB},
	{"setM_relpos1CrossNormal", &luna_wrapper_btSolverConstraint::_bind_setM_relpos1CrossNormal},
	{"setM_contactNormal", &luna_wrapper_btSolverConstraint::_bind_setM_contactNormal},
	{"setM_relpos2CrossNormal", &luna_wrapper_btSolverConstraint::_bind_setM_relpos2CrossNormal},
	{"setM_angularComponentA", &luna_wrapper_btSolverConstraint::_bind_setM_angularComponentA},
	{"setM_angularComponentB", &luna_wrapper_btSolverConstraint::_bind_setM_angularComponentB},
	{"setM_appliedPushImpulse", &luna_wrapper_btSolverConstraint::_bind_setM_appliedPushImpulse},
	{"setM_appliedImpulse", &luna_wrapper_btSolverConstraint::_bind_setM_appliedImpulse},
	{"setM_friction", &luna_wrapper_btSolverConstraint::_bind_setM_friction},
	{"setM_jacDiagABInv", &luna_wrapper_btSolverConstraint::_bind_setM_jacDiagABInv},
	{"setM_rhs", &luna_wrapper_btSolverConstraint::_bind_setM_rhs},
	{"setM_cfm", &luna_wrapper_btSolverConstraint::_bind_setM_cfm},
	{"setM_lowerLimit", &luna_wrapper_btSolverConstraint::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btSolverConstraint::_bind_setM_upperLimit},
	{"setM_rhsPenetration", &luna_wrapper_btSolverConstraint::_bind_setM_rhsPenetration},
	{"setM_originalContactPoint", &luna_wrapper_btSolverConstraint::_bind_setM_originalContactPoint},
	{"setM_unusedPadding4", &luna_wrapper_btSolverConstraint::_bind_setM_unusedPadding4},
	{"setM_overrideNumSolverIterations", &luna_wrapper_btSolverConstraint::_bind_setM_overrideNumSolverIterations},
	{"setM_frictionIndex", &luna_wrapper_btSolverConstraint::_bind_setM_frictionIndex},
	{"setM_solverBodyIdA", &luna_wrapper_btSolverConstraint::_bind_setM_solverBodyIdA},
	{"setM_solverBodyIdB", &luna_wrapper_btSolverConstraint::_bind_setM_solverBodyIdB},
	{"dynCast", &luna_wrapper_btSolverConstraint::_bind_dynCast},
	{"__eq", &luna_wrapper_btSolverConstraint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btSolverConstraint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSolverConstraint >::enumValues[] = {
	{"BT_SOLVER_CONTACT_1D", btSolverConstraint::BT_SOLVER_CONTACT_1D},
	{"BT_SOLVER_FRICTION_1D", btSolverConstraint::BT_SOLVER_FRICTION_1D},
	{0,0}
};


