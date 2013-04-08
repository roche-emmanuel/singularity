#include <plug_common.h>

class luna_wrapper_btHingeConstraintDoubleData {
public:
	typedef Luna< btHingeConstraintDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26872192) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHingeConstraintDoubleData*)");
		}

		btHingeConstraintDoubleData* rhs =(Luna< btHingeConstraintDoubleData >::check(L,2));
		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
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

		btHingeConstraintDoubleData* self= (btHingeConstraintDoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHingeConstraintDoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26872192) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btHingeConstraintDoubleData >::check(L,1));
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

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHingeConstraintDoubleData");
		
		return luna_dynamicCast(L,converters,"btHingeConstraintDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRbBFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorImpulse(lua_State *L) {
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

	inline static bool _lg_typecheck_setLimitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBiasFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRelaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btHingeConstraintDoubleData::m_typeConstraintData()
	static int _bind_getTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btHingeConstraintDoubleData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btHingeConstraintDoubleData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btHingeConstraintDoubleData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformDoubleData btHingeConstraintDoubleData::m_rbAFrame()
	static int _bind_getRbAFrame(lua_State *L) {
		if (!_lg_typecheck_getRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformDoubleData btHingeConstraintDoubleData::m_rbAFrame() function, expected prototype:\nbtTransformDoubleData btHingeConstraintDoubleData::m_rbAFrame()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformDoubleData btHingeConstraintDoubleData::m_rbAFrame(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		const btTransformDoubleData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformDoubleData >::push(L,lret,false);

		return 1;
	}

	// btTransformDoubleData btHingeConstraintDoubleData::m_rbBFrame()
	static int _bind_getRbBFrame(lua_State *L) {
		if (!_lg_typecheck_getRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformDoubleData btHingeConstraintDoubleData::m_rbBFrame() function, expected prototype:\nbtTransformDoubleData btHingeConstraintDoubleData::m_rbBFrame()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformDoubleData btHingeConstraintDoubleData::m_rbBFrame(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		const btTransformDoubleData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformDoubleData >::push(L,lret,false);

		return 1;
	}

	// int btHingeConstraintDoubleData::m_useReferenceFrameA()
	static int _bind_getUseReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getUseReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintDoubleData::m_useReferenceFrameA() function, expected prototype:\nint btHingeConstraintDoubleData::m_useReferenceFrameA()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintDoubleData::m_useReferenceFrameA(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		int lret = self->m_useReferenceFrameA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintDoubleData::m_angularOnly()
	static int _bind_getAngularOnly(lua_State *L) {
		if (!_lg_typecheck_getAngularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintDoubleData::m_angularOnly() function, expected prototype:\nint btHingeConstraintDoubleData::m_angularOnly()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintDoubleData::m_angularOnly(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		int lret = self->m_angularOnly;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintDoubleData::m_enableAngularMotor()
	static int _bind_getEnableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintDoubleData::m_enableAngularMotor() function, expected prototype:\nint btHingeConstraintDoubleData::m_enableAngularMotor()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintDoubleData::m_enableAngularMotor(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		int lret = self->m_enableAngularMotor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_motorTargetVelocity()
	static int _bind_getMotorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_getMotorTargetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_motorTargetVelocity() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_motorTargetVelocity()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_motorTargetVelocity(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_motorTargetVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_maxMotorImpulse()
	static int _bind_getMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_maxMotorImpulse() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_maxMotorImpulse()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_maxMotorImpulse(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_maxMotorImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_lowerLimit()
	static int _bind_getLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_lowerLimit() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_lowerLimit()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_lowerLimit(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_upperLimit()
	static int _bind_getUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_upperLimit() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_upperLimit()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_upperLimit(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_limitSoftness()
	static int _bind_getLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_getLimitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_limitSoftness() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_limitSoftness()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_limitSoftness(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_biasFactor()
	static int _bind_getBiasFactor(lua_State *L) {
		if (!_lg_typecheck_getBiasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_biasFactor() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_biasFactor()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_biasFactor(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_biasFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintDoubleData::m_relaxationFactor()
	static int _bind_getRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getRelaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintDoubleData::m_relaxationFactor() function, expected prototype:\nfloat btHingeConstraintDoubleData::m_relaxationFactor()\nClass arguments details:\n");
		}


		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintDoubleData::m_relaxationFactor(). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		float lret = self->m_relaxationFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHingeConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintDoubleData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_rbAFrame(btTransformDoubleData value)
	static int _bind_setRbAFrame(lua_State *L) {
		if (!_lg_typecheck_setRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_rbAFrame(btTransformDoubleData value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_rbAFrame(btTransformDoubleData value)\nClass arguments details:\narg 1 ID = 10173309\n");
		}

		btTransformDoubleData* value_ptr=(Luna< btTransformDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintDoubleData::m_rbAFrame function");
		}
		btTransformDoubleData value=*value_ptr;

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_rbAFrame(btTransformDoubleData). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_rbBFrame(btTransformDoubleData value)
	static int _bind_setRbBFrame(lua_State *L) {
		if (!_lg_typecheck_setRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_rbBFrame(btTransformDoubleData value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_rbBFrame(btTransformDoubleData value)\nClass arguments details:\narg 1 ID = 10173309\n");
		}

		btTransformDoubleData* value_ptr=(Luna< btTransformDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintDoubleData::m_rbBFrame function");
		}
		btTransformDoubleData value=*value_ptr;

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_rbBFrame(btTransformDoubleData). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_useReferenceFrameA(int value)
	static int _bind_setUseReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setUseReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_useReferenceFrameA(int value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_useReferenceFrameA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_useReferenceFrameA(int). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_useReferenceFrameA = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_angularOnly(int value)
	static int _bind_setAngularOnly(lua_State *L) {
		if (!_lg_typecheck_setAngularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_angularOnly(int value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_angularOnly(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_angularOnly(int). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_angularOnly = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_enableAngularMotor(int value)
	static int _bind_setEnableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_enableAngularMotor(int value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_enableAngularMotor(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_enableAngularMotor(int). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_enableAngularMotor = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_motorTargetVelocity(float value)
	static int _bind_setMotorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_setMotorTargetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_motorTargetVelocity(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_motorTargetVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_motorTargetVelocity(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_motorTargetVelocity = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_maxMotorImpulse(float value)
	static int _bind_setMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_maxMotorImpulse(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_maxMotorImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_maxMotorImpulse(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_maxMotorImpulse = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_lowerLimit(float value)
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_lowerLimit(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_lowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_lowerLimit(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_upperLimit(float value)
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_upperLimit(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_upperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_upperLimit(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_limitSoftness(float value)
	static int _bind_setLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_setLimitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_limitSoftness(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_limitSoftness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_limitSoftness(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_biasFactor(float value)
	static int _bind_setBiasFactor(lua_State *L) {
		if (!_lg_typecheck_setBiasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_biasFactor(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_biasFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_biasFactor(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_biasFactor = value;

		return 0;
	}

	// void btHingeConstraintDoubleData::m_relaxationFactor(float value)
	static int _bind_setRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_setRelaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintDoubleData::m_relaxationFactor(float value) function, expected prototype:\nvoid btHingeConstraintDoubleData::m_relaxationFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintDoubleData::m_relaxationFactor(float). Got : '%s'",typeid(Luna< btHingeConstraintDoubleData >::check(L,1)).name());
		}
		self->m_relaxationFactor = value;

		return 0;
	}


	// Operator binds:

};

btHingeConstraintDoubleData* LunaTraits< btHingeConstraintDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btHingeConstraintDoubleData >::_bind_dtor(btHingeConstraintDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btHingeConstraintDoubleData >::className[] = "btHingeConstraintDoubleData";
const char LunaTraits< btHingeConstraintDoubleData >::fullName[] = "btHingeConstraintDoubleData";
const char LunaTraits< btHingeConstraintDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btHingeConstraintDoubleData >::parents[] = {0};
const int LunaTraits< btHingeConstraintDoubleData >::hash = 26872192;
const int LunaTraits< btHingeConstraintDoubleData >::uniqueIDs[] = {26872192,0};

luna_RegType LunaTraits< btHingeConstraintDoubleData >::methods[] = {
	{"getTypeConstraintData", &luna_wrapper_btHingeConstraintDoubleData::_bind_getTypeConstraintData},
	{"getRbAFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_getRbAFrame},
	{"getRbBFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_getRbBFrame},
	{"getUseReferenceFrameA", &luna_wrapper_btHingeConstraintDoubleData::_bind_getUseReferenceFrameA},
	{"getAngularOnly", &luna_wrapper_btHingeConstraintDoubleData::_bind_getAngularOnly},
	{"getEnableAngularMotor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getEnableAngularMotor},
	{"getMotorTargetVelocity", &luna_wrapper_btHingeConstraintDoubleData::_bind_getMotorTargetVelocity},
	{"getMaxMotorImpulse", &luna_wrapper_btHingeConstraintDoubleData::_bind_getMaxMotorImpulse},
	{"getLowerLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_getLowerLimit},
	{"getUpperLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_getUpperLimit},
	{"getLimitSoftness", &luna_wrapper_btHingeConstraintDoubleData::_bind_getLimitSoftness},
	{"getBiasFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getBiasFactor},
	{"getRelaxationFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getRelaxationFactor},
	{"setTypeConstraintData", &luna_wrapper_btHingeConstraintDoubleData::_bind_setTypeConstraintData},
	{"setRbAFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_setRbAFrame},
	{"setRbBFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_setRbBFrame},
	{"setUseReferenceFrameA", &luna_wrapper_btHingeConstraintDoubleData::_bind_setUseReferenceFrameA},
	{"setAngularOnly", &luna_wrapper_btHingeConstraintDoubleData::_bind_setAngularOnly},
	{"setEnableAngularMotor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setEnableAngularMotor},
	{"setMotorTargetVelocity", &luna_wrapper_btHingeConstraintDoubleData::_bind_setMotorTargetVelocity},
	{"setMaxMotorImpulse", &luna_wrapper_btHingeConstraintDoubleData::_bind_setMaxMotorImpulse},
	{"setLowerLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_setLowerLimit},
	{"setUpperLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_setUpperLimit},
	{"setLimitSoftness", &luna_wrapper_btHingeConstraintDoubleData::_bind_setLimitSoftness},
	{"setBiasFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setBiasFactor},
	{"setRelaxationFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setRelaxationFactor},
	{"dynCast", &luna_wrapper_btHingeConstraintDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btHingeConstraintDoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btHingeConstraintDoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHingeConstraintDoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btHingeConstraintDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHingeConstraintDoubleData >::enumValues[] = {
	{0,0}
};


