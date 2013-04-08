#include <plug_common.h>

class luna_wrapper_btCollisionAlgorithmConstructionInfo {
public:
	typedef Luna< btCollisionAlgorithmConstructionInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithmConstructionInfo*)");
		}

		btCollisionAlgorithmConstructionInfo* rhs =(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
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

		btCollisionAlgorithmConstructionInfo* self= (btCollisionAlgorithmConstructionInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionAlgorithmConstructionInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
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

		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionAlgorithmConstructionInfo");
		
		return luna_dynamicCast(L,converters,"btCollisionAlgorithmConstructionInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71097681)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDispatcher >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDispatcher1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getManifold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDispatcher1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo()
	static btCollisionAlgorithmConstructionInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo() function, expected prototype:\nbtCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo()\nClass arguments details:\n");
		}


		return new btCollisionAlgorithmConstructionInfo();
	}

	// btCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo(btDispatcher * dispatcher, int temp)
	static btCollisionAlgorithmConstructionInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo(btDispatcher * dispatcher, int temp) function, expected prototype:\nbtCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo(btDispatcher * dispatcher, int temp)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,1));
		int temp=(int)lua_tointeger(L,2);

		return new btCollisionAlgorithmConstructionInfo(dispatcher, temp);
	}

	// Overload binder for btCollisionAlgorithmConstructionInfo::btCollisionAlgorithmConstructionInfo
	static btCollisionAlgorithmConstructionInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCollisionAlgorithmConstructionInfo, cannot match any of the overloads for function btCollisionAlgorithmConstructionInfo:\n  btCollisionAlgorithmConstructionInfo()\n  btCollisionAlgorithmConstructionInfo(btDispatcher *, int)\n");
		return NULL;
	}


	// Function binds:
	// btDispatcher * btCollisionAlgorithmConstructionInfo::m_dispatcher1()
	static int _bind_getDispatcher1(lua_State *L) {
		if (!_lg_typecheck_getDispatcher1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDispatcher * btCollisionAlgorithmConstructionInfo::m_dispatcher1() function, expected prototype:\nbtDispatcher * btCollisionAlgorithmConstructionInfo::m_dispatcher1()\nClass arguments details:\n");
		}


		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDispatcher * btCollisionAlgorithmConstructionInfo::m_dispatcher1(). Got : '%s'",typeid(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1)).name());
		}
		btDispatcher * lret = self->m_dispatcher1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDispatcher >::push(L,lret,false);

		return 1;
	}

	// btPersistentManifold * btCollisionAlgorithmConstructionInfo::m_manifold()
	static int _bind_getManifold(lua_State *L) {
		if (!_lg_typecheck_getManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btCollisionAlgorithmConstructionInfo::m_manifold() function, expected prototype:\nbtPersistentManifold * btCollisionAlgorithmConstructionInfo::m_manifold()\nClass arguments details:\n");
		}


		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btCollisionAlgorithmConstructionInfo::m_manifold(). Got : '%s'",typeid(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->m_manifold;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btCollisionAlgorithmConstructionInfo::m_dispatcher1(btDispatcher * value)
	static int _bind_setDispatcher1(lua_State *L) {
		if (!_lg_typecheck_setDispatcher1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionAlgorithmConstructionInfo::m_dispatcher1(btDispatcher * value) function, expected prototype:\nvoid btCollisionAlgorithmConstructionInfo::m_dispatcher1(btDispatcher * value)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* value=(Luna< btDispatcher >::check(L,2));

		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionAlgorithmConstructionInfo::m_dispatcher1(btDispatcher *). Got : '%s'",typeid(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1)).name());
		}
		self->m_dispatcher1 = value;

		return 0;
	}

	// void btCollisionAlgorithmConstructionInfo::m_manifold(btPersistentManifold * value)
	static int _bind_setManifold(lua_State *L) {
		if (!_lg_typecheck_setManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionAlgorithmConstructionInfo::m_manifold(btPersistentManifold * value) function, expected prototype:\nvoid btCollisionAlgorithmConstructionInfo::m_manifold(btPersistentManifold * value)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* value=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btCollisionAlgorithmConstructionInfo* self=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionAlgorithmConstructionInfo::m_manifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1)).name());
		}
		self->m_manifold = value;

		return 0;
	}


	// Operator binds:

};

btCollisionAlgorithmConstructionInfo* LunaTraits< btCollisionAlgorithmConstructionInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_ctor(L);
}

void LunaTraits< btCollisionAlgorithmConstructionInfo >::_bind_dtor(btCollisionAlgorithmConstructionInfo* obj) {
	delete obj;
}

const char LunaTraits< btCollisionAlgorithmConstructionInfo >::className[] = "btCollisionAlgorithmConstructionInfo";
const char LunaTraits< btCollisionAlgorithmConstructionInfo >::fullName[] = "btCollisionAlgorithmConstructionInfo";
const char LunaTraits< btCollisionAlgorithmConstructionInfo >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionAlgorithmConstructionInfo >::parents[] = {0};
const int LunaTraits< btCollisionAlgorithmConstructionInfo >::hash = 61780402;
const int LunaTraits< btCollisionAlgorithmConstructionInfo >::uniqueIDs[] = {61780402,0};

luna_RegType LunaTraits< btCollisionAlgorithmConstructionInfo >::methods[] = {
	{"getDispatcher1", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_getDispatcher1},
	{"getManifold", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_getManifold},
	{"setDispatcher1", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_setDispatcher1},
	{"setManifold", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_setManifold},
	{"dynCast", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionAlgorithmConstructionInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionAlgorithmConstructionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionAlgorithmConstructionInfo >::enumValues[] = {
	{0,0}
};


