#include <plug_common.h>

class luna_wrapper_btPoint2PointConstraintDoubleData {
public:
	typedef Luna< btPoint2PointConstraintDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21299109) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPoint2PointConstraintDoubleData*)");
		}

		btPoint2PointConstraintDoubleData* rhs =(Luna< btPoint2PointConstraintDoubleData >::check(L,2));
		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
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

		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPoint2PointConstraintDoubleData");
		
		return luna_dynamicCast(L,converters,"btPoint2PointConstraintDoubleData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_pivotInA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_pivotInB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98838043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_pivotInA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_pivotInB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btPoint2PointConstraintDoubleData::m_typeConstraintData()
	static int _bind_getM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btPoint2PointConstraintDoubleData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btPoint2PointConstraintDoubleData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btPoint2PointConstraintDoubleData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInA()
	static int _bind_getM_pivotInA(lua_State *L) {
		if (!_lg_typecheck_getM_pivotInA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInA() function, expected prototype:\nbtVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInA()\nClass arguments details:\n");
		}


		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInA(). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_pivotInA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInB()
	static int _bind_getM_pivotInB(lua_State *L) {
		if (!_lg_typecheck_getM_pivotInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInB() function, expected prototype:\nbtVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInB()\nClass arguments details:\n");
		}


		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btPoint2PointConstraintDoubleData::m_pivotInB(). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_pivotInB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// void btPoint2PointConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btPoint2PointConstraintDoubleData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintDoubleData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintDoubleData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btPoint2PointConstraintDoubleData::m_pivotInA(btVector3DoubleData value)
	static int _bind_setM_pivotInA(lua_State *L) {
		if (!_lg_typecheck_setM_pivotInA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintDoubleData::m_pivotInA(btVector3DoubleData value) function, expected prototype:\nvoid btPoint2PointConstraintDoubleData::m_pivotInA(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintDoubleData::m_pivotInA function");
		}
		btVector3DoubleData value=*value_ptr;

		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintDoubleData::m_pivotInA(btVector3DoubleData). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		self->m_pivotInA = value;

		return 0;
	}

	// void btPoint2PointConstraintDoubleData::m_pivotInB(btVector3DoubleData value)
	static int _bind_setM_pivotInB(lua_State *L) {
		if (!_lg_typecheck_setM_pivotInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintDoubleData::m_pivotInB(btVector3DoubleData value) function, expected prototype:\nvoid btPoint2PointConstraintDoubleData::m_pivotInB(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintDoubleData::m_pivotInB function");
		}
		btVector3DoubleData value=*value_ptr;

		btPoint2PointConstraintDoubleData* self=(Luna< btPoint2PointConstraintDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintDoubleData::m_pivotInB(btVector3DoubleData). Got : '%s'",typeid(Luna< btPoint2PointConstraintDoubleData >::check(L,1)).name());
		}
		self->m_pivotInB = value;

		return 0;
	}


	// Operator binds:

};

btPoint2PointConstraintDoubleData* LunaTraits< btPoint2PointConstraintDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btPoint2PointConstraintDoubleData >::_bind_dtor(btPoint2PointConstraintDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btPoint2PointConstraintDoubleData >::className[] = "btPoint2PointConstraintDoubleData";
const char LunaTraits< btPoint2PointConstraintDoubleData >::fullName[] = "btPoint2PointConstraintDoubleData";
const char LunaTraits< btPoint2PointConstraintDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btPoint2PointConstraintDoubleData >::parents[] = {0};
const int LunaTraits< btPoint2PointConstraintDoubleData >::hash = 21299109;
const int LunaTraits< btPoint2PointConstraintDoubleData >::uniqueIDs[] = {21299109,0};

luna_RegType LunaTraits< btPoint2PointConstraintDoubleData >::methods[] = {
	{"getM_typeConstraintData", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_getM_typeConstraintData},
	{"getM_pivotInA", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_getM_pivotInA},
	{"getM_pivotInB", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_getM_pivotInB},
	{"setM_typeConstraintData", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_setM_typeConstraintData},
	{"setM_pivotInA", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_setM_pivotInA},
	{"setM_pivotInB", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_setM_pivotInB},
	{"dynCast", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btPoint2PointConstraintDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btPoint2PointConstraintDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPoint2PointConstraintDoubleData >::enumValues[] = {
	{0,0}
};

