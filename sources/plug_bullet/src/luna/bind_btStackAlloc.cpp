#include <plug_common.h>

class luna_wrapper_btStackAlloc {
public:
	typedef Luna< btStackAlloc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46980417) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btStackAlloc*)");
		}

		btStackAlloc* rhs =(Luna< btStackAlloc >::check(L,2));
		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
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

		btStackAlloc* self= (btStackAlloc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btStackAlloc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46980417) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btStackAlloc >::check(L,1));
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

		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btStackAlloc");
		
		return luna_dynamicCast(L,converters,"btStackAlloc",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAvailableMemory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,60616493)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btStackAlloc::btStackAlloc(unsigned int size)
	static btStackAlloc* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc::btStackAlloc(unsigned int size) function, expected prototype:\nbtStackAlloc::btStackAlloc(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,1);

		return new btStackAlloc(size);
	}


	// Function binds:
	// void btStackAlloc::create(unsigned int size)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStackAlloc::create(unsigned int size) function, expected prototype:\nvoid btStackAlloc::create(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStackAlloc::create(unsigned int). Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		self->create(size);

		return 0;
	}

	// void btStackAlloc::destroy()
	static int _bind_destroy(lua_State *L) {
		if (!_lg_typecheck_destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStackAlloc::destroy() function, expected prototype:\nvoid btStackAlloc::destroy()\nClass arguments details:\n");
		}


		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStackAlloc::destroy(). Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		self->destroy();

		return 0;
	}

	// int btStackAlloc::getAvailableMemory() const
	static int _bind_getAvailableMemory(lua_State *L) {
		if (!_lg_typecheck_getAvailableMemory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStackAlloc::getAvailableMemory() const function, expected prototype:\nint btStackAlloc::getAvailableMemory() const\nClass arguments details:\n");
		}


		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStackAlloc::getAvailableMemory() const. Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		int lret = self->getAvailableMemory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * btStackAlloc::allocate(unsigned int size)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btStackAlloc::allocate(unsigned int size) function, expected prototype:\nunsigned char * btStackAlloc::allocate(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btStackAlloc::allocate(unsigned int). Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		unsigned char * lret = self->allocate(size);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// btBlock * btStackAlloc::beginBlock()
	static int _bind_beginBlock(lua_State *L) {
		if (!_lg_typecheck_beginBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBlock * btStackAlloc::beginBlock() function, expected prototype:\nbtBlock * btStackAlloc::beginBlock()\nClass arguments details:\n");
		}


		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBlock * btStackAlloc::beginBlock(). Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		btBlock * lret = self->beginBlock();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBlock >::push(L,lret,false);

		return 1;
	}

	// void btStackAlloc::endBlock(btBlock * block)
	static int _bind_endBlock(lua_State *L) {
		if (!_lg_typecheck_endBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStackAlloc::endBlock(btBlock * block) function, expected prototype:\nvoid btStackAlloc::endBlock(btBlock * block)\nClass arguments details:\narg 1 ID = 60616493\n");
		}

		btBlock* block=(Luna< btBlock >::check(L,2));

		btStackAlloc* self=(Luna< btStackAlloc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStackAlloc::endBlock(btBlock *). Got : '%s'",typeid(Luna< btStackAlloc >::check(L,1)).name());
		}
		self->endBlock(block);

		return 0;
	}


	// Operator binds:

};

btStackAlloc* LunaTraits< btStackAlloc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btStackAlloc::_bind_ctor(L);
}

void LunaTraits< btStackAlloc >::_bind_dtor(btStackAlloc* obj) {
	delete obj;
}

const char LunaTraits< btStackAlloc >::className[] = "btStackAlloc";
const char LunaTraits< btStackAlloc >::fullName[] = "btStackAlloc";
const char LunaTraits< btStackAlloc >::moduleName[] = "bullet";
const char* LunaTraits< btStackAlloc >::parents[] = {0};
const int LunaTraits< btStackAlloc >::hash = 46980417;
const int LunaTraits< btStackAlloc >::uniqueIDs[] = {46980417,0};

luna_RegType LunaTraits< btStackAlloc >::methods[] = {
	{"create", &luna_wrapper_btStackAlloc::_bind_create},
	{"destroy", &luna_wrapper_btStackAlloc::_bind_destroy},
	{"getAvailableMemory", &luna_wrapper_btStackAlloc::_bind_getAvailableMemory},
	{"allocate", &luna_wrapper_btStackAlloc::_bind_allocate},
	{"beginBlock", &luna_wrapper_btStackAlloc::_bind_beginBlock},
	{"endBlock", &luna_wrapper_btStackAlloc::_bind_endBlock},
	{"dynCast", &luna_wrapper_btStackAlloc::_bind_dynCast},
	{"__eq", &luna_wrapper_btStackAlloc::_bind___eq},
	{"fromVoid", &luna_wrapper_btStackAlloc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btStackAlloc::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btStackAlloc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btStackAlloc >::enumValues[] = {
	{0,0}
};


