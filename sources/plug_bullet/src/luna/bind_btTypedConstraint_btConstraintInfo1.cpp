#include <plug_common.h>

class luna_wrapper_btTypedConstraint_btConstraintInfo1 {
public:
	typedef Luna< btTypedConstraint::btConstraintInfo1 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17243935) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedConstraint::btConstraintInfo1*)");
		}

		btTypedConstraint::btConstraintInfo1* rhs =(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));
		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
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

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTypedConstraint::btConstraintInfo1");
		
		return luna_dynamicCast(L,converters,"btTypedConstraint::btConstraintInfo1",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_numConstraintRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNub(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_numConstraintRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btTypedConstraint::btConstraintInfo1::m_numConstraintRows()
	static int _bind_getM_numConstraintRows(lua_State *L) {
		if (!_lg_typecheck_getM_numConstraintRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo1::m_numConstraintRows() function, expected prototype:\nint btTypedConstraint::btConstraintInfo1::m_numConstraintRows()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo1::m_numConstraintRows(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name());
		}
		int lret = self->m_numConstraintRows;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraint::btConstraintInfo1::nub()
	static int _bind_getNub(lua_State *L) {
		if (!_lg_typecheck_getNub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo1::nub() function, expected prototype:\nint btTypedConstraint::btConstraintInfo1::nub()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo1::nub(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name());
		}
		int lret = self->nub;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value)
	static int _bind_setM_numConstraintRows(lua_State *L) {
		if (!_lg_typecheck_setM_numConstraintRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name());
		}
		self->m_numConstraintRows = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo1::nub(int value)
	static int _bind_setNub(lua_State *L) {
		if (!_lg_typecheck_setNub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo1::nub(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo1::nub(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo1::nub(int). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name());
		}
		self->nub = value;

		return 0;
	}


	// Operator binds:

};

btTypedConstraint::btConstraintInfo1* LunaTraits< btTypedConstraint::btConstraintInfo1 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTypedConstraint::btConstraintInfo1 >::_bind_dtor(btTypedConstraint::btConstraintInfo1* obj) {
	delete obj;
}

const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::className[] = "btTypedConstraint_btConstraintInfo1";
const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::fullName[] = "btTypedConstraint::btConstraintInfo1";
const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::moduleName[] = "bullet";
const char* LunaTraits< btTypedConstraint::btConstraintInfo1 >::parents[] = {0};
const int LunaTraits< btTypedConstraint::btConstraintInfo1 >::hash = 17243935;
const int LunaTraits< btTypedConstraint::btConstraintInfo1 >::uniqueIDs[] = {17243935,0};

luna_RegType LunaTraits< btTypedConstraint::btConstraintInfo1 >::methods[] = {
	{"getM_numConstraintRows", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_getM_numConstraintRows},
	{"getNub", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_getNub},
	{"setM_numConstraintRows", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_setM_numConstraintRows},
	{"setNub", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_setNub},
	{"dynCast", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraint::btConstraintInfo1 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraint::btConstraintInfo1 >::enumValues[] = {
	{0,0}
};


