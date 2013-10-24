#include <plug_common.h>

class luna_wrapper_btOptimizedBvhNodeDoubleData {
public:
	typedef Luna< btOptimizedBvhNodeDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92362319) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOptimizedBvhNodeDoubleData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btOptimizedBvhNodeDoubleData* rhs =(Luna< btOptimizedBvhNodeDoubleData >::check(L,2));
		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
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

		btOptimizedBvhNodeDoubleData* self= (btOptimizedBvhNodeDoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btOptimizedBvhNodeDoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92362319) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
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

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOptimizedBvhNodeDoubleData");
		
		return luna_dynamicCast(L,converters,"btOptimizedBvhNodeDoubleData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getAabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubPart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubPart(lua_State *L) {
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
	// btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMinOrg()
	static int _bind_getAabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_getAabbMinOrg(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMinOrg() function, expected prototype:\nbtVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMinOrg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMinOrg(). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_aabbMinOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMaxOrg()
	static int _bind_getAabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_getAabbMaxOrg(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMaxOrg() function, expected prototype:\nbtVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMaxOrg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btOptimizedBvhNodeDoubleData::m_aabbMaxOrg(). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_aabbMaxOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// int btOptimizedBvhNodeDoubleData::m_escapeIndex()
	static int _bind_getEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeDoubleData::m_escapeIndex() function, expected prototype:\nint btOptimizedBvhNodeDoubleData::m_escapeIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeDoubleData::m_escapeIndex(). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_escapeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNodeDoubleData::m_subPart()
	static int _bind_getSubPart(lua_State *L) {
		if (!_lg_typecheck_getSubPart(L)) {
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeDoubleData::m_subPart() function, expected prototype:\nint btOptimizedBvhNodeDoubleData::m_subPart()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeDoubleData::m_subPart(). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_subPart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNodeDoubleData::m_triangleIndex()
	static int _bind_getTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNodeDoubleData::m_triangleIndex() function, expected prototype:\nint btOptimizedBvhNodeDoubleData::m_triangleIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNodeDoubleData::m_triangleIndex(). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btOptimizedBvhNodeDoubleData::m_aabbMinOrg(btVector3DoubleData value)
	static int _bind_setAabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_setAabbMinOrg(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeDoubleData::m_aabbMinOrg(btVector3DoubleData value) function, expected prototype:\nvoid btOptimizedBvhNodeDoubleData::m_aabbMinOrg(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNodeDoubleData::m_aabbMinOrg function");
		}
		btVector3DoubleData value=*value_ptr;

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeDoubleData::m_aabbMinOrg(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_aabbMinOrg = value;

		return 0;
	}

	// void btOptimizedBvhNodeDoubleData::m_aabbMaxOrg(btVector3DoubleData value)
	static int _bind_setAabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_setAabbMaxOrg(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeDoubleData::m_aabbMaxOrg(btVector3DoubleData value) function, expected prototype:\nvoid btOptimizedBvhNodeDoubleData::m_aabbMaxOrg(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNodeDoubleData::m_aabbMaxOrg function");
		}
		btVector3DoubleData value=*value_ptr;

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeDoubleData::m_aabbMaxOrg(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_aabbMaxOrg = value;

		return 0;
	}

	// void btOptimizedBvhNodeDoubleData::m_escapeIndex(int value)
	static int _bind_setEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeDoubleData::m_escapeIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNodeDoubleData::m_escapeIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeDoubleData::m_escapeIndex(int). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_escapeIndex = value;

		return 0;
	}

	// void btOptimizedBvhNodeDoubleData::m_subPart(int value)
	static int _bind_setSubPart(lua_State *L) {
		if (!_lg_typecheck_setSubPart(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeDoubleData::m_subPart(int value) function, expected prototype:\nvoid btOptimizedBvhNodeDoubleData::m_subPart(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeDoubleData::m_subPart(int). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_subPart = value;

		return 0;
	}

	// void btOptimizedBvhNodeDoubleData::m_triangleIndex(int value)
	static int _bind_setTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_setTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNodeDoubleData::m_triangleIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNodeDoubleData::m_triangleIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNodeDoubleData* self=(Luna< btOptimizedBvhNodeDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNodeDoubleData::m_triangleIndex(int). Got : '%s'\n%s",typeid(Luna< btOptimizedBvhNodeDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_triangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btOptimizedBvhNodeDoubleData* LunaTraits< btOptimizedBvhNodeDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btOptimizedBvhNodeDoubleData >::_bind_dtor(btOptimizedBvhNodeDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btOptimizedBvhNodeDoubleData >::className[] = "btOptimizedBvhNodeDoubleData";
const char LunaTraits< btOptimizedBvhNodeDoubleData >::fullName[] = "btOptimizedBvhNodeDoubleData";
const char LunaTraits< btOptimizedBvhNodeDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btOptimizedBvhNodeDoubleData >::parents[] = {0};
const int LunaTraits< btOptimizedBvhNodeDoubleData >::hash = 92362319;
const int LunaTraits< btOptimizedBvhNodeDoubleData >::uniqueIDs[] = {92362319,0};

luna_RegType LunaTraits< btOptimizedBvhNodeDoubleData >::methods[] = {
	{"getAabbMinOrg", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_getAabbMinOrg},
	{"getAabbMaxOrg", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_getAabbMaxOrg},
	{"getEscapeIndex", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_getEscapeIndex},
	{"getSubPart", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_getSubPart},
	{"getTriangleIndex", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_getTriangleIndex},
	{"setAabbMinOrg", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_setAabbMinOrg},
	{"setAabbMaxOrg", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_setAabbMaxOrg},
	{"setEscapeIndex", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_setEscapeIndex},
	{"setSubPart", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_setSubPart},
	{"setTriangleIndex", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_setTriangleIndex},
	{"dynCast", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btOptimizedBvhNodeDoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btOptimizedBvhNodeDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOptimizedBvhNodeDoubleData >::enumValues[] = {
	{0,0}
};


