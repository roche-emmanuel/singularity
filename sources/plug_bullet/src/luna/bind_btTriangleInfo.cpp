#include <plug_common.h>

class luna_wrapper_btTriangleInfo {
public:
	typedef Luna< btTriangleInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52667016) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleInfo*)");
		}

		btTriangleInfo* rhs =(Luna< btTriangleInfo >::check(L,2));
		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
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

		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangleInfo");
		
		return luna_dynamicCast(L,converters,"btTriangleInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_flags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_edgeV0V1Angle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_edgeV1V2Angle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_edgeV2V0Angle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_flags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_edgeV0V1Angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_edgeV1V2Angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_edgeV2V0Angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleInfo::btTriangleInfo()
	static btTriangleInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleInfo::btTriangleInfo() function, expected prototype:\nbtTriangleInfo::btTriangleInfo()\nClass arguments details:\n");
		}


		return new btTriangleInfo();
	}


	// Function binds:
	// int btTriangleInfo::m_flags()
	static int _bind_getM_flags(lua_State *L) {
		if (!_lg_typecheck_getM_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleInfo::m_flags() function, expected prototype:\nint btTriangleInfo::m_flags()\nClass arguments details:\n");
		}


		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleInfo::m_flags(). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		int lret = self->m_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfo::m_edgeV0V1Angle()
	static int _bind_getM_edgeV0V1Angle(lua_State *L) {
		if (!_lg_typecheck_getM_edgeV0V1Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfo::m_edgeV0V1Angle() function, expected prototype:\nfloat btTriangleInfo::m_edgeV0V1Angle()\nClass arguments details:\n");
		}


		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfo::m_edgeV0V1Angle(). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		float lret = self->m_edgeV0V1Angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfo::m_edgeV1V2Angle()
	static int _bind_getM_edgeV1V2Angle(lua_State *L) {
		if (!_lg_typecheck_getM_edgeV1V2Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfo::m_edgeV1V2Angle() function, expected prototype:\nfloat btTriangleInfo::m_edgeV1V2Angle()\nClass arguments details:\n");
		}


		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfo::m_edgeV1V2Angle(). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		float lret = self->m_edgeV1V2Angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfo::m_edgeV2V0Angle()
	static int _bind_getM_edgeV2V0Angle(lua_State *L) {
		if (!_lg_typecheck_getM_edgeV2V0Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfo::m_edgeV2V0Angle() function, expected prototype:\nfloat btTriangleInfo::m_edgeV2V0Angle()\nClass arguments details:\n");
		}


		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfo::m_edgeV2V0Angle(). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		float lret = self->m_edgeV2V0Angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleInfo::m_flags(int value)
	static int _bind_setM_flags(lua_State *L) {
		if (!_lg_typecheck_setM_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfo::m_flags(int value) function, expected prototype:\nvoid btTriangleInfo::m_flags(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfo::m_flags(int). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		self->m_flags = value;

		return 0;
	}

	// void btTriangleInfo::m_edgeV0V1Angle(float value)
	static int _bind_setM_edgeV0V1Angle(lua_State *L) {
		if (!_lg_typecheck_setM_edgeV0V1Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfo::m_edgeV0V1Angle(float value) function, expected prototype:\nvoid btTriangleInfo::m_edgeV0V1Angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfo::m_edgeV0V1Angle(float). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		self->m_edgeV0V1Angle = value;

		return 0;
	}

	// void btTriangleInfo::m_edgeV1V2Angle(float value)
	static int _bind_setM_edgeV1V2Angle(lua_State *L) {
		if (!_lg_typecheck_setM_edgeV1V2Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfo::m_edgeV1V2Angle(float value) function, expected prototype:\nvoid btTriangleInfo::m_edgeV1V2Angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfo::m_edgeV1V2Angle(float). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		self->m_edgeV1V2Angle = value;

		return 0;
	}

	// void btTriangleInfo::m_edgeV2V0Angle(float value)
	static int _bind_setM_edgeV2V0Angle(lua_State *L) {
		if (!_lg_typecheck_setM_edgeV2V0Angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfo::m_edgeV2V0Angle(float value) function, expected prototype:\nvoid btTriangleInfo::m_edgeV2V0Angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfo* self=(Luna< btTriangleInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfo::m_edgeV2V0Angle(float). Got : '%s'",typeid(Luna< btTriangleInfo >::check(L,1)).name());
		}
		self->m_edgeV2V0Angle = value;

		return 0;
	}


	// Operator binds:

};

btTriangleInfo* LunaTraits< btTriangleInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleInfo::_bind_ctor(L);
}

void LunaTraits< btTriangleInfo >::_bind_dtor(btTriangleInfo* obj) {
	delete obj;
}

const char LunaTraits< btTriangleInfo >::className[] = "btTriangleInfo";
const char LunaTraits< btTriangleInfo >::fullName[] = "btTriangleInfo";
const char LunaTraits< btTriangleInfo >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleInfo >::parents[] = {0};
const int LunaTraits< btTriangleInfo >::hash = 52667016;
const int LunaTraits< btTriangleInfo >::uniqueIDs[] = {52667016,0};

luna_RegType LunaTraits< btTriangleInfo >::methods[] = {
	{"getM_flags", &luna_wrapper_btTriangleInfo::_bind_getM_flags},
	{"getM_edgeV0V1Angle", &luna_wrapper_btTriangleInfo::_bind_getM_edgeV0V1Angle},
	{"getM_edgeV1V2Angle", &luna_wrapper_btTriangleInfo::_bind_getM_edgeV1V2Angle},
	{"getM_edgeV2V0Angle", &luna_wrapper_btTriangleInfo::_bind_getM_edgeV2V0Angle},
	{"setM_flags", &luna_wrapper_btTriangleInfo::_bind_setM_flags},
	{"setM_edgeV0V1Angle", &luna_wrapper_btTriangleInfo::_bind_setM_edgeV0V1Angle},
	{"setM_edgeV1V2Angle", &luna_wrapper_btTriangleInfo::_bind_setM_edgeV1V2Angle},
	{"setM_edgeV2V0Angle", &luna_wrapper_btTriangleInfo::_bind_setM_edgeV2V0Angle},
	{"dynCast", &luna_wrapper_btTriangleInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangleInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleInfo >::enumValues[] = {
	{0,0}
};


