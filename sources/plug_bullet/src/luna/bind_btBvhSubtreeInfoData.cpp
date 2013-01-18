#include <plug_common.h>

class luna_wrapper_btBvhSubtreeInfoData {
public:
	typedef Luna< btBvhSubtreeInfoData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95109631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBvhSubtreeInfoData*)");
		}

		btBvhSubtreeInfoData* rhs =(Luna< btBvhSubtreeInfoData >::check(L,2));
		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
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

		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBvhSubtreeInfoData");
		
		return luna_dynamicCast(L,converters,"btBvhSubtreeInfoData",name);
	}


	// Constructor checkers:

	// Function checkers:
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

	// Function binds:
	// int btBvhSubtreeInfoData::m_rootNodeIndex()
	static int _bind_getRootNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getRootNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhSubtreeInfoData::m_rootNodeIndex() function, expected prototype:\nint btBvhSubtreeInfoData::m_rootNodeIndex()\nClass arguments details:\n");
		}


		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhSubtreeInfoData::m_rootNodeIndex(). Got : '%s'",typeid(Luna< btBvhSubtreeInfoData >::check(L,1)).name());
		}
		int lret = self->m_rootNodeIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBvhSubtreeInfoData::m_subtreeSize()
	static int _bind_getSubtreeSize(lua_State *L) {
		if (!_lg_typecheck_getSubtreeSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhSubtreeInfoData::m_subtreeSize() function, expected prototype:\nint btBvhSubtreeInfoData::m_subtreeSize()\nClass arguments details:\n");
		}


		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhSubtreeInfoData::m_subtreeSize(). Got : '%s'",typeid(Luna< btBvhSubtreeInfoData >::check(L,1)).name());
		}
		int lret = self->m_subtreeSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBvhSubtreeInfoData::m_rootNodeIndex(int value)
	static int _bind_setRootNodeIndex(lua_State *L) {
		if (!_lg_typecheck_setRootNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhSubtreeInfoData::m_rootNodeIndex(int value) function, expected prototype:\nvoid btBvhSubtreeInfoData::m_rootNodeIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhSubtreeInfoData::m_rootNodeIndex(int). Got : '%s'",typeid(Luna< btBvhSubtreeInfoData >::check(L,1)).name());
		}
		self->m_rootNodeIndex = value;

		return 0;
	}

	// void btBvhSubtreeInfoData::m_subtreeSize(int value)
	static int _bind_setSubtreeSize(lua_State *L) {
		if (!_lg_typecheck_setSubtreeSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhSubtreeInfoData::m_subtreeSize(int value) function, expected prototype:\nvoid btBvhSubtreeInfoData::m_subtreeSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBvhSubtreeInfoData* self=(Luna< btBvhSubtreeInfoData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhSubtreeInfoData::m_subtreeSize(int). Got : '%s'",typeid(Luna< btBvhSubtreeInfoData >::check(L,1)).name());
		}
		self->m_subtreeSize = value;

		return 0;
	}


	// Operator binds:

};

btBvhSubtreeInfoData* LunaTraits< btBvhSubtreeInfoData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btBvhSubtreeInfoData >::_bind_dtor(btBvhSubtreeInfoData* obj) {
	delete obj;
}

const char LunaTraits< btBvhSubtreeInfoData >::className[] = "btBvhSubtreeInfoData";
const char LunaTraits< btBvhSubtreeInfoData >::fullName[] = "btBvhSubtreeInfoData";
const char LunaTraits< btBvhSubtreeInfoData >::moduleName[] = "bullet";
const char* LunaTraits< btBvhSubtreeInfoData >::parents[] = {0};
const int LunaTraits< btBvhSubtreeInfoData >::hash = 95109631;
const int LunaTraits< btBvhSubtreeInfoData >::uniqueIDs[] = {95109631,0};

luna_RegType LunaTraits< btBvhSubtreeInfoData >::methods[] = {
	{"getRootNodeIndex", &luna_wrapper_btBvhSubtreeInfoData::_bind_getRootNodeIndex},
	{"getSubtreeSize", &luna_wrapper_btBvhSubtreeInfoData::_bind_getSubtreeSize},
	{"setRootNodeIndex", &luna_wrapper_btBvhSubtreeInfoData::_bind_setRootNodeIndex},
	{"setSubtreeSize", &luna_wrapper_btBvhSubtreeInfoData::_bind_setSubtreeSize},
	{"dynCast", &luna_wrapper_btBvhSubtreeInfoData::_bind_dynCast},
	{"__eq", &luna_wrapper_btBvhSubtreeInfoData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btBvhSubtreeInfoData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBvhSubtreeInfoData >::enumValues[] = {
	{0,0}
};


