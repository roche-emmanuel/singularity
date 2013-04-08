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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btSolverConstraint* self= (btSolverConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSolverConstraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67106554) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSolverConstraint >::check(L,1));
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

		btSolverConstraint* self=(Luna< btSolverConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSolverConstraint");
		
		return luna_dynamicCast(L,converters,"btSolverConstraint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRelpos1CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRelpos2CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularComponentA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularComponentB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedPushImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJacDiagABInv(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRhs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCfm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRhsPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOriginalContactPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedPadding4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrictionIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolverBodyIdA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolverBodyIdB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRelpos1CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRelpos2CrossNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularComponentA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularComponentB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedPushImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJacDiagABInv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRhs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRhsPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOriginalContactPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnusedPadding4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrictionIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolverBodyIdA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolverBodyIdB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btSolverConstraint::m_relpos1CrossNormal()
	static int _bind_getRelpos1CrossNormal(lua_State *L) {
		if (!_lg_typecheck_getRelpos1CrossNormal(L)) {
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
	static int _bind_getContactNormal(lua_State *L) {
		if (!_lg_typecheck_getContactNormal(L)) {
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
	static int _bind_getRelpos2CrossNormal(lua_State *L) {
		if (!_lg_typecheck_getRelpos2CrossNormal(L)) {
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
	static int _bind_getAngularComponentA(lua_State *L) {
		if (!_lg_typecheck_getAngularComponentA(L)) {
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
	static int _bind_getAngularComponentB(lua_State *L) {
		if (!_lg_typecheck_getAngularComponentB(L)) {
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
	static int _bind_getAppliedPushImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedPushImpulse(L)) {
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
	static int _bind_getAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulse(L)) {
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
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
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
	static int _bind_getJacDiagABInv(lua_State *L) {
		if (!_lg_typecheck_getJacDiagABInv(L)) {
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
	static int _bind_getRhs(lua_State *L) {
		if (!_lg_typecheck_getRhs(L)) {
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
	static int _bind_getCfm(lua_State *L) {
		if (!_lg_typecheck_getCfm(L)) {
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
	static int _bind_getLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLimit(L)) {
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
	static int _bind_getUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLimit(L)) {
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
	static int _bind_getRhsPenetration(lua_State *L) {
		if (!_lg_typecheck_getRhsPenetration(L)) {
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
	static int _bind_getOriginalContactPoint(lua_State *L) {
		if (!_lg_typecheck_getOriginalContactPoint(L)) {
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
	static int _bind_getUnusedPadding4(lua_State *L) {
		if (!_lg_typecheck_getUnusedPadding4(L)) {
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
	static int _bind_getOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_getOverrideNumSolverIterations(L)) {
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
	static int _bind_getFrictionIndex(lua_State *L) {
		if (!_lg_typecheck_getFrictionIndex(L)) {
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
	static int _bind_getSolverBodyIdA(lua_State *L) {
		if (!_lg_typecheck_getSolverBodyIdA(L)) {
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
	static int _bind_getSolverBodyIdB(lua_State *L) {
		if (!_lg_typecheck_getSolverBodyIdB(L)) {
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
	static int _bind_setRelpos1CrossNormal(lua_State *L) {
		if (!_lg_typecheck_setRelpos1CrossNormal(L)) {
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
	static int _bind_setContactNormal(lua_State *L) {
		if (!_lg_typecheck_setContactNormal(L)) {
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
	static int _bind_setRelpos2CrossNormal(lua_State *L) {
		if (!_lg_typecheck_setRelpos2CrossNormal(L)) {
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
	static int _bind_setAngularComponentA(lua_State *L) {
		if (!_lg_typecheck_setAngularComponentA(L)) {
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
	static int _bind_setAngularComponentB(lua_State *L) {
		if (!_lg_typecheck_setAngularComponentB(L)) {
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
	static int _bind_setAppliedPushImpulse(lua_State *L) {
		if (!_lg_typecheck_setAppliedPushImpulse(L)) {
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
	static int _bind_setAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setAppliedImpulse(L)) {
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
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
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
	static int _bind_setJacDiagABInv(lua_State *L) {
		if (!_lg_typecheck_setJacDiagABInv(L)) {
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
	static int _bind_setRhs(lua_State *L) {
		if (!_lg_typecheck_setRhs(L)) {
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
	static int _bind_setCfm(lua_State *L) {
		if (!_lg_typecheck_setCfm(L)) {
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
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
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
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
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
	static int _bind_setRhsPenetration(lua_State *L) {
		if (!_lg_typecheck_setRhsPenetration(L)) {
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
	static int _bind_setOriginalContactPoint(lua_State *L) {
		if (!_lg_typecheck_setOriginalContactPoint(L)) {
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
	static int _bind_setUnusedPadding4(lua_State *L) {
		if (!_lg_typecheck_setUnusedPadding4(L)) {
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
	static int _bind_setOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_setOverrideNumSolverIterations(L)) {
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
	static int _bind_setFrictionIndex(lua_State *L) {
		if (!_lg_typecheck_setFrictionIndex(L)) {
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
	static int _bind_setSolverBodyIdA(lua_State *L) {
		if (!_lg_typecheck_setSolverBodyIdA(L)) {
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
	static int _bind_setSolverBodyIdB(lua_State *L) {
		if (!_lg_typecheck_setSolverBodyIdB(L)) {
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
	{"getRelpos1CrossNormal", &luna_wrapper_btSolverConstraint::_bind_getRelpos1CrossNormal},
	{"getContactNormal", &luna_wrapper_btSolverConstraint::_bind_getContactNormal},
	{"getRelpos2CrossNormal", &luna_wrapper_btSolverConstraint::_bind_getRelpos2CrossNormal},
	{"getAngularComponentA", &luna_wrapper_btSolverConstraint::_bind_getAngularComponentA},
	{"getAngularComponentB", &luna_wrapper_btSolverConstraint::_bind_getAngularComponentB},
	{"getAppliedPushImpulse", &luna_wrapper_btSolverConstraint::_bind_getAppliedPushImpulse},
	{"getAppliedImpulse", &luna_wrapper_btSolverConstraint::_bind_getAppliedImpulse},
	{"getFriction", &luna_wrapper_btSolverConstraint::_bind_getFriction},
	{"getJacDiagABInv", &luna_wrapper_btSolverConstraint::_bind_getJacDiagABInv},
	{"getRhs", &luna_wrapper_btSolverConstraint::_bind_getRhs},
	{"getCfm", &luna_wrapper_btSolverConstraint::_bind_getCfm},
	{"getLowerLimit", &luna_wrapper_btSolverConstraint::_bind_getLowerLimit},
	{"getUpperLimit", &luna_wrapper_btSolverConstraint::_bind_getUpperLimit},
	{"getRhsPenetration", &luna_wrapper_btSolverConstraint::_bind_getRhsPenetration},
	{"getOriginalContactPoint", &luna_wrapper_btSolverConstraint::_bind_getOriginalContactPoint},
	{"getUnusedPadding4", &luna_wrapper_btSolverConstraint::_bind_getUnusedPadding4},
	{"getOverrideNumSolverIterations", &luna_wrapper_btSolverConstraint::_bind_getOverrideNumSolverIterations},
	{"getFrictionIndex", &luna_wrapper_btSolverConstraint::_bind_getFrictionIndex},
	{"getSolverBodyIdA", &luna_wrapper_btSolverConstraint::_bind_getSolverBodyIdA},
	{"getSolverBodyIdB", &luna_wrapper_btSolverConstraint::_bind_getSolverBodyIdB},
	{"setRelpos1CrossNormal", &luna_wrapper_btSolverConstraint::_bind_setRelpos1CrossNormal},
	{"setContactNormal", &luna_wrapper_btSolverConstraint::_bind_setContactNormal},
	{"setRelpos2CrossNormal", &luna_wrapper_btSolverConstraint::_bind_setRelpos2CrossNormal},
	{"setAngularComponentA", &luna_wrapper_btSolverConstraint::_bind_setAngularComponentA},
	{"setAngularComponentB", &luna_wrapper_btSolverConstraint::_bind_setAngularComponentB},
	{"setAppliedPushImpulse", &luna_wrapper_btSolverConstraint::_bind_setAppliedPushImpulse},
	{"setAppliedImpulse", &luna_wrapper_btSolverConstraint::_bind_setAppliedImpulse},
	{"setFriction", &luna_wrapper_btSolverConstraint::_bind_setFriction},
	{"setJacDiagABInv", &luna_wrapper_btSolverConstraint::_bind_setJacDiagABInv},
	{"setRhs", &luna_wrapper_btSolverConstraint::_bind_setRhs},
	{"setCfm", &luna_wrapper_btSolverConstraint::_bind_setCfm},
	{"setLowerLimit", &luna_wrapper_btSolverConstraint::_bind_setLowerLimit},
	{"setUpperLimit", &luna_wrapper_btSolverConstraint::_bind_setUpperLimit},
	{"setRhsPenetration", &luna_wrapper_btSolverConstraint::_bind_setRhsPenetration},
	{"setOriginalContactPoint", &luna_wrapper_btSolverConstraint::_bind_setOriginalContactPoint},
	{"setUnusedPadding4", &luna_wrapper_btSolverConstraint::_bind_setUnusedPadding4},
	{"setOverrideNumSolverIterations", &luna_wrapper_btSolverConstraint::_bind_setOverrideNumSolverIterations},
	{"setFrictionIndex", &luna_wrapper_btSolverConstraint::_bind_setFrictionIndex},
	{"setSolverBodyIdA", &luna_wrapper_btSolverConstraint::_bind_setSolverBodyIdA},
	{"setSolverBodyIdB", &luna_wrapper_btSolverConstraint::_bind_setSolverBodyIdB},
	{"dynCast", &luna_wrapper_btSolverConstraint::_bind_dynCast},
	{"__eq", &luna_wrapper_btSolverConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btSolverConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSolverConstraint::_bind_asVoid},
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


