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

		btHingeConstraintDoubleData* self=(Luna< btHingeConstraintDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHingeConstraintDoubleData");
		
		return luna_dynamicCast(L,converters,"btHingeConstraintDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbBFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,10173309) ) return false;
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
	// btTypedConstraintData btHingeConstraintDoubleData::m_typeConstraintData()
	static int _bind_getM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getM_typeConstraintData(L)) {
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
	static int _bind_getM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbAFrame(L)) {
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
	static int _bind_getM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbBFrame(L)) {
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
	static int _bind_getM_useReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getM_useReferenceFrameA(L)) {
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
	static int _bind_getM_angularOnly(lua_State *L) {
		if (!_lg_typecheck_getM_angularOnly(L)) {
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
	static int _bind_getM_enableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_getM_enableAngularMotor(L)) {
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
	static int _bind_getM_motorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_getM_motorTargetVelocity(L)) {
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
	static int _bind_getM_maxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_maxMotorImpulse(L)) {
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
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
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
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
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
	static int _bind_getM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_getM_limitSoftness(L)) {
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
	static int _bind_getM_biasFactor(lua_State *L) {
		if (!_lg_typecheck_getM_biasFactor(L)) {
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
	static int _bind_getM_relaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getM_relaxationFactor(L)) {
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
	static int _bind_setM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setM_typeConstraintData(L)) {
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
	static int _bind_setM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbAFrame(L)) {
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
	static int _bind_setM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbBFrame(L)) {
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
	static int _bind_setM_useReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setM_useReferenceFrameA(L)) {
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
	static int _bind_setM_angularOnly(lua_State *L) {
		if (!_lg_typecheck_setM_angularOnly(L)) {
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
	static int _bind_setM_enableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_setM_enableAngularMotor(L)) {
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
	static int _bind_setM_motorTargetVelocity(lua_State *L) {
		if (!_lg_typecheck_setM_motorTargetVelocity(L)) {
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
	static int _bind_setM_maxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_maxMotorImpulse(L)) {
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
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
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
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
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
	static int _bind_setM_limitSoftness(lua_State *L) {
		if (!_lg_typecheck_setM_limitSoftness(L)) {
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
	static int _bind_setM_biasFactor(lua_State *L) {
		if (!_lg_typecheck_setM_biasFactor(L)) {
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
	static int _bind_setM_relaxationFactor(lua_State *L) {
		if (!_lg_typecheck_setM_relaxationFactor(L)) {
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
	{"getM_typeConstraintData", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_typeConstraintData},
	{"getM_rbAFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_rbAFrame},
	{"getM_rbBFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_rbBFrame},
	{"getM_useReferenceFrameA", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_useReferenceFrameA},
	{"getM_angularOnly", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_angularOnly},
	{"getM_enableAngularMotor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_enableAngularMotor},
	{"getM_motorTargetVelocity", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_motorTargetVelocity},
	{"getM_maxMotorImpulse", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_maxMotorImpulse},
	{"getM_lowerLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_upperLimit},
	{"getM_limitSoftness", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_limitSoftness},
	{"getM_biasFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_biasFactor},
	{"getM_relaxationFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_getM_relaxationFactor},
	{"setM_typeConstraintData", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_typeConstraintData},
	{"setM_rbAFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_rbAFrame},
	{"setM_rbBFrame", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_rbBFrame},
	{"setM_useReferenceFrameA", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_useReferenceFrameA},
	{"setM_angularOnly", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_angularOnly},
	{"setM_enableAngularMotor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_enableAngularMotor},
	{"setM_motorTargetVelocity", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_motorTargetVelocity},
	{"setM_maxMotorImpulse", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_maxMotorImpulse},
	{"setM_lowerLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_upperLimit},
	{"setM_limitSoftness", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_limitSoftness},
	{"setM_biasFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_biasFactor},
	{"setM_relaxationFactor", &luna_wrapper_btHingeConstraintDoubleData::_bind_setM_relaxationFactor},
	{"dynCast", &luna_wrapper_btHingeConstraintDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btHingeConstraintDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btHingeConstraintDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHingeConstraintDoubleData >::enumValues[] = {
	{0,0}
};


