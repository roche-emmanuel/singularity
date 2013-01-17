#include <plug_common.h>

class luna_wrapper_btCollisionWorld_LocalShapeInfo {
public:
	typedef Luna< btCollisionWorld::LocalShapeInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68696671) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::LocalShapeInfo*)");
		}

		btCollisionWorld::LocalShapeInfo* rhs =(Luna< btCollisionWorld::LocalShapeInfo >::check(L,2));
		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
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

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::LocalShapeInfo");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::LocalShapeInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_shapePart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_shapePart(lua_State *L) {
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
	// int btCollisionWorld::LocalShapeInfo::m_shapePart()
	static int _bind_getM_shapePart(lua_State *L) {
		if (!_lg_typecheck_getM_shapePart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionWorld::LocalShapeInfo::m_shapePart() function, expected prototype:\nint btCollisionWorld::LocalShapeInfo::m_shapePart()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionWorld::LocalShapeInfo::m_shapePart(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name());
		}
		int lret = self->m_shapePart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionWorld::LocalShapeInfo::m_triangleIndex()
	static int _bind_getM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_getM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionWorld::LocalShapeInfo::m_triangleIndex() function, expected prototype:\nint btCollisionWorld::LocalShapeInfo::m_triangleIndex()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionWorld::LocalShapeInfo::m_triangleIndex(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::LocalShapeInfo::m_shapePart(int value)
	static int _bind_setM_shapePart(lua_State *L) {
		if (!_lg_typecheck_setM_shapePart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalShapeInfo::m_shapePart(int value) function, expected prototype:\nvoid btCollisionWorld::LocalShapeInfo::m_shapePart(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalShapeInfo::m_shapePart(int). Got : '%s'",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name());
		}
		self->m_shapePart = value;

		return 0;
	}

	// void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value)
	static int _bind_setM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_setM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value) function, expected prototype:\nvoid btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int). Got : '%s'",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name());
		}
		self->m_triangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btCollisionWorld::LocalShapeInfo* LunaTraits< btCollisionWorld::LocalShapeInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCollisionWorld::LocalShapeInfo >::_bind_dtor(btCollisionWorld::LocalShapeInfo* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::LocalShapeInfo >::className[] = "btCollisionWorld_LocalShapeInfo";
const char LunaTraits< btCollisionWorld::LocalShapeInfo >::fullName[] = "btCollisionWorld::LocalShapeInfo";
const char LunaTraits< btCollisionWorld::LocalShapeInfo >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::LocalShapeInfo >::parents[] = {0};
const int LunaTraits< btCollisionWorld::LocalShapeInfo >::hash = 68696671;
const int LunaTraits< btCollisionWorld::LocalShapeInfo >::uniqueIDs[] = {68696671,0};

luna_RegType LunaTraits< btCollisionWorld::LocalShapeInfo >::methods[] = {
	{"getM_shapePart", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_getM_shapePart},
	{"getM_triangleIndex", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_getM_triangleIndex},
	{"setM_shapePart", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_setM_shapePart},
	{"setM_triangleIndex", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_setM_triangleIndex},
	{"dynCast", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::LocalShapeInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::LocalShapeInfo >::enumValues[] = {
	{0,0}
};


