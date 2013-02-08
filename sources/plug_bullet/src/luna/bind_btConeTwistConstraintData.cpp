#include <plug_common.h>

class luna_wrapper_btConeTwistConstraintData {
public:
	typedef Luna< btConeTwistConstraintData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59805690) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConeTwistConstraintData*)");
		}

		btConeTwistConstraintData* rhs =(Luna< btConeTwistConstraintData >::check(L,2));
		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
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

		btConeTwistConstraintData* self= (btConeTwistConstraintData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConeTwistConstraintData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59805690) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConeTwistConstraintData >::check(L,1));
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

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConeTwistConstraintData");
		
		return luna_dynamicCast(L,converters,"btConeTwistConstraintData",name);
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

	inline static bool _lg_typecheck_getSwingSpan1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwingSpan2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTwistSpan(lua_State *L) {
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

	inline static bool _lg_typecheck_getDamping(lua_State *L) {
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

	inline static bool _lg_typecheck_setSwingSpan1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwingSpan2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTwistSpan(lua_State *L) {
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

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btConeTwistConstraintData::m_typeConstraintData()
	static int _bind_getTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btConeTwistConstraintData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btConeTwistConstraintData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btConeTwistConstraintData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btConeTwistConstraintData::m_rbAFrame()
	static int _bind_getRbAFrame(lua_State *L) {
		if (!_lg_typecheck_getRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btConeTwistConstraintData::m_rbAFrame() function, expected prototype:\nbtTransformFloatData btConeTwistConstraintData::m_rbAFrame()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btConeTwistConstraintData::m_rbAFrame(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btConeTwistConstraintData::m_rbBFrame()
	static int _bind_getRbBFrame(lua_State *L) {
		if (!_lg_typecheck_getRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btConeTwistConstraintData::m_rbBFrame() function, expected prototype:\nbtTransformFloatData btConeTwistConstraintData::m_rbBFrame()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btConeTwistConstraintData::m_rbBFrame(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// float btConeTwistConstraintData::m_swingSpan1()
	static int _bind_getSwingSpan1(lua_State *L) {
		if (!_lg_typecheck_getSwingSpan1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_swingSpan1() function, expected prototype:\nfloat btConeTwistConstraintData::m_swingSpan1()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_swingSpan1(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_swingSpan1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_swingSpan2()
	static int _bind_getSwingSpan2(lua_State *L) {
		if (!_lg_typecheck_getSwingSpan2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_swingSpan2() function, expected prototype:\nfloat btConeTwistConstraintData::m_swingSpan2()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_swingSpan2(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_swingSpan2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_twistSpan()
	static int _bind_getTwistSpan(lua_State *L) {
		if (!_lg_typecheck_getTwistSpan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_twistSpan() function, expected prototype:\nfloat btConeTwistConstraintData::m_twistSpan()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_twistSpan(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_twistSpan;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_limitSoftness()
	static int _bind_getLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_getLimitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_limitSoftness() function, expected prototype:\nfloat btConeTwistConstraintData::m_limitSoftness()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_limitSoftness(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_limitSoftness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_biasFactor()
	static int _bind_getBiasFactor(lua_State *L) {
		if (!_lg_typecheck_getBiasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_biasFactor() function, expected prototype:\nfloat btConeTwistConstraintData::m_biasFactor()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_biasFactor(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_biasFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_relaxationFactor()
	static int _bind_getRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getRelaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_relaxationFactor() function, expected prototype:\nfloat btConeTwistConstraintData::m_relaxationFactor()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_relaxationFactor(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_relaxationFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraintData::m_damping()
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraintData::m_damping() function, expected prototype:\nfloat btConeTwistConstraintData::m_damping()\nClass arguments details:\n");
		}


		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraintData::m_damping(). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeTwistConstraintData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btConeTwistConstraintData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConeTwistConstraintData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_rbAFrame(btTransformFloatData value)
	static int _bind_setRbAFrame(lua_State *L) {
		if (!_lg_typecheck_setRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_rbAFrame(btTransformFloatData value) function, expected prototype:\nvoid btConeTwistConstraintData::m_rbAFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConeTwistConstraintData::m_rbAFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_rbAFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_rbBFrame(btTransformFloatData value)
	static int _bind_setRbBFrame(lua_State *L) {
		if (!_lg_typecheck_setRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_rbBFrame(btTransformFloatData value) function, expected prototype:\nvoid btConeTwistConstraintData::m_rbBFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConeTwistConstraintData::m_rbBFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_rbBFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_swingSpan1(float value)
	static int _bind_setSwingSpan1(lua_State *L) {
		if (!_lg_typecheck_setSwingSpan1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_swingSpan1(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_swingSpan1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_swingSpan1(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_swingSpan1 = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_swingSpan2(float value)
	static int _bind_setSwingSpan2(lua_State *L) {
		if (!_lg_typecheck_setSwingSpan2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_swingSpan2(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_swingSpan2(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_swingSpan2(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_swingSpan2 = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_twistSpan(float value)
	static int _bind_setTwistSpan(lua_State *L) {
		if (!_lg_typecheck_setTwistSpan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_twistSpan(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_twistSpan(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_twistSpan(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_twistSpan = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_limitSoftness(float value)
	static int _bind_setLimitSoftness(lua_State *L) {
		if (!_lg_typecheck_setLimitSoftness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_limitSoftness(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_limitSoftness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_limitSoftness(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_limitSoftness = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_biasFactor(float value)
	static int _bind_setBiasFactor(lua_State *L) {
		if (!_lg_typecheck_setBiasFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_biasFactor(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_biasFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_biasFactor(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_biasFactor = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_relaxationFactor(float value)
	static int _bind_setRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_setRelaxationFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_relaxationFactor(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_relaxationFactor(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_relaxationFactor(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_relaxationFactor = value;

		return 0;
	}

	// void btConeTwistConstraintData::m_damping(float value)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraintData::m_damping(float value) function, expected prototype:\nvoid btConeTwistConstraintData::m_damping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConeTwistConstraintData* self=(Luna< btConeTwistConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraintData::m_damping(float). Got : '%s'",typeid(Luna< btConeTwistConstraintData >::check(L,1)).name());
		}
		self->m_damping = value;

		return 0;
	}


	// Operator binds:

};

btConeTwistConstraintData* LunaTraits< btConeTwistConstraintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConeTwistConstraintData >::_bind_dtor(btConeTwistConstraintData* obj) {
	delete obj;
}

const char LunaTraits< btConeTwistConstraintData >::className[] = "btConeTwistConstraintData";
const char LunaTraits< btConeTwistConstraintData >::fullName[] = "btConeTwistConstraintData";
const char LunaTraits< btConeTwistConstraintData >::moduleName[] = "bullet";
const char* LunaTraits< btConeTwistConstraintData >::parents[] = {0};
const int LunaTraits< btConeTwistConstraintData >::hash = 59805690;
const int LunaTraits< btConeTwistConstraintData >::uniqueIDs[] = {59805690,0};

luna_RegType LunaTraits< btConeTwistConstraintData >::methods[] = {
	{"getTypeConstraintData", &luna_wrapper_btConeTwistConstraintData::_bind_getTypeConstraintData},
	{"getRbAFrame", &luna_wrapper_btConeTwistConstraintData::_bind_getRbAFrame},
	{"getRbBFrame", &luna_wrapper_btConeTwistConstraintData::_bind_getRbBFrame},
	{"getSwingSpan1", &luna_wrapper_btConeTwistConstraintData::_bind_getSwingSpan1},
	{"getSwingSpan2", &luna_wrapper_btConeTwistConstraintData::_bind_getSwingSpan2},
	{"getTwistSpan", &luna_wrapper_btConeTwistConstraintData::_bind_getTwistSpan},
	{"getLimitSoftness", &luna_wrapper_btConeTwistConstraintData::_bind_getLimitSoftness},
	{"getBiasFactor", &luna_wrapper_btConeTwistConstraintData::_bind_getBiasFactor},
	{"getRelaxationFactor", &luna_wrapper_btConeTwistConstraintData::_bind_getRelaxationFactor},
	{"getDamping", &luna_wrapper_btConeTwistConstraintData::_bind_getDamping},
	{"setTypeConstraintData", &luna_wrapper_btConeTwistConstraintData::_bind_setTypeConstraintData},
	{"setRbAFrame", &luna_wrapper_btConeTwistConstraintData::_bind_setRbAFrame},
	{"setRbBFrame", &luna_wrapper_btConeTwistConstraintData::_bind_setRbBFrame},
	{"setSwingSpan1", &luna_wrapper_btConeTwistConstraintData::_bind_setSwingSpan1},
	{"setSwingSpan2", &luna_wrapper_btConeTwistConstraintData::_bind_setSwingSpan2},
	{"setTwistSpan", &luna_wrapper_btConeTwistConstraintData::_bind_setTwistSpan},
	{"setLimitSoftness", &luna_wrapper_btConeTwistConstraintData::_bind_setLimitSoftness},
	{"setBiasFactor", &luna_wrapper_btConeTwistConstraintData::_bind_setBiasFactor},
	{"setRelaxationFactor", &luna_wrapper_btConeTwistConstraintData::_bind_setRelaxationFactor},
	{"setDamping", &luna_wrapper_btConeTwistConstraintData::_bind_setDamping},
	{"dynCast", &luna_wrapper_btConeTwistConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btConeTwistConstraintData::_bind___eq},
	{"fromVoid", &luna_wrapper_btConeTwistConstraintData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConeTwistConstraintData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConeTwistConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConeTwistConstraintData >::enumValues[] = {
	{0,0}
};


