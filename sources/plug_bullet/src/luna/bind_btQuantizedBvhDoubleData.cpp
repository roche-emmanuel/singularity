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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhDoubleData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btQuantizedBvhDoubleData* rhs =(Luna< btQuantizedBvhDoubleData >::check(L,2));
		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
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

		btQuantizedBvhDoubleData* self= (btQuantizedBvhDoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btQuantizedBvhDoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27343504) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btQuantizedBvhDoubleData >::check(L,1));
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

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhDoubleData");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhDoubleData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBvhAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBvhAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBvhQuantization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseQuantization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumContiguousLeafNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumQuantizedContiguousNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuantizedContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBvhAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBvhAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBvhQuantization(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseQuantization(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumContiguousLeafNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumQuantizedContiguousNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92362319)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQuantizedContiguousNodesPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91047799)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubTreeInfoPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95109631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin()
	static int _bind_getBvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_getBvhAabbMin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMin(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_bvhAabbMin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax()
	static int _bind_getBvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_getBvhAabbMax(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhAabbMax(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_bvhAabbMax;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization()
	static int _bind_getBvhQuantization(lua_State *L) {
		if (!_lg_typecheck_getBvhQuantization(L)) {
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization() function, expected prototype:\nbtVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3DoubleData btQuantizedBvhDoubleData::m_bvhQuantization(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3DoubleData* lret = &self->m_bvhQuantization;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_curNodeIndex()
	static int _bind_getCurNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getCurNodeIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_curNodeIndex() function, expected prototype:\nint btQuantizedBvhDoubleData::m_curNodeIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_curNodeIndex(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_curNodeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_useQuantization()
	static int _bind_getUseQuantization(lua_State *L) {
		if (!_lg_typecheck_getUseQuantization(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_useQuantization() function, expected prototype:\nint btQuantizedBvhDoubleData::m_useQuantization()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_useQuantization(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_useQuantization;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numContiguousLeafNodes()
	static int _bind_getNumContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_getNumContiguousLeafNodes(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numContiguousLeafNodes() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numContiguousLeafNodes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numContiguousLeafNodes(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numContiguousLeafNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes()
	static int _bind_getNumQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_getNumQuantizedContiguousNodes(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numQuantizedContiguousNodes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr()
	static int _bind_getContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getContiguousNodesPtr(L)) {
			luaL_error(L, "luna typecheck failed in btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr() function, expected prototype:\nbtOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btOptimizedBvhNodeDoubleData * btQuantizedBvhDoubleData::m_contiguousNodesPtr(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btOptimizedBvhNodeDoubleData * lret = self->m_contiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOptimizedBvhNodeDoubleData >::push(L,lret,false);

		return 1;
	}

	// btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr()
	static int _bind_getQuantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_getQuantizedContiguousNodesPtr(L)) {
			luaL_error(L, "luna typecheck failed in btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr() function, expected prototype:\nbtQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuantizedBvhNodeData * btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuantizedBvhNodeData * lret = self->m_quantizedContiguousNodesPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuantizedBvhNodeData >::push(L,lret,false);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_traversalMode()
	static int _bind_getTraversalMode(lua_State *L) {
		if (!_lg_typecheck_getTraversalMode(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_traversalMode() function, expected prototype:\nint btQuantizedBvhDoubleData::m_traversalMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_traversalMode(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_traversalMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhDoubleData::m_numSubtreeHeaders()
	static int _bind_getNumSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_getNumSubtreeHeaders(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhDoubleData::m_numSubtreeHeaders() function, expected prototype:\nint btQuantizedBvhDoubleData::m_numSubtreeHeaders()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhDoubleData::m_numSubtreeHeaders(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numSubtreeHeaders;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr()
	static int _bind_getSubTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_getSubTreeInfoPtr(L)) {
			luaL_error(L, "luna typecheck failed in btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr() function, expected prototype:\nbtBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btBvhSubtreeInfoData * btQuantizedBvhDoubleData::m_subTreeInfoPtr(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btBvhSubtreeInfoData * lret = self->m_subTreeInfoPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBvhSubtreeInfoData >::push(L,lret,false);

		return 1;
	}

	// void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value)
	static int _bind_setBvhAabbMin(lua_State *L) {
		if (!_lg_typecheck_setBvhAabbMin(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhAabbMin function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhAabbMin(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bvhAabbMin = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value)
	static int _bind_setBvhAabbMax(lua_State *L) {
		if (!_lg_typecheck_setBvhAabbMax(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhAabbMax function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhAabbMax(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bvhAabbMax = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value)
	static int _bind_setBvhQuantization(lua_State *L) {
		if (!_lg_typecheck_setBvhQuantization(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btQuantizedBvhDoubleData::m_bvhQuantization function");
		}
		btVector3DoubleData value=*value_ptr;

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_bvhQuantization(btVector3DoubleData). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bvhQuantization = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_curNodeIndex(int value)
	static int _bind_setCurNodeIndex(lua_State *L) {
		if (!_lg_typecheck_setCurNodeIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_curNodeIndex(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_curNodeIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_curNodeIndex(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_curNodeIndex = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_useQuantization(int value)
	static int _bind_setUseQuantization(lua_State *L) {
		if (!_lg_typecheck_setUseQuantization(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_useQuantization(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_useQuantization(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_useQuantization(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_useQuantization = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value)
	static int _bind_setNumContiguousLeafNodes(lua_State *L) {
		if (!_lg_typecheck_setNumContiguousLeafNodes(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numContiguousLeafNodes(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numContiguousLeafNodes = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value)
	static int _bind_setNumQuantizedContiguousNodes(lua_State *L) {
		if (!_lg_typecheck_setNumQuantizedContiguousNodes(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numQuantizedContiguousNodes(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numQuantizedContiguousNodes = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value)
	static int _bind_setContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setContiguousNodesPtr(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData * value)\nClass arguments details:\narg 1 ID = 92362319\n\n%s",luna_dumpStack(L).c_str());
		}

		btOptimizedBvhNodeDoubleData* value=(Luna< btOptimizedBvhNodeDoubleData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_contiguousNodesPtr(btOptimizedBvhNodeDoubleData *). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)
	static int _bind_setQuantizedContiguousNodesPtr(lua_State *L) {
		if (!_lg_typecheck_setQuantizedContiguousNodesPtr(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData * value)\nClass arguments details:\narg 1 ID = 91047799\n\n%s",luna_dumpStack(L).c_str());
		}

		btQuantizedBvhNodeData* value=(Luna< btQuantizedBvhNodeData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_quantizedContiguousNodesPtr(btQuantizedBvhNodeData *). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_quantizedContiguousNodesPtr = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_traversalMode(int value)
	static int _bind_setTraversalMode(lua_State *L) {
		if (!_lg_typecheck_setTraversalMode(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_traversalMode(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_traversalMode(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_traversalMode(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_traversalMode = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value)
	static int _bind_setNumSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_setNumSubtreeHeaders(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_numSubtreeHeaders(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_numSubtreeHeaders(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numSubtreeHeaders = value;

		return 0;
	}

	// void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)
	static int _bind_setSubTreeInfoPtr(lua_State *L) {
		if (!_lg_typecheck_setSubTreeInfoPtr(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value) function, expected prototype:\nvoid btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData * value)\nClass arguments details:\narg 1 ID = 95109631\n\n%s",luna_dumpStack(L).c_str());
		}

		btBvhSubtreeInfoData* value=(Luna< btBvhSubtreeInfoData >::check(L,2));

		btQuantizedBvhDoubleData* self=(Luna< btQuantizedBvhDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhDoubleData::m_subTreeInfoPtr(btBvhSubtreeInfoData *). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhDoubleData >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getBvhAabbMin", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getBvhAabbMin},
	{"getBvhAabbMax", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getBvhAabbMax},
	{"getBvhQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getBvhQuantization},
	{"getCurNodeIndex", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getCurNodeIndex},
	{"getUseQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getUseQuantization},
	{"getNumContiguousLeafNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getNumContiguousLeafNodes},
	{"getNumQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getNumQuantizedContiguousNodes},
	{"getContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getContiguousNodesPtr},
	{"getQuantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getQuantizedContiguousNodesPtr},
	{"getTraversalMode", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getTraversalMode},
	{"getNumSubtreeHeaders", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getNumSubtreeHeaders},
	{"getSubTreeInfoPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_getSubTreeInfoPtr},
	{"setBvhAabbMin", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setBvhAabbMin},
	{"setBvhAabbMax", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setBvhAabbMax},
	{"setBvhQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setBvhQuantization},
	{"setCurNodeIndex", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setCurNodeIndex},
	{"setUseQuantization", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setUseQuantization},
	{"setNumContiguousLeafNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setNumContiguousLeafNodes},
	{"setNumQuantizedContiguousNodes", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setNumQuantizedContiguousNodes},
	{"setContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setContiguousNodesPtr},
	{"setQuantizedContiguousNodesPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setQuantizedContiguousNodesPtr},
	{"setTraversalMode", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setTraversalMode},
	{"setNumSubtreeHeaders", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setNumSubtreeHeaders},
	{"setSubTreeInfoPtr", &luna_wrapper_btQuantizedBvhDoubleData::_bind_setSubTreeInfoPtr},
	{"dynCast", &luna_wrapper_btQuantizedBvhDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhDoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btQuantizedBvhDoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btQuantizedBvhDoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhDoubleData >::enumValues[] = {
	{0,0}
};


