#include <plug_common.h>

class luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult {
public:
	typedef Luna< btVehicleRaycaster::btVehicleRaycasterResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50443956) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVehicleRaycaster::btVehicleRaycasterResult*)");
		}

		btVehicleRaycaster::btVehicleRaycasterResult* rhs =(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,2));
		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
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

		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btVehicleRaycaster::btVehicleRaycasterResult");
		
		return luna_dynamicCast(L,converters,"btVehicleRaycaster::btVehicleRaycasterResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_hitPointInWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitNormalInWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_distFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_hitPointInWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitNormalInWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_distFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btVehicleRaycaster::btVehicleRaycasterResult::btVehicleRaycasterResult()
	static btVehicleRaycaster::btVehicleRaycasterResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVehicleRaycaster::btVehicleRaycasterResult::btVehicleRaycasterResult() function, expected prototype:\nbtVehicleRaycaster::btVehicleRaycasterResult::btVehicleRaycasterResult()\nClass arguments details:\n");
		}


		return new btVehicleRaycaster::btVehicleRaycasterResult();
	}


	// Function binds:
	// btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld()
	static int _bind_getM_hitPointInWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitPointInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld() function, expected prototype:\nbtVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld()\nClass arguments details:\n");
		}


		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld(). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitPointInWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld()
	static int _bind_getM_hitNormalInWorld(lua_State *L) {
		if (!_lg_typecheck_getM_hitNormalInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld() function, expected prototype:\nbtVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld()\nClass arguments details:\n");
		}


		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld(). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitNormalInWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction()
	static int _bind_getM_distFraction(lua_State *L) {
		if (!_lg_typecheck_getM_distFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction() function, expected prototype:\nfloat btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction()\nClass arguments details:\n");
		}


		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction(). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		float lret = self->m_distFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld(btVector3 value)
	static int _bind_setM_hitPointInWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitPointInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld(btVector3 value) function, expected prototype:\nvoid btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld function");
		}
		btVector3 value=*value_ptr;

		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVehicleRaycaster::btVehicleRaycasterResult::m_hitPointInWorld(btVector3). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		self->m_hitPointInWorld = value;

		return 0;
	}

	// void btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld(btVector3 value)
	static int _bind_setM_hitNormalInWorld(lua_State *L) {
		if (!_lg_typecheck_setM_hitNormalInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld(btVector3 value) function, expected prototype:\nvoid btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld function");
		}
		btVector3 value=*value_ptr;

		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVehicleRaycaster::btVehicleRaycasterResult::m_hitNormalInWorld(btVector3). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		self->m_hitNormalInWorld = value;

		return 0;
	}

	// void btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction(float value)
	static int _bind_setM_distFraction(lua_State *L) {
		if (!_lg_typecheck_setM_distFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction(float value) function, expected prototype:\nvoid btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btVehicleRaycaster::btVehicleRaycasterResult* self=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVehicleRaycaster::btVehicleRaycasterResult::m_distFraction(float). Got : '%s'",typeid(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,1)).name());
		}
		self->m_distFraction = value;

		return 0;
	}


	// Operator binds:

};

btVehicleRaycaster::btVehicleRaycasterResult* LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_ctor(L);
}

void LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::_bind_dtor(btVehicleRaycaster::btVehicleRaycasterResult* obj) {
	delete obj;
}

const char LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::className[] = "btVehicleRaycaster_btVehicleRaycasterResult";
const char LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::fullName[] = "btVehicleRaycaster::btVehicleRaycasterResult";
const char LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::moduleName[] = "bullet";
const char* LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::parents[] = {0};
const int LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::hash = 50443956;
const int LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::uniqueIDs[] = {50443956,0};

luna_RegType LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::methods[] = {
	{"getM_hitPointInWorld", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_getM_hitPointInWorld},
	{"getM_hitNormalInWorld", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_getM_hitNormalInWorld},
	{"getM_distFraction", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_getM_distFraction},
	{"setM_hitPointInWorld", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_setM_hitPointInWorld},
	{"setM_hitNormalInWorld", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_setM_hitNormalInWorld},
	{"setM_distFraction", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_setM_distFraction},
	{"dynCast", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind_dynCast},
	{"__eq", &luna_wrapper_btVehicleRaycaster_btVehicleRaycasterResult::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult >::enumValues[] = {
	{0,0}
};


