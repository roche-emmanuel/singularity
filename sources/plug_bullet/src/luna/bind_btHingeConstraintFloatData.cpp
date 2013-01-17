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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHingeConstraintFloatData*)");
		}

		btHingeConstraintFloatData* rhs =(Luna< btHingeConstraintFloatData >::check(L,2));
		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
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

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHingeConstraintFloatData");
		
		return luna_dynamicCast(L,converters,"btHingeConstraintFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rbAFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rbBFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_enableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_motorTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxMotorImpulse(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_biasFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_relaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98838043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbAFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbBFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_enableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_motorTargetVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxMotorImpulse(lua_State *L) {
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

	inline static bool _lg_typecheck_setM_limitSoftness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_biasFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_relaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData()
	static int _bind_getM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btHingeConstraintFloatData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btHingeConstraintFloatData::m_rbAFrame()
	static int _bind_getM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btHingeConstraintFloatData::m_rbAFrame() function, expected prototype:\nbtTransformFloatData btHingeConstraintFloatData::m_rbAFrame()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btHingeConstraintFloatData::m_rbAFrame(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btHingeConstraintFloatData::m_rbBFrame()
	static int _bind_getM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btHingeConstraintFloatData::m_rbBFrame() function, expected prototype:\nbtTransformFloatData btHingeConstraintFloatData::m_rbBFrame()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btHingeConstraintFloatData::m_rbBFrame(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// int btHingeConstraintFloatData::m_useReferenceFrameA()
	static int _bind_getM_useReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getM_useReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_useReferenceFrameA() function, expected prototype:\nint btHingeConstraintFloatData::m_useReferenceFrameA()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_useReferenceFrameA(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		int lret = self->m_useReferenceFrameA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintFloatData::m_angularOnly()
	static int _bind_getM_angularOnly(lua_State *L) {
		if (!_lg_typecheck_getM_angularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_angularOnly() function, expected prototype:\nint btHingeConstraintFloatData::m_angularOnly()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_angularOnly(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		int lret = self->m_angularOnly;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraintFloatData::m_enableAngularMotor()
	static int _bind_getM_enableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_getM_enableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraintFloatData::m_enableAngularMotor() function, expected prototype:\nint btHingeConstraintFloatData::m_enableAngularMotor()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraintFloatData::m_enableAngularMotor(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		int lret = self->m_enableAngularMotor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_motorTargetVelocity()
	static int _bind_getM_motorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_motorTargetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_motorTargetVelocity() function, expected prototype:\nfloat btHingeConstraintFloatData::m_motorTargetVelocity()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_motorTargetVelocity(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_motorTargetVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_maxMotorImpulse()
	static int _bind_getM_maxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_maxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_maxMotorImpulse() function, expected prototype:\nfloat btHingeConstraintFloatData::m_maxMotorImpulse()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_maxMotorImpulse(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_maxMotorImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_lowerLimit()
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_lowerLimit() function, expected prototype:\nfloat btHingeConstraintFloatData::m_lowerLimit()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_lowerLimit(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_upperLimit()
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_upperLimit() function, expected prototype:\nfloat btHingeConstraintFloatData::m_upperLimit()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_upperLimit(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_limitSoftness()
	static int _bind_getM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_getM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_limitSoftness() function, expected prototype:\nfloat btHingeConstraintFloatData::m_limitSoftness()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_limitSoftness(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_biasFactor()
	static int _bind_getM_biasFactor(lua_State *L) {
		if (!_lg_typecheck_getM_biasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_biasFactor() function, expected prototype:\nfloat btHingeConstraintFloatData::m_biasFactor()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_biasFactor(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_biasFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraintFloatData::m_relaxationFactor()
	static int _bind_getM_relaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getM_relaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraintFloatData::m_relaxationFactor() function, expected prototype:\nfloat btHingeConstraintFloatData::m_relaxationFactor()\nClass arguments details:\n");
		}


		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraintFloatData::m_relaxationFactor(). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		float lret = self->m_relaxationFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value)
	static int _bind_setM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_rbAFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_rbAFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value)
	static int _bind_setM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btHingeConstraintFloatData::m_rbBFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_rbBFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_useReferenceFrameA(int value)
	static int _bind_setM_useReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setM_useReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_useReferenceFrameA(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_useReferenceFrameA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_useReferenceFrameA(int). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_useReferenceFrameA = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_angularOnly(int value)
	static int _bind_setM_angularOnly(lua_State *L) {
		if (!_lg_typecheck_setM_angularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_angularOnly(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_angularOnly(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_angularOnly(int). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_angularOnly = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_enableAngularMotor(int value)
	static int _bind_setM_enableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_setM_enableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_enableAngularMotor(int value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_enableAngularMotor(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_enableAngularMotor(int). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_enableAngularMotor = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_motorTargetVelocity(float value)
	static int _bind_setM_motorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_motorTargetVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_motorTargetVelocity(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_motorTargetVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_motorTargetVelocity(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_motorTargetVelocity = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_maxMotorImpulse(float value)
	static int _bind_setM_maxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_maxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_maxMotorImpulse(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_maxMotorImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_maxMotorImpulse(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_maxMotorImpulse = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_lowerLimit(float value)
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_lowerLimit(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_lowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_lowerLimit(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_upperLimit(float value)
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_upperLimit(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_upperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_upperLimit(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_limitSoftness(float value)
	static int _bind_setM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_setM_limitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_limitSoftness(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_limitSoftness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_limitSoftness(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_biasFactor(float value)
	static int _bind_setM_biasFactor(lua_State *L) {
		if (!_lg_typecheck_setM_biasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_biasFactor(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_biasFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_biasFactor(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
		}
		self->m_biasFactor = value;

		return 0;
	}

	// void btHingeConstraintFloatData::m_relaxationFactor(float value)
	static int _bind_setM_relaxationFactor(lua_State *L) {
		if (!_lg_typecheck_setM_relaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraintFloatData::m_relaxationFactor(float value) function, expected prototype:\nvoid btHingeConstraintFloatData::m_relaxationFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btHingeConstraintFloatData* self=(Luna< btHingeConstraintFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraintFloatData::m_relaxationFactor(float). Got : '%s'",typeid(Luna< btHingeConstraintFloatData >::check(L,1)).name());
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
	{"getM_typeConstraintData", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_typeConstraintData},
	{"getM_rbAFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_rbAFrame},
	{"getM_rbBFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_rbBFrame},
	{"getM_useReferenceFrameA", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_useReferenceFrameA},
	{"getM_angularOnly", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_angularOnly},
	{"getM_enableAngularMotor", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_enableAngularMotor},
	{"getM_motorTargetVelocity", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_motorTargetVelocity},
	{"getM_maxMotorImpulse", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_maxMotorImpulse},
	{"getM_lowerLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_upperLimit},
	{"getM_limitSoftness", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_limitSoftness},
	{"getM_biasFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_biasFactor},
	{"getM_relaxationFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_getM_relaxationFactor},
	{"setM_typeConstraintData", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_typeConstraintData},
	{"setM_rbAFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_rbAFrame},
	{"setM_rbBFrame", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_rbBFrame},
	{"setM_useReferenceFrameA", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_useReferenceFrameA},
	{"setM_angularOnly", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_angularOnly},
	{"setM_enableAngularMotor", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_enableAngularMotor},
	{"setM_motorTargetVelocity", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_motorTargetVelocity},
	{"setM_maxMotorImpulse", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_maxMotorImpulse},
	{"setM_lowerLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_upperLimit},
	{"setM_limitSoftness", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_limitSoftness},
	{"setM_biasFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_biasFactor},
	{"setM_relaxationFactor", &luna_wrapper_btHingeConstraintFloatData::_bind_setM_relaxationFactor},
	{"dynCast", &luna_wrapper_btHingeConstraintFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btHingeConstraintFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btHingeConstraintFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHingeConstraintFloatData >::enumValues[] = {
	{0,0}
};


