#include <plug_common.h>

class luna_wrapper_btConstraintSetting {
public:
	typedef Luna< btConstraintSetting > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71995903) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConstraintSetting*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConstraintSetting* rhs =(Luna< btConstraintSetting >::check(L,2));
		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
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

		btConstraintSetting* self= (btConstraintSetting*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConstraintSetting >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71995903) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btConstraintSetting >::check(L,1));
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

		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConstraintSetting");
		
		return luna_dynamicCast(L,converters,"btConstraintSetting",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTau(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImpulseClamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTau(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImpulseClamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConstraintSetting::btConstraintSetting()
	static btConstraintSetting* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btConstraintSetting::btConstraintSetting() function, expected prototype:\nbtConstraintSetting::btConstraintSetting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btConstraintSetting();
	}


	// Function binds:
	// float btConstraintSetting::m_tau()
	static int _bind_getTau(lua_State *L) {
		if (!_lg_typecheck_getTau(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintSetting::m_tau() function, expected prototype:\nfloat btConstraintSetting::m_tau()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintSetting::m_tau(). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_tau;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintSetting::m_damping()
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintSetting::m_damping() function, expected prototype:\nfloat btConstraintSetting::m_damping()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintSetting::m_damping(). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintSetting::m_impulseClamp()
	static int _bind_getImpulseClamp(lua_State *L) {
		if (!_lg_typecheck_getImpulseClamp(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintSetting::m_impulseClamp() function, expected prototype:\nfloat btConstraintSetting::m_impulseClamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintSetting::m_impulseClamp(). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_impulseClamp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConstraintSetting::m_tau(float value)
	static int _bind_setTau(lua_State *L) {
		if (!_lg_typecheck_setTau(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintSetting::m_tau(float value) function, expected prototype:\nvoid btConstraintSetting::m_tau(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintSetting::m_tau(float). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_tau = value;

		return 0;
	}

	// void btConstraintSetting::m_damping(float value)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintSetting::m_damping(float value) function, expected prototype:\nvoid btConstraintSetting::m_damping(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintSetting::m_damping(float). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_damping = value;

		return 0;
	}

	// void btConstraintSetting::m_impulseClamp(float value)
	static int _bind_setImpulseClamp(lua_State *L) {
		if (!_lg_typecheck_setImpulseClamp(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintSetting::m_impulseClamp(float value) function, expected prototype:\nvoid btConstraintSetting::m_impulseClamp(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintSetting* self=(Luna< btConstraintSetting >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintSetting::m_impulseClamp(float). Got : '%s'\n%s",typeid(Luna< btConstraintSetting >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_impulseClamp = value;

		return 0;
	}


	// Operator binds:

};

btConstraintSetting* LunaTraits< btConstraintSetting >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConstraintSetting::_bind_ctor(L);
}

void LunaTraits< btConstraintSetting >::_bind_dtor(btConstraintSetting* obj) {
	delete obj;
}

const char LunaTraits< btConstraintSetting >::className[] = "btConstraintSetting";
const char LunaTraits< btConstraintSetting >::fullName[] = "btConstraintSetting";
const char LunaTraits< btConstraintSetting >::moduleName[] = "bullet";
const char* LunaTraits< btConstraintSetting >::parents[] = {0};
const int LunaTraits< btConstraintSetting >::hash = 71995903;
const int LunaTraits< btConstraintSetting >::uniqueIDs[] = {71995903,0};

luna_RegType LunaTraits< btConstraintSetting >::methods[] = {
	{"getTau", &luna_wrapper_btConstraintSetting::_bind_getTau},
	{"getDamping", &luna_wrapper_btConstraintSetting::_bind_getDamping},
	{"getImpulseClamp", &luna_wrapper_btConstraintSetting::_bind_getImpulseClamp},
	{"setTau", &luna_wrapper_btConstraintSetting::_bind_setTau},
	{"setDamping", &luna_wrapper_btConstraintSetting::_bind_setDamping},
	{"setImpulseClamp", &luna_wrapper_btConstraintSetting::_bind_setImpulseClamp},
	{"dynCast", &luna_wrapper_btConstraintSetting::_bind_dynCast},
	{"__eq", &luna_wrapper_btConstraintSetting::_bind___eq},
	{"fromVoid", &luna_wrapper_btConstraintSetting::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConstraintSetting::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConstraintSetting >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConstraintSetting >::enumValues[] = {
	{0,0}
};


