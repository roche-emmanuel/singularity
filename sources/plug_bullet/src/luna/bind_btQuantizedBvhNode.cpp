#include <plug_common.h>

class luna_wrapper_btQuantizedBvhNode {
public:
	typedef Luna< btQuantizedBvhNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59813041) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btQuantizedBvhNode* rhs =(Luna< btQuantizedBvhNode >::check(L,2));
		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
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

		btQuantizedBvhNode* self= (btQuantizedBvhNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btQuantizedBvhNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59813041) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btQuantizedBvhNode >::check(L,1));
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

		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhNode");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhNode",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_isLeafNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPartId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEscapeIndexOrTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEscapeIndexOrTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool btQuantizedBvhNode::isLeafNode() const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luaL_error(L, "luna typecheck failed in bool btQuantizedBvhNode::isLeafNode() const function, expected prototype:\nbool btQuantizedBvhNode::isLeafNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btQuantizedBvhNode::isLeafNode() const. Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLeafNode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btQuantizedBvhNode::getEscapeIndex() const
	static int _bind_getEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhNode::getEscapeIndex() const function, expected prototype:\nint btQuantizedBvhNode::getEscapeIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhNode::getEscapeIndex() const. Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEscapeIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhNode::getTriangleIndex() const
	static int _bind_getTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhNode::getTriangleIndex() const function, expected prototype:\nint btQuantizedBvhNode::getTriangleIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhNode::getTriangleIndex() const. Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTriangleIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhNode::getPartId() const
	static int _bind_getPartId(lua_State *L) {
		if (!_lg_typecheck_getPartId(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhNode::getPartId() const function, expected prototype:\nint btQuantizedBvhNode::getPartId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhNode::getPartId() const. Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getPartId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvhNode::m_escapeIndexOrTriangleIndex()
	static int _bind_getEscapeIndexOrTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndexOrTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhNode::m_escapeIndexOrTriangleIndex() function, expected prototype:\nint btQuantizedBvhNode::m_escapeIndexOrTriangleIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btQuantizedBvhNode::m_escapeIndexOrTriangleIndex(). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_escapeIndexOrTriangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuantizedBvhNode::m_escapeIndexOrTriangleIndex(int value)
	static int _bind_setEscapeIndexOrTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndexOrTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhNode::m_escapeIndexOrTriangleIndex(int value) function, expected prototype:\nvoid btQuantizedBvhNode::m_escapeIndexOrTriangleIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhNode* self=(Luna< btQuantizedBvhNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuantizedBvhNode::m_escapeIndexOrTriangleIndex(int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvhNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_escapeIndexOrTriangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btQuantizedBvhNode* LunaTraits< btQuantizedBvhNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btQuantizedBvhNode >::_bind_dtor(btQuantizedBvhNode* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvhNode >::className[] = "btQuantizedBvhNode";
const char LunaTraits< btQuantizedBvhNode >::fullName[] = "btQuantizedBvhNode";
const char LunaTraits< btQuantizedBvhNode >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvhNode >::parents[] = {0};
const int LunaTraits< btQuantizedBvhNode >::hash = 59813041;
const int LunaTraits< btQuantizedBvhNode >::uniqueIDs[] = {59813041,0};

luna_RegType LunaTraits< btQuantizedBvhNode >::methods[] = {
	{"isLeafNode", &luna_wrapper_btQuantizedBvhNode::_bind_isLeafNode},
	{"getEscapeIndex", &luna_wrapper_btQuantizedBvhNode::_bind_getEscapeIndex},
	{"getTriangleIndex", &luna_wrapper_btQuantizedBvhNode::_bind_getTriangleIndex},
	{"getPartId", &luna_wrapper_btQuantizedBvhNode::_bind_getPartId},
	{"getEscapeIndexOrTriangleIndex", &luna_wrapper_btQuantizedBvhNode::_bind_getEscapeIndexOrTriangleIndex},
	{"setEscapeIndexOrTriangleIndex", &luna_wrapper_btQuantizedBvhNode::_bind_setEscapeIndexOrTriangleIndex},
	{"dynCast", &luna_wrapper_btQuantizedBvhNode::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhNode::_bind___eq},
	{"fromVoid", &luna_wrapper_btQuantizedBvhNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btQuantizedBvhNode::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhNode >::enumValues[] = {
	{0,0}
};


