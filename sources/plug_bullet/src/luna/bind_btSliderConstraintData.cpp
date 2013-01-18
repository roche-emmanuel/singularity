#include <plug_common.h>

class luna_wrapper_btSliderConstraintData {
public:
	typedef Luna< btSliderConstraintData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62504021) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSliderConstraintData*)");
		}

		btSliderConstraintData* rhs =(Luna< btSliderConstraintData >::check(L,2));
		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
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

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSliderConstraintData");
		
		return luna_dynamicCast(L,converters,"btSliderConstraintData",name);
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

	inline static bool _lg_typecheck_getLinearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseLinearReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseOffsetForConstraintFrame(lua_State *L) {
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

	inline static bool _lg_typecheck_setLinearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseLinearReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseOffsetForConstraintFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btSliderConstraintData::m_typeConstraintData()
	static int _bind_getTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btSliderConstraintData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btSliderConstraintData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btSliderConstraintData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btSliderConstraintData::m_rbAFrame()
	static int _bind_getRbAFrame(lua_State *L) {
		if (!_lg_typecheck_getRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btSliderConstraintData::m_rbAFrame() function, expected prototype:\nbtTransformFloatData btSliderConstraintData::m_rbAFrame()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btSliderConstraintData::m_rbAFrame(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btSliderConstraintData::m_rbBFrame()
	static int _bind_getRbBFrame(lua_State *L) {
		if (!_lg_typecheck_getRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btSliderConstraintData::m_rbBFrame() function, expected prototype:\nbtTransformFloatData btSliderConstraintData::m_rbBFrame()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btSliderConstraintData::m_rbBFrame(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// float btSliderConstraintData::m_linearUpperLimit()
	static int _bind_getLinearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getLinearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraintData::m_linearUpperLimit() function, expected prototype:\nfloat btSliderConstraintData::m_linearUpperLimit()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraintData::m_linearUpperLimit(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		float lret = self->m_linearUpperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraintData::m_linearLowerLimit()
	static int _bind_getLinearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLinearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraintData::m_linearLowerLimit() function, expected prototype:\nfloat btSliderConstraintData::m_linearLowerLimit()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraintData::m_linearLowerLimit(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		float lret = self->m_linearLowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraintData::m_angularUpperLimit()
	static int _bind_getAngularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getAngularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraintData::m_angularUpperLimit() function, expected prototype:\nfloat btSliderConstraintData::m_angularUpperLimit()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraintData::m_angularUpperLimit(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		float lret = self->m_angularUpperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraintData::m_angularLowerLimit()
	static int _bind_getAngularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getAngularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraintData::m_angularLowerLimit() function, expected prototype:\nfloat btSliderConstraintData::m_angularLowerLimit()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraintData::m_angularLowerLimit(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		float lret = self->m_angularLowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSliderConstraintData::m_useLinearReferenceFrameA()
	static int _bind_getUseLinearReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getUseLinearReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSliderConstraintData::m_useLinearReferenceFrameA() function, expected prototype:\nint btSliderConstraintData::m_useLinearReferenceFrameA()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSliderConstraintData::m_useLinearReferenceFrameA(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		int lret = self->m_useLinearReferenceFrameA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSliderConstraintData::m_useOffsetForConstraintFrame()
	static int _bind_getUseOffsetForConstraintFrame(lua_State *L) {
		if (!_lg_typecheck_getUseOffsetForConstraintFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSliderConstraintData::m_useOffsetForConstraintFrame() function, expected prototype:\nint btSliderConstraintData::m_useOffsetForConstraintFrame()\nClass arguments details:\n");
		}


		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSliderConstraintData::m_useOffsetForConstraintFrame(). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		int lret = self->m_useOffsetForConstraintFrame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraintData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setTypeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btSliderConstraintData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSliderConstraintData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btSliderConstraintData::m_rbAFrame(btTransformFloatData value)
	static int _bind_setRbAFrame(lua_State *L) {
		if (!_lg_typecheck_setRbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_rbAFrame(btTransformFloatData value) function, expected prototype:\nvoid btSliderConstraintData::m_rbAFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSliderConstraintData::m_rbAFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_rbAFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btSliderConstraintData::m_rbBFrame(btTransformFloatData value)
	static int _bind_setRbBFrame(lua_State *L) {
		if (!_lg_typecheck_setRbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_rbBFrame(btTransformFloatData value) function, expected prototype:\nvoid btSliderConstraintData::m_rbBFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSliderConstraintData::m_rbBFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_rbBFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btSliderConstraintData::m_linearUpperLimit(float value)
	static int _bind_setLinearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setLinearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_linearUpperLimit(float value) function, expected prototype:\nvoid btSliderConstraintData::m_linearUpperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_linearUpperLimit(float). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_linearUpperLimit = value;

		return 0;
	}

	// void btSliderConstraintData::m_linearLowerLimit(float value)
	static int _bind_setLinearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLinearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_linearLowerLimit(float value) function, expected prototype:\nvoid btSliderConstraintData::m_linearLowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_linearLowerLimit(float). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_linearLowerLimit = value;

		return 0;
	}

	// void btSliderConstraintData::m_angularUpperLimit(float value)
	static int _bind_setAngularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setAngularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_angularUpperLimit(float value) function, expected prototype:\nvoid btSliderConstraintData::m_angularUpperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_angularUpperLimit(float). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_angularUpperLimit = value;

		return 0;
	}

	// void btSliderConstraintData::m_angularLowerLimit(float value)
	static int _bind_setAngularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setAngularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_angularLowerLimit(float value) function, expected prototype:\nvoid btSliderConstraintData::m_angularLowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_angularLowerLimit(float). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_angularLowerLimit = value;

		return 0;
	}

	// void btSliderConstraintData::m_useLinearReferenceFrameA(int value)
	static int _bind_setUseLinearReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setUseLinearReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_useLinearReferenceFrameA(int value) function, expected prototype:\nvoid btSliderConstraintData::m_useLinearReferenceFrameA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_useLinearReferenceFrameA(int). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_useLinearReferenceFrameA = value;

		return 0;
	}

	// void btSliderConstraintData::m_useOffsetForConstraintFrame(int value)
	static int _bind_setUseOffsetForConstraintFrame(lua_State *L) {
		if (!_lg_typecheck_setUseOffsetForConstraintFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraintData::m_useOffsetForConstraintFrame(int value) function, expected prototype:\nvoid btSliderConstraintData::m_useOffsetForConstraintFrame(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSliderConstraintData* self=(Luna< btSliderConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraintData::m_useOffsetForConstraintFrame(int). Got : '%s'",typeid(Luna< btSliderConstraintData >::check(L,1)).name());
		}
		self->m_useOffsetForConstraintFrame = value;

		return 0;
	}


	// Operator binds:

};

btSliderConstraintData* LunaTraits< btSliderConstraintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btSliderConstraintData >::_bind_dtor(btSliderConstraintData* obj) {
	delete obj;
}

const char LunaTraits< btSliderConstraintData >::className[] = "btSliderConstraintData";
const char LunaTraits< btSliderConstraintData >::fullName[] = "btSliderConstraintData";
const char LunaTraits< btSliderConstraintData >::moduleName[] = "bullet";
const char* LunaTraits< btSliderConstraintData >::parents[] = {0};
const int LunaTraits< btSliderConstraintData >::hash = 62504021;
const int LunaTraits< btSliderConstraintData >::uniqueIDs[] = {62504021,0};

luna_RegType LunaTraits< btSliderConstraintData >::methods[] = {
	{"getTypeConstraintData", &luna_wrapper_btSliderConstraintData::_bind_getTypeConstraintData},
	{"getRbAFrame", &luna_wrapper_btSliderConstraintData::_bind_getRbAFrame},
	{"getRbBFrame", &luna_wrapper_btSliderConstraintData::_bind_getRbBFrame},
	{"getLinearUpperLimit", &luna_wrapper_btSliderConstraintData::_bind_getLinearUpperLimit},
	{"getLinearLowerLimit", &luna_wrapper_btSliderConstraintData::_bind_getLinearLowerLimit},
	{"getAngularUpperLimit", &luna_wrapper_btSliderConstraintData::_bind_getAngularUpperLimit},
	{"getAngularLowerLimit", &luna_wrapper_btSliderConstraintData::_bind_getAngularLowerLimit},
	{"getUseLinearReferenceFrameA", &luna_wrapper_btSliderConstraintData::_bind_getUseLinearReferenceFrameA},
	{"getUseOffsetForConstraintFrame", &luna_wrapper_btSliderConstraintData::_bind_getUseOffsetForConstraintFrame},
	{"setTypeConstraintData", &luna_wrapper_btSliderConstraintData::_bind_setTypeConstraintData},
	{"setRbAFrame", &luna_wrapper_btSliderConstraintData::_bind_setRbAFrame},
	{"setRbBFrame", &luna_wrapper_btSliderConstraintData::_bind_setRbBFrame},
	{"setLinearUpperLimit", &luna_wrapper_btSliderConstraintData::_bind_setLinearUpperLimit},
	{"setLinearLowerLimit", &luna_wrapper_btSliderConstraintData::_bind_setLinearLowerLimit},
	{"setAngularUpperLimit", &luna_wrapper_btSliderConstraintData::_bind_setAngularUpperLimit},
	{"setAngularLowerLimit", &luna_wrapper_btSliderConstraintData::_bind_setAngularLowerLimit},
	{"setUseLinearReferenceFrameA", &luna_wrapper_btSliderConstraintData::_bind_setUseLinearReferenceFrameA},
	{"setUseOffsetForConstraintFrame", &luna_wrapper_btSliderConstraintData::_bind_setUseOffsetForConstraintFrame},
	{"dynCast", &luna_wrapper_btSliderConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btSliderConstraintData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btSliderConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSliderConstraintData >::enumValues[] = {
	{0,0}
};


