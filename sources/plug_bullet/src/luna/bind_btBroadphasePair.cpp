#include <plug_common.h>

class luna_wrapper_btBroadphasePair {
public:
	typedef Luna< btBroadphasePair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82050774) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphasePair*)");
		}

		btBroadphasePair* rhs =(Luna< btBroadphasePair >::check(L,2));
		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
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

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBroadphasePair");
		
		return luna_dynamicCast(L,converters,"btBroadphasePair",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82050774) ) return false;
		if( (!(Luna< btBroadphasePair >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44086089) ) return false;
		if( (!(Luna< btBroadphaseProxy >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,44086089) ) return false;
		if( (!(Luna< btBroadphaseProxy >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_pProxy0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_pProxy1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_algorithm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_internalInfo1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_internalTmpValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_pProxy0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_pProxy1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_algorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17890858)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_internalInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_internalTmpValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBroadphasePair::btBroadphasePair()
	static btBroadphasePair* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair::btBroadphasePair() function, expected prototype:\nbtBroadphasePair::btBroadphasePair()\nClass arguments details:\n");
		}


		return new btBroadphasePair();
	}

	// btBroadphasePair::btBroadphasePair(const btBroadphasePair & other)
	static btBroadphasePair* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair::btBroadphasePair(const btBroadphasePair & other) function, expected prototype:\nbtBroadphasePair::btBroadphasePair(const btBroadphasePair & other)\nClass arguments details:\narg 1 ID = 82050774\n");
		}

		const btBroadphasePair* other_ptr=(Luna< btBroadphasePair >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btBroadphasePair::btBroadphasePair function");
		}
		const btBroadphasePair & other=*other_ptr;

		return new btBroadphasePair(other);
	}

	// btBroadphasePair::btBroadphasePair(btBroadphaseProxy & proxy0, btBroadphaseProxy & proxy1)
	static btBroadphasePair* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair::btBroadphasePair(btBroadphaseProxy & proxy0, btBroadphaseProxy & proxy1) function, expected prototype:\nbtBroadphasePair::btBroadphasePair(btBroadphaseProxy & proxy0, btBroadphaseProxy & proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0_ptr=(Luna< btBroadphaseProxy >::check(L,1));
		if( !proxy0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proxy0 in btBroadphasePair::btBroadphasePair function");
		}
		btBroadphaseProxy & proxy0=*proxy0_ptr;
		btBroadphaseProxy* proxy1_ptr=(Luna< btBroadphaseProxy >::check(L,2));
		if( !proxy1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proxy1 in btBroadphasePair::btBroadphasePair function");
		}
		btBroadphaseProxy & proxy1=*proxy1_ptr;

		return new btBroadphasePair(proxy0, proxy1);
	}

	// Overload binder for btBroadphasePair::btBroadphasePair
	static btBroadphasePair* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function btBroadphasePair, cannot match any of the overloads for function btBroadphasePair:\n  btBroadphasePair()\n  btBroadphasePair(const btBroadphasePair &)\n  btBroadphasePair(btBroadphaseProxy &, btBroadphaseProxy &)\n");
		return NULL;
	}


	// Function binds:
	// btBroadphaseProxy * btBroadphasePair::m_pProxy0()
	static int _bind_getM_pProxy0(lua_State *L) {
		if (!_lg_typecheck_getM_pProxy0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btBroadphasePair::m_pProxy0() function, expected prototype:\nbtBroadphaseProxy * btBroadphasePair::m_pProxy0()\nClass arguments details:\n");
		}


		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btBroadphasePair::m_pProxy0(). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->m_pProxy0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// btBroadphaseProxy * btBroadphasePair::m_pProxy1()
	static int _bind_getM_pProxy1(lua_State *L) {
		if (!_lg_typecheck_getM_pProxy1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btBroadphasePair::m_pProxy1() function, expected prototype:\nbtBroadphaseProxy * btBroadphasePair::m_pProxy1()\nClass arguments details:\n");
		}


		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btBroadphasePair::m_pProxy1(). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->m_pProxy1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithm * btBroadphasePair::m_algorithm()
	static int _bind_getM_algorithm(lua_State *L) {
		if (!_lg_typecheck_getM_algorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btBroadphasePair::m_algorithm() function, expected prototype:\nbtCollisionAlgorithm * btBroadphasePair::m_algorithm()\nClass arguments details:\n");
		}


		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btBroadphasePair::m_algorithm(). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->m_algorithm;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// void * btBroadphasePair::m_internalInfo1()
	static int _bind_getM_internalInfo1(lua_State *L) {
		if (!_lg_typecheck_getM_internalInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btBroadphasePair::m_internalInfo1() function, expected prototype:\nvoid * btBroadphasePair::m_internalInfo1()\nClass arguments details:\n");
		}


		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btBroadphasePair::m_internalInfo1(). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		void * lret = self->m_internalInfo1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int btBroadphasePair::m_internalTmpValue()
	static int _bind_getM_internalTmpValue(lua_State *L) {
		if (!_lg_typecheck_getM_internalTmpValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBroadphasePair::m_internalTmpValue() function, expected prototype:\nint btBroadphasePair::m_internalTmpValue()\nClass arguments details:\n");
		}


		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBroadphasePair::m_internalTmpValue(). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		int lret = self->m_internalTmpValue;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBroadphasePair::m_pProxy0(btBroadphaseProxy * value)
	static int _bind_setM_pProxy0(lua_State *L) {
		if (!_lg_typecheck_setM_pProxy0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphasePair::m_pProxy0(btBroadphaseProxy * value) function, expected prototype:\nvoid btBroadphasePair::m_pProxy0(btBroadphaseProxy * value)\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* value=(Luna< btBroadphaseProxy >::check(L,2));

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphasePair::m_pProxy0(btBroadphaseProxy *). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		self->m_pProxy0 = value;

		return 0;
	}

	// void btBroadphasePair::m_pProxy1(btBroadphaseProxy * value)
	static int _bind_setM_pProxy1(lua_State *L) {
		if (!_lg_typecheck_setM_pProxy1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphasePair::m_pProxy1(btBroadphaseProxy * value) function, expected prototype:\nvoid btBroadphasePair::m_pProxy1(btBroadphaseProxy * value)\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* value=(Luna< btBroadphaseProxy >::check(L,2));

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphasePair::m_pProxy1(btBroadphaseProxy *). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		self->m_pProxy1 = value;

		return 0;
	}

	// void btBroadphasePair::m_algorithm(btCollisionAlgorithm * value)
	static int _bind_setM_algorithm(lua_State *L) {
		if (!_lg_typecheck_setM_algorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphasePair::m_algorithm(btCollisionAlgorithm * value) function, expected prototype:\nvoid btBroadphasePair::m_algorithm(btCollisionAlgorithm * value)\nClass arguments details:\narg 1 ID = 17890858\n");
		}

		btCollisionAlgorithm* value=(Luna< btCollisionAlgorithm >::check(L,2));

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphasePair::m_algorithm(btCollisionAlgorithm *). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		self->m_algorithm = value;

		return 0;
	}

	// void btBroadphasePair::m_internalInfo1(void * value)
	static int _bind_setM_internalInfo1(lua_State *L) {
		if (!_lg_typecheck_setM_internalInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphasePair::m_internalInfo1(void * value) function, expected prototype:\nvoid btBroadphasePair::m_internalInfo1(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphasePair::m_internalInfo1(void *). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		self->m_internalInfo1 = value;

		return 0;
	}

	// void btBroadphasePair::m_internalTmpValue(int value)
	static int _bind_setM_internalTmpValue(lua_State *L) {
		if (!_lg_typecheck_setM_internalTmpValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphasePair::m_internalTmpValue(int value) function, expected prototype:\nvoid btBroadphasePair::m_internalTmpValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBroadphasePair* self=(Luna< btBroadphasePair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphasePair::m_internalTmpValue(int). Got : '%s'",typeid(Luna< btBroadphasePair >::check(L,1)).name());
		}
		self->m_internalTmpValue = value;

		return 0;
	}


	// Operator binds:

};

btBroadphasePair* LunaTraits< btBroadphasePair >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBroadphasePair::_bind_ctor(L);
}

void LunaTraits< btBroadphasePair >::_bind_dtor(btBroadphasePair* obj) {
	delete obj;
}

const char LunaTraits< btBroadphasePair >::className[] = "btBroadphasePair";
const char LunaTraits< btBroadphasePair >::fullName[] = "btBroadphasePair";
const char LunaTraits< btBroadphasePair >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphasePair >::parents[] = {0};
const int LunaTraits< btBroadphasePair >::hash = 82050774;
const int LunaTraits< btBroadphasePair >::uniqueIDs[] = {82050774,0};

luna_RegType LunaTraits< btBroadphasePair >::methods[] = {
	{"getM_pProxy0", &luna_wrapper_btBroadphasePair::_bind_getM_pProxy0},
	{"getM_pProxy1", &luna_wrapper_btBroadphasePair::_bind_getM_pProxy1},
	{"getM_algorithm", &luna_wrapper_btBroadphasePair::_bind_getM_algorithm},
	{"getM_internalInfo1", &luna_wrapper_btBroadphasePair::_bind_getM_internalInfo1},
	{"getM_internalTmpValue", &luna_wrapper_btBroadphasePair::_bind_getM_internalTmpValue},
	{"setM_pProxy0", &luna_wrapper_btBroadphasePair::_bind_setM_pProxy0},
	{"setM_pProxy1", &luna_wrapper_btBroadphasePair::_bind_setM_pProxy1},
	{"setM_algorithm", &luna_wrapper_btBroadphasePair::_bind_setM_algorithm},
	{"setM_internalInfo1", &luna_wrapper_btBroadphasePair::_bind_setM_internalInfo1},
	{"setM_internalTmpValue", &luna_wrapper_btBroadphasePair::_bind_setM_internalTmpValue},
	{"dynCast", &luna_wrapper_btBroadphasePair::_bind_dynCast},
	{"__eq", &luna_wrapper_btBroadphasePair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphasePair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphasePair >::enumValues[] = {
	{0,0}
};


