#include <plug_common.h>

class luna_wrapper_btRotationalLimitMotor {
public:
	typedef Luna< btRotationalLimitMotor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86737843) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRotationalLimitMotor*)");
		}

		btRotationalLimitMotor* rhs =(Luna< btRotationalLimitMotor >::check(L,2));
		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
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

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btRotationalLimitMotor");
		
		return luna_dynamicCast(L,converters,"btRotationalLimitMotor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86737843) ) return false;
		if( (!(Luna< btRotationalLimitMotor >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isLimited(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needApplyTorques(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_testLimitValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_solveAngularLimits(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,85758361)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_loLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hiLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_targetVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxLimitForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_damping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_normalCFM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_stopERP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_stopCFM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bounce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_enableMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_currentLimitError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_currentPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_currentLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_accumulatedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_loLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hiLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_targetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxLimitForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_damping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_normalCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stopERP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stopCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bounce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_enableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_currentLimitError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_currentPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_currentLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_accumulatedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRotationalLimitMotor::btRotationalLimitMotor()
	static btRotationalLimitMotor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRotationalLimitMotor::btRotationalLimitMotor() function, expected prototype:\nbtRotationalLimitMotor::btRotationalLimitMotor()\nClass arguments details:\n");
		}


		return new btRotationalLimitMotor();
	}

	// btRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot)
	static btRotationalLimitMotor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot) function, expected prototype:\nbtRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot)\nClass arguments details:\narg 1 ID = 86737843\n");
		}

		const btRotationalLimitMotor* limot_ptr=(Luna< btRotationalLimitMotor >::check(L,1));
		if( !limot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg limot in btRotationalLimitMotor::btRotationalLimitMotor function");
		}
		const btRotationalLimitMotor & limot=*limot_ptr;

		return new btRotationalLimitMotor(limot);
	}

	// Overload binder for btRotationalLimitMotor::btRotationalLimitMotor
	static btRotationalLimitMotor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btRotationalLimitMotor, cannot match any of the overloads for function btRotationalLimitMotor:\n  btRotationalLimitMotor()\n  btRotationalLimitMotor(const btRotationalLimitMotor &)\n");
		return NULL;
	}


	// Function binds:
	// bool btRotationalLimitMotor::isLimited()
	static int _bind_isLimited(lua_State *L) {
		if (!_lg_typecheck_isLimited(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::isLimited() function, expected prototype:\nbool btRotationalLimitMotor::isLimited()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::isLimited(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		bool lret = self->isLimited();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btRotationalLimitMotor::needApplyTorques()
	static int _bind_needApplyTorques(lua_State *L) {
		if (!_lg_typecheck_needApplyTorques(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::needApplyTorques() function, expected prototype:\nbool btRotationalLimitMotor::needApplyTorques()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::needApplyTorques(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		bool lret = self->needApplyTorques();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btRotationalLimitMotor::testLimitValue(float test_value)
	static int _bind_testLimitValue(lua_State *L) {
		if (!_lg_typecheck_testLimitValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRotationalLimitMotor::testLimitValue(float test_value) function, expected prototype:\nint btRotationalLimitMotor::testLimitValue(float test_value)\nClass arguments details:\n");
		}

		float test_value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRotationalLimitMotor::testLimitValue(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		int lret = self->testLimitValue(test_value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1)
	static int _bind_solveAngularLimits(lua_State *L) {
		if (!_lg_typecheck_solveAngularLimits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1) function, expected prototype:\nfloat btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1)\nClass arguments details:\narg 2 ID = 91544891\narg 4 ID = 85758361\narg 5 ID = 85758361\n");
		}

		float timeStep=(float)lua_tonumber(L,2);
		btVector3* axis_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btRotationalLimitMotor::solveAngularLimits function");
		}
		btVector3 & axis=*axis_ptr;
		float jacDiagABInv=(float)lua_tonumber(L,4);
		btRigidBody* body0=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,5));
		btRigidBody* body1=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,6));

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::solveAngularLimits(float, btVector3 &, float, btRigidBody *, btRigidBody *). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->solveAngularLimits(timeStep, axis, jacDiagABInv, body0, body1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_loLimit()
	static int _bind_getM_loLimit(lua_State *L) {
		if (!_lg_typecheck_getM_loLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_loLimit() function, expected prototype:\nfloat btRotationalLimitMotor::m_loLimit()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_loLimit(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_loLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_hiLimit()
	static int _bind_getM_hiLimit(lua_State *L) {
		if (!_lg_typecheck_getM_hiLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_hiLimit() function, expected prototype:\nfloat btRotationalLimitMotor::m_hiLimit()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_hiLimit(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_hiLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_targetVelocity()
	static int _bind_getM_targetVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_targetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_targetVelocity() function, expected prototype:\nfloat btRotationalLimitMotor::m_targetVelocity()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_targetVelocity(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_targetVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_maxMotorForce()
	static int _bind_getM_maxMotorForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_maxMotorForce() function, expected prototype:\nfloat btRotationalLimitMotor::m_maxMotorForce()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_maxMotorForce(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_maxMotorForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_maxLimitForce()
	static int _bind_getM_maxLimitForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxLimitForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_maxLimitForce() function, expected prototype:\nfloat btRotationalLimitMotor::m_maxLimitForce()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_maxLimitForce(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_maxLimitForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_damping()
	static int _bind_getM_damping(lua_State *L) {
		if (!_lg_typecheck_getM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_damping() function, expected prototype:\nfloat btRotationalLimitMotor::m_damping()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_damping(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_limitSoftness()
	static int _bind_getM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_getM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_limitSoftness() function, expected prototype:\nfloat btRotationalLimitMotor::m_limitSoftness()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_limitSoftness(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_normalCFM()
	static int _bind_getM_normalCFM(lua_State *L) {
		if (!_lg_typecheck_getM_normalCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_normalCFM() function, expected prototype:\nfloat btRotationalLimitMotor::m_normalCFM()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_normalCFM(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_normalCFM;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_stopERP()
	static int _bind_getM_stopERP(lua_State *L) {
		if (!_lg_typecheck_getM_stopERP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_stopERP() function, expected prototype:\nfloat btRotationalLimitMotor::m_stopERP()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_stopERP(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_stopERP;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_stopCFM()
	static int _bind_getM_stopCFM(lua_State *L) {
		if (!_lg_typecheck_getM_stopCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_stopCFM() function, expected prototype:\nfloat btRotationalLimitMotor::m_stopCFM()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_stopCFM(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_stopCFM;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_bounce()
	static int _bind_getM_bounce(lua_State *L) {
		if (!_lg_typecheck_getM_bounce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_bounce() function, expected prototype:\nfloat btRotationalLimitMotor::m_bounce()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_bounce(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_bounce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btRotationalLimitMotor::m_enableMotor()
	static int _bind_getM_enableMotor(lua_State *L) {
		if (!_lg_typecheck_getM_enableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::m_enableMotor() function, expected prototype:\nbool btRotationalLimitMotor::m_enableMotor()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::m_enableMotor(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		bool lret = self->m_enableMotor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btRotationalLimitMotor::m_currentLimitError()
	static int _bind_getM_currentLimitError(lua_State *L) {
		if (!_lg_typecheck_getM_currentLimitError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_currentLimitError() function, expected prototype:\nfloat btRotationalLimitMotor::m_currentLimitError()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_currentLimitError(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_currentLimitError;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_currentPosition()
	static int _bind_getM_currentPosition(lua_State *L) {
		if (!_lg_typecheck_getM_currentPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_currentPosition() function, expected prototype:\nfloat btRotationalLimitMotor::m_currentPosition()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_currentPosition(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_currentPosition;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRotationalLimitMotor::m_currentLimit()
	static int _bind_getM_currentLimit(lua_State *L) {
		if (!_lg_typecheck_getM_currentLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRotationalLimitMotor::m_currentLimit() function, expected prototype:\nint btRotationalLimitMotor::m_currentLimit()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRotationalLimitMotor::m_currentLimit(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		int lret = self->m_currentLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_accumulatedImpulse()
	static int _bind_getM_accumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_accumulatedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_accumulatedImpulse() function, expected prototype:\nfloat btRotationalLimitMotor::m_accumulatedImpulse()\nClass arguments details:\n");
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_accumulatedImpulse(). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_accumulatedImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRotationalLimitMotor::m_loLimit(float value)
	static int _bind_setM_loLimit(lua_State *L) {
		if (!_lg_typecheck_setM_loLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_loLimit(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_loLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_loLimit(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_loLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_hiLimit(float value)
	static int _bind_setM_hiLimit(lua_State *L) {
		if (!_lg_typecheck_setM_hiLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_hiLimit(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_hiLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_hiLimit(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_hiLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_targetVelocity(float value)
	static int _bind_setM_targetVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_targetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_targetVelocity(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_targetVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_targetVelocity(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_targetVelocity = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_maxMotorForce(float value)
	static int _bind_setM_maxMotorForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_maxMotorForce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_maxMotorForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_maxMotorForce(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_maxMotorForce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_maxLimitForce(float value)
	static int _bind_setM_maxLimitForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxLimitForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_maxLimitForce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_maxLimitForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_maxLimitForce(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_maxLimitForce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_damping(float value)
	static int _bind_setM_damping(lua_State *L) {
		if (!_lg_typecheck_setM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_damping(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_damping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_damping(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_damping = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_limitSoftness(float value)
	static int _bind_setM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_setM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_limitSoftness(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_limitSoftness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_limitSoftness(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_normalCFM(float value)
	static int _bind_setM_normalCFM(lua_State *L) {
		if (!_lg_typecheck_setM_normalCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_normalCFM(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_normalCFM(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_normalCFM(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_normalCFM = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_stopERP(float value)
	static int _bind_setM_stopERP(lua_State *L) {
		if (!_lg_typecheck_setM_stopERP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_stopERP(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_stopERP(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_stopERP(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_stopERP = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_stopCFM(float value)
	static int _bind_setM_stopCFM(lua_State *L) {
		if (!_lg_typecheck_setM_stopCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_stopCFM(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_stopCFM(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_stopCFM(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_stopCFM = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_bounce(float value)
	static int _bind_setM_bounce(lua_State *L) {
		if (!_lg_typecheck_setM_bounce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_bounce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_bounce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_bounce(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_bounce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_enableMotor(bool value)
	static int _bind_setM_enableMotor(lua_State *L) {
		if (!_lg_typecheck_setM_enableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_enableMotor(bool value) function, expected prototype:\nvoid btRotationalLimitMotor::m_enableMotor(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_enableMotor(bool). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_enableMotor = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentLimitError(float value)
	static int _bind_setM_currentLimitError(lua_State *L) {
		if (!_lg_typecheck_setM_currentLimitError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentLimitError(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentLimitError(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentLimitError(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_currentLimitError = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentPosition(float value)
	static int _bind_setM_currentPosition(lua_State *L) {
		if (!_lg_typecheck_setM_currentPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentPosition(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentPosition(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentPosition(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_currentPosition = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentLimit(int value)
	static int _bind_setM_currentLimit(lua_State *L) {
		if (!_lg_typecheck_setM_currentLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentLimit(int value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentLimit(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentLimit(int). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_currentLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_accumulatedImpulse(float value)
	static int _bind_setM_accumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_accumulatedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_accumulatedImpulse(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_accumulatedImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_accumulatedImpulse(float). Got : '%s'",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name());
		}
		self->m_accumulatedImpulse = value;

		return 0;
	}


	// Operator binds:

};

btRotationalLimitMotor* LunaTraits< btRotationalLimitMotor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btRotationalLimitMotor::_bind_ctor(L);
}

void LunaTraits< btRotationalLimitMotor >::_bind_dtor(btRotationalLimitMotor* obj) {
	delete obj;
}

const char LunaTraits< btRotationalLimitMotor >::className[] = "btRotationalLimitMotor";
const char LunaTraits< btRotationalLimitMotor >::fullName[] = "btRotationalLimitMotor";
const char LunaTraits< btRotationalLimitMotor >::moduleName[] = "bullet";
const char* LunaTraits< btRotationalLimitMotor >::parents[] = {0};
const int LunaTraits< btRotationalLimitMotor >::hash = 86737843;
const int LunaTraits< btRotationalLimitMotor >::uniqueIDs[] = {86737843,0};

luna_RegType LunaTraits< btRotationalLimitMotor >::methods[] = {
	{"isLimited", &luna_wrapper_btRotationalLimitMotor::_bind_isLimited},
	{"needApplyTorques", &luna_wrapper_btRotationalLimitMotor::_bind_needApplyTorques},
	{"testLimitValue", &luna_wrapper_btRotationalLimitMotor::_bind_testLimitValue},
	{"solveAngularLimits", &luna_wrapper_btRotationalLimitMotor::_bind_solveAngularLimits},
	{"getM_loLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getM_loLimit},
	{"getM_hiLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getM_hiLimit},
	{"getM_targetVelocity", &luna_wrapper_btRotationalLimitMotor::_bind_getM_targetVelocity},
	{"getM_maxMotorForce", &luna_wrapper_btRotationalLimitMotor::_bind_getM_maxMotorForce},
	{"getM_maxLimitForce", &luna_wrapper_btRotationalLimitMotor::_bind_getM_maxLimitForce},
	{"getM_damping", &luna_wrapper_btRotationalLimitMotor::_bind_getM_damping},
	{"getM_limitSoftness", &luna_wrapper_btRotationalLimitMotor::_bind_getM_limitSoftness},
	{"getM_normalCFM", &luna_wrapper_btRotationalLimitMotor::_bind_getM_normalCFM},
	{"getM_stopERP", &luna_wrapper_btRotationalLimitMotor::_bind_getM_stopERP},
	{"getM_stopCFM", &luna_wrapper_btRotationalLimitMotor::_bind_getM_stopCFM},
	{"getM_bounce", &luna_wrapper_btRotationalLimitMotor::_bind_getM_bounce},
	{"getM_enableMotor", &luna_wrapper_btRotationalLimitMotor::_bind_getM_enableMotor},
	{"getM_currentLimitError", &luna_wrapper_btRotationalLimitMotor::_bind_getM_currentLimitError},
	{"getM_currentPosition", &luna_wrapper_btRotationalLimitMotor::_bind_getM_currentPosition},
	{"getM_currentLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getM_currentLimit},
	{"getM_accumulatedImpulse", &luna_wrapper_btRotationalLimitMotor::_bind_getM_accumulatedImpulse},
	{"setM_loLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setM_loLimit},
	{"setM_hiLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setM_hiLimit},
	{"setM_targetVelocity", &luna_wrapper_btRotationalLimitMotor::_bind_setM_targetVelocity},
	{"setM_maxMotorForce", &luna_wrapper_btRotationalLimitMotor::_bind_setM_maxMotorForce},
	{"setM_maxLimitForce", &luna_wrapper_btRotationalLimitMotor::_bind_setM_maxLimitForce},
	{"setM_damping", &luna_wrapper_btRotationalLimitMotor::_bind_setM_damping},
	{"setM_limitSoftness", &luna_wrapper_btRotationalLimitMotor::_bind_setM_limitSoftness},
	{"setM_normalCFM", &luna_wrapper_btRotationalLimitMotor::_bind_setM_normalCFM},
	{"setM_stopERP", &luna_wrapper_btRotationalLimitMotor::_bind_setM_stopERP},
	{"setM_stopCFM", &luna_wrapper_btRotationalLimitMotor::_bind_setM_stopCFM},
	{"setM_bounce", &luna_wrapper_btRotationalLimitMotor::_bind_setM_bounce},
	{"setM_enableMotor", &luna_wrapper_btRotationalLimitMotor::_bind_setM_enableMotor},
	{"setM_currentLimitError", &luna_wrapper_btRotationalLimitMotor::_bind_setM_currentLimitError},
	{"setM_currentPosition", &luna_wrapper_btRotationalLimitMotor::_bind_setM_currentPosition},
	{"setM_currentLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setM_currentLimit},
	{"setM_accumulatedImpulse", &luna_wrapper_btRotationalLimitMotor::_bind_setM_accumulatedImpulse},
	{"dynCast", &luna_wrapper_btRotationalLimitMotor::_bind_dynCast},
	{"__eq", &luna_wrapper_btRotationalLimitMotor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btRotationalLimitMotor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRotationalLimitMotor >::enumValues[] = {
	{0,0}
};

