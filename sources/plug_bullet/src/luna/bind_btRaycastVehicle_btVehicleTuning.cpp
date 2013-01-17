#include <plug_common.h>

class luna_wrapper_btRaycastVehicle_btVehicleTuning {
public:
	typedef Luna< btRaycastVehicle::btVehicleTuning > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91513369) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btRaycastVehicle::btVehicleTuning*)");
		}

		btRaycastVehicle::btVehicleTuning* rhs =(Luna< btRaycastVehicle::btVehicleTuning >::check(L,2));
		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
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

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btRaycastVehicle::btVehicleTuning");
		
		return luna_dynamicCast(L,converters,"btRaycastVehicle::btVehicleTuning",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_suspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionCompression(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_frictionSlip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionCompression(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_frictionSlip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRaycastVehicle::btVehicleTuning::btVehicleTuning()
	static btRaycastVehicle::btVehicleTuning* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRaycastVehicle::btVehicleTuning::btVehicleTuning() function, expected prototype:\nbtRaycastVehicle::btVehicleTuning::btVehicleTuning()\nClass arguments details:\n");
		}


		return new btRaycastVehicle::btVehicleTuning();
	}


	// Function binds:
	// float btRaycastVehicle::btVehicleTuning::m_suspensionStiffness()
	static int _bind_getM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_suspensionStiffness() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_suspensionStiffness()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_suspensionStiffness(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_suspensionStiffness;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRaycastVehicle::btVehicleTuning::m_suspensionCompression()
	static int _bind_getM_suspensionCompression(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_suspensionCompression() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_suspensionCompression()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_suspensionCompression(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_suspensionCompression;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRaycastVehicle::btVehicleTuning::m_suspensionDamping()
	static int _bind_getM_suspensionDamping(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_suspensionDamping() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_suspensionDamping()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_suspensionDamping(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_suspensionDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm()
	static int _bind_getM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionTravelCm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRaycastVehicle::btVehicleTuning::m_frictionSlip()
	static int _bind_getM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_getM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_frictionSlip() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_frictionSlip()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_frictionSlip(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_frictionSlip;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce()
	static int _bind_getM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce() function, expected prototype:\nfloat btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce()\nClass arguments details:\n");
		}


		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce(). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		float lret = self->m_maxSuspensionForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRaycastVehicle::btVehicleTuning::m_suspensionStiffness(float value)
	static int _bind_setM_suspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_suspensionStiffness(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_suspensionStiffness(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_suspensionStiffness(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_suspensionStiffness = value;

		return 0;
	}

	// void btRaycastVehicle::btVehicleTuning::m_suspensionCompression(float value)
	static int _bind_setM_suspensionCompression(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_suspensionCompression(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_suspensionCompression(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_suspensionCompression(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_suspensionCompression = value;

		return 0;
	}

	// void btRaycastVehicle::btVehicleTuning::m_suspensionDamping(float value)
	static int _bind_setM_suspensionDamping(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_suspensionDamping(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_suspensionDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_suspensionDamping(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_suspensionDamping = value;

		return 0;
	}

	// void btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm(float value)
	static int _bind_setM_maxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionTravelCm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_maxSuspensionTravelCm(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_maxSuspensionTravelCm = value;

		return 0;
	}

	// void btRaycastVehicle::btVehicleTuning::m_frictionSlip(float value)
	static int _bind_setM_frictionSlip(lua_State *L) {
		if (!_lg_typecheck_setM_frictionSlip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_frictionSlip(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_frictionSlip(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_frictionSlip(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_frictionSlip = value;

		return 0;
	}

	// void btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce(float value)
	static int _bind_setM_maxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setM_maxSuspensionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce(float value) function, expected prototype:\nvoid btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btRaycastVehicle::btVehicleTuning* self=(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRaycastVehicle::btVehicleTuning::m_maxSuspensionForce(float). Got : '%s'",typeid(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1)).name());
		}
		self->m_maxSuspensionForce = value;

		return 0;
	}


	// Operator binds:

};

btRaycastVehicle::btVehicleTuning* LunaTraits< btRaycastVehicle::btVehicleTuning >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_ctor(L);
}

void LunaTraits< btRaycastVehicle::btVehicleTuning >::_bind_dtor(btRaycastVehicle::btVehicleTuning* obj) {
	delete obj;
}

const char LunaTraits< btRaycastVehicle::btVehicleTuning >::className[] = "btRaycastVehicle_btVehicleTuning";
const char LunaTraits< btRaycastVehicle::btVehicleTuning >::fullName[] = "btRaycastVehicle::btVehicleTuning";
const char LunaTraits< btRaycastVehicle::btVehicleTuning >::moduleName[] = "btRaycastVehicle";
const char* LunaTraits< btRaycastVehicle::btVehicleTuning >::parents[] = {0};
const int LunaTraits< btRaycastVehicle::btVehicleTuning >::hash = 91513369;
const int LunaTraits< btRaycastVehicle::btVehicleTuning >::uniqueIDs[] = {91513369,0};

luna_RegType LunaTraits< btRaycastVehicle::btVehicleTuning >::methods[] = {
	{"getM_suspensionStiffness", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_suspensionStiffness},
	{"getM_suspensionCompression", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_suspensionCompression},
	{"getM_suspensionDamping", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_suspensionDamping},
	{"getM_maxSuspensionTravelCm", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_maxSuspensionTravelCm},
	{"getM_frictionSlip", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_frictionSlip},
	{"getM_maxSuspensionForce", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getM_maxSuspensionForce},
	{"setM_suspensionStiffness", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_suspensionStiffness},
	{"setM_suspensionCompression", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_suspensionCompression},
	{"setM_suspensionDamping", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_suspensionDamping},
	{"setM_maxSuspensionTravelCm", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_maxSuspensionTravelCm},
	{"setM_frictionSlip", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_frictionSlip},
	{"setM_maxSuspensionForce", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setM_maxSuspensionForce},
	{"dynCast", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_dynCast},
	{"__eq", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btRaycastVehicle::btVehicleTuning >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRaycastVehicle::btVehicleTuning >::enumValues[] = {
	{0,0}
};


