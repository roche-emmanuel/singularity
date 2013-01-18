#include <plug_common.h>

class luna_wrapper_btBvhSubtreeInfo {
public:
	typedef Luna< btBvhSubtreeInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75797632) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBvhSubtreeInfo*)");
		}

		btBvhSubtreeInfo* rhs =(Luna< btBvhSubtreeInfo >::check(L,2));
		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
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

		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBvhSubtreeInfo");
		
		return luna_dynamicCast(L,converters,"btBvhSubtreeInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setAabbFromQuantizeNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59813041) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubtreeSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubtreeSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBvhSubtreeInfo::btBvhSubtreeInfo()
	static btBvhSubtreeInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhSubtreeInfo::btBvhSubtreeInfo() function, expected prototype:\nbtBvhSubtreeInfo::btBvhSubtreeInfo()\nClass arguments details:\n");
		}


		return new btBvhSubtreeInfo();
	}


	// Function binds:
	// void btBvhSubtreeInfo::setAabbFromQuantizeNode(const btQuantizedBvhNode & quantizedNode)
	static int _bind_setAabbFromQuantizeNode(lua_State *L) {
		if (!_lg_typecheck_setAabbFromQuantizeNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhSubtreeInfo::setAabbFromQuantizeNode(const btQuantizedBvhNode & quantizedNode) function, expected prototype:\nvoid btBvhSubtreeInfo::setAabbFromQuantizeNode(const btQuantizedBvhNode & quantizedNode)\nClass arguments details:\narg 1 ID = 59813041\n");
		}

		const btQuantizedBvhNode* quantizedNode_ptr=(Luna< btQuantizedBvhNode >::check(L,2));
		if( !quantizedNode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quantizedNode in btBvhSubtreeInfo::setAabbFromQuantizeNode function");
		}
		const btQuantizedBvhNode & quantizedNode=*quantizedNode_ptr;

		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhSubtreeInfo::setAabbFromQuantizeNode(const btQuantizedBvhNode &). Got : '%s'",typeid(Luna< btBvhSubtreeInfo >::check(L,1)).name());
		}
		self->setAabbFromQuantizeNode(quantizedNode);

		return 0;
	}

	// int btBvhSubtreeInfo::m_rootNodeIndex()
	static int _bind_getRootNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getRootNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhSubtreeInfo::m_rootNodeIndex() function, expected prototype:\nint btBvhSubtreeInfo::m_rootNodeIndex()\nClass arguments details:\n");
		}


		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhSubtreeInfo::m_rootNodeIndex(). Got : '%s'",typeid(Luna< btBvhSubtreeInfo >::check(L,1)).name());
		}
		int lret = self->m_rootNodeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBvhSubtreeInfo::m_subtreeSize()
	static int _bind_getSubtreeSize(lua_State *L) {
		if (!_lg_typecheck_getSubtreeSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhSubtreeInfo::m_subtreeSize() function, expected prototype:\nint btBvhSubtreeInfo::m_subtreeSize()\nClass arguments details:\n");
		}


		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhSubtreeInfo::m_subtreeSize(). Got : '%s'",typeid(Luna< btBvhSubtreeInfo >::check(L,1)).name());
		}
		int lret = self->m_subtreeSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBvhSubtreeInfo::m_rootNodeIndex(int value)
	static int _bind_setRootNodeIndex(lua_State *L) {
		if (!_lg_typecheck_setRootNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhSubtreeInfo::m_rootNodeIndex(int value) function, expected prototype:\nvoid btBvhSubtreeInfo::m_rootNodeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhSubtreeInfo::m_rootNodeIndex(int). Got : '%s'",typeid(Luna< btBvhSubtreeInfo >::check(L,1)).name());
		}
		self->m_rootNodeIndex = value;

		return 0;
	}

	// void btBvhSubtreeInfo::m_subtreeSize(int value)
	static int _bind_setSubtreeSize(lua_State *L) {
		if (!_lg_typecheck_setSubtreeSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhSubtreeInfo::m_subtreeSize(int value) function, expected prototype:\nvoid btBvhSubtreeInfo::m_subtreeSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBvhSubtreeInfo* self=(Luna< btBvhSubtreeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhSubtreeInfo::m_subtreeSize(int). Got : '%s'",typeid(Luna< btBvhSubtreeInfo >::check(L,1)).name());
		}
		self->m_subtreeSize = value;

		return 0;
	}


	// Operator binds:

};

btBvhSubtreeInfo* LunaTraits< btBvhSubtreeInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBvhSubtreeInfo::_bind_ctor(L);
}

void LunaTraits< btBvhSubtreeInfo >::_bind_dtor(btBvhSubtreeInfo* obj) {
	delete obj;
}

const char LunaTraits< btBvhSubtreeInfo >::className[] = "btBvhSubtreeInfo";
const char LunaTraits< btBvhSubtreeInfo >::fullName[] = "btBvhSubtreeInfo";
const char LunaTraits< btBvhSubtreeInfo >::moduleName[] = "bullet";
const char* LunaTraits< btBvhSubtreeInfo >::parents[] = {0};
const int LunaTraits< btBvhSubtreeInfo >::hash = 75797632;
const int LunaTraits< btBvhSubtreeInfo >::uniqueIDs[] = {75797632,0};

luna_RegType LunaTraits< btBvhSubtreeInfo >::methods[] = {
	{"setAabbFromQuantizeNode", &luna_wrapper_btBvhSubtreeInfo::_bind_setAabbFromQuantizeNode},
	{"getRootNodeIndex", &luna_wrapper_btBvhSubtreeInfo::_bind_getRootNodeIndex},
	{"getSubtreeSize", &luna_wrapper_btBvhSubtreeInfo::_bind_getSubtreeSize},
	{"setRootNodeIndex", &luna_wrapper_btBvhSubtreeInfo::_bind_setRootNodeIndex},
	{"setSubtreeSize", &luna_wrapper_btBvhSubtreeInfo::_bind_setSubtreeSize},
	{"dynCast", &luna_wrapper_btBvhSubtreeInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btBvhSubtreeInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btBvhSubtreeInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBvhSubtreeInfo >::enumValues[] = {
	{0,0}
};


