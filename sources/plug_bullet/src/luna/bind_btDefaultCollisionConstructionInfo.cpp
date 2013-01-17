#include <plug_common.h>

class luna_wrapper_btDefaultCollisionConstructionInfo {
public:
	typedef Luna< btDefaultCollisionConstructionInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82853014) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDefaultCollisionConstructionInfo*)");
		}

		btDefaultCollisionConstructionInfo* rhs =(Luna< btDefaultCollisionConstructionInfo >::check(L,2));
		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
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

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDefaultCollisionConstructionInfo");
		
		return luna_dynamicCast(L,converters,"btDefaultCollisionConstructionInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_stackAlloc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_persistentManifoldPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionAlgorithmPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_defaultMaxPersistentManifoldPoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_defaultMaxCollisionAlgorithmPoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_customCollisionAlgorithmMaxElementSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_defaultStackAllocatorSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useEpaPenetrationAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_stackAlloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46980417)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_persistentManifoldPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19742987)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionAlgorithmPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19742987)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_defaultMaxPersistentManifoldPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_defaultMaxCollisionAlgorithmPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_customCollisionAlgorithmMaxElementSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_defaultStackAllocatorSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useEpaPenetrationAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDefaultCollisionConstructionInfo::btDefaultCollisionConstructionInfo()
	static btDefaultCollisionConstructionInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultCollisionConstructionInfo::btDefaultCollisionConstructionInfo() function, expected prototype:\nbtDefaultCollisionConstructionInfo::btDefaultCollisionConstructionInfo()\nClass arguments details:\n");
		}


		return new btDefaultCollisionConstructionInfo();
	}


	// Function binds:
	// btStackAlloc * btDefaultCollisionConstructionInfo::m_stackAlloc()
	static int _bind_getM_stackAlloc(lua_State *L) {
		if (!_lg_typecheck_getM_stackAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc * btDefaultCollisionConstructionInfo::m_stackAlloc() function, expected prototype:\nbtStackAlloc * btDefaultCollisionConstructionInfo::m_stackAlloc()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStackAlloc * btDefaultCollisionConstructionInfo::m_stackAlloc(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		btStackAlloc * lret = self->m_stackAlloc;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btDefaultCollisionConstructionInfo::m_persistentManifoldPool()
	static int _bind_getM_persistentManifoldPool(lua_State *L) {
		if (!_lg_typecheck_getM_persistentManifoldPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConstructionInfo::m_persistentManifoldPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConstructionInfo::m_persistentManifoldPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConstructionInfo::m_persistentManifoldPool(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->m_persistentManifoldPool;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool()
	static int _bind_getM_collisionAlgorithmPool(lua_State *L) {
		if (!_lg_typecheck_getM_collisionAlgorithmPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->m_collisionAlgorithmPool;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// int btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize()
	static int _bind_getM_defaultMaxPersistentManifoldPoolSize(lua_State *L) {
		if (!_lg_typecheck_getM_defaultMaxPersistentManifoldPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize() function, expected prototype:\nint btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		int lret = self->m_defaultMaxPersistentManifoldPoolSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize()
	static int _bind_getM_defaultMaxCollisionAlgorithmPoolSize(lua_State *L) {
		if (!_lg_typecheck_getM_defaultMaxCollisionAlgorithmPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize() function, expected prototype:\nint btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		int lret = self->m_defaultMaxCollisionAlgorithmPoolSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize()
	static int _bind_getM_customCollisionAlgorithmMaxElementSize(lua_State *L) {
		if (!_lg_typecheck_getM_customCollisionAlgorithmMaxElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize() function, expected prototype:\nint btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		int lret = self->m_customCollisionAlgorithmMaxElementSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize()
	static int _bind_getM_defaultStackAllocatorSize(lua_State *L) {
		if (!_lg_typecheck_getM_defaultStackAllocatorSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize() function, expected prototype:\nint btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		int lret = self->m_defaultStackAllocatorSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm()
	static int _bind_getM_useEpaPenetrationAlgorithm(lua_State *L) {
		if (!_lg_typecheck_getM_useEpaPenetrationAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm() function, expected prototype:\nint btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm()\nClass arguments details:\n");
		}


		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm(). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		int lret = self->m_useEpaPenetrationAlgorithm;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultCollisionConstructionInfo::m_stackAlloc(btStackAlloc * value)
	static int _bind_setM_stackAlloc(lua_State *L) {
		if (!_lg_typecheck_setM_stackAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_stackAlloc(btStackAlloc * value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_stackAlloc(btStackAlloc * value)\nClass arguments details:\narg 1 ID = 46980417\n");
		}

		btStackAlloc* value=(Luna< btStackAlloc >::check(L,2));

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_stackAlloc(btStackAlloc *). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_stackAlloc = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_persistentManifoldPool(btPoolAllocator * value)
	static int _bind_setM_persistentManifoldPool(lua_State *L) {
		if (!_lg_typecheck_setM_persistentManifoldPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_persistentManifoldPool(btPoolAllocator * value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_persistentManifoldPool(btPoolAllocator * value)\nClass arguments details:\narg 1 ID = 19742987\n");
		}

		btPoolAllocator* value=(Luna< btPoolAllocator >::check(L,2));

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_persistentManifoldPool(btPoolAllocator *). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_persistentManifoldPool = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool(btPoolAllocator * value)
	static int _bind_setM_collisionAlgorithmPool(lua_State *L) {
		if (!_lg_typecheck_setM_collisionAlgorithmPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool(btPoolAllocator * value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool(btPoolAllocator * value)\nClass arguments details:\narg 1 ID = 19742987\n");
		}

		btPoolAllocator* value=(Luna< btPoolAllocator >::check(L,2));

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool(btPoolAllocator *). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_collisionAlgorithmPool = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize(int value)
	static int _bind_setM_defaultMaxPersistentManifoldPoolSize(lua_State *L) {
		if (!_lg_typecheck_setM_defaultMaxPersistentManifoldPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize(int value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize(int). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_defaultMaxPersistentManifoldPoolSize = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize(int value)
	static int _bind_setM_defaultMaxCollisionAlgorithmPoolSize(lua_State *L) {
		if (!_lg_typecheck_setM_defaultMaxCollisionAlgorithmPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize(int value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize(int). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_defaultMaxCollisionAlgorithmPoolSize = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize(int value)
	static int _bind_setM_customCollisionAlgorithmMaxElementSize(lua_State *L) {
		if (!_lg_typecheck_setM_customCollisionAlgorithmMaxElementSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize(int value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize(int). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_customCollisionAlgorithmMaxElementSize = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize(int value)
	static int _bind_setM_defaultStackAllocatorSize(lua_State *L) {
		if (!_lg_typecheck_setM_defaultStackAllocatorSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize(int value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_defaultStackAllocatorSize(int). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_defaultStackAllocatorSize = value;

		return 0;
	}

	// void btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm(int value)
	static int _bind_setM_useEpaPenetrationAlgorithm(lua_State *L) {
		if (!_lg_typecheck_setM_useEpaPenetrationAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm(int value) function, expected prototype:\nvoid btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDefaultCollisionConstructionInfo* self=(Luna< btDefaultCollisionConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm(int). Got : '%s'",typeid(Luna< btDefaultCollisionConstructionInfo >::check(L,1)).name());
		}
		self->m_useEpaPenetrationAlgorithm = value;

		return 0;
	}


	// Operator binds:

};

btDefaultCollisionConstructionInfo* LunaTraits< btDefaultCollisionConstructionInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDefaultCollisionConstructionInfo::_bind_ctor(L);
}

void LunaTraits< btDefaultCollisionConstructionInfo >::_bind_dtor(btDefaultCollisionConstructionInfo* obj) {
	delete obj;
}

const char LunaTraits< btDefaultCollisionConstructionInfo >::className[] = "btDefaultCollisionConstructionInfo";
const char LunaTraits< btDefaultCollisionConstructionInfo >::fullName[] = "btDefaultCollisionConstructionInfo";
const char LunaTraits< btDefaultCollisionConstructionInfo >::moduleName[] = "bullet";
const char* LunaTraits< btDefaultCollisionConstructionInfo >::parents[] = {0};
const int LunaTraits< btDefaultCollisionConstructionInfo >::hash = 82853014;
const int LunaTraits< btDefaultCollisionConstructionInfo >::uniqueIDs[] = {82853014,0};

luna_RegType LunaTraits< btDefaultCollisionConstructionInfo >::methods[] = {
	{"getM_stackAlloc", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_stackAlloc},
	{"getM_persistentManifoldPool", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_persistentManifoldPool},
	{"getM_collisionAlgorithmPool", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_collisionAlgorithmPool},
	{"getM_defaultMaxPersistentManifoldPoolSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_defaultMaxPersistentManifoldPoolSize},
	{"getM_defaultMaxCollisionAlgorithmPoolSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_defaultMaxCollisionAlgorithmPoolSize},
	{"getM_customCollisionAlgorithmMaxElementSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_customCollisionAlgorithmMaxElementSize},
	{"getM_defaultStackAllocatorSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_defaultStackAllocatorSize},
	{"getM_useEpaPenetrationAlgorithm", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_getM_useEpaPenetrationAlgorithm},
	{"setM_stackAlloc", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_stackAlloc},
	{"setM_persistentManifoldPool", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_persistentManifoldPool},
	{"setM_collisionAlgorithmPool", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_collisionAlgorithmPool},
	{"setM_defaultMaxPersistentManifoldPoolSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_defaultMaxPersistentManifoldPoolSize},
	{"setM_defaultMaxCollisionAlgorithmPoolSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_defaultMaxCollisionAlgorithmPoolSize},
	{"setM_customCollisionAlgorithmMaxElementSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_customCollisionAlgorithmMaxElementSize},
	{"setM_defaultStackAllocatorSize", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_defaultStackAllocatorSize},
	{"setM_useEpaPenetrationAlgorithm", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_setM_useEpaPenetrationAlgorithm},
	{"dynCast", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btDefaultCollisionConstructionInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDefaultCollisionConstructionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDefaultCollisionConstructionInfo >::enumValues[] = {
	{0,0}
};


