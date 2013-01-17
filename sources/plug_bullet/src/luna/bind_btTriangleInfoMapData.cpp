#include <plug_common.h>

class luna_wrapper_btTriangleInfoMapData {
public:
	typedef Luna< btTriangleInfoMapData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61372357) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleInfoMapData*)");
		}

		btTriangleInfoMapData* rhs =(Luna< btTriangleInfoMapData >::check(L,2));
		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
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

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangleInfoMapData");
		
		return luna_dynamicCast(L,converters,"btTriangleInfoMapData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_hashTablePtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_nextPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_valueArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_keyArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_convexEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_planarEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_equalVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_edgeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_zeroAreaThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_nextSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hashTableSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numKeys(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_hashTablePtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_nextPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_valueArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,90100326)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_keyArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_convexEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_planarEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_equalVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_edgeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_zeroAreaThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_nextSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hashTableSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numValues(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numKeys(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int * btTriangleInfoMapData::m_hashTablePtr()
	static int _bind_getM_hashTablePtr(lua_State *L) {
		if (!_lg_typecheck_getM_hashTablePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int * btTriangleInfoMapData::m_hashTablePtr() function, expected prototype:\nint * btTriangleInfoMapData::m_hashTablePtr()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int * btTriangleInfoMapData::m_hashTablePtr(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int * lret = self->m_hashTablePtr;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int * btTriangleInfoMapData::m_nextPtr()
	static int _bind_getM_nextPtr(lua_State *L) {
		if (!_lg_typecheck_getM_nextPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int * btTriangleInfoMapData::m_nextPtr() function, expected prototype:\nint * btTriangleInfoMapData::m_nextPtr()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int * btTriangleInfoMapData::m_nextPtr(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int * lret = self->m_nextPtr;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// btTriangleInfoData * btTriangleInfoMapData::m_valueArrayPtr()
	static int _bind_getM_valueArrayPtr(lua_State *L) {
		if (!_lg_typecheck_getM_valueArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleInfoData * btTriangleInfoMapData::m_valueArrayPtr() function, expected prototype:\nbtTriangleInfoData * btTriangleInfoMapData::m_valueArrayPtr()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTriangleInfoData * btTriangleInfoMapData::m_valueArrayPtr(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		btTriangleInfoData * lret = self->m_valueArrayPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTriangleInfoData >::push(L,lret,false);

		return 1;
	}

	// int * btTriangleInfoMapData::m_keyArrayPtr()
	static int _bind_getM_keyArrayPtr(lua_State *L) {
		if (!_lg_typecheck_getM_keyArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int * btTriangleInfoMapData::m_keyArrayPtr() function, expected prototype:\nint * btTriangleInfoMapData::m_keyArrayPtr()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int * btTriangleInfoMapData::m_keyArrayPtr(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int * lret = self->m_keyArrayPtr;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float btTriangleInfoMapData::m_convexEpsilon()
	static int _bind_getM_convexEpsilon(lua_State *L) {
		if (!_lg_typecheck_getM_convexEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfoMapData::m_convexEpsilon() function, expected prototype:\nfloat btTriangleInfoMapData::m_convexEpsilon()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfoMapData::m_convexEpsilon(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		float lret = self->m_convexEpsilon;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfoMapData::m_planarEpsilon()
	static int _bind_getM_planarEpsilon(lua_State *L) {
		if (!_lg_typecheck_getM_planarEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfoMapData::m_planarEpsilon() function, expected prototype:\nfloat btTriangleInfoMapData::m_planarEpsilon()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfoMapData::m_planarEpsilon(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		float lret = self->m_planarEpsilon;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfoMapData::m_equalVertexThreshold()
	static int _bind_getM_equalVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_equalVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfoMapData::m_equalVertexThreshold() function, expected prototype:\nfloat btTriangleInfoMapData::m_equalVertexThreshold()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfoMapData::m_equalVertexThreshold(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		float lret = self->m_equalVertexThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfoMapData::m_edgeDistanceThreshold()
	static int _bind_getM_edgeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_edgeDistanceThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfoMapData::m_edgeDistanceThreshold() function, expected prototype:\nfloat btTriangleInfoMapData::m_edgeDistanceThreshold()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfoMapData::m_edgeDistanceThreshold(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		float lret = self->m_edgeDistanceThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleInfoMapData::m_zeroAreaThreshold()
	static int _bind_getM_zeroAreaThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_zeroAreaThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleInfoMapData::m_zeroAreaThreshold() function, expected prototype:\nfloat btTriangleInfoMapData::m_zeroAreaThreshold()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleInfoMapData::m_zeroAreaThreshold(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		float lret = self->m_zeroAreaThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleInfoMapData::m_nextSize()
	static int _bind_getM_nextSize(lua_State *L) {
		if (!_lg_typecheck_getM_nextSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleInfoMapData::m_nextSize() function, expected prototype:\nint btTriangleInfoMapData::m_nextSize()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleInfoMapData::m_nextSize(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int lret = self->m_nextSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleInfoMapData::m_hashTableSize()
	static int _bind_getM_hashTableSize(lua_State *L) {
		if (!_lg_typecheck_getM_hashTableSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleInfoMapData::m_hashTableSize() function, expected prototype:\nint btTriangleInfoMapData::m_hashTableSize()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleInfoMapData::m_hashTableSize(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int lret = self->m_hashTableSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleInfoMapData::m_numValues()
	static int _bind_getM_numValues(lua_State *L) {
		if (!_lg_typecheck_getM_numValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleInfoMapData::m_numValues() function, expected prototype:\nint btTriangleInfoMapData::m_numValues()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleInfoMapData::m_numValues(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int lret = self->m_numValues;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleInfoMapData::m_numKeys()
	static int _bind_getM_numKeys(lua_State *L) {
		if (!_lg_typecheck_getM_numKeys(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleInfoMapData::m_numKeys() function, expected prototype:\nint btTriangleInfoMapData::m_numKeys()\nClass arguments details:\n");
		}


		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleInfoMapData::m_numKeys(). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		int lret = self->m_numKeys;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleInfoMapData::m_hashTablePtr(int * value)
	static int _bind_setM_hashTablePtr(lua_State *L) {
		if (!_lg_typecheck_setM_hashTablePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_hashTablePtr(int * value) function, expected prototype:\nvoid btTriangleInfoMapData::m_hashTablePtr(int * value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_hashTablePtr(int *). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_hashTablePtr = &value;

		return 0;
	}

	// void btTriangleInfoMapData::m_nextPtr(int * value)
	static int _bind_setM_nextPtr(lua_State *L) {
		if (!_lg_typecheck_setM_nextPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_nextPtr(int * value) function, expected prototype:\nvoid btTriangleInfoMapData::m_nextPtr(int * value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_nextPtr(int *). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_nextPtr = &value;

		return 0;
	}

	// void btTriangleInfoMapData::m_valueArrayPtr(btTriangleInfoData * value)
	static int _bind_setM_valueArrayPtr(lua_State *L) {
		if (!_lg_typecheck_setM_valueArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_valueArrayPtr(btTriangleInfoData * value) function, expected prototype:\nvoid btTriangleInfoMapData::m_valueArrayPtr(btTriangleInfoData * value)\nClass arguments details:\narg 1 ID = 90100326\n");
		}

		btTriangleInfoData* value=(Luna< btTriangleInfoData >::check(L,2));

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_valueArrayPtr(btTriangleInfoData *). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_valueArrayPtr = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_keyArrayPtr(int * value)
	static int _bind_setM_keyArrayPtr(lua_State *L) {
		if (!_lg_typecheck_setM_keyArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_keyArrayPtr(int * value) function, expected prototype:\nvoid btTriangleInfoMapData::m_keyArrayPtr(int * value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_keyArrayPtr(int *). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_keyArrayPtr = &value;

		return 0;
	}

	// void btTriangleInfoMapData::m_convexEpsilon(float value)
	static int _bind_setM_convexEpsilon(lua_State *L) {
		if (!_lg_typecheck_setM_convexEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_convexEpsilon(float value) function, expected prototype:\nvoid btTriangleInfoMapData::m_convexEpsilon(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_convexEpsilon(float). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_convexEpsilon = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_planarEpsilon(float value)
	static int _bind_setM_planarEpsilon(lua_State *L) {
		if (!_lg_typecheck_setM_planarEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_planarEpsilon(float value) function, expected prototype:\nvoid btTriangleInfoMapData::m_planarEpsilon(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_planarEpsilon(float). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_planarEpsilon = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_equalVertexThreshold(float value)
	static int _bind_setM_equalVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_equalVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_equalVertexThreshold(float value) function, expected prototype:\nvoid btTriangleInfoMapData::m_equalVertexThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_equalVertexThreshold(float). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_equalVertexThreshold = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_edgeDistanceThreshold(float value)
	static int _bind_setM_edgeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_edgeDistanceThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_edgeDistanceThreshold(float value) function, expected prototype:\nvoid btTriangleInfoMapData::m_edgeDistanceThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_edgeDistanceThreshold(float). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_edgeDistanceThreshold = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_zeroAreaThreshold(float value)
	static int _bind_setM_zeroAreaThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_zeroAreaThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_zeroAreaThreshold(float value) function, expected prototype:\nvoid btTriangleInfoMapData::m_zeroAreaThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_zeroAreaThreshold(float). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_zeroAreaThreshold = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_nextSize(int value)
	static int _bind_setM_nextSize(lua_State *L) {
		if (!_lg_typecheck_setM_nextSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_nextSize(int value) function, expected prototype:\nvoid btTriangleInfoMapData::m_nextSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_nextSize(int). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_nextSize = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_hashTableSize(int value)
	static int _bind_setM_hashTableSize(lua_State *L) {
		if (!_lg_typecheck_setM_hashTableSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_hashTableSize(int value) function, expected prototype:\nvoid btTriangleInfoMapData::m_hashTableSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_hashTableSize(int). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_hashTableSize = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_numValues(int value)
	static int _bind_setM_numValues(lua_State *L) {
		if (!_lg_typecheck_setM_numValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_numValues(int value) function, expected prototype:\nvoid btTriangleInfoMapData::m_numValues(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_numValues(int). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_numValues = value;

		return 0;
	}

	// void btTriangleInfoMapData::m_numKeys(int value)
	static int _bind_setM_numKeys(lua_State *L) {
		if (!_lg_typecheck_setM_numKeys(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleInfoMapData::m_numKeys(int value) function, expected prototype:\nvoid btTriangleInfoMapData::m_numKeys(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangleInfoMapData* self=(Luna< btTriangleInfoMapData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleInfoMapData::m_numKeys(int). Got : '%s'",typeid(Luna< btTriangleInfoMapData >::check(L,1)).name());
		}
		self->m_numKeys = value;

		return 0;
	}


	// Operator binds:

};

btTriangleInfoMapData* LunaTraits< btTriangleInfoMapData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTriangleInfoMapData >::_bind_dtor(btTriangleInfoMapData* obj) {
	delete obj;
}

const char LunaTraits< btTriangleInfoMapData >::className[] = "btTriangleInfoMapData";
const char LunaTraits< btTriangleInfoMapData >::fullName[] = "btTriangleInfoMapData";
const char LunaTraits< btTriangleInfoMapData >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleInfoMapData >::parents[] = {0};
const int LunaTraits< btTriangleInfoMapData >::hash = 61372357;
const int LunaTraits< btTriangleInfoMapData >::uniqueIDs[] = {61372357,0};

luna_RegType LunaTraits< btTriangleInfoMapData >::methods[] = {
	{"getM_hashTablePtr", &luna_wrapper_btTriangleInfoMapData::_bind_getM_hashTablePtr},
	{"getM_nextPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getM_nextPtr},
	{"getM_valueArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getM_valueArrayPtr},
	{"getM_keyArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getM_keyArrayPtr},
	{"getM_convexEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_getM_convexEpsilon},
	{"getM_planarEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_getM_planarEpsilon},
	{"getM_equalVertexThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getM_equalVertexThreshold},
	{"getM_edgeDistanceThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getM_edgeDistanceThreshold},
	{"getM_zeroAreaThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getM_zeroAreaThreshold},
	{"getM_nextSize", &luna_wrapper_btTriangleInfoMapData::_bind_getM_nextSize},
	{"getM_hashTableSize", &luna_wrapper_btTriangleInfoMapData::_bind_getM_hashTableSize},
	{"getM_numValues", &luna_wrapper_btTriangleInfoMapData::_bind_getM_numValues},
	{"getM_numKeys", &luna_wrapper_btTriangleInfoMapData::_bind_getM_numKeys},
	{"setM_hashTablePtr", &luna_wrapper_btTriangleInfoMapData::_bind_setM_hashTablePtr},
	{"setM_nextPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setM_nextPtr},
	{"setM_valueArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setM_valueArrayPtr},
	{"setM_keyArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setM_keyArrayPtr},
	{"setM_convexEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_setM_convexEpsilon},
	{"setM_planarEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_setM_planarEpsilon},
	{"setM_equalVertexThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setM_equalVertexThreshold},
	{"setM_edgeDistanceThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setM_edgeDistanceThreshold},
	{"setM_zeroAreaThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setM_zeroAreaThreshold},
	{"setM_nextSize", &luna_wrapper_btTriangleInfoMapData::_bind_setM_nextSize},
	{"setM_hashTableSize", &luna_wrapper_btTriangleInfoMapData::_bind_setM_hashTableSize},
	{"setM_numValues", &luna_wrapper_btTriangleInfoMapData::_bind_setM_numValues},
	{"setM_numKeys", &luna_wrapper_btTriangleInfoMapData::_bind_setM_numKeys},
	{"dynCast", &luna_wrapper_btTriangleInfoMapData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangleInfoMapData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleInfoMapData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleInfoMapData >::enumValues[] = {
	{0,0}
};


