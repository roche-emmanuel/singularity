#ifndef _WRAPPERS_WRAPPER_BTGENERICPOOLALLOCATOR_H_
#define _WRAPPERS_WRAPPER_BTGENERICPOOLALLOCATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGenericPoolAllocator.h>

class wrapper_btGenericPoolAllocator : public btGenericPoolAllocator, public luna_wrapper_base {

public:
		

	~wrapper_btGenericPoolAllocator() {
		logDEBUG3("Calling delete function for wrapper btGenericPoolAllocator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGenericPoolAllocator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGenericPoolAllocator(lua_State* L, lua_Table* dum, size_t pool_element_size, size_t pool_element_count) 
		: btGenericPoolAllocator(pool_element_size, pool_element_count), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGenericPoolAllocator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// btGenericMemoryPool * btGenericPoolAllocator::push_new_pool()
	btGenericMemoryPool * public_push_new_pool() {
		return btGenericPoolAllocator::push_new_pool();
	};

	// void * btGenericPoolAllocator::failback_alloc(size_t size_bytes)
	void * public_failback_alloc(size_t size_bytes) {
		return btGenericPoolAllocator::failback_alloc(size_bytes);
	};

	// bool btGenericPoolAllocator::failback_free(void * pointer)
	bool public_failback_free(void * pointer) {
		return btGenericPoolAllocator::failback_free(pointer);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_push_new_pool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_failback_alloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_failback_free(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// btGenericMemoryPool * btGenericPoolAllocator::public_push_new_pool()
	static int _bind_public_push_new_pool(lua_State *L) {
		if (!_lg_typecheck_public_push_new_pool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGenericMemoryPool * btGenericPoolAllocator::public_push_new_pool() function, expected prototype:\nbtGenericMemoryPool * btGenericPoolAllocator::public_push_new_pool()\nClass arguments details:\n");
		}


		wrapper_btGenericPoolAllocator* self=Luna< btGenericPoolAllocator >::checkSubType< wrapper_btGenericPoolAllocator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGenericMemoryPool * btGenericPoolAllocator::public_push_new_pool(). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		btGenericMemoryPool * lret = self->public_push_new_pool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGenericMemoryPool >::push(L,lret,false);

		return 1;
	}

	// void * btGenericPoolAllocator::public_failback_alloc(size_t size_bytes)
	static int _bind_public_failback_alloc(lua_State *L) {
		if (!_lg_typecheck_public_failback_alloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btGenericPoolAllocator::public_failback_alloc(size_t size_bytes) function, expected prototype:\nvoid * btGenericPoolAllocator::public_failback_alloc(size_t size_bytes)\nClass arguments details:\n");
		}

		size_t size_bytes=(size_t)lua_tointeger(L,2);

		wrapper_btGenericPoolAllocator* self=Luna< btGenericPoolAllocator >::checkSubType< wrapper_btGenericPoolAllocator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btGenericPoolAllocator::public_failback_alloc(size_t). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		void * lret = self->public_failback_alloc(size_bytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btGenericPoolAllocator::public_failback_free(void * pointer)
	static int _bind_public_failback_free(lua_State *L) {
		if (!_lg_typecheck_public_failback_free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGenericPoolAllocator::public_failback_free(void * pointer) function, expected prototype:\nbool btGenericPoolAllocator::public_failback_free(void * pointer)\nClass arguments details:\n");
		}

		void* pointer=(Luna< void >::check(L,2));

		wrapper_btGenericPoolAllocator* self=Luna< btGenericPoolAllocator >::checkSubType< wrapper_btGenericPoolAllocator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGenericPoolAllocator::public_failback_free(void *). Got : '%s'",typeid(Luna< btGenericPoolAllocator >::check(L,1)).name());
		}
		bool lret = self->public_failback_free(pointer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"push_new_pool",_bind_public_push_new_pool},
		{"failback_alloc",_bind_public_failback_alloc},
		{"failback_free",_bind_public_failback_free},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

