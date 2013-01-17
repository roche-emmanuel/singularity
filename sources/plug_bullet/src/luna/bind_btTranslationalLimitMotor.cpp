#include <plug_common.h>

class luna_wrapper_btTranslationalLimitMotor {
public:
	typedef Luna< btTranslationalLimitMotor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31464826) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTranslationalLimitMotor*)");
		}

		btTranslationalLimitMotor* rhs =(Luna< btTranslationalLimitMotor >::check(L,2));
		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
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

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTranslationalLimitMotor");
		
		return luna_dynamicCast(L,converters,"btTranslationalLimitMotor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31464826) ) return false;
		if( (!(Luna< btTranslationalLimitMotor >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isLimited(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needApplyForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testLimitValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_solveLinearAxis(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85758361) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,85758361) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_damping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_restitution(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_accumulatedImpulse(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_currentLimitError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_currentLinearDiff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_damping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_restitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_normalCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stopERP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stopCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_accumulatedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_targetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_currentLimitError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_currentLinearDiff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTranslationalLimitMotor::btTranslationalLimitMotor()
	static btTranslationalLimitMotor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTranslationalLimitMotor::btTranslationalLimitMotor() function, expected prototype:\nbtTranslationalLimitMotor::btTranslationalLimitMotor()\nClass arguments details:\n");
		}


		return new btTranslationalLimitMotor();
	}

	// btTranslationalLimitMotor::btTranslationalLimitMotor(const btTranslationalLimitMotor & other)
	static btTranslationalLimitMotor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTranslationalLimitMotor::btTranslationalLimitMotor(const btTranslationalLimitMotor & other) function, expected prototype:\nbtTranslationalLimitMotor::btTranslationalLimitMotor(const btTranslationalLimitMotor & other)\nClass arguments details:\narg 1 ID = 31464826\n");
		}

		const btTranslationalLimitMotor* other_ptr=(Luna< btTranslationalLimitMotor >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTranslationalLimitMotor::btTranslationalLimitMotor function");
		}
		const btTranslationalLimitMotor & other=*other_ptr;

		return new btTranslationalLimitMotor(other);
	}

	// Overload binder for btTranslationalLimitMotor::btTranslationalLimitMotor
	static btTranslationalLimitMotor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btTranslationalLimitMotor, cannot match any of the overloads for function btTranslationalLimitMotor:\n  btTranslationalLimitMotor()\n  btTranslationalLimitMotor(const btTranslationalLimitMotor &)\n");
		return NULL;
	}


	// Function binds:
	// bool btTranslationalLimitMotor::isLimited(int limitIndex)
	static int _bind_isLimited(lua_State *L) {
		if (!_lg_typecheck_isLimited(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTranslationalLimitMotor::isLimited(int limitIndex) function, expected prototype:\nbool btTranslationalLimitMotor::isLimited(int limitIndex)\nClass arguments details:\n");
		}

		int limitIndex=(int)lua_tointeger(L,2);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTranslationalLimitMotor::isLimited(int). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		bool lret = self->isLimited(limitIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btTranslationalLimitMotor::needApplyForce(int limitIndex)
	static int _bind_needApplyForce(lua_State *L) {
		if (!_lg_typecheck_needApplyForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTranslationalLimitMotor::needApplyForce(int limitIndex) function, expected prototype:\nbool btTranslationalLimitMotor::needApplyForce(int limitIndex)\nClass arguments details:\n");
		}

		int limitIndex=(int)lua_tointeger(L,2);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTranslationalLimitMotor::needApplyForce(int). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		bool lret = self->needApplyForce(limitIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btTranslationalLimitMotor::testLimitValue(int limitIndex, float test_value)
	static int _bind_testLimitValue(lua_State *L) {
		if (!_lg_typecheck_testLimitValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTranslationalLimitMotor::testLimitValue(int limitIndex, float test_value) function, expected prototype:\nint btTranslationalLimitMotor::testLimitValue(int limitIndex, float test_value)\nClass arguments details:\n");
		}

		int limitIndex=(int)lua_tointeger(L,2);
		float test_value=(float)lua_tonumber(L,3);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTranslationalLimitMotor::testLimitValue(int, float). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		int lret = self->testLimitValue(limitIndex, test_value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTranslationalLimitMotor::solveLinearAxis(float timeStep, float jacDiagABInv, btRigidBody & body1, const btVector3 & pointInA, btRigidBody & body2, const btVector3 & pointInB, int limit_index, const btVector3 & axis_normal_on_a, const btVector3 & anchorPos)
	static int _bind_solveLinearAxis(lua_State *L) {
		if (!_lg_typecheck_solveLinearAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTranslationalLimitMotor::solveLinearAxis(float timeStep, float jacDiagABInv, btRigidBody & body1, const btVector3 & pointInA, btRigidBody & body2, const btVector3 & pointInB, int limit_index, const btVector3 & axis_normal_on_a, const btVector3 & anchorPos) function, expected prototype:\nfloat btTranslationalLimitMotor::solveLinearAxis(float timeStep, float jacDiagABInv, btRigidBody & body1, const btVector3 & pointInA, btRigidBody & body2, const btVector3 & pointInB, int limit_index, const btVector3 & axis_normal_on_a, const btVector3 & anchorPos)\nClass arguments details:\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 85758361\narg 6 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 91544891\n");
		}

		float timeStep=(float)lua_tonumber(L,2);
		float jacDiagABInv=(float)lua_tonumber(L,3);
		btRigidBody* body1_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,4));
		if( !body1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg body1 in btTranslationalLimitMotor::solveLinearAxis function");
		}
		btRigidBody & body1=*body1_ptr;
		const btVector3* pointInA_ptr=(Luna< btVector3 >::check(L,5));
		if( !pointInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInA in btTranslationalLimitMotor::solveLinearAxis function");
		}
		const btVector3 & pointInA=*pointInA_ptr;
		btRigidBody* body2_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,6));
		if( !body2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg body2 in btTranslationalLimitMotor::solveLinearAxis function");
		}
		btRigidBody & body2=*body2_ptr;
		const btVector3* pointInB_ptr=(Luna< btVector3 >::check(L,7));
		if( !pointInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInB in btTranslationalLimitMotor::solveLinearAxis function");
		}
		const btVector3 & pointInB=*pointInB_ptr;
		int limit_index=(int)lua_tointeger(L,8);
		const btVector3* axis_normal_on_a_ptr=(Luna< btVector3 >::check(L,9));
		if( !axis_normal_on_a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis_normal_on_a in btTranslationalLimitMotor::solveLinearAxis function");
		}
		const btVector3 & axis_normal_on_a=*axis_normal_on_a_ptr;
		const btVector3* anchorPos_ptr=(Luna< btVector3 >::check(L,10));
		if( !anchorPos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchorPos in btTranslationalLimitMotor::solveLinearAxis function");
		}
		const btVector3 & anchorPos=*anchorPos_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTranslationalLimitMotor::solveLinearAxis(float, float, btRigidBody &, const btVector3 &, btRigidBody &, const btVector3 &, int, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->solveLinearAxis(timeStep, jacDiagABInv, body1, pointInA, body2, pointInB, limit_index, axis_normal_on_a, anchorPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTranslationalLimitMotor::m_limitSoftness()
	static int _bind_getM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_getM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTranslationalLimitMotor::m_limitSoftness() function, expected prototype:\nfloat btTranslationalLimitMotor::m_limitSoftness()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTranslationalLimitMotor::m_limitSoftness(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTranslationalLimitMotor::m_damping()
	static int _bind_getM_damping(lua_State *L) {
		if (!_lg_typecheck_getM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTranslationalLimitMotor::m_damping() function, expected prototype:\nfloat btTranslationalLimitMotor::m_damping()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTranslationalLimitMotor::m_damping(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTranslationalLimitMotor::m_restitution()
	static int _bind_getM_restitution(lua_State *L) {
		if (!_lg_typecheck_getM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTranslationalLimitMotor::m_restitution() function, expected prototype:\nfloat btTranslationalLimitMotor::m_restitution()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTranslationalLimitMotor::m_restitution(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		float lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_normalCFM()
	static int _bind_getM_normalCFM(lua_State *L) {
		if (!_lg_typecheck_getM_normalCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_normalCFM() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_normalCFM()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_normalCFM(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normalCFM;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_stopERP()
	static int _bind_getM_stopERP(lua_State *L) {
		if (!_lg_typecheck_getM_stopERP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_stopERP() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_stopERP()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_stopERP(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_stopERP;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_stopCFM()
	static int _bind_getM_stopCFM(lua_State *L) {
		if (!_lg_typecheck_getM_stopCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_stopCFM() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_stopCFM()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_stopCFM(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_stopCFM;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_lowerLimit()
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_lowerLimit() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_lowerLimit()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_lowerLimit(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_lowerLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_upperLimit()
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_upperLimit() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_upperLimit()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_upperLimit(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_upperLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_accumulatedImpulse()
	static int _bind_getM_accumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_accumulatedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_accumulatedImpulse() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_accumulatedImpulse()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_accumulatedImpulse(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_accumulatedImpulse;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_targetVelocity()
	static int _bind_getM_targetVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_targetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_targetVelocity() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_targetVelocity()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_targetVelocity(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_targetVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_maxMotorForce()
	static int _bind_getM_maxMotorForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_maxMotorForce() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_maxMotorForce()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_maxMotorForce(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_maxMotorForce;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_currentLimitError()
	static int _bind_getM_currentLimitError(lua_State *L) {
		if (!_lg_typecheck_getM_currentLimitError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_currentLimitError() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_currentLimitError()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_currentLimitError(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_currentLimitError;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTranslationalLimitMotor::m_currentLinearDiff()
	static int _bind_getM_currentLinearDiff(lua_State *L) {
		if (!_lg_typecheck_getM_currentLinearDiff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTranslationalLimitMotor::m_currentLinearDiff() function, expected prototype:\nbtVector3 btTranslationalLimitMotor::m_currentLinearDiff()\nClass arguments details:\n");
		}


		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTranslationalLimitMotor::m_currentLinearDiff(). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_currentLinearDiff;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btTranslationalLimitMotor::m_limitSoftness(float value)
	static int _bind_setM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_setM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_limitSoftness(float value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_limitSoftness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_limitSoftness(float). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_damping(float value)
	static int _bind_setM_damping(lua_State *L) {
		if (!_lg_typecheck_setM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_damping(float value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_damping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_damping(float). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_damping = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_restitution(float value)
	static int _bind_setM_restitution(lua_State *L) {
		if (!_lg_typecheck_setM_restitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_restitution(float value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_restitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_restitution(float). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_normalCFM(btVector3 value)
	static int _bind_setM_normalCFM(lua_State *L) {
		if (!_lg_typecheck_setM_normalCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_normalCFM(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_normalCFM(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_normalCFM function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_normalCFM(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_normalCFM = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_stopERP(btVector3 value)
	static int _bind_setM_stopERP(lua_State *L) {
		if (!_lg_typecheck_setM_stopERP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_stopERP(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_stopERP(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_stopERP function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_stopERP(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_stopERP = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_stopCFM(btVector3 value)
	static int _bind_setM_stopCFM(lua_State *L) {
		if (!_lg_typecheck_setM_stopCFM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_stopCFM(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_stopCFM(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_stopCFM function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_stopCFM(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_stopCFM = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_lowerLimit(btVector3 value)
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_lowerLimit(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_lowerLimit(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_lowerLimit function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_lowerLimit(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_upperLimit(btVector3 value)
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_upperLimit(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_upperLimit(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_upperLimit function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_upperLimit(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_accumulatedImpulse(btVector3 value)
	static int _bind_setM_accumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_accumulatedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_accumulatedImpulse(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_accumulatedImpulse(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_accumulatedImpulse function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_accumulatedImpulse(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_accumulatedImpulse = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_targetVelocity(btVector3 value)
	static int _bind_setM_targetVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_targetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_targetVelocity(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_targetVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_targetVelocity function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_targetVelocity(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_targetVelocity = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_maxMotorForce(btVector3 value)
	static int _bind_setM_maxMotorForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_maxMotorForce(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_maxMotorForce(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_maxMotorForce function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_maxMotorForce(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_maxMotorForce = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_currentLimitError(btVector3 value)
	static int _bind_setM_currentLimitError(lua_State *L) {
		if (!_lg_typecheck_setM_currentLimitError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_currentLimitError(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_currentLimitError(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_currentLimitError function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_currentLimitError(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_currentLimitError = value;

		return 0;
	}

	// void btTranslationalLimitMotor::m_currentLinearDiff(btVector3 value)
	static int _bind_setM_currentLinearDiff(lua_State *L) {
		if (!_lg_typecheck_setM_currentLinearDiff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTranslationalLimitMotor::m_currentLinearDiff(btVector3 value) function, expected prototype:\nvoid btTranslationalLimitMotor::m_currentLinearDiff(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTranslationalLimitMotor::m_currentLinearDiff function");
		}
		btVector3 value=*value_ptr;

		btTranslationalLimitMotor* self=(Luna< btTranslationalLimitMotor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTranslationalLimitMotor::m_currentLinearDiff(btVector3). Got : '%s'",typeid(Luna< btTranslationalLimitMotor >::check(L,1)).name());
		}
		self->m_currentLinearDiff = value;

		return 0;
	}


	// Operator binds:

};

btTranslationalLimitMotor* LunaTraits< btTranslationalLimitMotor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTranslationalLimitMotor::_bind_ctor(L);
}

void LunaTraits< btTranslationalLimitMotor >::_bind_dtor(btTranslationalLimitMotor* obj) {
	delete obj;
}

const char LunaTraits< btTranslationalLimitMotor >::className[] = "btTranslationalLimitMotor";
const char LunaTraits< btTranslationalLimitMotor >::fullName[] = "btTranslationalLimitMotor";
const char LunaTraits< btTranslationalLimitMotor >::moduleName[] = "bullet";
const char* LunaTraits< btTranslationalLimitMotor >::parents[] = {0};
const int LunaTraits< btTranslationalLimitMotor >::hash = 31464826;
const int LunaTraits< btTranslationalLimitMotor >::uniqueIDs[] = {31464826,0};

luna_RegType LunaTraits< btTranslationalLimitMotor >::methods[] = {
	{"isLimited", &luna_wrapper_btTranslationalLimitMotor::_bind_isLimited},
	{"needApplyForce", &luna_wrapper_btTranslationalLimitMotor::_bind_needApplyForce},
	{"testLimitValue", &luna_wrapper_btTranslationalLimitMotor::_bind_testLimitValue},
	{"solveLinearAxis", &luna_wrapper_btTranslationalLimitMotor::_bind_solveLinearAxis},
	{"getM_limitSoftness", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_limitSoftness},
	{"getM_damping", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_damping},
	{"getM_restitution", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_restitution},
	{"getM_normalCFM", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_normalCFM},
	{"getM_stopERP", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_stopERP},
	{"getM_stopCFM", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_stopCFM},
	{"getM_lowerLimit", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_upperLimit},
	{"getM_accumulatedImpulse", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_accumulatedImpulse},
	{"getM_targetVelocity", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_targetVelocity},
	{"getM_maxMotorForce", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_maxMotorForce},
	{"getM_currentLimitError", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_currentLimitError},
	{"getM_currentLinearDiff", &luna_wrapper_btTranslationalLimitMotor::_bind_getM_currentLinearDiff},
	{"setM_limitSoftness", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_limitSoftness},
	{"setM_damping", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_damping},
	{"setM_restitution", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_restitution},
	{"setM_normalCFM", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_normalCFM},
	{"setM_stopERP", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_stopERP},
	{"setM_stopCFM", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_stopCFM},
	{"setM_lowerLimit", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_upperLimit},
	{"setM_accumulatedImpulse", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_accumulatedImpulse},
	{"setM_targetVelocity", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_targetVelocity},
	{"setM_maxMotorForce", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_maxMotorForce},
	{"setM_currentLimitError", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_currentLimitError},
	{"setM_currentLinearDiff", &luna_wrapper_btTranslationalLimitMotor::_bind_setM_currentLinearDiff},
	{"dynCast", &luna_wrapper_btTranslationalLimitMotor::_bind_dynCast},
	{"__eq", &luna_wrapper_btTranslationalLimitMotor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTranslationalLimitMotor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTranslationalLimitMotor >::enumValues[] = {
	{0,0}
};

