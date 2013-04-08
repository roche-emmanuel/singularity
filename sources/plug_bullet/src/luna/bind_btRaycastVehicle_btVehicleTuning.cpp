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

		btRaycastVehicle::btVehicleTuning* self= (btRaycastVehicle::btVehicleTuning*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btRaycastVehicle::btVehicleTuning >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91513369) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btRaycastVehicle::btVehicleTuning >::check(L,1));
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
	inline static bool _lg_typecheck_getSuspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSuspensionCompression(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSuspensionDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrictionSlip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxSuspensionForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSuspensionStiffness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSuspensionCompression(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSuspensionDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxSuspensionTravelCm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrictionSlip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxSuspensionForce(lua_State *L) {
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
	static int _bind_getSuspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_getSuspensionStiffness(L)) {
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
	static int _bind_getSuspensionCompression(lua_State *L) {
		if (!_lg_typecheck_getSuspensionCompression(L)) {
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
	static int _bind_getSuspensionDamping(lua_State *L) {
		if (!_lg_typecheck_getSuspensionDamping(L)) {
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
	static int _bind_getMaxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_getMaxSuspensionTravelCm(L)) {
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
	static int _bind_getFrictionSlip(lua_State *L) {
		if (!_lg_typecheck_getFrictionSlip(L)) {
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
	static int _bind_getMaxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_getMaxSuspensionForce(L)) {
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
	static int _bind_setSuspensionStiffness(lua_State *L) {
		if (!_lg_typecheck_setSuspensionStiffness(L)) {
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
	static int _bind_setSuspensionCompression(lua_State *L) {
		if (!_lg_typecheck_setSuspensionCompression(L)) {
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
	static int _bind_setSuspensionDamping(lua_State *L) {
		if (!_lg_typecheck_setSuspensionDamping(L)) {
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
	static int _bind_setMaxSuspensionTravelCm(lua_State *L) {
		if (!_lg_typecheck_setMaxSuspensionTravelCm(L)) {
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
	static int _bind_setFrictionSlip(lua_State *L) {
		if (!_lg_typecheck_setFrictionSlip(L)) {
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
	static int _bind_setMaxSuspensionForce(lua_State *L) {
		if (!_lg_typecheck_setMaxSuspensionForce(L)) {
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
const char LunaTraits< btRaycastVehicle::btVehicleTuning >::moduleName[] = "bullet";
const char* LunaTraits< btRaycastVehicle::btVehicleTuning >::parents[] = {0};
const int LunaTraits< btRaycastVehicle::btVehicleTuning >::hash = 91513369;
const int LunaTraits< btRaycastVehicle::btVehicleTuning >::uniqueIDs[] = {91513369,0};

luna_RegType LunaTraits< btRaycastVehicle::btVehicleTuning >::methods[] = {
	{"getSuspensionStiffness", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getSuspensionStiffness},
	{"getSuspensionCompression", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getSuspensionCompression},
	{"getSuspensionDamping", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getSuspensionDamping},
	{"getMaxSuspensionTravelCm", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getMaxSuspensionTravelCm},
	{"getFrictionSlip", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getFrictionSlip},
	{"getMaxSuspensionForce", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_getMaxSuspensionForce},
	{"setSuspensionStiffness", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setSuspensionStiffness},
	{"setSuspensionCompression", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setSuspensionCompression},
	{"setSuspensionDamping", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setSuspensionDamping},
	{"setMaxSuspensionTravelCm", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setMaxSuspensionTravelCm},
	{"setFrictionSlip", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setFrictionSlip},
	{"setMaxSuspensionForce", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_setMaxSuspensionForce},
	{"dynCast", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_dynCast},
	{"__eq", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind___eq},
	{"fromVoid", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btRaycastVehicle_btVehicleTuning::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btRaycastVehicle::btVehicleTuning >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btRaycastVehicle::btVehicleTuning >::enumValues[] = {
	{0,0}
};


