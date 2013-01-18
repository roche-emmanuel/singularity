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
	inline static bool _lg_typecheck_getHashTablePtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValueArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKeyArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConvexEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlanarEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEqualVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdgeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZeroAreaThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHashTableSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumKeys(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHashTablePtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNextPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValueArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,90100326)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKeyArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setConvexEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlanarEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEqualVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEdgeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZeroAreaThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNextSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHashTableSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumValues(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumKeys(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int * btTriangleInfoMapData::m_hashTablePtr()
	static int _bind_getHashTablePtr(lua_State *L) {
		if (!_lg_typecheck_getHashTablePtr(L)) {
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
	static int _bind_getNextPtr(lua_State *L) {
		if (!_lg_typecheck_getNextPtr(L)) {
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
	static int _bind_getValueArrayPtr(lua_State *L) {
		if (!_lg_typecheck_getValueArrayPtr(L)) {
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
	static int _bind_getKeyArrayPtr(lua_State *L) {
		if (!_lg_typecheck_getKeyArrayPtr(L)) {
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
	static int _bind_getConvexEpsilon(lua_State *L) {
		if (!_lg_typecheck_getConvexEpsilon(L)) {
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
	static int _bind_getPlanarEpsilon(lua_State *L) {
		if (!_lg_typecheck_getPlanarEpsilon(L)) {
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
	static int _bind_getEqualVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_getEqualVertexThreshold(L)) {
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
	static int _bind_getEdgeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_getEdgeDistanceThreshold(L)) {
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
	static int _bind_getZeroAreaThreshold(lua_State *L) {
		if (!_lg_typecheck_getZeroAreaThreshold(L)) {
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
	static int _bind_getNextSize(lua_State *L) {
		if (!_lg_typecheck_getNextSize(L)) {
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
	static int _bind_getHashTableSize(lua_State *L) {
		if (!_lg_typecheck_getHashTableSize(L)) {
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
	static int _bind_getNumValues(lua_State *L) {
		if (!_lg_typecheck_getNumValues(L)) {
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
	static int _bind_getNumKeys(lua_State *L) {
		if (!_lg_typecheck_getNumKeys(L)) {
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
	static int _bind_setHashTablePtr(lua_State *L) {
		if (!_lg_typecheck_setHashTablePtr(L)) {
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
	static int _bind_setNextPtr(lua_State *L) {
		if (!_lg_typecheck_setNextPtr(L)) {
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
	static int _bind_setValueArrayPtr(lua_State *L) {
		if (!_lg_typecheck_setValueArrayPtr(L)) {
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
	static int _bind_setKeyArrayPtr(lua_State *L) {
		if (!_lg_typecheck_setKeyArrayPtr(L)) {
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
	static int _bind_setConvexEpsilon(lua_State *L) {
		if (!_lg_typecheck_setConvexEpsilon(L)) {
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
	static int _bind_setPlanarEpsilon(lua_State *L) {
		if (!_lg_typecheck_setPlanarEpsilon(L)) {
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
	static int _bind_setEqualVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_setEqualVertexThreshold(L)) {
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
	static int _bind_setEdgeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_setEdgeDistanceThreshold(L)) {
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
	static int _bind_setZeroAreaThreshold(lua_State *L) {
		if (!_lg_typecheck_setZeroAreaThreshold(L)) {
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
	static int _bind_setNextSize(lua_State *L) {
		if (!_lg_typecheck_setNextSize(L)) {
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
	static int _bind_setHashTableSize(lua_State *L) {
		if (!_lg_typecheck_setHashTableSize(L)) {
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
	static int _bind_setNumValues(lua_State *L) {
		if (!_lg_typecheck_setNumValues(L)) {
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
	static int _bind_setNumKeys(lua_State *L) {
		if (!_lg_typecheck_setNumKeys(L)) {
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
	{"getHashTablePtr", &luna_wrapper_btTriangleInfoMapData::_bind_getHashTablePtr},
	{"getNextPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getNextPtr},
	{"getValueArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getValueArrayPtr},
	{"getKeyArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_getKeyArrayPtr},
	{"getConvexEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_getConvexEpsilon},
	{"getPlanarEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_getPlanarEpsilon},
	{"getEqualVertexThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getEqualVertexThreshold},
	{"getEdgeDistanceThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getEdgeDistanceThreshold},
	{"getZeroAreaThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_getZeroAreaThreshold},
	{"getNextSize", &luna_wrapper_btTriangleInfoMapData::_bind_getNextSize},
	{"getHashTableSize", &luna_wrapper_btTriangleInfoMapData::_bind_getHashTableSize},
	{"getNumValues", &luna_wrapper_btTriangleInfoMapData::_bind_getNumValues},
	{"getNumKeys", &luna_wrapper_btTriangleInfoMapData::_bind_getNumKeys},
	{"setHashTablePtr", &luna_wrapper_btTriangleInfoMapData::_bind_setHashTablePtr},
	{"setNextPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setNextPtr},
	{"setValueArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setValueArrayPtr},
	{"setKeyArrayPtr", &luna_wrapper_btTriangleInfoMapData::_bind_setKeyArrayPtr},
	{"setConvexEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_setConvexEpsilon},
	{"setPlanarEpsilon", &luna_wrapper_btTriangleInfoMapData::_bind_setPlanarEpsilon},
	{"setEqualVertexThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setEqualVertexThreshold},
	{"setEdgeDistanceThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setEdgeDistanceThreshold},
	{"setZeroAreaThreshold", &luna_wrapper_btTriangleInfoMapData::_bind_setZeroAreaThreshold},
	{"setNextSize", &luna_wrapper_btTriangleInfoMapData::_bind_setNextSize},
	{"setHashTableSize", &luna_wrapper_btTriangleInfoMapData::_bind_setHashTableSize},
	{"setNumValues", &luna_wrapper_btTriangleInfoMapData::_bind_setNumValues},
	{"setNumKeys", &luna_wrapper_btTriangleInfoMapData::_bind_setNumKeys},
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


