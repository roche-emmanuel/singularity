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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRotationalLimitMotor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btRotationalLimitMotor* rhs =(Luna< btRotationalLimitMotor >::check(L,2));
		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
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

		btRotationalLimitMotor* self= (btRotationalLimitMotor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btRotationalLimitMotor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86737843) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btRotationalLimitMotor >::check(L,1));
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_solveAngularLimits(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,85758361)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHiLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLimitForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLimitSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalCFM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStopERP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStopCFM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBounce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentLimitError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccumulatedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHiLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxLimitForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLimitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStopERP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStopCFM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBounce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentLimitError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccumulatedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRotationalLimitMotor::btRotationalLimitMotor()
	static btRotationalLimitMotor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btRotationalLimitMotor::btRotationalLimitMotor() function, expected prototype:\nbtRotationalLimitMotor::btRotationalLimitMotor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btRotationalLimitMotor();
	}

	// btRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot)
	static btRotationalLimitMotor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot) function, expected prototype:\nbtRotationalLimitMotor::btRotationalLimitMotor(const btRotationalLimitMotor & limot)\nClass arguments details:\narg 1 ID = 86737843\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::isLimited() function, expected prototype:\nbool btRotationalLimitMotor::isLimited()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::isLimited(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLimited();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btRotationalLimitMotor::needApplyTorques()
	static int _bind_needApplyTorques(lua_State *L) {
		if (!_lg_typecheck_needApplyTorques(L)) {
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::needApplyTorques() function, expected prototype:\nbool btRotationalLimitMotor::needApplyTorques()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::needApplyTorques(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needApplyTorques();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btRotationalLimitMotor::testLimitValue(float test_value)
	static int _bind_testLimitValue(lua_State *L) {
		if (!_lg_typecheck_testLimitValue(L)) {
			luaL_error(L, "luna typecheck failed in int btRotationalLimitMotor::testLimitValue(float test_value) function, expected prototype:\nint btRotationalLimitMotor::testLimitValue(float test_value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float test_value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btRotationalLimitMotor::testLimitValue(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->testLimitValue(test_value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1)
	static int _bind_solveAngularLimits(lua_State *L) {
		if (!_lg_typecheck_solveAngularLimits(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1) function, expected prototype:\nfloat btRotationalLimitMotor::solveAngularLimits(float timeStep, btVector3 & axis, float jacDiagABInv, btRigidBody * body0, btRigidBody * body1)\nClass arguments details:\narg 2 ID = 91544891\narg 4 ID = 85758361\narg 5 ID = 85758361\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::solveAngularLimits(float, btVector3 &, float, btRigidBody *, btRigidBody *). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->solveAngularLimits(timeStep, axis, jacDiagABInv, body0, body1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_loLimit()
	static int _bind_getLoLimit(lua_State *L) {
		if (!_lg_typecheck_getLoLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_loLimit() function, expected prototype:\nfloat btRotationalLimitMotor::m_loLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_loLimit(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_loLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_hiLimit()
	static int _bind_getHiLimit(lua_State *L) {
		if (!_lg_typecheck_getHiLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_hiLimit() function, expected prototype:\nfloat btRotationalLimitMotor::m_hiLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_hiLimit(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_hiLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_targetVelocity()
	static int _bind_getTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_getTargetVelocity(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_targetVelocity() function, expected prototype:\nfloat btRotationalLimitMotor::m_targetVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_targetVelocity(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_targetVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_maxMotorForce()
	static int _bind_getMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_maxMotorForce() function, expected prototype:\nfloat btRotationalLimitMotor::m_maxMotorForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_maxMotorForce(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxMotorForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_maxLimitForce()
	static int _bind_getMaxLimitForce(lua_State *L) {
		if (!_lg_typecheck_getMaxLimitForce(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_maxLimitForce() function, expected prototype:\nfloat btRotationalLimitMotor::m_maxLimitForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_maxLimitForce(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxLimitForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_damping()
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_damping() function, expected prototype:\nfloat btRotationalLimitMotor::m_damping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_damping(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_limitSoftness()
	static int _bind_getLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_getLimitSoftness(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_limitSoftness() function, expected prototype:\nfloat btRotationalLimitMotor::m_limitSoftness()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_limitSoftness(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_normalCFM()
	static int _bind_getNormalCFM(lua_State *L) {
		if (!_lg_typecheck_getNormalCFM(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_normalCFM() function, expected prototype:\nfloat btRotationalLimitMotor::m_normalCFM()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_normalCFM(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_normalCFM;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_stopERP()
	static int _bind_getStopERP(lua_State *L) {
		if (!_lg_typecheck_getStopERP(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_stopERP() function, expected prototype:\nfloat btRotationalLimitMotor::m_stopERP()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_stopERP(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_stopERP;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_stopCFM()
	static int _bind_getStopCFM(lua_State *L) {
		if (!_lg_typecheck_getStopCFM(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_stopCFM() function, expected prototype:\nfloat btRotationalLimitMotor::m_stopCFM()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_stopCFM(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_stopCFM;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_bounce()
	static int _bind_getBounce(lua_State *L) {
		if (!_lg_typecheck_getBounce(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_bounce() function, expected prototype:\nfloat btRotationalLimitMotor::m_bounce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_bounce(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_bounce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btRotationalLimitMotor::m_enableMotor()
	static int _bind_getEnableMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in bool btRotationalLimitMotor::m_enableMotor() function, expected prototype:\nbool btRotationalLimitMotor::m_enableMotor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btRotationalLimitMotor::m_enableMotor(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_enableMotor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btRotationalLimitMotor::m_currentLimitError()
	static int _bind_getCurrentLimitError(lua_State *L) {
		if (!_lg_typecheck_getCurrentLimitError(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_currentLimitError() function, expected prototype:\nfloat btRotationalLimitMotor::m_currentLimitError()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_currentLimitError(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_currentLimitError;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_currentPosition()
	static int _bind_getCurrentPosition(lua_State *L) {
		if (!_lg_typecheck_getCurrentPosition(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_currentPosition() function, expected prototype:\nfloat btRotationalLimitMotor::m_currentPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_currentPosition(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_currentPosition;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRotationalLimitMotor::m_currentLimit()
	static int _bind_getCurrentLimit(lua_State *L) {
		if (!_lg_typecheck_getCurrentLimit(L)) {
			luaL_error(L, "luna typecheck failed in int btRotationalLimitMotor::m_currentLimit() function, expected prototype:\nint btRotationalLimitMotor::m_currentLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btRotationalLimitMotor::m_currentLimit(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_currentLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRotationalLimitMotor::m_accumulatedImpulse()
	static int _bind_getAccumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAccumulatedImpulse(L)) {
			luaL_error(L, "luna typecheck failed in float btRotationalLimitMotor::m_accumulatedImpulse() function, expected prototype:\nfloat btRotationalLimitMotor::m_accumulatedImpulse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btRotationalLimitMotor::m_accumulatedImpulse(). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_accumulatedImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRotationalLimitMotor::m_loLimit(float value)
	static int _bind_setLoLimit(lua_State *L) {
		if (!_lg_typecheck_setLoLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_loLimit(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_loLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_loLimit(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_loLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_hiLimit(float value)
	static int _bind_setHiLimit(lua_State *L) {
		if (!_lg_typecheck_setHiLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_hiLimit(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_hiLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_hiLimit(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_hiLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_targetVelocity(float value)
	static int _bind_setTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_setTargetVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_targetVelocity(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_targetVelocity(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_targetVelocity(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_targetVelocity = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_maxMotorForce(float value)
	static int _bind_setMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_maxMotorForce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_maxMotorForce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_maxMotorForce(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxMotorForce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_maxLimitForce(float value)
	static int _bind_setMaxLimitForce(lua_State *L) {
		if (!_lg_typecheck_setMaxLimitForce(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_maxLimitForce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_maxLimitForce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_maxLimitForce(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxLimitForce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_damping(float value)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_damping(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_damping(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_damping(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_damping = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_limitSoftness(float value)
	static int _bind_setLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_setLimitSoftness(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_limitSoftness(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_limitSoftness(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_limitSoftness(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_normalCFM(float value)
	static int _bind_setNormalCFM(lua_State *L) {
		if (!_lg_typecheck_setNormalCFM(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_normalCFM(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_normalCFM(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_normalCFM(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_normalCFM = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_stopERP(float value)
	static int _bind_setStopERP(lua_State *L) {
		if (!_lg_typecheck_setStopERP(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_stopERP(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_stopERP(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_stopERP(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_stopERP = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_stopCFM(float value)
	static int _bind_setStopCFM(lua_State *L) {
		if (!_lg_typecheck_setStopCFM(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_stopCFM(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_stopCFM(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_stopCFM(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_stopCFM = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_bounce(float value)
	static int _bind_setBounce(lua_State *L) {
		if (!_lg_typecheck_setBounce(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_bounce(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_bounce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_bounce(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bounce = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_enableMotor(bool value)
	static int _bind_setEnableMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_enableMotor(bool value) function, expected prototype:\nvoid btRotationalLimitMotor::m_enableMotor(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_enableMotor(bool). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_enableMotor = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentLimitError(float value)
	static int _bind_setCurrentLimitError(lua_State *L) {
		if (!_lg_typecheck_setCurrentLimitError(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentLimitError(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentLimitError(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentLimitError(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_currentLimitError = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentPosition(float value)
	static int _bind_setCurrentPosition(lua_State *L) {
		if (!_lg_typecheck_setCurrentPosition(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentPosition(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentPosition(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentPosition(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_currentPosition = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_currentLimit(int value)
	static int _bind_setCurrentLimit(lua_State *L) {
		if (!_lg_typecheck_setCurrentLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_currentLimit(int value) function, expected prototype:\nvoid btRotationalLimitMotor::m_currentLimit(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_currentLimit(int). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_currentLimit = value;

		return 0;
	}

	// void btRotationalLimitMotor::m_accumulatedImpulse(float value)
	static int _bind_setAccumulatedImpulse(lua_State *L) {
		if (!_lg_typecheck_setAccumulatedImpulse(L)) {
			luaL_error(L, "luna typecheck failed in void btRotationalLimitMotor::m_accumulatedImpulse(float value) function, expected prototype:\nvoid btRotationalLimitMotor::m_accumulatedImpulse(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btRotationalLimitMotor* self=(Luna< btRotationalLimitMotor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btRotationalLimitMotor::m_accumulatedImpulse(float). Got : '%s'\n%s",typeid(Luna< btRotationalLimitMotor >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getLoLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getLoLimit},
	{"getHiLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getHiLimit},
	{"getTargetVelocity", &luna_wrapper_btRotationalLimitMotor::_bind_getTargetVelocity},
	{"getMaxMotorForce", &luna_wrapper_btRotationalLimitMotor::_bind_getMaxMotorForce},
	{"getMaxLimitForce", &luna_wrapper_btRotationalLimitMotor::_bind_getMaxLimitForce},
	{"getDamping", &luna_wrapper_btRotationalLimitMotor::_bind_getDamping},
	{"getLimitSoftness", &luna_wrapper_btRotationalLimitMotor::_bind_getLimitSoftness},
	{"getNormalCFM", &luna_wrapper_btRotationalLimitMotor::_bind_getNormalCFM},
	{"getStopERP", &luna_wrapper_btRotationalLimitMotor::_bind_getStopERP},
	{"getStopCFM", &luna_wrapper_btRotationalLimitMotor::_bind_getStopCFM},
	{"getBounce", &luna_wrapper_btRotationalLimitMotor::_bind_getBounce},
	{"getEnableMotor", &luna_wrapper_btRotationalLimitMotor::_bind_getEnableMotor},
	{"getCurrentLimitError", &luna_wrapper_btRotationalLimitMotor::_bind_getCurrentLimitError},
	{"getCurrentPosition", &luna_wrapper_btRotationalLimitMotor::_bind_getCurrentPosition},
	{"getCurrentLimit", &luna_wrapper_btRotationalLimitMotor::_bind_getCurrentLimit},
	{"getAccumulatedImpulse", &luna_wrapper_btRotationalLimitMotor::_bind_getAccumulatedImpulse},
	{"setLoLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setLoLimit},
	{"setHiLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setHiLimit},
	{"setTargetVelocity", &luna_wrapper_btRotationalLimitMotor::_bind_setTargetVelocity},
	{"setMaxMotorForce", &luna_wrapper_btRotationalLimitMotor::_bind_setMaxMotorForce},
	{"setMaxLimitForce", &luna_wrapper_btRotationalLimitMotor::_bind_setMaxLimitForce},
	{"setDamping", &luna_wrapper_btRotationalLimitMotor::_bind_setDamping},
	{"setLimitSoftness", &luna_wrapper_btRotationalLimitMotor::_bind_setLimitSoftness},
	{"setNormalCFM", &luna_wrapper_btRotationalLimitMotor::_bind_setNormalCFM},
	{"setStopERP", &luna_wrapper_btRotationalLimitMotor::_bind_setStopERP},
	{"setStopCFM", &luna_wrapper_btRotationalLimitMotor::_bind_setStopCFM},
	{"setBounce", &luna_wrapper_btRotationalLimitMotor::_bind_setBounce},
	{"setEnableMotor", &luna_wrapper_btRotationalLimitMotor::_bind_setEnableMotor},
	{"setCurrentLimitError", &luna_wrapper_btRotationalLimitMotor::_bind_setCurrentLimitError},
	{"setCurrentPosition", &luna_wrapper_btRotationalLimitMotor::_bind_setCurrentPosition},
	{"setCurrentLimit", &luna_wrapper_btRotationalLimitMotor::_bind_setCurrentLimit},
	{"setAccumulatedImpulse", &luna_wrapper_btRotationalLimitMotor::_bind_setAccumulatedImpulse},
	{"dynCast", &luna_wrapper_btRotationalLimitMotor::_bind_dynCast},
	{"__eq", &luna_wrapper_btRotationalLimitMotor::_bind___eq},
	{"fromVoid", &luna_wrapper_btRotationalLimitMotor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btRotationalLimitMotor::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btRotationalLimitMotor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRotationalLimitMotor >::enumValues[] = {
	{0,0}
};


