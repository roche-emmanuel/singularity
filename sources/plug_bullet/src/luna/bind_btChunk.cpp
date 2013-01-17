#include <plug_common.h>

class luna_wrapper_btChunk {
public:
	typedef Luna< btChunk > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61426957) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btChunk*)");
		}

		btChunk* rhs =(Luna< btChunk >::check(L,2));
		btChunk* self=(Luna< btChunk >::check(L,1));
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

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btChunk");
		
		return luna_dynamicCast(L,converters,"btChunk",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_chunkCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_oldPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_dna_nr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_number(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_chunkCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_oldPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_dna_nr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_number(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btChunk::m_chunkCode()
	static int _bind_getM_chunkCode(lua_State *L) {
		if (!_lg_typecheck_getM_chunkCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btChunk::m_chunkCode() function, expected prototype:\nint btChunk::m_chunkCode()\nClass arguments details:\n");
		}


		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btChunk::m_chunkCode(). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		int lret = self->m_chunkCode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btChunk::m_length()
	static int _bind_getM_length(lua_State *L) {
		if (!_lg_typecheck_getM_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btChunk::m_length() function, expected prototype:\nint btChunk::m_length()\nClass arguments details:\n");
		}


		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btChunk::m_length(). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		int lret = self->m_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btChunk::m_oldPtr()
	static int _bind_getM_oldPtr(lua_State *L) {
		if (!_lg_typecheck_getM_oldPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btChunk::m_oldPtr() function, expected prototype:\nvoid * btChunk::m_oldPtr()\nClass arguments details:\n");
		}


		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btChunk::m_oldPtr(). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		void * lret = self->m_oldPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int btChunk::m_dna_nr()
	static int _bind_getM_dna_nr(lua_State *L) {
		if (!_lg_typecheck_getM_dna_nr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btChunk::m_dna_nr() function, expected prototype:\nint btChunk::m_dna_nr()\nClass arguments details:\n");
		}


		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btChunk::m_dna_nr(). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		int lret = self->m_dna_nr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btChunk::m_number()
	static int _bind_getM_number(lua_State *L) {
		if (!_lg_typecheck_getM_number(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btChunk::m_number() function, expected prototype:\nint btChunk::m_number()\nClass arguments details:\n");
		}


		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btChunk::m_number(). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		int lret = self->m_number;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btChunk::m_chunkCode(int value)
	static int _bind_setM_chunkCode(lua_State *L) {
		if (!_lg_typecheck_setM_chunkCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btChunk::m_chunkCode(int value) function, expected prototype:\nvoid btChunk::m_chunkCode(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btChunk::m_chunkCode(int). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		self->m_chunkCode = value;

		return 0;
	}

	// void btChunk::m_length(int value)
	static int _bind_setM_length(lua_State *L) {
		if (!_lg_typecheck_setM_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btChunk::m_length(int value) function, expected prototype:\nvoid btChunk::m_length(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btChunk::m_length(int). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		self->m_length = value;

		return 0;
	}

	// void btChunk::m_oldPtr(void * value)
	static int _bind_setM_oldPtr(lua_State *L) {
		if (!_lg_typecheck_setM_oldPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btChunk::m_oldPtr(void * value) function, expected prototype:\nvoid btChunk::m_oldPtr(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btChunk::m_oldPtr(void *). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		self->m_oldPtr = value;

		return 0;
	}

	// void btChunk::m_dna_nr(int value)
	static int _bind_setM_dna_nr(lua_State *L) {
		if (!_lg_typecheck_setM_dna_nr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btChunk::m_dna_nr(int value) function, expected prototype:\nvoid btChunk::m_dna_nr(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btChunk::m_dna_nr(int). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		self->m_dna_nr = value;

		return 0;
	}

	// void btChunk::m_number(int value)
	static int _bind_setM_number(lua_State *L) {
		if (!_lg_typecheck_setM_number(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btChunk::m_number(int value) function, expected prototype:\nvoid btChunk::m_number(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btChunk* self=(Luna< btChunk >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btChunk::m_number(int). Got : '%s'",typeid(Luna< btChunk >::check(L,1)).name());
		}
		self->m_number = value;

		return 0;
	}


	// Operator binds:

};

btChunk* LunaTraits< btChunk >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btChunk >::_bind_dtor(btChunk* obj) {
	delete obj;
}

const char LunaTraits< btChunk >::className[] = "btChunk";
const char LunaTraits< btChunk >::fullName[] = "btChunk";
const char LunaTraits< btChunk >::moduleName[] = "bullet";
const char* LunaTraits< btChunk >::parents[] = {0};
const int LunaTraits< btChunk >::hash = 61426957;
const int LunaTraits< btChunk >::uniqueIDs[] = {61426957,0};

luna_RegType LunaTraits< btChunk >::methods[] = {
	{"getM_chunkCode", &luna_wrapper_btChunk::_bind_getM_chunkCode},
	{"getM_length", &luna_wrapper_btChunk::_bind_getM_length},
	{"getM_oldPtr", &luna_wrapper_btChunk::_bind_getM_oldPtr},
	{"getM_dna_nr", &luna_wrapper_btChunk::_bind_getM_dna_nr},
	{"getM_number", &luna_wrapper_btChunk::_bind_getM_number},
	{"setM_chunkCode", &luna_wrapper_btChunk::_bind_setM_chunkCode},
	{"setM_length", &luna_wrapper_btChunk::_bind_setM_length},
	{"setM_oldPtr", &luna_wrapper_btChunk::_bind_setM_oldPtr},
	{"setM_dna_nr", &luna_wrapper_btChunk::_bind_setM_dna_nr},
	{"setM_number", &luna_wrapper_btChunk::_bind_setM_number},
	{"dynCast", &luna_wrapper_btChunk::_bind_dynCast},
	{"__eq", &luna_wrapper_btChunk::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btChunk >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btChunk >::enumValues[] = {
	{0,0}
};


