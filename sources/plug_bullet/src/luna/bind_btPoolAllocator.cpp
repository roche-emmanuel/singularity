#include <plug_common.h>

class luna_wrapper_btPoolAllocator {
public:
	typedef Luna< btPoolAllocator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19742987) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPoolAllocator*)");
		}

		btPoolAllocator* rhs =(Luna< btPoolAllocator >::check(L,2));
		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
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

		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPoolAllocator");
		
		return luna_dynamicCast(L,converters,"btPoolAllocator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFreeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_validPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_freeMemory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElementSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoolAddress_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoolAddress_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPoolAllocator::btPoolAllocator(int elemSize, int maxElements)
	static btPoolAllocator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator::btPoolAllocator(int elemSize, int maxElements) function, expected prototype:\nbtPoolAllocator::btPoolAllocator(int elemSize, int maxElements)\nClass arguments details:\n");
		}

		int elemSize=(int)lua_tointeger(L,1);
		int maxElements=(int)lua_tointeger(L,2);

		return new btPoolAllocator(elemSize, maxElements);
	}


	// Function binds:
	// int btPoolAllocator::getFreeCount() const
	static int _bind_getFreeCount(lua_State *L) {
		if (!_lg_typecheck_getFreeCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoolAllocator::getFreeCount() const function, expected prototype:\nint btPoolAllocator::getFreeCount() const\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoolAllocator::getFreeCount() const. Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		int lret = self->getFreeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPoolAllocator::getUsedCount() const
	static int _bind_getUsedCount(lua_State *L) {
		if (!_lg_typecheck_getUsedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoolAllocator::getUsedCount() const function, expected prototype:\nint btPoolAllocator::getUsedCount() const\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoolAllocator::getUsedCount() const. Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		int lret = self->getUsedCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPoolAllocator::getMaxCount() const
	static int _bind_getMaxCount(lua_State *L) {
		if (!_lg_typecheck_getMaxCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoolAllocator::getMaxCount() const function, expected prototype:\nint btPoolAllocator::getMaxCount() const\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoolAllocator::getMaxCount() const. Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		int lret = self->getMaxCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btPoolAllocator::allocate(int size)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btPoolAllocator::allocate(int size) function, expected prototype:\nvoid * btPoolAllocator::allocate(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btPoolAllocator::allocate(int). Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		void * lret = self->allocate(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btPoolAllocator::validPtr(void * ptr)
	static int _bind_validPtr(lua_State *L) {
		if (!_lg_typecheck_validPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPoolAllocator::validPtr(void * ptr) function, expected prototype:\nbool btPoolAllocator::validPtr(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPoolAllocator::validPtr(void *). Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		bool lret = self->validPtr(ptr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btPoolAllocator::freeMemory(void * ptr)
	static int _bind_freeMemory(lua_State *L) {
		if (!_lg_typecheck_freeMemory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoolAllocator::freeMemory(void * ptr) function, expected prototype:\nvoid btPoolAllocator::freeMemory(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoolAllocator::freeMemory(void *). Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		self->freeMemory(ptr);

		return 0;
	}

	// int btPoolAllocator::getElementSize() const
	static int _bind_getElementSize(lua_State *L) {
		if (!_lg_typecheck_getElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoolAllocator::getElementSize() const function, expected prototype:\nint btPoolAllocator::getElementSize() const\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoolAllocator::getElementSize() const. Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		int lret = self->getElementSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * btPoolAllocator::getPoolAddress()
	static int _bind_getPoolAddress_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPoolAddress_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btPoolAllocator::getPoolAddress() function, expected prototype:\nunsigned char * btPoolAllocator::getPoolAddress()\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btPoolAllocator::getPoolAddress(). Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		unsigned char * lret = self->getPoolAddress();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * btPoolAllocator::getPoolAddress() const
	static int _bind_getPoolAddress_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPoolAddress_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btPoolAllocator::getPoolAddress() const function, expected prototype:\nconst unsigned char * btPoolAllocator::getPoolAddress() const\nClass arguments details:\n");
		}


		btPoolAllocator* self=(Luna< btPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btPoolAllocator::getPoolAddress() const. Got : '%s'",typeid(Luna< btPoolAllocator >::check(L,1)).name());
		}
		const unsigned char * lret = self->getPoolAddress();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for btPoolAllocator::getPoolAddress
	static int _bind_getPoolAddress(lua_State *L) {
		if (_lg_typecheck_getPoolAddress_overload_1(L)) return _bind_getPoolAddress_overload_1(L);
		if (_lg_typecheck_getPoolAddress_overload_2(L)) return _bind_getPoolAddress_overload_2(L);

		luaL_error(L, "error in function getPoolAddress, cannot match any of the overloads for function getPoolAddress:\n  getPoolAddress()\n  getPoolAddress()\n");
		return 0;
	}


	// Operator binds:

};

btPoolAllocator* LunaTraits< btPoolAllocator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPoolAllocator::_bind_ctor(L);
}

void LunaTraits< btPoolAllocator >::_bind_dtor(btPoolAllocator* obj) {
	delete obj;
}

const char LunaTraits< btPoolAllocator >::className[] = "btPoolAllocator";
const char LunaTraits< btPoolAllocator >::fullName[] = "btPoolAllocator";
const char LunaTraits< btPoolAllocator >::moduleName[] = "bullet";
const char* LunaTraits< btPoolAllocator >::parents[] = {0};
const int LunaTraits< btPoolAllocator >::hash = 19742987;
const int LunaTraits< btPoolAllocator >::uniqueIDs[] = {19742987,0};

luna_RegType LunaTraits< btPoolAllocator >::methods[] = {
	{"getFreeCount", &luna_wrapper_btPoolAllocator::_bind_getFreeCount},
	{"getUsedCount", &luna_wrapper_btPoolAllocator::_bind_getUsedCount},
	{"getMaxCount", &luna_wrapper_btPoolAllocator::_bind_getMaxCount},
	{"allocate", &luna_wrapper_btPoolAllocator::_bind_allocate},
	{"validPtr", &luna_wrapper_btPoolAllocator::_bind_validPtr},
	{"freeMemory", &luna_wrapper_btPoolAllocator::_bind_freeMemory},
	{"getElementSize", &luna_wrapper_btPoolAllocator::_bind_getElementSize},
	{"getPoolAddress", &luna_wrapper_btPoolAllocator::_bind_getPoolAddress},
	{"dynCast", &luna_wrapper_btPoolAllocator::_bind_dynCast},
	{"__eq", &luna_wrapper_btPoolAllocator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btPoolAllocator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPoolAllocator >::enumValues[] = {
	{0,0}
};


