#include <plug_common.h>

class luna_wrapper_btOptimizedBvhNode {
public:
	typedef Luna< btOptimizedBvhNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89043823) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOptimizedBvhNode*)");
		}

		btOptimizedBvhNode* rhs =(Luna< btOptimizedBvhNode >::check(L,2));
		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
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

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOptimizedBvhNode");
		
		return luna_dynamicCast(L,converters,"btOptimizedBvhNode",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_aabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_aabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_escapeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_subPart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_aabbMinOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_aabbMaxOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_escapeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_subPart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btOptimizedBvhNode::m_aabbMinOrg()
	static int _bind_getM_aabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_getM_aabbMinOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btOptimizedBvhNode::m_aabbMinOrg() function, expected prototype:\nbtVector3 btOptimizedBvhNode::m_aabbMinOrg()\nClass arguments details:\n");
		}


		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btOptimizedBvhNode::m_aabbMinOrg(). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMinOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btOptimizedBvhNode::m_aabbMaxOrg()
	static int _bind_getM_aabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_getM_aabbMaxOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btOptimizedBvhNode::m_aabbMaxOrg() function, expected prototype:\nbtVector3 btOptimizedBvhNode::m_aabbMaxOrg()\nClass arguments details:\n");
		}


		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btOptimizedBvhNode::m_aabbMaxOrg(). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMaxOrg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btOptimizedBvhNode::m_escapeIndex()
	static int _bind_getM_escapeIndex(lua_State *L) {
		if (!_lg_typecheck_getM_escapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNode::m_escapeIndex() function, expected prototype:\nint btOptimizedBvhNode::m_escapeIndex()\nClass arguments details:\n");
		}


		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNode::m_escapeIndex(). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		int lret = self->m_escapeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNode::m_subPart()
	static int _bind_getM_subPart(lua_State *L) {
		if (!_lg_typecheck_getM_subPart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNode::m_subPart() function, expected prototype:\nint btOptimizedBvhNode::m_subPart()\nClass arguments details:\n");
		}


		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNode::m_subPart(). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		int lret = self->m_subPart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btOptimizedBvhNode::m_triangleIndex()
	static int _bind_getM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_getM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btOptimizedBvhNode::m_triangleIndex() function, expected prototype:\nint btOptimizedBvhNode::m_triangleIndex()\nClass arguments details:\n");
		}


		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btOptimizedBvhNode::m_triangleIndex(). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btOptimizedBvhNode::m_aabbMinOrg(btVector3 value)
	static int _bind_setM_aabbMinOrg(lua_State *L) {
		if (!_lg_typecheck_setM_aabbMinOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNode::m_aabbMinOrg(btVector3 value) function, expected prototype:\nvoid btOptimizedBvhNode::m_aabbMinOrg(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNode::m_aabbMinOrg function");
		}
		btVector3 value=*value_ptr;

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNode::m_aabbMinOrg(btVector3). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		self->m_aabbMinOrg = value;

		return 0;
	}

	// void btOptimizedBvhNode::m_aabbMaxOrg(btVector3 value)
	static int _bind_setM_aabbMaxOrg(lua_State *L) {
		if (!_lg_typecheck_setM_aabbMaxOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNode::m_aabbMaxOrg(btVector3 value) function, expected prototype:\nvoid btOptimizedBvhNode::m_aabbMaxOrg(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btOptimizedBvhNode::m_aabbMaxOrg function");
		}
		btVector3 value=*value_ptr;

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNode::m_aabbMaxOrg(btVector3). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		self->m_aabbMaxOrg = value;

		return 0;
	}

	// void btOptimizedBvhNode::m_escapeIndex(int value)
	static int _bind_setM_escapeIndex(lua_State *L) {
		if (!_lg_typecheck_setM_escapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNode::m_escapeIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNode::m_escapeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNode::m_escapeIndex(int). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		self->m_escapeIndex = value;

		return 0;
	}

	// void btOptimizedBvhNode::m_subPart(int value)
	static int _bind_setM_subPart(lua_State *L) {
		if (!_lg_typecheck_setM_subPart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNode::m_subPart(int value) function, expected prototype:\nvoid btOptimizedBvhNode::m_subPart(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNode::m_subPart(int). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		self->m_subPart = value;

		return 0;
	}

	// void btOptimizedBvhNode::m_triangleIndex(int value)
	static int _bind_setM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_setM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOptimizedBvhNode::m_triangleIndex(int value) function, expected prototype:\nvoid btOptimizedBvhNode::m_triangleIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btOptimizedBvhNode* self=(Luna< btOptimizedBvhNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOptimizedBvhNode::m_triangleIndex(int). Got : '%s'",typeid(Luna< btOptimizedBvhNode >::check(L,1)).name());
		}
		self->m_triangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btOptimizedBvhNode* LunaTraits< btOptimizedBvhNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btOptimizedBvhNode >::_bind_dtor(btOptimizedBvhNode* obj) {
	delete obj;
}

const char LunaTraits< btOptimizedBvhNode >::className[] = "btOptimizedBvhNode";
const char LunaTraits< btOptimizedBvhNode >::fullName[] = "btOptimizedBvhNode";
const char LunaTraits< btOptimizedBvhNode >::moduleName[] = "bullet";
const char* LunaTraits< btOptimizedBvhNode >::parents[] = {0};
const int LunaTraits< btOptimizedBvhNode >::hash = 89043823;
const int LunaTraits< btOptimizedBvhNode >::uniqueIDs[] = {89043823,0};

luna_RegType LunaTraits< btOptimizedBvhNode >::methods[] = {
	{"getM_aabbMinOrg", &luna_wrapper_btOptimizedBvhNode::_bind_getM_aabbMinOrg},
	{"getM_aabbMaxOrg", &luna_wrapper_btOptimizedBvhNode::_bind_getM_aabbMaxOrg},
	{"getM_escapeIndex", &luna_wrapper_btOptimizedBvhNode::_bind_getM_escapeIndex},
	{"getM_subPart", &luna_wrapper_btOptimizedBvhNode::_bind_getM_subPart},
	{"getM_triangleIndex", &luna_wrapper_btOptimizedBvhNode::_bind_getM_triangleIndex},
	{"setM_aabbMinOrg", &luna_wrapper_btOptimizedBvhNode::_bind_setM_aabbMinOrg},
	{"setM_aabbMaxOrg", &luna_wrapper_btOptimizedBvhNode::_bind_setM_aabbMaxOrg},
	{"setM_escapeIndex", &luna_wrapper_btOptimizedBvhNode::_bind_setM_escapeIndex},
	{"setM_subPart", &luna_wrapper_btOptimizedBvhNode::_bind_setM_subPart},
	{"setM_triangleIndex", &luna_wrapper_btOptimizedBvhNode::_bind_setM_triangleIndex},
	{"dynCast", &luna_wrapper_btOptimizedBvhNode::_bind_dynCast},
	{"__eq", &luna_wrapper_btOptimizedBvhNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btOptimizedBvhNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOptimizedBvhNode >::enumValues[] = {
	{0,0}
};


