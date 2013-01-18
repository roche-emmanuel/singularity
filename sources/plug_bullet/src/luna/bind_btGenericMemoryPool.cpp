#include <plug_common.h>

class luna_wrapper_btGenericMemoryPool {
public:
	typedef Luna< btGenericMemoryPool > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,388204) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGenericMemoryPool*)");
		}

		btGenericMemoryPool* rhs =(Luna< btGenericMemoryPool >::check(L,2));
		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
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

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGenericMemoryPool");
		
		return luna_dynamicCast(L,converters,"btGenericMemoryPool",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_init_pool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_end_pool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pool_capacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_gem_element_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_max_element_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_allocated_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_free_positions_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_element_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_getPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_free_nodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_allocated_sizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_free_nodes_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_free_nodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_allocated_sizes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_allocated_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_free_nodes_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGenericMemoryPool::btGenericMemoryPool(size_t element_size, size_t element_count)
	static btGenericMemoryPool* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGenericMemoryPool::btGenericMemoryPool(size_t element_size, size_t element_count) function, expected prototype:\nbtGenericMemoryPool::btGenericMemoryPool(size_t element_size, size_t element_count)\nClass arguments details:\n");
		}

		size_t element_size=(size_t)lua_tointeger(L,1);
		size_t element_count=(size_t)lua_tointeger(L,2);

		return new btGenericMemoryPool(element_size, element_count);
	}


	// Function binds:
	// void btGenericMemoryPool::init_pool(size_t element_size, size_t element_count)
	static int _bind_init_pool(lua_State *L) {
		if (!_lg_typecheck_init_pool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::init_pool(size_t element_size, size_t element_count) function, expected prototype:\nvoid btGenericMemoryPool::init_pool(size_t element_size, size_t element_count)\nClass arguments details:\n");
		}

		size_t element_size=(size_t)lua_tointeger(L,2);
		size_t element_count=(size_t)lua_tointeger(L,3);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::init_pool(size_t, size_t). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->init_pool(element_size, element_count);

		return 0;
	}

	// void btGenericMemoryPool::end_pool()
	static int _bind_end_pool(lua_State *L) {
		if (!_lg_typecheck_end_pool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::end_pool() function, expected prototype:\nvoid btGenericMemoryPool::end_pool()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::end_pool(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->end_pool();

		return 0;
	}

	// size_t btGenericMemoryPool::get_pool_capacity()
	static int _bind_get_pool_capacity(lua_State *L) {
		if (!_lg_typecheck_get_pool_capacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::get_pool_capacity() function, expected prototype:\nsize_t btGenericMemoryPool::get_pool_capacity()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::get_pool_capacity(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->get_pool_capacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t btGenericMemoryPool::gem_element_size()
	static int _bind_gem_element_size(lua_State *L) {
		if (!_lg_typecheck_gem_element_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::gem_element_size() function, expected prototype:\nsize_t btGenericMemoryPool::gem_element_size()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::gem_element_size(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->gem_element_size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t btGenericMemoryPool::get_max_element_count()
	static int _bind_get_max_element_count(lua_State *L) {
		if (!_lg_typecheck_get_max_element_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::get_max_element_count() function, expected prototype:\nsize_t btGenericMemoryPool::get_max_element_count()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::get_max_element_count(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->get_max_element_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t btGenericMemoryPool::get_allocated_count()
	static int _bind_get_allocated_count(lua_State *L) {
		if (!_lg_typecheck_get_allocated_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::get_allocated_count() function, expected prototype:\nsize_t btGenericMemoryPool::get_allocated_count()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::get_allocated_count(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->get_allocated_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t btGenericMemoryPool::get_free_positions_count()
	static int _bind_get_free_positions_count(lua_State *L) {
		if (!_lg_typecheck_get_free_positions_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::get_free_positions_count() function, expected prototype:\nsize_t btGenericMemoryPool::get_free_positions_count()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::get_free_positions_count(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->get_free_positions_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btGenericMemoryPool::get_element_data(size_t element_index)
	static int _bind_get_element_data(lua_State *L) {
		if (!_lg_typecheck_get_element_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btGenericMemoryPool::get_element_data(size_t element_index) function, expected prototype:\nvoid * btGenericMemoryPool::get_element_data(size_t element_index)\nClass arguments details:\n");
		}

		size_t element_index=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btGenericMemoryPool::get_element_data(size_t). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		void * lret = self->get_element_data(element_index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * btGenericMemoryPool::allocate(size_t size_bytes)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btGenericMemoryPool::allocate(size_t size_bytes) function, expected prototype:\nvoid * btGenericMemoryPool::allocate(size_t size_bytes)\nClass arguments details:\n");
		}

		size_t size_bytes=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btGenericMemoryPool::allocate(size_t). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		void * lret = self->allocate(size_bytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btGenericMemoryPool::freeMemory(void * pointer)
	static int _bind_freeMemory(lua_State *L) {
		if (!_lg_typecheck_freeMemory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGenericMemoryPool::freeMemory(void * pointer) function, expected prototype:\nbool btGenericMemoryPool::freeMemory(void * pointer)\nClass arguments details:\n");
		}

		void* pointer=(Luna< void >::check(L,2));

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGenericMemoryPool::freeMemory(void *). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		bool lret = self->freeMemory(pointer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char * btGenericMemoryPool::m_pool()
	static int _bind_getPool(lua_State *L) {
		if (!_lg_typecheck_getPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btGenericMemoryPool::m_pool() function, expected prototype:\nunsigned char * btGenericMemoryPool::m_pool()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btGenericMemoryPool::m_pool(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		unsigned char * lret = self->m_pool;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// size_t * btGenericMemoryPool::m_free_nodes()
	static int _bind_get_free_nodes(lua_State *L) {
		if (!_lg_typecheck_get_free_nodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t * btGenericMemoryPool::m_free_nodes() function, expected prototype:\nsize_t * btGenericMemoryPool::m_free_nodes()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t * btGenericMemoryPool::m_free_nodes(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t * lret = self->m_free_nodes;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// size_t * btGenericMemoryPool::m_allocated_sizes()
	static int _bind_get_allocated_sizes(lua_State *L) {
		if (!_lg_typecheck_get_allocated_sizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t * btGenericMemoryPool::m_allocated_sizes() function, expected prototype:\nsize_t * btGenericMemoryPool::m_allocated_sizes()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t * btGenericMemoryPool::m_allocated_sizes(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t * lret = self->m_allocated_sizes;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// size_t btGenericMemoryPool::m_free_nodes_count()
	static int _bind_get_free_nodes_count(lua_State *L) {
		if (!_lg_typecheck_get_free_nodes_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t btGenericMemoryPool::m_free_nodes_count() function, expected prototype:\nsize_t btGenericMemoryPool::m_free_nodes_count()\nClass arguments details:\n");
		}


		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t btGenericMemoryPool::m_free_nodes_count(). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		size_t lret = self->m_free_nodes_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGenericMemoryPool::m_pool(unsigned char * value)
	static int _bind_setPool(lua_State *L) {
		if (!_lg_typecheck_setPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::m_pool(unsigned char * value) function, expected prototype:\nvoid btGenericMemoryPool::m_pool(unsigned char * value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::m_pool(unsigned char *). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->m_pool = &value;

		return 0;
	}

	// void btGenericMemoryPool::m_free_nodes(size_t * value)
	static int _bind_set_free_nodes(lua_State *L) {
		if (!_lg_typecheck_set_free_nodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::m_free_nodes(size_t * value) function, expected prototype:\nvoid btGenericMemoryPool::m_free_nodes(size_t * value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::m_free_nodes(size_t *). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->m_free_nodes = &value;

		return 0;
	}

	// void btGenericMemoryPool::m_allocated_sizes(size_t * value)
	static int _bind_set_allocated_sizes(lua_State *L) {
		if (!_lg_typecheck_set_allocated_sizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::m_allocated_sizes(size_t * value) function, expected prototype:\nvoid btGenericMemoryPool::m_allocated_sizes(size_t * value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::m_allocated_sizes(size_t *). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->m_allocated_sizes = &value;

		return 0;
	}

	// void btGenericMemoryPool::m_allocated_count(size_t value)
	static int _bind_set_allocated_count(lua_State *L) {
		if (!_lg_typecheck_set_allocated_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::m_allocated_count(size_t value) function, expected prototype:\nvoid btGenericMemoryPool::m_allocated_count(size_t value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::m_allocated_count(size_t). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->m_allocated_count = value;

		return 0;
	}

	// void btGenericMemoryPool::m_free_nodes_count(size_t value)
	static int _bind_set_free_nodes_count(lua_State *L) {
		if (!_lg_typecheck_set_free_nodes_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGenericMemoryPool::m_free_nodes_count(size_t value) function, expected prototype:\nvoid btGenericMemoryPool::m_free_nodes_count(size_t value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		btGenericMemoryPool* self=(Luna< btGenericMemoryPool >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGenericMemoryPool::m_free_nodes_count(size_t). Got : '%s'",typeid(Luna< btGenericMemoryPool >::check(L,1)).name());
		}
		self->m_free_nodes_count = value;

		return 0;
	}


	// Operator binds:

};

btGenericMemoryPool* LunaTraits< btGenericMemoryPool >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGenericMemoryPool::_bind_ctor(L);
}

void LunaTraits< btGenericMemoryPool >::_bind_dtor(btGenericMemoryPool* obj) {
	delete obj;
}

const char LunaTraits< btGenericMemoryPool >::className[] = "btGenericMemoryPool";
const char LunaTraits< btGenericMemoryPool >::fullName[] = "btGenericMemoryPool";
const char LunaTraits< btGenericMemoryPool >::moduleName[] = "bullet";
const char* LunaTraits< btGenericMemoryPool >::parents[] = {0};
const int LunaTraits< btGenericMemoryPool >::hash = 388204;
const int LunaTraits< btGenericMemoryPool >::uniqueIDs[] = {388204,0};

luna_RegType LunaTraits< btGenericMemoryPool >::methods[] = {
	{"init_pool", &luna_wrapper_btGenericMemoryPool::_bind_init_pool},
	{"end_pool", &luna_wrapper_btGenericMemoryPool::_bind_end_pool},
	{"get_pool_capacity", &luna_wrapper_btGenericMemoryPool::_bind_get_pool_capacity},
	{"gem_element_size", &luna_wrapper_btGenericMemoryPool::_bind_gem_element_size},
	{"get_max_element_count", &luna_wrapper_btGenericMemoryPool::_bind_get_max_element_count},
	{"get_allocated_count", &luna_wrapper_btGenericMemoryPool::_bind_get_allocated_count},
	{"get_free_positions_count", &luna_wrapper_btGenericMemoryPool::_bind_get_free_positions_count},
	{"get_element_data", &luna_wrapper_btGenericMemoryPool::_bind_get_element_data},
	{"allocate", &luna_wrapper_btGenericMemoryPool::_bind_allocate},
	{"freeMemory", &luna_wrapper_btGenericMemoryPool::_bind_freeMemory},
	{"getPool", &luna_wrapper_btGenericMemoryPool::_bind_getPool},
	{"get_free_nodes", &luna_wrapper_btGenericMemoryPool::_bind_get_free_nodes},
	{"get_allocated_sizes", &luna_wrapper_btGenericMemoryPool::_bind_get_allocated_sizes},
	{"get_free_nodes_count", &luna_wrapper_btGenericMemoryPool::_bind_get_free_nodes_count},
	{"setPool", &luna_wrapper_btGenericMemoryPool::_bind_setPool},
	{"set_free_nodes", &luna_wrapper_btGenericMemoryPool::_bind_set_free_nodes},
	{"set_allocated_sizes", &luna_wrapper_btGenericMemoryPool::_bind_set_allocated_sizes},
	{"set_allocated_count", &luna_wrapper_btGenericMemoryPool::_bind_set_allocated_count},
	{"set_free_nodes_count", &luna_wrapper_btGenericMemoryPool::_bind_set_free_nodes_count},
	{"dynCast", &luna_wrapper_btGenericMemoryPool::_bind_dynCast},
	{"__eq", &luna_wrapper_btGenericMemoryPool::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGenericMemoryPool >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGenericMemoryPool >::enumValues[] = {
	{0,0}
};


