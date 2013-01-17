#include <plug_common.h>

class luna_wrapper_btQuantizedBvhFloatData {
public:
	typedef Luna< btQuantizedBvhFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49199970) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhFloatData*)");
		}

		btQuantizedBvhFloatData* rhs =(Luna< btQuantizedBvhFloatData >::check(L,2));
		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
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

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhFloatData");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_bvhAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bvhAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bvhQuantization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_curNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useQuantization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numContiguousLeafNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numQuantizedContiguousNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_quantizedContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_subTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_traversalMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_bvhAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bvhAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bvhQuantization(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_curNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useQuantization(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numContiguousLeafNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numQuantizedContiguousNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22170580)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_quantizedContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91047799)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_subTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95109631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_traversalMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMin()
	static int _bind_getM_bvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_getM_bvhAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMin() function, expected prototype:\nbtVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMin()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMin(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_bvhAabbMin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMax()
	static int _bind_getM_bvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_getM_bvhAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMax() function, expected prototype:\nbtVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMax()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btQuantizedBvhFloatData::m_bvhAabbMax(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_bvhAabbMax;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btQuantizedBvhFloatData::m_bvhQuantization()
	static int _bind_getM_bvhQuantization(lua_State *L) {
		if (!_lg_typecheck_getM_bvhQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btQuantizedBvhFloatData::m_bvhQuantization() function, expected prototype:\nbtVector3FloatData btQuantizedBvhFloatData::m_bvhQuantization()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btQuantizedBvhFloatData::m_bvhQuantization(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_bvhQuantization;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_curNodeIndex()
	static int _bind_getM_curNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getM_curNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_curNodeIndex() function, expected prototype:\nint btQuantizedBvhFloatData::m_curNodeIndex()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_curNodeIndex(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_curNodeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_useQuantization()
	static int _bind_getM_useQuantization(lua_State *L) {
		if (!_lg_typecheck_getM_useQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_useQuantization() function, expected prototype:\nint btQuantizedBvhFloatData::m_useQuantization()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_useQuantization(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_useQuantization;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_numContiguousLeafNodes()
	static int _bind_getM_numContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_getM_numContiguousLeafNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_numContiguousLeafNodes() function, expected prototype:\nint btQuantizedBvhFloatData::m_numContiguousLeafNodes()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_numContiguousLeafNodes(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_numContiguousLeafNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_numQuantizedContiguousNodes()
	static int _bind_getM_numQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_getM_numQuantizedContiguousNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_numQuantizedContiguousNodes() function, expected prototype:\nint btQuantizedBvhFloatData::m_numQuantizedContiguousNodes()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_numQuantizedContiguousNodes(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_numQuantizedContiguousNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btOptimizedBvhNodeFloatData * btQuantizedBvhFloatData::m_contiguousNodesPtr()
	static int _bind_getM_contiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getM_contiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOptimizedBvhNodeFloatData * btQuantizedBvhFloatData::m_contiguousNodesPtr() function, expected prototype:\nbtOptimizedBvhNodeFloatData * btQuantizedBvhFloatData::m_contiguousNodesPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOptimizedBvhNodeFloatData * btQuantizedBvhFloatData::m_contiguousNodesPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		btOptimizedBvhNodeFloatData * lret = self->m_contiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOptimizedBvhNodeFloatData >::push(L,lret,false);

		return 1;
	}

	// btQuantizedBvhNodeData * btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr()
	static int _bind_getM_quantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getM_quantizedContiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvhNodeData * btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr() function, expected prototype:\nbtQuantizedBvhNodeData * btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuantizedBvhNodeData * btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		btQuantizedBvhNodeData * lret = self->m_quantizedContiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuantizedBvhNodeData >::push(L,lret,false);

		return 1;
	}

	// btBvhSubtreeInfoData * btQuantizedBvhFloatData::m_subTreeInfoPtr()
	static int _bind_getM_subTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_getM_subTreeInfoPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhSubtreeInfoData * btQuantizedBvhFloatData::m_subTreeInfoPtr() function, expected prototype:\nbtBvhSubtreeInfoData * btQuantizedBvhFloatData::m_subTreeInfoPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBvhSubtreeInfoData * btQuantizedBvhFloatData::m_subTreeInfoPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		btBvhSubtreeInfoData * lret = self->m_subTreeInfoPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBvhSubtreeInfoData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_traversalMode()
	static int _bind_getM_traversalMode(lua_State *L) {
		if (!_lg_typecheck_getM_traversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_traversalMode() function, expected prototype:\nint btQuantizedBvhFloatData::m_traversalMode()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_traversalMode(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_traversalMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhFloatData::m_numSubtreeHeaders()
	static int _bind_getM_numSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_getM_numSubtreeHeaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhFloatData::m_numSubtreeHeaders() function, expected prototype:\nint btQuantizedBvhFloatData::m_numSubtreeHeaders()\nClass arguments details:\n");
		}


		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhFloatData::m_numSubtreeHeaders(). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		int lret = self->m_numSubtreeHeaders;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuantizedBvhFloatData::m_bvhAabbMin(btVector3FloatData value)
	static int _bind_setM_bvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_setM_bvhAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_bvhAabbMin(btVector3FloatData value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_bvhAabbMin(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhFloatData::m_bvhAabbMin function");
		}
		btVector3FloatData value=*value_ptr;

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_bvhAabbMin(btVector3FloatData). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_bvhAabbMin = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_bvhAabbMax(btVector3FloatData value)
	static int _bind_setM_bvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_setM_bvhAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_bvhAabbMax(btVector3FloatData value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_bvhAabbMax(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhFloatData::m_bvhAabbMax function");
		}
		btVector3FloatData value=*value_ptr;

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_bvhAabbMax(btVector3FloatData). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_bvhAabbMax = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_bvhQuantization(btVector3FloatData value)
	static int _bind_setM_bvhQuantization(lua_State *L) {
		if (!_lg_typecheck_setM_bvhQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_bvhQuantization(btVector3FloatData value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_bvhQuantization(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhFloatData::m_bvhQuantization function");
		}
		btVector3FloatData value=*value_ptr;

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_bvhQuantization(btVector3FloatData). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_bvhQuantization = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_curNodeIndex(int value)
	static int _bind_setM_curNodeIndex(lua_State *L) {
		if (!_lg_typecheck_setM_curNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_curNodeIndex(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_curNodeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_curNodeIndex(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_curNodeIndex = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_useQuantization(int value)
	static int _bind_setM_useQuantization(lua_State *L) {
		if (!_lg_typecheck_setM_useQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_useQuantization(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_useQuantization(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_useQuantization(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_useQuantization = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_numContiguousLeafNodes(int value)
	static int _bind_setM_numContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_setM_numContiguousLeafNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_numContiguousLeafNodes(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_numContiguousLeafNodes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_numContiguousLeafNodes(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_numContiguousLeafNodes = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_numQuantizedContiguousNodes(int value)
	static int _bind_setM_numQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_setM_numQuantizedContiguousNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_numQuantizedContiguousNodes(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_numQuantizedContiguousNodes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_numQuantizedContiguousNodes(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_numQuantizedContiguousNodes = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_contiguousNodesPtr(btOptimizedBvhNodeFloatData * value)
	static int _bind_setM_contiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setM_contiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_contiguousNodesPtr(btOptimizedBvhNodeFloatData * value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_contiguousNodesPtr(btOptimizedBvhNodeFloatData * value)\nClass arguments details:\narg 1 ID = 22170580\n");
		}

		btOptimizedBvhNodeFloatData* value=(Luna< btOptimizedBvhNodeFloatData >::check(L,2));

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_contiguousNodesPtr(btOptimizedBvhNodeFloatData *). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_contiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)
	static int _bind_setM_quantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setM_quantizedContiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)\nClass arguments details:\narg 1 ID = 91047799\n");
		}

		btQuantizedBvhNodeData* value=(Luna< btQuantizedBvhNodeData >::check(L,2));

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData *). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_quantizedContiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)
	static int _bind_setM_subTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_setM_subTreeInfoPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)\nClass arguments details:\narg 1 ID = 95109631\n");
		}

		btBvhSubtreeInfoData* value=(Luna< btBvhSubtreeInfoData >::check(L,2));

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_subTreeInfoPtr(btBvhSubtreeInfoData *). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_subTreeInfoPtr = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_traversalMode(int value)
	static int _bind_setM_traversalMode(lua_State *L) {
		if (!_lg_typecheck_setM_traversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_traversalMode(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_traversalMode(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_traversalMode(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_traversalMode = value;

		return 0;
	}

	// void btQuantizedBvhFloatData::m_numSubtreeHeaders(int value)
	static int _bind_setM_numSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_setM_numSubtreeHeaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhFloatData::m_numSubtreeHeaders(int value) function, expected prototype:\nvoid btQuantizedBvhFloatData::m_numSubtreeHeaders(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhFloatData* self=(Luna< btQuantizedBvhFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhFloatData::m_numSubtreeHeaders(int). Got : '%s'",typeid(Luna< btQuantizedBvhFloatData >::check(L,1)).name());
		}
		self->m_numSubtreeHeaders = value;

		return 0;
	}


	// Operator binds:

};

btQuantizedBvhFloatData* LunaTraits< btQuantizedBvhFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btQuantizedBvhFloatData >::_bind_dtor(btQuantizedBvhFloatData* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvhFloatData >::className[] = "btQuantizedBvhFloatData";
const char LunaTraits< btQuantizedBvhFloatData >::fullName[] = "btQuantizedBvhFloatData";
const char LunaTraits< btQuantizedBvhFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvhFloatData >::parents[] = {0};
const int LunaTraits< btQuantizedBvhFloatData >::hash = 49199970;
const int LunaTraits< btQuantizedBvhFloatData >::uniqueIDs[] = {49199970,0};

luna_RegType LunaTraits< btQuantizedBvhFloatData >::methods[] = {
	{"getM_bvhAabbMin", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_bvhAabbMin},
	{"getM_bvhAabbMax", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_bvhAabbMax},
	{"getM_bvhQuantization", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_bvhQuantization},
	{"getM_curNodeIndex", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_curNodeIndex},
	{"getM_useQuantization", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_useQuantization},
	{"getM_numContiguousLeafNodes", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_numContiguousLeafNodes},
	{"getM_numQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_numQuantizedContiguousNodes},
	{"getM_contiguousNodesPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_contiguousNodesPtr},
	{"getM_quantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_quantizedContiguousNodesPtr},
	{"getM_subTreeInfoPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_subTreeInfoPtr},
	{"getM_traversalMode", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_traversalMode},
	{"getM_numSubtreeHeaders", &luna_wrapper_btQuantizedBvhFloatData::_bind_getM_numSubtreeHeaders},
	{"setM_bvhAabbMin", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_bvhAabbMin},
	{"setM_bvhAabbMax", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_bvhAabbMax},
	{"setM_bvhQuantization", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_bvhQuantization},
	{"setM_curNodeIndex", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_curNodeIndex},
	{"setM_useQuantization", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_useQuantization},
	{"setM_numContiguousLeafNodes", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_numContiguousLeafNodes},
	{"setM_numQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_numQuantizedContiguousNodes},
	{"setM_contiguousNodesPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_contiguousNodesPtr},
	{"setM_quantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_quantizedContiguousNodesPtr},
	{"setM_subTreeInfoPtr", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_subTreeInfoPtr},
	{"setM_traversalMode", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_traversalMode},
	{"setM_numSubtreeHeaders", &luna_wrapper_btQuantizedBvhFloatData::_bind_setM_numSubtreeHeaders},
	{"dynCast", &luna_wrapper_btQuantizedBvhFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhFloatData >::enumValues[] = {
	{0,0}
};

