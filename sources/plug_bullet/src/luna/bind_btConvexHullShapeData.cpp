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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexHullShapeData*)");
		}

		btConvexHullShapeData* rhs =(Luna< btConvexHullShapeData >::check(L,2));
		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
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

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexHullShapeData");
		
		return luna_dynamicCast(L,converters,"btConvexHullShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_convexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_unscaledPointsFloatPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_unscaledPointsDoublePtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numUnscaledPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_convexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7968673) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_unscaledPointsFloatPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96449857)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_unscaledPointsDoublePtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89582070)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numUnscaledPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData()
	static int _bind_getM_convexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_convexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData() function, expected prototype:\nbtConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData()\nClass arguments details:\n");
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConvexInternalShapeData btConvexHullShapeData::m_convexInternalShapeData(). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		const btConvexInternalShapeData* lret = &self->m_convexInternalShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexInternalShapeData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr()
	static int _bind_getM_unscaledPointsFloatPtr(lua_State *L) {
		if (!_lg_typecheck_getM_unscaledPointsFloatPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr() function, expected prototype:\nbtVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr()\nClass arguments details:\n");
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData * btConvexHullShapeData::m_unscaledPointsFloatPtr(). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		btVector3FloatData * lret = self->m_unscaledPointsFloatPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr()
	static int _bind_getM_unscaledPointsDoublePtr(lua_State *L) {
		if (!_lg_typecheck_getM_unscaledPointsDoublePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr() function, expected prototype:\nbtVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr()\nClass arguments details:\n");
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData * btConvexHullShapeData::m_unscaledPointsDoublePtr(). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		btVector3DoubleData * lret = self->m_unscaledPointsDoublePtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// int btConvexHullShapeData::m_numUnscaledPoints()
	static int _bind_getM_numUnscaledPoints(lua_State *L) {
		if (!_lg_typecheck_getM_numUnscaledPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexHullShapeData::m_numUnscaledPoints() function, expected prototype:\nint btConvexHullShapeData::m_numUnscaledPoints()\nClass arguments details:\n");
		}


		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexHullShapeData::m_numUnscaledPoints(). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		int lret = self->m_numUnscaledPoints;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)
	static int _bind_setM_convexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_convexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value) function, expected prototype:\nvoid btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)\nClass arguments details:\narg 1 ID = 7968673\n");
		}

		btConvexInternalShapeData* value_ptr=(Luna< btConvexInternalShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexHullShapeData::m_convexInternalShapeData function");
		}
		btConvexInternalShapeData value=*value_ptr;

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_convexInternalShapeData(btConvexInternalShapeData). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		self->m_convexInternalShapeData = value;

		return 0;
	}

	// void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value)
	static int _bind_setM_unscaledPointsFloatPtr(lua_State *L) {
		if (!_lg_typecheck_setM_unscaledPointsFloatPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value) function, expected prototype:\nvoid btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData * value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value=(Luna< btVector3FloatData >::check(L,2));

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_unscaledPointsFloatPtr(btVector3FloatData *). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		self->m_unscaledPointsFloatPtr = value;

		return 0;
	}

	// void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value)
	static int _bind_setM_unscaledPointsDoublePtr(lua_State *L) {
		if (!_lg_typecheck_setM_unscaledPointsDoublePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value) function, expected prototype:\nvoid btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData * value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value=(Luna< btVector3DoubleData >::check(L,2));

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_unscaledPointsDoublePtr(btVector3DoubleData *). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
		}
		self->m_unscaledPointsDoublePtr = value;

		return 0;
	}

	// void btConvexHullShapeData::m_numUnscaledPoints(int value)
	static int _bind_setM_numUnscaledPoints(lua_State *L) {
		if (!_lg_typecheck_setM_numUnscaledPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullShapeData::m_numUnscaledPoints(int value) function, expected prototype:\nvoid btConvexHullShapeData::m_numUnscaledPoints(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btConvexHullShapeData* self=(Luna< btConvexHullShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullShapeData::m_numUnscaledPoints(int). Got : '%s'",typeid(Luna< btConvexHullShapeData >::check(L,1)).name());
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
	{"getM_convexInternalShapeData", &luna_wrapper_btConvexHullShapeData::_bind_getM_convexInternalShapeData},
	{"getM_unscaledPointsFloatPtr", &luna_wrapper_btConvexHullShapeData::_bind_getM_unscaledPointsFloatPtr},
	{"getM_unscaledPointsDoublePtr", &luna_wrapper_btConvexHullShapeData::_bind_getM_unscaledPointsDoublePtr},
	{"getM_numUnscaledPoints", &luna_wrapper_btConvexHullShapeData::_bind_getM_numUnscaledPoints},
	{"setM_convexInternalShapeData", &luna_wrapper_btConvexHullShapeData::_bind_setM_convexInternalShapeData},
	{"setM_unscaledPointsFloatPtr", &luna_wrapper_btConvexHullShapeData::_bind_setM_unscaledPointsFloatPtr},
	{"setM_unscaledPointsDoublePtr", &luna_wrapper_btConvexHullShapeData::_bind_setM_unscaledPointsDoublePtr},
	{"setM_numUnscaledPoints", &luna_wrapper_btConvexHullShapeData::_bind_setM_numUnscaledPoints},
	{"dynCast", &luna_wrapper_btConvexHullShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexHullShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexHullShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexHullShapeData >::enumValues[] = {
	{0,0}
};


