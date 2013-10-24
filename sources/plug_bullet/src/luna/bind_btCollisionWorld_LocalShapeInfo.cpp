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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::LocalShapeInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld::LocalShapeInfo* rhs =(Luna< btCollisionWorld::LocalShapeInfo >::check(L,2));
		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
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

		btCollisionWorld::LocalShapeInfo* self= (btCollisionWorld::LocalShapeInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld::LocalShapeInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68696671) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
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

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::LocalShapeInfo");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::LocalShapeInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getShapePart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShapePart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btCollisionWorld::LocalShapeInfo::m_shapePart()
	static int _bind_getShapePart(lua_State *L) {
		if (!_lg_typecheck_getShapePart(L)) {
			luaL_error(L, "luna typecheck failed in int btCollisionWorld::LocalShapeInfo::m_shapePart() function, expected prototype:\nint btCollisionWorld::LocalShapeInfo::m_shapePart()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCollisionWorld::LocalShapeInfo::m_shapePart(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_shapePart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionWorld::LocalShapeInfo::m_triangleIndex()
	static int _bind_getTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btCollisionWorld::LocalShapeInfo::m_triangleIndex() function, expected prototype:\nint btCollisionWorld::LocalShapeInfo::m_triangleIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCollisionWorld::LocalShapeInfo::m_triangleIndex(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::LocalShapeInfo::m_shapePart(int value)
	static int _bind_setShapePart(lua_State *L) {
		if (!_lg_typecheck_setShapePart(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalShapeInfo::m_shapePart(int value) function, expected prototype:\nvoid btCollisionWorld::LocalShapeInfo::m_shapePart(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalShapeInfo::m_shapePart(int). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_shapePart = value;

		return 0;
	}

	// void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value)
	static int _bind_setTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_setTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value) function, expected prototype:\nvoid btCollisionWorld::LocalShapeInfo::m_triangleIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionWorld::LocalShapeInfo* self=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalShapeInfo::m_triangleIndex(int). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::LocalShapeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getShapePart", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_getShapePart},
	{"getTriangleIndex", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_getTriangleIndex},
	{"setShapePart", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_setShapePart},
	{"setTriangleIndex", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_setTriangleIndex},
	{"dynCast", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld_LocalShapeInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::LocalShapeInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::LocalShapeInfo >::enumValues[] = {
	{0,0}
};


