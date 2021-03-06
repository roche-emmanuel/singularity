#include <plug_common.h>

class luna_wrapper_btHingeConstraintFloatData {
public:
	typedef Luna< btHingeConstraintFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29781387) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHingeConstraintFloatData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btHingeConstraintFloatData* rhs =(Luna< btHingeConstraintFloatData >::check(L,2));
		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
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

		btHingeConstraintFloatData* self= (btHingeConstraintFloatData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHingeConstraintFloatData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29781387) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btHingeConstraintFloatData >::check(L,1));
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

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHingeConstraintFloatData");
		
		return luna_dynamicCast(L,converters,"btHingeConstraintFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getTypeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRbAFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRbBFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotorTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorImpulse(lua_State *L) {
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

	inline static bool _lg_typecheck_getLimitSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBiasFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRelaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTypeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98838043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRbAFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRbBFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLimitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBiasFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRelaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData()
	static int _bind_getTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getTypeConstraintData(L)) {
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btHingeConstraintFloatData::m_rbAFrame()
	static int _bind_getRbAFrame(lua_State *L) {
		if (!_lg_typecheck_getRbAFrame(L)) {
			luaL_error(L, "luna typecheck failed in btTransformFloatData btHingeConstraintFloatData::m_rbAFrame() function, expected prototype:\nbtTransformFloatData btHingeConstraintFloatData::m_rbAFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btTransformFloatData btHingeConstraintFloatData::m_rbAFrame(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btTransformFloatData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btHingeConstraintFloatData::m_rbBFrame()
	static int _bind_getRbBFrame(lua_State *L) {
		if (!_lg_typecheck_getRbBFrame(L)) {
			luaL_error(L, "luna typecheck failed in btTransformFloatData btHingeConstraintFloatData::m_rbBFrame() function, expected prototype:\nbtTransformFloatData btHingeConstraintFloatData::m_rbBFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btTransformFloatData btHingeConstraintFloatData::m_rbBFrame(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btTransformFloatData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// int btHingeConstraintFloatData::m_useReferenceFrameA()
	static int _bind_getUseReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getUseReferenceFrameA(L)) {
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_useReferenceFrameA() function, expected prototype:\nint btHingeConstraintFloatData::m_useReferenceFrameA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_useReferenceFrameA(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_useReferenceFrameA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintFloatData::m_angularOnly()
	static int _bind_getAngularOnly(lua_State *L) {
		if (!_lg_typecheck_getAngularOnly(L)) {
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_angularOnly() function, expected prototype:\nint btHingeConstraintFloatData::m_angularOnly()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_angularOnly(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_angularOnly;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintFloatData::m_enableAngularMotor()
	static int _bind_getEnableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableAngularMotor(L)) {
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_enableAngularMotor() function, expected prototype:\nint btHingeConstraintFloatData::m_enableAngularMotor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_enableAngularMotor(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_enableAngularMotor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_motorTargetVelocity()
	static int _bind_getMotorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_getMotorTargetVelocity(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_motorTargetVelocity() function, expected prototype:\nfloat btHingeConstraintFloatData::m_motorTargetVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_motorTargetVelocity(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_motorTargetVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_maxMotorImpulse()
	static int _bind_getMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorImpulse(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_maxMotorImpulse() function, expected prototype:\nfloat btHingeConstraintFloatData::m_maxMotorImpulse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_maxMotorImpulse(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_maxMotorImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_lowerLimit()
	static int _bind_getLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_lowerLimit() function, expected prototype:\nfloat btHingeConstraintFloatData::m_lowerLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_lowerLimit(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_upperLimit()
	static int _bind_getUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_upperLimit() function, expected prototype:\nfloat btHingeConstraintFloatData::m_upperLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_upperLimit(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_limitSoftness()
	static int _bind_getLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_getLimitSoftness(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_limitSoftness() function, expected prototype:\nfloat btHingeConstraintFloatData::m_limitSoftness()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_limitSoftness(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_biasFactor()
	static int _bind_getBiasFactor(lua_State *L) {
		if (!_lg_typecheck_getBiasFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_biasFactor() function, expected prototype:\nfloat btHingeConstraintFloatData::m_biasFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_biasFactor(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_biasFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_relaxationFactor()
	static int _bind_getRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getRelaxationFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_relaxationFactor() function, expected prototype:\nfloat btHingeConstraintFloatData::m_relaxationFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_relaxationFactor(). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_relaxationFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setTypeConstraintData(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value)
	static int _bind_setRbAFrame(lua_State *L) {
		if (!_lg_typecheck_setRbAFrame(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n\n%s",luna_dumpStack(L).c_str());
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_rbAFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value)
	static int _bind_setRbBFrame(lua_State *L) {
		if (!_lg_typecheck_setRbBFrame(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n\n%s",luna_dumpStack(L).c_str());
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_rbBFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_useReferenceFrameA(int value)
	static int _bind_setUseReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setUseReferenceFrameA(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_useReferenceFrameA(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_useReferenceFrameA(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_useReferenceFrameA(int). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_useReferenceFrameA = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_angularOnly(int value)
	static int _bind_setAngularOnly(lua_State *L) {
		if (!_lg_typecheck_setAngularOnly(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_angularOnly(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_angularOnly(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_angularOnly(int). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_angularOnly = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_enableAngularMotor(int value)
	static int _bind_setEnableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableAngularMotor(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_enableAngularMotor(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_enableAngularMotor(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_enableAngularMotor(int). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_enableAngularMotor = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_motorTargetVelocity(float value)
	static int _bind_setMotorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_setMotorTargetVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_motorTargetVelocity(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_motorTargetVelocity(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_motorTargetVelocity(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_motorTargetVelocity = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_maxMotorImpulse(float value)
	static int _bind_setMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorImpulse(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_maxMotorImpulse(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_maxMotorImpulse(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_maxMotorImpulse(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_maxMotorImpulse = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_lowerLimit(float value)
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_lowerLimit(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_lowerLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_lowerLimit(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_upperLimit(float value)
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_upperLimit(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_upperLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_upperLimit(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_limitSoftness(float value)
	static int _bind_setLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_setLimitSoftness(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_limitSoftness(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_limitSoftness(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_limitSoftness(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_biasFactor(float value)
	static int _bind_setBiasFactor(lua_State *L) {
		if (!_lg_typecheck_setBiasFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_biasFactor(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_biasFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_biasFactor(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_biasFactor = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_relaxationFactor(float value)
	static int _bind_setRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_setRelaxationFactor(L)) {
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_relaxationFactor(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_relaxationFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_relaxationFactor(float). Got : '%s'\n%s",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_relaxationFactor = value;

		return 0;
	}


	// Operator binds:

};

btHingeConstraintFloatData* LunaTraits< btHingeConstraintFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btHingeConstraintFloatData >::_bind_dtor(btHingeConstraintFloatData* obj) {
	delete obj;
}

const char LunaTraits< btHingeConstraintFloatData >::className[] = "btHingeConstraintFloatData";
const char LunaTraits< btHingeConstraintFloatData >::fullName[] = "btHingeConstraintFloatData";
const char LunaTraits< btHingeConstraintFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btHingeConstraintFloatData >::parents[] = {0};
const int LunaTraits< btHingeConstraintFloatData >::hash = 29781387;
const int LunaTraits< btHingeConstraintFloatData >::uniqueIDs[] = {29781387,0};

luna_RegType LunaTraits< btHingeConstraintFloatData >::methods[] = {
	{"getTypeConstraintData", &luna_wrapper_btHingeConstraintFloatData::_bind_getTypeConstraintData},
	{"getRbAFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_getRbAFrame},
	{"getRbBFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_getRbBFrame},
	{"getUseReferenceFrameA", &luna_wrapper_btHingeConstraintFloatData::_bind_getUseReferenceFrameA},
	{"getAngularOnly", &luna_wrapper_btHingeConstraintFloatData::_bind_getAngularOnly},
	{"getEnableAngularMotor", &luna_wrapper_btHingeConstraintFloatData::_bind_getEnableAngularMotor},
	{"getMotorTargetVelocity", &luna_wrapper_btHingeConstraintFloatData::_bind_getMotorTargetVelocity},
	{"getMaxMotorImpulse", &luna_wrapper_btHingeConstraintFloatData::_bind_getMaxMotorImpulse},
	{"getLowerLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_getLowerLimit},
	{"getUpperLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_getUpperLimit},
	{"getLimitSoftness", &luna_wrapper_btHingeConstraintFloatData::_bind_getLimitSoftness},
	{"getBiasFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_getBiasFactor},
	{"getRelaxationFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_getRelaxationFactor},
	{"setTypeConstraintData", &luna_wrapper_btHingeConstraintFloatData::_bind_setTypeConstraintData},
	{"setRbAFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_setRbAFrame},
	{"setRbBFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_setRbBFrame},
	{"setUseReferenceFrameA", &luna_wrapper_btHingeConstraintFloatData::_bind_setUseReferenceFrameA},
	{"setAngularOnly", &luna_wrapper_btHingeConstraintFloatData::_bind_setAngularOnly},
	{"setEnableAngularMotor", &luna_wrapper_btHingeConstraintFloatData::_bind_setEnableAngularMotor},
	{"setMotorTargetVelocity", &luna_wrapper_btHingeConstraintFloatData::_bind_setMotorTargetVelocity},
	{"setMaxMotorImpulse", &luna_wrapper_btHingeConstraintFloatData::_bind_setMaxMotorImpulse},
	{"setLowerLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_setLowerLimit},
	{"setUpperLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_setUpperLimit},
	{"setLimitSoftness", &luna_wrapper_btHingeConstraintFloatData::_bind_setLimitSoftness},
	{"setBiasFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_setBiasFactor},
	{"setRelaxationFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_setRelaxationFactor},
	{"dynCast", &luna_wrapper_btHingeConstraintFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btHingeConstraintFloatData::_bind___eq},
	{"fromVoid", &luna_wrapper_btHingeConstraintFloatData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHingeConstraintFloatData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btHingeConstraintFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHingeConstraintFloatData >::enumValues[] = {
	{0,0}
};


