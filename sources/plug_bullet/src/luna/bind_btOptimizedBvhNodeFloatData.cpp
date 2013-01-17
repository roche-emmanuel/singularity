#include <plug_common.h>

class luna_wrapper_btOptimizedBvhNodeFloatData {
public:
	typedef Luna< btOptimizedBvhNodeFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22170580) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOptimizedBvhNodeFloatData*)");
		}

		btOptimizedBvhNodeFloatData* rhs =(Luna< btOptimizedBvhNodeFloatData >::check(L,2));
		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
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

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOptimizedBvhNodeFloatData");
		
		return luna_dynamicCast(L,converters,"btOptimizedBvhNodeFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_aabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_aabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_escapeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_subPart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_aabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_aabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_escapeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_subPart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMinOrg()
	static int _bind_getM_aabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_getM_aabbMinOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMinOrg() function, expected prototype:\nbtVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMinOrg()\nClass arguments details:\n");
		}


		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMinOrg(). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_aabbMinOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMaxOrg()
	static int _bind_getM_aabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_getM_aabbMaxOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMaxOrg() function, expected prototype:\nbtVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMaxOrg()\nClass arguments details:\n");
		}


		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btOptimizedBvhNodeFloatData::m_aabbMaxOrg(). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_aabbMaxOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// int btOptimizedBvhNodeFloatData::m_escapeIndex()
	static int _bind_getM_escapeIndex(lua_State *L) {
		if (!_lg_typecheck_getM_escapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeFloatData::m_escapeIndex() function, expected prototype:\nint btOptimizedBvhNodeFloatData::m_escapeIndex()\nClass arguments details:\n");
		}


		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeFloatData::m_escapeIndex(). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		int lret = self->m_escapeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNodeFloatData::m_subPart()
	static int _bind_getM_subPart(lua_State *L) {
		if (!_lg_typecheck_getM_subPart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeFloatData::m_subPart() function, expected prototype:\nint btOptimizedBvhNodeFloatData::m_subPart()\nClass arguments details:\n");
		}


		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeFloatData::m_subPart(). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		int lret = self->m_subPart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNodeFloatData::m_triangleIndex()
	static int _bind_getM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_getM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeFloatData::m_triangleIndex() function, expected prototype:\nint btOptimizedBvhNodeFloatData::m_triangleIndex()\nClass arguments details:\n");
		}


		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeFloatData::m_triangleIndex(). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btOptimizedBvhNodeFloatData::m_aabbMinOrg(btVector3FloatData value)
	static int _bind_setM_aabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_setM_aabbMinOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeFloatData::m_aabbMinOrg(btVector3FloatData value) function, expected prototype:\nvoid btOptimizedBvhNodeFloatData::m_aabbMinOrg(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNodeFloatData::m_aabbMinOrg function");
		}
		btVector3FloatData value=*value_ptr;

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeFloatData::m_aabbMinOrg(btVector3FloatData). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		self->m_aabbMinOrg = value;

		return 0;
	}

	// void btOptimizedBvhNodeFloatData::m_aabbMaxOrg(btVector3FloatData value)
	static int _bind_setM_aabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_setM_aabbMaxOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeFloatData::m_aabbMaxOrg(btVector3FloatData value) function, expected prototype:\nvoid btOptimizedBvhNodeFloatData::m_aabbMaxOrg(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNodeFloatData::m_aabbMaxOrg function");
		}
		btVector3FloatData value=*value_ptr;

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeFloatData::m_aabbMaxOrg(btVector3FloatData). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		self->m_aabbMaxOrg = value;

		return 0;
	}

	// void btOptimizedBvhNodeFloatData::m_escapeIndex(int value)
	static int _bind_setM_escapeIndex(lua_State *L) {
		if (!_lg_typecheck_setM_escapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeFloatData::m_escapeIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNodeFloatData::m_escapeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeFloatData::m_escapeIndex(int). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		self->m_escapeIndex = value;

		return 0;
	}

	// void btOptimizedBvhNodeFloatData::m_subPart(int value)
	static int _bind_setM_subPart(lua_State *L) {
		if (!_lg_typecheck_setM_subPart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeFloatData::m_subPart(int value) function, expected prototype:\nvoid btOptimizedBvhNodeFloatData::m_subPart(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeFloatData::m_subPart(int). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		self->m_subPart = value;

		return 0;
	}

	// void btOptimizedBvhNodeFloatData::m_triangleIndex(int value)
	static int _bind_setM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_setM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeFloatData::m_triangleIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNodeFloatData::m_triangleIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeFloatData* self=(Luna< btOptimizedBvhNodeFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeFloatData::m_triangleIndex(int). Got : '%s'",typeid(Luna< btOptimizedBvhNodeFloatData >::check(L,1)).name());
		}
		self->m_triangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btOptimizedBvhNodeFloatData* LunaTraits< btOptimizedBvhNodeFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btOptimizedBvhNodeFloatData >::_bind_dtor(btOptimizedBvhNodeFloatData* obj) {
	delete obj;
}

const char LunaTraits< btOptimizedBvhNodeFloatData >::className[] = "btOptimizedBvhNodeFloatData";
const char LunaTraits< btOptimizedBvhNodeFloatData >::fullName[] = "btOptimizedBvhNodeFloatData";
const char LunaTraits< btOptimizedBvhNodeFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btOptimizedBvhNodeFloatData >::parents[] = {0};
const int LunaTraits< btOptimizedBvhNodeFloatData >::hash = 22170580;
const int LunaTraits< btOptimizedBvhNodeFloatData >::uniqueIDs[] = {22170580,0};

luna_RegType LunaTraits< btOptimizedBvhNodeFloatData >::methods[] = {
	{"getM_aabbMinOrg", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_getM_aabbMinOrg},
	{"getM_aabbMaxOrg", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_getM_aabbMaxOrg},
	{"getM_escapeIndex", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_getM_escapeIndex},
	{"getM_subPart", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_getM_subPart},
	{"getM_triangleIndex", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_getM_triangleIndex},
	{"setM_aabbMinOrg", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_setM_aabbMinOrg},
	{"setM_aabbMaxOrg", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_setM_aabbMaxOrg},
	{"setM_escapeIndex", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_setM_escapeIndex},
	{"setM_subPart", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_setM_subPart},
	{"setM_triangleIndex", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_setM_triangleIndex},
	{"dynCast", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btOptimizedBvhNodeFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btOptimizedBvhNodeFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOptimizedBvhNodeFloatData >::enumValues[] = {
	{0,0}
};

