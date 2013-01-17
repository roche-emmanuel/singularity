#include <plug_common.h>

class luna_wrapper_btQuantizedBvhTree {
public:
	typedef Luna< btQuantizedBvhTree > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59994701) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhTree*)");
		}

		btQuantizedBvhTree* rhs =(Luna< btQuantizedBvhTree >::check(L,2));
		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
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

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhTree");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhTree",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_quantizePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testQuantizedBoxOverlapp(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLeafNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLeftNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRightNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEscapeNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_node_pointer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btQuantizedBvhTree::btQuantizedBvhTree()
	static btQuantizedBvhTree* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvhTree::btQuantizedBvhTree() function, expected prototype:\nbtQuantizedBvhTree::btQuantizedBvhTree()\nClass arguments details:\n");
		}


		return new btQuantizedBvhTree();
	}


	// Function binds:
	// void btQuantizedBvhTree::quantizePoint(unsigned short * quantizedpoint, const btVector3 & point) const
	static int _bind_quantizePoint(lua_State *L) {
		if (!_lg_typecheck_quantizePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhTree::quantizePoint(unsigned short * quantizedpoint, const btVector3 & point) const function, expected prototype:\nvoid btQuantizedBvhTree::quantizePoint(unsigned short * quantizedpoint, const btVector3 & point) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		unsigned short quantizedpoint=(unsigned short)lua_tointeger(L,2);
		const btVector3* point_ptr=(Luna< btVector3 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btQuantizedBvhTree::quantizePoint function");
		}
		const btVector3 & point=*point_ptr;

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhTree::quantizePoint(unsigned short *, const btVector3 &) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		self->quantizePoint(&quantizedpoint, point);

		return 0;
	}

	// bool btQuantizedBvhTree::testQuantizedBoxOverlapp(int node_index, unsigned short * quantizedMin, unsigned short * quantizedMax) const
	static int _bind_testQuantizedBoxOverlapp(lua_State *L) {
		if (!_lg_typecheck_testQuantizedBoxOverlapp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btQuantizedBvhTree::testQuantizedBoxOverlapp(int node_index, unsigned short * quantizedMin, unsigned short * quantizedMax) const function, expected prototype:\nbool btQuantizedBvhTree::testQuantizedBoxOverlapp(int node_index, unsigned short * quantizedMin, unsigned short * quantizedMax) const\nClass arguments details:\n");
		}

		int node_index=(int)lua_tointeger(L,2);
		unsigned short quantizedMin=(unsigned short)lua_tointeger(L,3);
		unsigned short quantizedMax=(unsigned short)lua_tointeger(L,4);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btQuantizedBvhTree::testQuantizedBoxOverlapp(int, unsigned short *, unsigned short *) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		bool lret = self->testQuantizedBoxOverlapp(node_index, &quantizedMin, &quantizedMax);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btQuantizedBvhTree::clearNodes()
	static int _bind_clearNodes(lua_State *L) {
		if (!_lg_typecheck_clearNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhTree::clearNodes() function, expected prototype:\nvoid btQuantizedBvhTree::clearNodes()\nClass arguments details:\n");
		}


		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhTree::clearNodes(). Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		self->clearNodes();

		return 0;
	}

	// int btQuantizedBvhTree::getNodeCount() const
	static int _bind_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_getNodeCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhTree::getNodeCount() const function, expected prototype:\nint btQuantizedBvhTree::getNodeCount() const\nClass arguments details:\n");
		}


		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhTree::getNodeCount() const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		int lret = self->getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btQuantizedBvhTree::isLeafNode(int nodeindex) const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btQuantizedBvhTree::isLeafNode(int nodeindex) const function, expected prototype:\nbool btQuantizedBvhTree::isLeafNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btQuantizedBvhTree::isLeafNode(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		bool lret = self->isLeafNode(nodeindex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btQuantizedBvhTree::getNodeData(int nodeindex) const
	static int _bind_getNodeData(lua_State *L) {
		if (!_lg_typecheck_getNodeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhTree::getNodeData(int nodeindex) const function, expected prototype:\nint btQuantizedBvhTree::getNodeData(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhTree::getNodeData(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		int lret = self->getNodeData(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuantizedBvhTree::getNodeBound(int nodeindex, btAABB & bound) const
	static int _bind_getNodeBound(lua_State *L) {
		if (!_lg_typecheck_getNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhTree::getNodeBound(int nodeindex, btAABB & bound) const function, expected prototype:\nvoid btQuantizedBvhTree::getNodeBound(int nodeindex, btAABB & bound) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btQuantizedBvhTree::getNodeBound function");
		}
		btAABB & bound=*bound_ptr;

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhTree::getNodeBound(int, btAABB &) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		self->getNodeBound(nodeindex, bound);

		return 0;
	}

	// void btQuantizedBvhTree::setNodeBound(int nodeindex, const btAABB & bound)
	static int _bind_setNodeBound(lua_State *L) {
		if (!_lg_typecheck_setNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhTree::setNodeBound(int nodeindex, const btAABB & bound) function, expected prototype:\nvoid btQuantizedBvhTree::setNodeBound(int nodeindex, const btAABB & bound)\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		const btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btQuantizedBvhTree::setNodeBound function");
		}
		const btAABB & bound=*bound_ptr;

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhTree::setNodeBound(int, const btAABB &). Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		self->setNodeBound(nodeindex, bound);

		return 0;
	}

	// int btQuantizedBvhTree::getLeftNode(int nodeindex) const
	static int _bind_getLeftNode(lua_State *L) {
		if (!_lg_typecheck_getLeftNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhTree::getLeftNode(int nodeindex) const function, expected prototype:\nint btQuantizedBvhTree::getLeftNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhTree::getLeftNode(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		int lret = self->getLeftNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhTree::getRightNode(int nodeindex) const
	static int _bind_getRightNode(lua_State *L) {
		if (!_lg_typecheck_getRightNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhTree::getRightNode(int nodeindex) const function, expected prototype:\nint btQuantizedBvhTree::getRightNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhTree::getRightNode(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		int lret = self->getRightNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhTree::getEscapeNodeIndex(int nodeindex) const
	static int _bind_getEscapeNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhTree::getEscapeNodeIndex(int nodeindex) const function, expected prototype:\nint btQuantizedBvhTree::getEscapeNodeIndex(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhTree::getEscapeNodeIndex(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		int lret = self->getEscapeNodeIndex(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const BT_QUANTIZED_BVH_NODE * btQuantizedBvhTree::get_node_pointer(int index = 0) const
	static int _bind_get_node_pointer(lua_State *L) {
		if (!_lg_typecheck_get_node_pointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const BT_QUANTIZED_BVH_NODE * btQuantizedBvhTree::get_node_pointer(int index = 0) const function, expected prototype:\nconst BT_QUANTIZED_BVH_NODE * btQuantizedBvhTree::get_node_pointer(int index = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int index=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		btQuantizedBvhTree* self=(Luna< btQuantizedBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const BT_QUANTIZED_BVH_NODE * btQuantizedBvhTree::get_node_pointer(int) const. Got : '%s'",typeid(Luna< btQuantizedBvhTree >::check(L,1)).name());
		}
		const BT_QUANTIZED_BVH_NODE * lret = self->get_node_pointer(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< BT_QUANTIZED_BVH_NODE >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btQuantizedBvhTree* LunaTraits< btQuantizedBvhTree >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btQuantizedBvhTree::_bind_ctor(L);
}

void LunaTraits< btQuantizedBvhTree >::_bind_dtor(btQuantizedBvhTree* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvhTree >::className[] = "btQuantizedBvhTree";
const char LunaTraits< btQuantizedBvhTree >::fullName[] = "btQuantizedBvhTree";
const char LunaTraits< btQuantizedBvhTree >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvhTree >::parents[] = {0};
const int LunaTraits< btQuantizedBvhTree >::hash = 59994701;
const int LunaTraits< btQuantizedBvhTree >::uniqueIDs[] = {59994701,0};

luna_RegType LunaTraits< btQuantizedBvhTree >::methods[] = {
	{"quantizePoint", &luna_wrapper_btQuantizedBvhTree::_bind_quantizePoint},
	{"testQuantizedBoxOverlapp", &luna_wrapper_btQuantizedBvhTree::_bind_testQuantizedBoxOverlapp},
	{"clearNodes", &luna_wrapper_btQuantizedBvhTree::_bind_clearNodes},
	{"getNodeCount", &luna_wrapper_btQuantizedBvhTree::_bind_getNodeCount},
	{"isLeafNode", &luna_wrapper_btQuantizedBvhTree::_bind_isLeafNode},
	{"getNodeData", &luna_wrapper_btQuantizedBvhTree::_bind_getNodeData},
	{"getNodeBound", &luna_wrapper_btQuantizedBvhTree::_bind_getNodeBound},
	{"setNodeBound", &luna_wrapper_btQuantizedBvhTree::_bind_setNodeBound},
	{"getLeftNode", &luna_wrapper_btQuantizedBvhTree::_bind_getLeftNode},
	{"getRightNode", &luna_wrapper_btQuantizedBvhTree::_bind_getRightNode},
	{"getEscapeNodeIndex", &luna_wrapper_btQuantizedBvhTree::_bind_getEscapeNodeIndex},
	{"get_node_pointer", &luna_wrapper_btQuantizedBvhTree::_bind_get_node_pointer},
	{"dynCast", &luna_wrapper_btQuantizedBvhTree::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhTree::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhTree >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhTree >::enumValues[] = {
	{0,0}
};

