#include <plug_common.h>

class luna_wrapper_btQuantizedBvhDoubleData {
public:
	typedef Luna< btQuantizedBvhDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27343504) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhDoubleData*)");
		}

		btQuantizedBvhDoubleData* rhs =(Luna< btQuantizedBvhDoubleData >::check(L,2));
		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
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

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhDoubleData");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhDoubleData",name);
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

	inline static bool _lg_typecheck_getM_traversalMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_subTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_bvhAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bvhAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bvhQuantization(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92362319)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_quantizedContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91047799)) ) return false;
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

	inline static bool _lg_typecheck_setM_subTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95109631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin()
	static int _bind_getM_bvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_getM_bvhAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_bvhAabbMin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax()
	static int _bind_getM_bvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_getM_bvhAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_bvhAabbMax;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization()
	static int _bind_getM_bvhQuantization(lua_State *L) {
		if (!_lg_typecheck_getM_bvhQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_bvhQuantization;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_curNodeIndex()
	static int _bind_getM_curNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getM_curNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_curNodeIndex() function, expected prototype:\nint btQuantizedBvhDoubleData::m_curNodeIndex()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_curNodeIndex(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_curNodeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_useQuantization()
	static int _bind_getM_useQuantization(lua_State *L) {
		if (!_lg_typecheck_getM_useQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_useQuantization() function, expected prototype:\nint btQuantizedBvhDoubleData::m_useQuantization()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_useQuantization(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_useQuantization;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numContiguousLeafNodes()
	static int _bind_getM_numContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_getM_numContiguousLeafNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numContiguousLeafNodes() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numContiguousLeafNodes()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numContiguousLeafNodes(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_numContiguousLeafNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes()
	static int _bind_getM_numQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_getM_numQuantizedContiguousNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_numQuantizedContiguousNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr()
	static int _bind_getM_contiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getM_contiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr() function, expected prototype:\nbtOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		btOptimizedBvhNodeDoubleData * lret = self->m_contiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOptimizedBvhNodeDoubleData >::push(L,lret,false);

		return 1;
	}

	// btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr()
	static int _bind_getM_quantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getM_quantizedContiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr() function, expected prototype:\nbtQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		btQuantizedBvhNodeData * lret = self->m_quantizedContiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuantizedBvhNodeData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_traversalMode()
	static int _bind_getM_traversalMode(lua_State *L) {
		if (!_lg_typecheck_getM_traversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_traversalMode() function, expected prototype:\nint btQuantizedBvhDoubleData::m_traversalMode()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_traversalMode(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_traversalMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numSubtreeHeaders()
	static int _bind_getM_numSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_getM_numSubtreeHeaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numSubtreeHeaders() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numSubtreeHeaders()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numSubtreeHeaders(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		int lret = self->m_numSubtreeHeaders;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr()
	static int _bind_getM_subTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_getM_subTreeInfoPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr() function, expected prototype:\nbtBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr()\nClass arguments details:\n");
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr(). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		btBvhSubtreeInfoData * lret = self->m_subTreeInfoPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBvhSubtreeInfoData >::push(L,lret,false);

		return 1;
	}

	// void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value)
	static int _bind_setM_bvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_setM_bvhAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhAabbMin function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_bvhAabbMin = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value)
	static int _bind_setM_bvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_setM_bvhAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhAabbMax function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_bvhAabbMax = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value)
	static int _bind_setM_bvhQuantization(lua_State *L) {
		if (!_lg_typecheck_setM_bvhQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhQuantization function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_bvhQuantization = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_curNodeIndex(int value)
	static int _bind_setM_curNodeIndex(lua_State *L) {
		if (!_lg_typecheck_setM_curNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_curNodeIndex(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_curNodeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_curNodeIndex(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_curNodeIndex = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_useQuantization(int value)
	static int _bind_setM_useQuantization(lua_State *L) {
		if (!_lg_typecheck_setM_useQuantization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_useQuantization(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_useQuantization(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_useQuantization(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_useQuantization = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value)
	static int _bind_setM_numContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_setM_numContiguousLeafNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_numContiguousLeafNodes = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value)
	static int _bind_setM_numQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_setM_numQuantizedContiguousNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_numQuantizedContiguousNodes = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value)
	static int _bind_setM_contiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setM_contiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value)\nClass arguments details:\narg 1 ID = 92362319\n");
		}

		btOptimizedBvhNodeDoubleData* value=(Luna< btOptimizedBvhNodeDoubleData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData *). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_contiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)
	static int _bind_setM_quantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setM_quantizedContiguousNodesPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)\nClass arguments details:\narg 1 ID = 91047799\n");
		}

		btQuantizedBvhNodeData* value=(Luna< btQuantizedBvhNodeData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData *). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_quantizedContiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_traversalMode(int value)
	static int _bind_setM_traversalMode(lua_State *L) {
		if (!_lg_typecheck_setM_traversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_traversalMode(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_traversalMode(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_traversalMode(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_traversalMode = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value)
	static int _bind_setM_numSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_setM_numSubtreeHeaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_numSubtreeHeaders = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)
	static int _bind_setM_subTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_setM_subTreeInfoPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)\nClass arguments details:\narg 1 ID = 95109631\n");
		}

		btBvhSubtreeInfoData* value=(Luna< btBvhSubtreeInfoData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData *). Got : '%s'",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name());
		}
		self->m_subTreeInfoPtr = value;

		return 0;
	}


	// Operator binds:

};

btQuantizedBvhDoubleData* LunaTraits< btQuantizedBvhDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btQuantizedBvhDoubleData >::_bind_dtor(btQuantizedBvhDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvhDoubleData >::className[] = "btQuantizedBvhDoubleData";
const char LunaTraits< btQuantizedBvhDoubleData >::fullName[] = "btQuantizedBvhDoubleData";
const char LunaTraits< btQuantizedBvhDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvhDoubleData >::parents[] = {0};
const int LunaTraits< btQuantizedBvhDoubleData >::hash = 27343504;
const int LunaTraits< btQuantizedBvhDoubleData >::uniqueIDs[] = {27343504,0};

luna_RegType LunaTraits< btQuantizedBvhDoubleData >::methods[] = {
	{"getM_bvhAabbMin", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_bvhAabbMin},
	{"getM_bvhAabbMax", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_bvhAabbMax},
	{"getM_bvhQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_bvhQuantization},
	{"getM_curNodeIndex", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_curNodeIndex},
	{"getM_useQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_useQuantization},
	{"getM_numContiguousLeafNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_numContiguousLeafNodes},
	{"getM_numQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_numQuantizedContiguousNodes},
	{"getM_contiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_contiguousNodesPtr},
	{"getM_quantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_quantizedContiguousNodesPtr},
	{"getM_traversalMode", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_traversalMode},
	{"getM_numSubtreeHeaders", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_numSubtreeHeaders},
	{"getM_subTreeInfoPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getM_subTreeInfoPtr},
	{"setM_bvhAabbMin", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_bvhAabbMin},
	{"setM_bvhAabbMax", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_bvhAabbMax},
	{"setM_bvhQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_bvhQuantization},
	{"setM_curNodeIndex", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_curNodeIndex},
	{"setM_useQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_useQuantization},
	{"setM_numContiguousLeafNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_numContiguousLeafNodes},
	{"setM_numQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_numQuantizedContiguousNodes},
	{"setM_contiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_contiguousNodesPtr},
	{"setM_quantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_quantizedContiguousNodesPtr},
	{"setM_traversalMode", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_traversalMode},
	{"setM_numSubtreeHeaders", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_numSubtreeHeaders},
	{"setM_subTreeInfoPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setM_subTreeInfoPtr},
	{"dynCast", &luna_wrapper_btQuantizedBvhDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhDoubleData >::enumValues[] = {
	{0,0}
};

