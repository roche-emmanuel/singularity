#include <plug_common.h>

class luna_wrapper_btBvhTree {
public:
	typedef Luna< btBvhTree > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31835023) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBvhTree*)");
		}

		btBvhTree* rhs =(Luna< btBvhTree >::check(L,2));
		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btBvhTree* self= (btBvhTree*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBvhTree >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31835023) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBvhTree");
		
		return luna_dynamicCast(L,converters,"btBvhTree",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
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
	// btBvhTree::btBvhTree()
	static btBvhTree* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhTree::btBvhTree() function, expected prototype:\nbtBvhTree::btBvhTree()\nClass arguments details:\n");
		}


		return new btBvhTree();
	}


	// Function binds:
	// void btBvhTree::clearNodes()
	static int _bind_clearNodes(lua_State *L) {
		if (!_lg_typecheck_clearNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTree::clearNodes() function, expected prototype:\nvoid btBvhTree::clearNodes()\nClass arguments details:\n");
		}


		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTree::clearNodes(). Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		self->clearNodes();

		return 0;
	}

	// int btBvhTree::getNodeCount() const
	static int _bind_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_getNodeCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTree::getNodeCount() const function, expected prototype:\nint btBvhTree::getNodeCount() const\nClass arguments details:\n");
		}


		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTree::getNodeCount() const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		int lret = self->getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btBvhTree::isLeafNode(int nodeindex) const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBvhTree::isLeafNode(int nodeindex) const function, expected prototype:\nbool btBvhTree::isLeafNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBvhTree::isLeafNode(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		bool lret = self->isLeafNode(nodeindex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btBvhTree::getNodeData(int nodeindex) const
	static int _bind_getNodeData(lua_State *L) {
		if (!_lg_typecheck_getNodeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTree::getNodeData(int nodeindex) const function, expected prototype:\nint btBvhTree::getNodeData(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTree::getNodeData(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		int lret = self->getNodeData(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBvhTree::getNodeBound(int nodeindex, btAABB & bound) const
	static int _bind_getNodeBound(lua_State *L) {
		if (!_lg_typecheck_getNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTree::getNodeBound(int nodeindex, btAABB & bound) const function, expected prototype:\nvoid btBvhTree::getNodeBound(int nodeindex, btAABB & bound) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btBvhTree::getNodeBound function");
		}
		btAABB & bound=*bound_ptr;

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTree::getNodeBound(int, btAABB &) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		self->getNodeBound(nodeindex, bound);

		return 0;
	}

	// void btBvhTree::setNodeBound(int nodeindex, const btAABB & bound)
	static int _bind_setNodeBound(lua_State *L) {
		if (!_lg_typecheck_setNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTree::setNodeBound(int nodeindex, const btAABB & bound) function, expected prototype:\nvoid btBvhTree::setNodeBound(int nodeindex, const btAABB & bound)\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		const btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btBvhTree::setNodeBound function");
		}
		const btAABB & bound=*bound_ptr;

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTree::setNodeBound(int, const btAABB &). Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		self->setNodeBound(nodeindex, bound);

		return 0;
	}

	// int btBvhTree::getLeftNode(int nodeindex) const
	static int _bind_getLeftNode(lua_State *L) {
		if (!_lg_typecheck_getLeftNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTree::getLeftNode(int nodeindex) const function, expected prototype:\nint btBvhTree::getLeftNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTree::getLeftNode(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		int lret = self->getLeftNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBvhTree::getRightNode(int nodeindex) const
	static int _bind_getRightNode(lua_State *L) {
		if (!_lg_typecheck_getRightNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTree::getRightNode(int nodeindex) const function, expected prototype:\nint btBvhTree::getRightNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTree::getRightNode(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		int lret = self->getRightNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBvhTree::getEscapeNodeIndex(int nodeindex) const
	static int _bind_getEscapeNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTree::getEscapeNodeIndex(int nodeindex) const function, expected prototype:\nint btBvhTree::getEscapeNodeIndex(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTree::getEscapeNodeIndex(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		int lret = self->getEscapeNodeIndex(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const GIM_BVH_TREE_NODE * btBvhTree::get_node_pointer(int index = 0) const
	static int _bind_get_node_pointer(lua_State *L) {
		if (!_lg_typecheck_get_node_pointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const GIM_BVH_TREE_NODE * btBvhTree::get_node_pointer(int index = 0) const function, expected prototype:\nconst GIM_BVH_TREE_NODE * btBvhTree::get_node_pointer(int index = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int index=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btBvhTree* self=(Luna< btBvhTree >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const GIM_BVH_TREE_NODE * btBvhTree::get_node_pointer(int) const. Got : '%s'",typeid(Luna< btBvhTree >::check(L,1)).name());
		}
		const GIM_BVH_TREE_NODE * lret = self->get_node_pointer(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< GIM_BVH_TREE_NODE >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btBvhTree* LunaTraits< btBvhTree >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBvhTree::_bind_ctor(L);
}

void LunaTraits< btBvhTree >::_bind_dtor(btBvhTree* obj) {
	delete obj;
}

const char LunaTraits< btBvhTree >::className[] = "btBvhTree";
const char LunaTraits< btBvhTree >::fullName[] = "btBvhTree";
const char LunaTraits< btBvhTree >::moduleName[] = "bullet";
const char* LunaTraits< btBvhTree >::parents[] = {0};
const int LunaTraits< btBvhTree >::hash = 31835023;
const int LunaTraits< btBvhTree >::uniqueIDs[] = {31835023,0};

luna_RegType LunaTraits< btBvhTree >::methods[] = {
	{"clearNodes", &luna_wrapper_btBvhTree::_bind_clearNodes},
	{"getNodeCount", &luna_wrapper_btBvhTree::_bind_getNodeCount},
	{"isLeafNode", &luna_wrapper_btBvhTree::_bind_isLeafNode},
	{"getNodeData", &luna_wrapper_btBvhTree::_bind_getNodeData},
	{"getNodeBound", &luna_wrapper_btBvhTree::_bind_getNodeBound},
	{"setNodeBound", &luna_wrapper_btBvhTree::_bind_setNodeBound},
	{"getLeftNode", &luna_wrapper_btBvhTree::_bind_getLeftNode},
	{"getRightNode", &luna_wrapper_btBvhTree::_bind_getRightNode},
	{"getEscapeNodeIndex", &luna_wrapper_btBvhTree::_bind_getEscapeNodeIndex},
	{"get_node_pointer", &luna_wrapper_btBvhTree::_bind_get_node_pointer},
	{"dynCast", &luna_wrapper_btBvhTree::_bind_dynCast},
	{"__eq", &luna_wrapper_btBvhTree::_bind___eq},
	{"fromVoid", &luna_wrapper_btBvhTree::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBvhTree::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btBvhTree >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBvhTree >::enumValues[] = {
	{0,0}
};


