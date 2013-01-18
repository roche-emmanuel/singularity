#include <plug_common.h>

class luna_wrapper_btQuantizedBvhNodeData {
public:
	typedef Luna< btQuantizedBvhNodeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91047799) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvhNodeData*)");
		}

		btQuantizedBvhNodeData* rhs =(Luna< btQuantizedBvhNodeData >::check(L,2));
		btQuantizedBvhNodeData* self=(Luna< btQuantizedBvhNodeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btQuantizedBvhNodeData* self= (btQuantizedBvhNodeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btQuantizedBvhNodeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91047799) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btQuantizedBvhNodeData >::check(L,1));
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

		btQuantizedBvhNodeData* self=(Luna< btQuantizedBvhNodeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvhNodeData");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvhNodeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getEscapeIndexOrTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEscapeIndexOrTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex()
	static int _bind_getEscapeIndexOrTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndexOrTriangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex() function, expected prototype:\nint btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex()\nClass arguments details:\n");
		}


		btQuantizedBvhNodeData* self=(Luna< btQuantizedBvhNodeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex(). Got : '%s'",typeid(Luna< btQuantizedBvhNodeData >::check(L,1)).name());
		}
		int lret = self->m_escapeIndexOrTriangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex(int value)
	static int _bind_setEscapeIndexOrTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndexOrTriangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex(int value) function, expected prototype:\nvoid btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btQuantizedBvhNodeData* self=(Luna< btQuantizedBvhNodeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvhNodeData::m_escapeIndexOrTriangleIndex(int). Got : '%s'",typeid(Luna< btQuantizedBvhNodeData >::check(L,1)).name());
		}
		self->m_escapeIndexOrTriangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btQuantizedBvhNodeData* LunaTraits< btQuantizedBvhNodeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btQuantizedBvhNodeData >::_bind_dtor(btQuantizedBvhNodeData* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvhNodeData >::className[] = "btQuantizedBvhNodeData";
const char LunaTraits< btQuantizedBvhNodeData >::fullName[] = "btQuantizedBvhNodeData";
const char LunaTraits< btQuantizedBvhNodeData >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvhNodeData >::parents[] = {0};
const int LunaTraits< btQuantizedBvhNodeData >::hash = 91047799;
const int LunaTraits< btQuantizedBvhNodeData >::uniqueIDs[] = {91047799,0};

luna_RegType LunaTraits< btQuantizedBvhNodeData >::methods[] = {
	{"getEscapeIndexOrTriangleIndex", &luna_wrapper_btQuantizedBvhNodeData::_bind_getEscapeIndexOrTriangleIndex},
	{"setEscapeIndexOrTriangleIndex", &luna_wrapper_btQuantizedBvhNodeData::_bind_setEscapeIndexOrTriangleIndex},
	{"dynCast", &luna_wrapper_btQuantizedBvhNodeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvhNodeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btQuantizedBvhNodeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btQuantizedBvhNodeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvhNodeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvhNodeData >::enumValues[] = {
	{0,0}
};


