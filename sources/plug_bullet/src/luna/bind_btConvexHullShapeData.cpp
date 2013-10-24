#include <plug_common.h>

class luna_wrapper_btConvexHullShapeData {
public:
	typedef Luna< btConvexHullShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77818044) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexHullShapeData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConvexHullShapeData* rhs =(Luna< btConvexHullShapeData >::check(L,2));
		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
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

		btConvexHullShapeData* self= (btConvexHullShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexHullShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77818044) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btConvexHullShapeData >::check(L,1));
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

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexHullShapeData");
		
		return luna_dynamicCast(L,converters,"btConvexHullShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnscaledPointsFloatPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnscaledPointsDoublePtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumUnscaledPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7968673) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnscaledPointsFloatPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96449857)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnscaledPointsDoublePtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89582070)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumUnscaledPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData()
	static int _bind_getConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_getConvexInternalShapeData(L)) {
			luaL_error(L, "luna typecheck failed in btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData() function, expected prototype:\nbtConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData(). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexInternalShapeData* lret = &self->m_convexInternalShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexInternalShapeData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr()
	static int _bind_getUnscaledPointsFloatPtr(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPointsFloatPtr(L)) {
			luaL_error(L, "luna typecheck failed in btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr() function, expected prototype:\nbtVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr(). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3FloatData * lret = self->m_unscaledPointsFloatPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr()
	static int _bind_getUnscaledPointsDoublePtr(lua_State *L) {
		if (!_lg_typecheck_getUnscaledPointsDoublePtr(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr() function, expected prototype:\nbtVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr(). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3DoubleData * lret = self->m_unscaledPointsDoublePtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// int btConvexHullShapeData::m_numUnscaledPoints()
	static int _bind_getNumUnscaledPoints(lua_State *L) {
		if (!_lg_typecheck_getNumUnscaledPoints(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexHullShapeData::m_numUnscaledPoints() function, expected prototype:\nint btConvexHullShapeData::m_numUnscaledPoints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexHullShapeData::m_numUnscaledPoints(). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numUnscaledPoints;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)
	static int _bind_setConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_setConvexInternalShapeData(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value) function, expected prototype:\nvoid btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)\nClass arguments details:\narg 1 ID = 7968673\n\n%s",luna_dumpStack(L).c_str());
		}

		btConvexInternalShapeData* value_ptr=(Luna< btConvexInternalShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexHullShapeData::m_convexInternalShapeData function");
		}
		btConvexInternalShapeData value=*value_ptr;

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_convexInternalShapeData = value;

		return 0;
	}

	// void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value)
	static int _bind_setUnscaledPointsFloatPtr(lua_State *L) {
		if (!_lg_typecheck_setUnscaledPointsFloatPtr(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value) function, expected prototype:\nvoid btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value)\nClass arguments details:\narg 1 ID = 96449857\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3FloatData* value=(Luna< btVector3FloatData >::check(L,2));

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData *). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_unscaledPointsFloatPtr = value;

		return 0;
	}

	// void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value)
	static int _bind_setUnscaledPointsDoublePtr(lua_State *L) {
		if (!_lg_typecheck_setUnscaledPointsDoublePtr(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value) function, expected prototype:\nvoid btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value=(Luna< btVector3DoubleData >::check(L,2));

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData *). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_unscaledPointsDoublePtr = value;

		return 0;
	}

	// void btConvexHullShapeData::m_numUnscaledPoints(int value)
	static int _bind_setNumUnscaledPoints(lua_State *L) {
		if (!_lg_typecheck_setNumUnscaledPoints(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_numUnscaledPoints(int value) function, expected prototype:\nvoid btConvexHullShapeData::m_numUnscaledPoints(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_numUnscaledPoints(int). Got : '%s'\n%s",typeid(Luna< btConvexHullShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numUnscaledPoints = value;

		return 0;
	}


	// Operator binds:

};

btConvexHullShapeData* LunaTraits< btConvexHullShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConvexHullShapeData >::_bind_dtor(btConvexHullShapeData* obj) {
	delete obj;
}

const char LunaTraits< btConvexHullShapeData >::className[] = "btConvexHullShapeData";
const char LunaTraits< btConvexHullShapeData >::fullName[] = "btConvexHullShapeData";
const char LunaTraits< btConvexHullShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btConvexHullShapeData >::parents[] = {0};
const int LunaTraits< btConvexHullShapeData >::hash = 77818044;
const int LunaTraits< btConvexHullShapeData >::uniqueIDs[] = {77818044,0};

luna_RegType LunaTraits< btConvexHullShapeData >::methods[] = {
	{"getConvexInternalShapeData", &luna_wrapper_btConvexHullShapeData::_bind_getConvexInternalShapeData},
	{"getUnscaledPointsFloatPtr", &luna_wrapper_btConvexHullShapeData::_bind_getUnscaledPointsFloatPtr},
	{"getUnscaledPointsDoublePtr", &luna_wrapper_btConvexHullShapeData::_bind_getUnscaledPointsDoublePtr},
	{"getNumUnscaledPoints", &luna_wrapper_btConvexHullShapeData::_bind_getNumUnscaledPoints},
	{"setConvexInternalShapeData", &luna_wrapper_btConvexHullShapeData::_bind_setConvexInternalShapeData},
	{"setUnscaledPointsFloatPtr", &luna_wrapper_btConvexHullShapeData::_bind_setUnscaledPointsFloatPtr},
	{"setUnscaledPointsDoublePtr", &luna_wrapper_btConvexHullShapeData::_bind_setUnscaledPointsDoublePtr},
	{"setNumUnscaledPoints", &luna_wrapper_btConvexHullShapeData::_bind_setNumUnscaledPoints},
	{"dynCast", &luna_wrapper_btConvexHullShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexHullShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexHullShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexHullShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexHullShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexHullShapeData >::enumValues[] = {
	{0,0}
};


