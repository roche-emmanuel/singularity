#include <plug_common.h>

class luna_wrapper_btConstraintRow {
public:
	typedef Luna< btConstraintRow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47364139) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConstraintRow*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConstraintRow* rhs =(Luna< btConstraintRow >::check(L,2));
		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
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

		btConstraintRow* self= (btConstraintRow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConstraintRow >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47364139) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btConstraintRow >::check(L,1));
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

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConstraintRow");
		
		return luna_dynamicCast(L,converters,"btConstraintRow",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRhs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJacDiagInv(lua_State *L) {
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

	inline static bool _lg_typecheck_getAccumImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRhs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJacDiagInv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccumImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float btConstraintRow::m_rhs()
	static int _bind_getRhs(lua_State *L) {
		if (!_lg_typecheck_getRhs(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_rhs() function, expected prototype:\nfloat btConstraintRow::m_rhs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_rhs(). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_rhs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_jacDiagInv()
	static int _bind_getJacDiagInv(lua_State *L) {
		if (!_lg_typecheck_getJacDiagInv(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_jacDiagInv() function, expected prototype:\nfloat btConstraintRow::m_jacDiagInv()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_jacDiagInv(). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_jacDiagInv;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_lowerLimit()
	static int _bind_getLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_lowerLimit() function, expected prototype:\nfloat btConstraintRow::m_lowerLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_lowerLimit(). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_upperLimit()
	static int _bind_getUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLimit(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_upperLimit() function, expected prototype:\nfloat btConstraintRow::m_upperLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_upperLimit(). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_accumImpulse()
	static int _bind_getAccumImpulse(lua_State *L) {
		if (!_lg_typecheck_getAccumImpulse(L)) {
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_accumImpulse() function, expected prototype:\nfloat btConstraintRow::m_accumImpulse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_accumImpulse(). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_accumImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConstraintRow::m_rhs(float value)
	static int _bind_setRhs(lua_State *L) {
		if (!_lg_typecheck_setRhs(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_rhs(float value) function, expected prototype:\nvoid btConstraintRow::m_rhs(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_rhs(float). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_rhs = value;

		return 0;
	}

	// void btConstraintRow::m_jacDiagInv(float value)
	static int _bind_setJacDiagInv(lua_State *L) {
		if (!_lg_typecheck_setJacDiagInv(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_jacDiagInv(float value) function, expected prototype:\nvoid btConstraintRow::m_jacDiagInv(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_jacDiagInv(float). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_jacDiagInv = value;

		return 0;
	}

	// void btConstraintRow::m_lowerLimit(float value)
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_lowerLimit(float value) function, expected prototype:\nvoid btConstraintRow::m_lowerLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_lowerLimit(float). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btConstraintRow::m_upperLimit(float value)
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_upperLimit(float value) function, expected prototype:\nvoid btConstraintRow::m_upperLimit(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_upperLimit(float). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btConstraintRow::m_accumImpulse(float value)
	static int _bind_setAccumImpulse(lua_State *L) {
		if (!_lg_typecheck_setAccumImpulse(L)) {
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_accumImpulse(float value) function, expected prototype:\nvoid btConstraintRow::m_accumImpulse(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_accumImpulse(float). Got : '%s'\n%s",typeid(Luna< btConstraintRow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_accumImpulse = value;

		return 0;
	}


	// Operator binds:

};

btConstraintRow* LunaTraits< btConstraintRow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConstraintRow >::_bind_dtor(btConstraintRow* obj) {
	delete obj;
}

const char LunaTraits< btConstraintRow >::className[] = "btConstraintRow";
const char LunaTraits< btConstraintRow >::fullName[] = "btConstraintRow";
const char LunaTraits< btConstraintRow >::moduleName[] = "bullet";
const char* LunaTraits< btConstraintRow >::parents[] = {0};
const int LunaTraits< btConstraintRow >::hash = 47364139;
const int LunaTraits< btConstraintRow >::uniqueIDs[] = {47364139,0};

luna_RegType LunaTraits< btConstraintRow >::methods[] = {
	{"getRhs", &luna_wrapper_btConstraintRow::_bind_getRhs},
	{"getJacDiagInv", &luna_wrapper_btConstraintRow::_bind_getJacDiagInv},
	{"getLowerLimit", &luna_wrapper_btConstraintRow::_bind_getLowerLimit},
	{"getUpperLimit", &luna_wrapper_btConstraintRow::_bind_getUpperLimit},
	{"getAccumImpulse", &luna_wrapper_btConstraintRow::_bind_getAccumImpulse},
	{"setRhs", &luna_wrapper_btConstraintRow::_bind_setRhs},
	{"setJacDiagInv", &luna_wrapper_btConstraintRow::_bind_setJacDiagInv},
	{"setLowerLimit", &luna_wrapper_btConstraintRow::_bind_setLowerLimit},
	{"setUpperLimit", &luna_wrapper_btConstraintRow::_bind_setUpperLimit},
	{"setAccumImpulse", &luna_wrapper_btConstraintRow::_bind_setAccumImpulse},
	{"dynCast", &luna_wrapper_btConstraintRow::_bind_dynCast},
	{"__eq", &luna_wrapper_btConstraintRow::_bind___eq},
	{"fromVoid", &luna_wrapper_btConstraintRow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConstraintRow::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConstraintRow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConstraintRow >::enumValues[] = {
	{0,0}
};


