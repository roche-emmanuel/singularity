#include <plug_common.h>

class luna_wrapper_btDynamicsWorldFloatData {
public:
	typedef Luna< btDynamicsWorldFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53873546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDynamicsWorldFloatData*)");
		}

		btDynamicsWorldFloatData* rhs =(Luna< btDynamicsWorldFloatData >::check(L,2));
		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
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

		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDynamicsWorldFloatData");
		
		return luna_dynamicCast(L,converters,"btDynamicsWorldFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_solverInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_gravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_solverInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97541958) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_gravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btContactSolverInfoFloatData btDynamicsWorldFloatData::m_solverInfo()
	static int _bind_getM_solverInfo(lua_State *L) {
		if (!_lg_typecheck_getM_solverInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContactSolverInfoFloatData btDynamicsWorldFloatData::m_solverInfo() function, expected prototype:\nbtContactSolverInfoFloatData btDynamicsWorldFloatData::m_solverInfo()\nClass arguments details:\n");
		}


		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btContactSolverInfoFloatData btDynamicsWorldFloatData::m_solverInfo(). Got : '%s'",typeid(Luna< btDynamicsWorldFloatData >::check(L,1)).name());
		}
		const btContactSolverInfoFloatData* lret = &self->m_solverInfo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btContactSolverInfoFloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btDynamicsWorldFloatData::m_gravity()
	static int _bind_getM_gravity(lua_State *L) {
		if (!_lg_typecheck_getM_gravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btDynamicsWorldFloatData::m_gravity() function, expected prototype:\nbtVector3FloatData btDynamicsWorldFloatData::m_gravity()\nClass arguments details:\n");
		}


		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btDynamicsWorldFloatData::m_gravity(). Got : '%s'",typeid(Luna< btDynamicsWorldFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_gravity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// void btDynamicsWorldFloatData::m_solverInfo(btContactSolverInfoFloatData value)
	static int _bind_setM_solverInfo(lua_State *L) {
		if (!_lg_typecheck_setM_solverInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorldFloatData::m_solverInfo(btContactSolverInfoFloatData value) function, expected prototype:\nvoid btDynamicsWorldFloatData::m_solverInfo(btContactSolverInfoFloatData value)\nClass arguments details:\narg 1 ID = 97541958\n");
		}

		btContactSolverInfoFloatData* value_ptr=(Luna< btContactSolverInfoFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDynamicsWorldFloatData::m_solverInfo function");
		}
		btContactSolverInfoFloatData value=*value_ptr;

		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorldFloatData::m_solverInfo(btContactSolverInfoFloatData). Got : '%s'",typeid(Luna< btDynamicsWorldFloatData >::check(L,1)).name());
		}
		self->m_solverInfo = value;

		return 0;
	}

	// void btDynamicsWorldFloatData::m_gravity(btVector3FloatData value)
	static int _bind_setM_gravity(lua_State *L) {
		if (!_lg_typecheck_setM_gravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorldFloatData::m_gravity(btVector3FloatData value) function, expected prototype:\nvoid btDynamicsWorldFloatData::m_gravity(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDynamicsWorldFloatData::m_gravity function");
		}
		btVector3FloatData value=*value_ptr;

		btDynamicsWorldFloatData* self=(Luna< btDynamicsWorldFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorldFloatData::m_gravity(btVector3FloatData). Got : '%s'",typeid(Luna< btDynamicsWorldFloatData >::check(L,1)).name());
		}
		self->m_gravity = value;

		return 0;
	}


	// Operator binds:

};

btDynamicsWorldFloatData* LunaTraits< btDynamicsWorldFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btDynamicsWorldFloatData >::_bind_dtor(btDynamicsWorldFloatData* obj) {
	delete obj;
}

const char LunaTraits< btDynamicsWorldFloatData >::className[] = "btDynamicsWorldFloatData";
const char LunaTraits< btDynamicsWorldFloatData >::fullName[] = "btDynamicsWorldFloatData";
const char LunaTraits< btDynamicsWorldFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btDynamicsWorldFloatData >::parents[] = {0};
const int LunaTraits< btDynamicsWorldFloatData >::hash = 53873546;
const int LunaTraits< btDynamicsWorldFloatData >::uniqueIDs[] = {53873546,0};

luna_RegType LunaTraits< btDynamicsWorldFloatData >::methods[] = {
	{"getM_solverInfo", &luna_wrapper_btDynamicsWorldFloatData::_bind_getM_solverInfo},
	{"getM_gravity", &luna_wrapper_btDynamicsWorldFloatData::_bind_getM_gravity},
	{"setM_solverInfo", &luna_wrapper_btDynamicsWorldFloatData::_bind_setM_solverInfo},
	{"setM_gravity", &luna_wrapper_btDynamicsWorldFloatData::_bind_setM_gravity},
	{"dynCast", &luna_wrapper_btDynamicsWorldFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btDynamicsWorldFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDynamicsWorldFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDynamicsWorldFloatData >::enumValues[] = {
	{0,0}
};


