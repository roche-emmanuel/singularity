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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConstraintRow*)");
		}

		btConstraintRow* rhs =(Luna< btConstraintRow >::check(L,2));
		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
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

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConstraintRow");
		
		return luna_dynamicCast(L,converters,"btConstraintRow",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_rhs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_jacDiagInv(lua_State *L) {
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

	inline static bool _lg_typecheck_getM_accumImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_rhs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_jacDiagInv(lua_State *L) {
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

	inline static bool _lg_typecheck_setM_accumImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float btConstraintRow::m_rhs()
	static int _bind_getM_rhs(lua_State *L) {
		if (!_lg_typecheck_getM_rhs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_rhs() function, expected prototype:\nfloat btConstraintRow::m_rhs()\nClass arguments details:\n");
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_rhs(). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		float lret = self->m_rhs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_jacDiagInv()
	static int _bind_getM_jacDiagInv(lua_State *L) {
		if (!_lg_typecheck_getM_jacDiagInv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_jacDiagInv() function, expected prototype:\nfloat btConstraintRow::m_jacDiagInv()\nClass arguments details:\n");
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_jacDiagInv(). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		float lret = self->m_jacDiagInv;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_lowerLimit()
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_lowerLimit() function, expected prototype:\nfloat btConstraintRow::m_lowerLimit()\nClass arguments details:\n");
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_lowerLimit(). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		float lret = self->m_lowerLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_upperLimit()
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_upperLimit() function, expected prototype:\nfloat btConstraintRow::m_upperLimit()\nClass arguments details:\n");
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_upperLimit(). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		float lret = self->m_upperLimit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConstraintRow::m_accumImpulse()
	static int _bind_getM_accumImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_accumImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConstraintRow::m_accumImpulse() function, expected prototype:\nfloat btConstraintRow::m_accumImpulse()\nClass arguments details:\n");
		}


		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConstraintRow::m_accumImpulse(). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		float lret = self->m_accumImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConstraintRow::m_rhs(float value)
	static int _bind_setM_rhs(lua_State *L) {
		if (!_lg_typecheck_setM_rhs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_rhs(float value) function, expected prototype:\nvoid btConstraintRow::m_rhs(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_rhs(float). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		self->m_rhs = value;

		return 0;
	}

	// void btConstraintRow::m_jacDiagInv(float value)
	static int _bind_setM_jacDiagInv(lua_State *L) {
		if (!_lg_typecheck_setM_jacDiagInv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_jacDiagInv(float value) function, expected prototype:\nvoid btConstraintRow::m_jacDiagInv(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_jacDiagInv(float). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		self->m_jacDiagInv = value;

		return 0;
	}

	// void btConstraintRow::m_lowerLimit(float value)
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_lowerLimit(float value) function, expected prototype:\nvoid btConstraintRow::m_lowerLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_lowerLimit(float). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		self->m_lowerLimit = value;

		return 0;
	}

	// void btConstraintRow::m_upperLimit(float value)
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_upperLimit(float value) function, expected prototype:\nvoid btConstraintRow::m_upperLimit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_upperLimit(float). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
		}
		self->m_upperLimit = value;

		return 0;
	}

	// void btConstraintRow::m_accumImpulse(float value)
	static int _bind_setM_accumImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_accumImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintRow::m_accumImpulse(float value) function, expected prototype:\nvoid btConstraintRow::m_accumImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConstraintRow* self=(Luna< btConstraintRow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintRow::m_accumImpulse(float). Got : '%s'",typeid(Luna< btConstraintRow >::check(L,1)).name());
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
	{"getM_rhs", &luna_wrapper_btConstraintRow::_bind_getM_rhs},
	{"getM_jacDiagInv", &luna_wrapper_btConstraintRow::_bind_getM_jacDiagInv},
	{"getM_lowerLimit", &luna_wrapper_btConstraintRow::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btConstraintRow::_bind_getM_upperLimit},
	{"getM_accumImpulse", &luna_wrapper_btConstraintRow::_bind_getM_accumImpulse},
	{"setM_rhs", &luna_wrapper_btConstraintRow::_bind_setM_rhs},
	{"setM_jacDiagInv", &luna_wrapper_btConstraintRow::_bind_setM_jacDiagInv},
	{"setM_lowerLimit", &luna_wrapper_btConstraintRow::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btConstraintRow::_bind_setM_upperLimit},
	{"setM_accumImpulse", &luna_wrapper_btConstraintRow::_bind_setM_accumImpulse},
	{"dynCast", &luna_wrapper_btConstraintRow::_bind_dynCast},
	{"__eq", &luna_wrapper_btConstraintRow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btConstraintRow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConstraintRow >::enumValues[] = {
	{0,0}
};

