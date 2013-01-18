#include <plug_common.h>

#include <luna/wrappers/wrapper_btGenericPoolAllocator.h>

class luna_wrapper_btGenericPoolAllocator {
public:
	typedef Luna< btGenericPoolAllocator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btGenericPoolAllocator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74113773) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGenericPoolAllocator*)");
		}

		btGenericPoolAllocator* rhs =(Luna< btGenericPoolAllocator >::check(L,2));
		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
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

		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGenericPoolAllocator");
		
		return luna_dynamicCast(L,converters,"btGenericPoolAllocator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_pool_capacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_freeMemory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_pool_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_pool_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGenericPoolAllocator::btGenericPoolAllocator(size_t pool_element_size, size_t pool_element_count)
	static btGenericPoolAllocator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGenericPoolAllocator::btGenericPoolAllocator(size_t pool_element_size, size_t pool_element_count) function, expected prototype:\nbtGenericPoolAllocator::btGenericPoolAllocator(size_t pool_element_size, size_t pool_element_count)\nClass arguments details:\n");
		}

		size_t pool_element_size=(size_t)lua_tointeger(L,1);
		size_t pool_element_count=(size_t)lua_tointeger(L,2);

		return new btGenericPoolAllocator(pool_element_size, pool_element_count);
	}

	// btGenericPoolAllocator::btGenericPoolAllocator(lua_Table * data, size_t pool_element_size, size_t pool_element_count)
	static btGenericPoolAllocator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGenericPoolAllocator::btGenericPoolAllocator(lua_Table * data, size_t pool_element_size, size_t pool_element_count) function, expected prototype:\nbtGenericPoolAllocator::btGenericPoolAllocator(lua_Table * data, size_t pool_element_size, size_t pool_element_count)\nClass arguments details:\n");
		}

		size_t pool_element_size=(size_t)lua_tointeger(L,2);
		size_t pool_element_count=(size_t)lua_tointeger(L,3);

		return new wrapper_btGenericPoolAllocator(L,NULL, pool_element_size, pool_element_count);
	}

	// Overload binder for btGenericPoolAllocator::btGenericPoolAllocator
	static btGenericPoolAllocator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGenericPoolAllocator, cannot match any of the overloads for function btGenericPoolAllocator:\n  btGenericPoolAllocator(size_t, size_t)\n  btGenericPoolAllocator(lua_Table *, size_t, size_t)\n");
		return NULL;
	}


	// Function binds:
	// size_t btGenericPoolAllocator::get_pool_capacity()
	static int _bind_get_pool_capacity(lua_State *L) {
		if (!_lg_typecheck_get_pool_capacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericPoolAllocator::get_pool_capacity() function, expected prototype:\nsize_t btGenericPoolAllocator::get_pool_capacity()\nClass arguments details:\n");
		}


		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericPoolAllocator::get_pool_capacity(). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		size_t lret = self->get_pool_capacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btGenericPoolAllocator::allocate(size_t size_bytes)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btGenericPoolAllocator::allocate(size_t size_bytes) function, expected prototype:\nvoid * btGenericPoolAllocator::allocate(size_t size_bytes)\nClass arguments details:\n");
		}

		size_t size_bytes=(size_t)lua_tointeger(L,2);

		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btGenericPoolAllocator::allocate(size_t). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		void * lret = self->allocate(size_bytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btGenericPoolAllocator::freeMemory(void * pointer)
	static int _bind_freeMemory(lua_State *L) {
		if (!_lg_typecheck_freeMemory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGenericPoolAllocator::freeMemory(void * pointer) function, expected prototype:\nbool btGenericPoolAllocator::freeMemory(void * pointer)\nClass arguments details:\n");
		}

		void* pointer=(Luna< void >::check(L,2));

		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGenericPoolAllocator::freeMemory(void *). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		bool lret = self->freeMemory(pointer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t btGenericPoolAllocator::m_pool_count()
	static int _bind_get_pool_count(lua_State *L) {
		if (!_lg_typecheck_get_pool_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericPoolAllocator::m_pool_count() function, expected prototype:\nsize_t btGenericPoolAllocator::m_pool_count()\nClass arguments details:\n");
		}


		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericPoolAllocator::m_pool_count(). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		size_t lret = self->m_pool_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGenericPoolAllocator::m_pool_count(size_t value)
	static int _bind_set_pool_count(lua_State *L) {
		if (!_lg_typecheck_set_pool_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericPoolAllocator::m_pool_count(size_t value) function, expected prototype:\nvoid btGenericPoolAllocator::m_pool_count(size_t value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		btGenericPoolAllocator* self=(Luna< btGenericPoolAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericPoolAllocator::m_pool_count(size_t). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		self->m_pool_count = value;

		return 0;
	}


	// Operator binds:

};

btGenericPoolAllocator* LunaTraits< btGenericPoolAllocator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGenericPoolAllocator::_bind_ctor(L);
}

void LunaTraits< btGenericPoolAllocator >::_bind_dtor(btGenericPoolAllocator* obj) {
	delete obj;
}

const char LunaTraits< btGenericPoolAllocator >::className[] = "btGenericPoolAllocator";
const char LunaTraits< btGenericPoolAllocator >::fullName[] = "btGenericPoolAllocator";
const char LunaTraits< btGenericPoolAllocator >::moduleName[] = "bullet";
const char* LunaTraits< btGenericPoolAllocator >::parents[] = {0};
const int LunaTraits< btGenericPoolAllocator >::hash = 74113773;
const int LunaTraits< btGenericPoolAllocator >::uniqueIDs[] = {74113773,0};

luna_RegType LunaTraits< btGenericPoolAllocator >::methods[] = {
	{"get_pool_capacity", &luna_wrapper_btGenericPoolAllocator::_bind_get_pool_capacity},
	{"allocate", &luna_wrapper_btGenericPoolAllocator::_bind_allocate},
	{"freeMemory", &luna_wrapper_btGenericPoolAllocator::_bind_freeMemory},
	{"get_pool_count", &luna_wrapper_btGenericPoolAllocator::_bind_get_pool_count},
	{"set_pool_count", &luna_wrapper_btGenericPoolAllocator::_bind_set_pool_count},
	{"dynCast", &luna_wrapper_btGenericPoolAllocator::_bind_dynCast},
	{"__eq", &luna_wrapper_btGenericPoolAllocator::_bind___eq},
	{"getTable", &luna_wrapper_btGenericPoolAllocator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGenericPoolAllocator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGenericPoolAllocator >::enumValues[] = {
	{0,0}
};


