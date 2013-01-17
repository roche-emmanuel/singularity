#include <plug_common.h>

class luna_wrapper_btSimpleBroadphaseProxy {
public:
	typedef Luna< btSimpleBroadphaseProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44086089) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphaseProxy*)");
		}

		btBroadphaseProxy* rhs =(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btBroadphaseProxy(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSimpleBroadphaseProxy* ptr= dynamic_cast< btSimpleBroadphaseProxy* >(Luna< btBroadphaseProxy >::check(L,1));
		btSimpleBroadphaseProxy* ptr= luna_caster< btBroadphaseProxy, btSimpleBroadphaseProxy >::cast(Luna< btBroadphaseProxy >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSimpleBroadphaseProxy >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetNextFree(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextFree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_nextFree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_nextFree(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSimpleBroadphaseProxy::btSimpleBroadphaseProxy()
	static btSimpleBroadphaseProxy* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleBroadphaseProxy::btSimpleBroadphaseProxy() function, expected prototype:\nbtSimpleBroadphaseProxy::btSimpleBroadphaseProxy()\nClass arguments details:\n");
		}


		return new btSimpleBroadphaseProxy();
	}

	// btSimpleBroadphaseProxy::btSimpleBroadphaseProxy(const btVector3 & minpt, const btVector3 & maxpt, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapProxy)
	static btSimpleBroadphaseProxy* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleBroadphaseProxy::btSimpleBroadphaseProxy(const btVector3 & minpt, const btVector3 & maxpt, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapProxy) function, expected prototype:\nbtSimpleBroadphaseProxy::btSimpleBroadphaseProxy(const btVector3 & minpt, const btVector3 & maxpt, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* minpt_ptr=(Luna< btVector3 >::check(L,1));
		if( !minpt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minpt in btSimpleBroadphaseProxy::btSimpleBroadphaseProxy function");
		}
		const btVector3 & minpt=*minpt_ptr;
		const btVector3* maxpt_ptr=(Luna< btVector3 >::check(L,2));
		if( !maxpt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxpt in btSimpleBroadphaseProxy::btSimpleBroadphaseProxy function");
		}
		const btVector3 & maxpt=*maxpt_ptr;
		int shapeType=(int)lua_tointeger(L,3);
		void* userPtr=(Luna< void >::check(L,4));
		short int collisionFilterGroup=(short int)lua_tointeger(L,5);
		short int collisionFilterMask=(short int)lua_tointeger(L,6);
		void* multiSapProxy=(Luna< void >::check(L,7));

		return new btSimpleBroadphaseProxy(minpt, maxpt, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, multiSapProxy);
	}

	// Overload binder for btSimpleBroadphaseProxy::btSimpleBroadphaseProxy
	static btSimpleBroadphaseProxy* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSimpleBroadphaseProxy, cannot match any of the overloads for function btSimpleBroadphaseProxy:\n  btSimpleBroadphaseProxy()\n  btSimpleBroadphaseProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, void *)\n");
		return NULL;
	}


	// Function binds:
	// void btSimpleBroadphaseProxy::SetNextFree(int next)
	static int _bind_SetNextFree(lua_State *L) {
		if (!_lg_typecheck_SetNextFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphaseProxy::SetNextFree(int next) function, expected prototype:\nvoid btSimpleBroadphaseProxy::SetNextFree(int next)\nClass arguments details:\n");
		}

		int next=(int)lua_tointeger(L,2);

		btSimpleBroadphaseProxy* self=Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphaseProxy::SetNextFree(int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->SetNextFree(next);

		return 0;
	}

	// int btSimpleBroadphaseProxy::GetNextFree() const
	static int _bind_GetNextFree(lua_State *L) {
		if (!_lg_typecheck_GetNextFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSimpleBroadphaseProxy::GetNextFree() const function, expected prototype:\nint btSimpleBroadphaseProxy::GetNextFree() const\nClass arguments details:\n");
		}


		btSimpleBroadphaseProxy* self=Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSimpleBroadphaseProxy::GetNextFree() const. Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->GetNextFree();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSimpleBroadphaseProxy::m_nextFree()
	static int _bind_getM_nextFree(lua_State *L) {
		if (!_lg_typecheck_getM_nextFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSimpleBroadphaseProxy::m_nextFree() function, expected prototype:\nint btSimpleBroadphaseProxy::m_nextFree()\nClass arguments details:\n");
		}


		btSimpleBroadphaseProxy* self=Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSimpleBroadphaseProxy::m_nextFree(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->m_nextFree;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleBroadphaseProxy::m_nextFree(int value)
	static int _bind_setM_nextFree(lua_State *L) {
		if (!_lg_typecheck_setM_nextFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphaseProxy::m_nextFree(int value) function, expected prototype:\nvoid btSimpleBroadphaseProxy::m_nextFree(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btSimpleBroadphaseProxy* self=Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphaseProxy::m_nextFree(int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_nextFree = value;

		return 0;
	}


	// Operator binds:

};

btSimpleBroadphaseProxy* LunaTraits< btSimpleBroadphaseProxy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSimpleBroadphaseProxy::_bind_ctor(L);
}

void LunaTraits< btSimpleBroadphaseProxy >::_bind_dtor(btSimpleBroadphaseProxy* obj) {
	delete obj;
}

const char LunaTraits< btSimpleBroadphaseProxy >::className[] = "btSimpleBroadphaseProxy";
const char LunaTraits< btSimpleBroadphaseProxy >::fullName[] = "btSimpleBroadphaseProxy";
const char LunaTraits< btSimpleBroadphaseProxy >::moduleName[] = "bullet";
const char* LunaTraits< btSimpleBroadphaseProxy >::parents[] = {"bullet.btBroadphaseProxy", 0};
const int LunaTraits< btSimpleBroadphaseProxy >::hash = 54192133;
const int LunaTraits< btSimpleBroadphaseProxy >::uniqueIDs[] = {44086089,0};

luna_RegType LunaTraits< btSimpleBroadphaseProxy >::methods[] = {
	{"SetNextFree", &luna_wrapper_btSimpleBroadphaseProxy::_bind_SetNextFree},
	{"GetNextFree", &luna_wrapper_btSimpleBroadphaseProxy::_bind_GetNextFree},
	{"getM_nextFree", &luna_wrapper_btSimpleBroadphaseProxy::_bind_getM_nextFree},
	{"setM_nextFree", &luna_wrapper_btSimpleBroadphaseProxy::_bind_setM_nextFree},
	{"__eq", &luna_wrapper_btSimpleBroadphaseProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btSimpleBroadphaseProxy >::converters[] = {
	{"btBroadphaseProxy", &luna_wrapper_btSimpleBroadphaseProxy::_cast_from_btBroadphaseProxy},
	{0,0}
};

luna_RegEnumType LunaTraits< btSimpleBroadphaseProxy >::enumValues[] = {
	{0,0}
};


