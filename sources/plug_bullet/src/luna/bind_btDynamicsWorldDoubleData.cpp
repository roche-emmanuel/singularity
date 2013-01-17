#include <plug_common.h>

class luna_wrapper_btDynamicsWorldDoubleData {
public:
	typedef Luna< btDynamicsWorldDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73649389) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDynamicsWorldDoubleData*)");
		}

		btDynamicsWorldDoubleData* rhs =(Luna< btDynamicsWorldDoubleData >::check(L,2));
		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
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

		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDynamicsWorldDoubleData");
		
		return luna_dynamicCast(L,converters,"btDynamicsWorldDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,29375914) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_gravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btContactSolverInfoDoubleData btDynamicsWorldDoubleData::m_solverInfo()
	static int _bind_getM_solverInfo(lua_State *L) {
		if (!_lg_typecheck_getM_solverInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContactSolverInfoDoubleData btDynamicsWorldDoubleData::m_solverInfo() function, expected prototype:\nbtContactSolverInfoDoubleData btDynamicsWorldDoubleData::m_solverInfo()\nClass arguments details:\n");
		}


		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btContactSolverInfoDoubleData btDynamicsWorldDoubleData::m_solverInfo(). Got : '%s'",typeid(Luna< btDynamicsWorldDoubleData >::check(L,1)).name());
		}
		const btContactSolverInfoDoubleData* lret = &self->m_solverInfo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btContactSolverInfoDoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btDynamicsWorldDoubleData::m_gravity()
	static int _bind_getM_gravity(lua_State *L) {
		if (!_lg_typecheck_getM_gravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btDynamicsWorldDoubleData::m_gravity() function, expected prototype:\nbtVector3DoubleData btDynamicsWorldDoubleData::m_gravity()\nClass arguments details:\n");
		}


		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btDynamicsWorldDoubleData::m_gravity(). Got : '%s'",typeid(Luna< btDynamicsWorldDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_gravity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// void btDynamicsWorldDoubleData::m_solverInfo(btContactSolverInfoDoubleData value)
	static int _bind_setM_solverInfo(lua_State *L) {
		if (!_lg_typecheck_setM_solverInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorldDoubleData::m_solverInfo(btContactSolverInfoDoubleData value) function, expected prototype:\nvoid btDynamicsWorldDoubleData::m_solverInfo(btContactSolverInfoDoubleData value)\nClass arguments details:\narg 1 ID = 29375914\n");
		}

		btContactSolverInfoDoubleData* value_ptr=(Luna< btContactSolverInfoDoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDynamicsWorldDoubleData::m_solverInfo function");
		}
		btContactSolverInfoDoubleData value=*value_ptr;

		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorldDoubleData::m_solverInfo(btContactSolverInfoDoubleData). Got : '%s'",typeid(Luna< btDynamicsWorldDoubleData >::check(L,1)).name());
		}
		self->m_solverInfo = value;

		return 0;
	}

	// void btDynamicsWorldDoubleData::m_gravity(btVector3DoubleData value)
	static int _bind_setM_gravity(lua_State *L) {
		if (!_lg_typecheck_setM_gravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorldDoubleData::m_gravity(btVector3DoubleData value) function, expected prototype:\nvoid btDynamicsWorldDoubleData::m_gravity(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDynamicsWorldDoubleData::m_gravity function");
		}
		btVector3DoubleData value=*value_ptr;

		btDynamicsWorldDoubleData* self=(Luna< btDynamicsWorldDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorldDoubleData::m_gravity(btVector3DoubleData). Got : '%s'",typeid(Luna< btDynamicsWorldDoubleData >::check(L,1)).name());
		}
		self->m_gravity = value;

		return 0;
	}


	// Operator binds:

};

btDynamicsWorldDoubleData* LunaTraits< btDynamicsWorldDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btDynamicsWorldDoubleData >::_bind_dtor(btDynamicsWorldDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btDynamicsWorldDoubleData >::className[] = "btDynamicsWorldDoubleData";
const char LunaTraits< btDynamicsWorldDoubleData >::fullName[] = "btDynamicsWorldDoubleData";
const char LunaTraits< btDynamicsWorldDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btDynamicsWorldDoubleData >::parents[] = {0};
const int LunaTraits< btDynamicsWorldDoubleData >::hash = 73649389;
const int LunaTraits< btDynamicsWorldDoubleData >::uniqueIDs[] = {73649389,0};

luna_RegType LunaTraits< btDynamicsWorldDoubleData >::methods[] = {
	{"getM_solverInfo", &luna_wrapper_btDynamicsWorldDoubleData::_bind_getM_solverInfo},
	{"getM_gravity", &luna_wrapper_btDynamicsWorldDoubleData::_bind_getM_gravity},
	{"setM_solverInfo", &luna_wrapper_btDynamicsWorldDoubleData::_bind_setM_solverInfo},
	{"setM_gravity", &luna_wrapper_btDynamicsWorldDoubleData::_bind_setM_gravity},
	{"dynCast", &luna_wrapper_btDynamicsWorldDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btDynamicsWorldDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDynamicsWorldDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDynamicsWorldDoubleData >::enumValues[] = {
	{0,0}
};


