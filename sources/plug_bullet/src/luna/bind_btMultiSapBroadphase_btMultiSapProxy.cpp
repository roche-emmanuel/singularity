#include <plug_common.h>

class luna_wrapper_btMultiSapBroadphase_btMultiSapProxy {
public:
	typedef Luna< btMultiSapBroadphase::btMultiSapProxy > luna_t;

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

		btMultiSapBroadphase::btMultiSapProxy* self= (btMultiSapBroadphase::btMultiSapProxy*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMultiSapBroadphase::btMultiSapProxy >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44086089) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btBroadphaseProxy(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btMultiSapBroadphase::btMultiSapProxy* ptr= dynamic_cast< btMultiSapBroadphase::btMultiSapProxy* >(Luna< btBroadphaseProxy >::check(L,1));
		btMultiSapBroadphase::btMultiSapProxy* ptr= luna_caster< btBroadphaseProxy, btMultiSapBroadphase::btMultiSapProxy >::cast(Luna< btBroadphaseProxy >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMultiSapBroadphase::btMultiSapProxy >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShapeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMultiSapBroadphase::btMultiSapProxy::btMultiSapProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask)
	static btMultiSapBroadphase::btMultiSapProxy* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultiSapBroadphase::btMultiSapProxy::btMultiSapProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask) function, expected prototype:\nbtMultiSapBroadphase::btMultiSapProxy::btMultiSapProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,1));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::btMultiSapProxy::btMultiSapProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::btMultiSapProxy::btMultiSapProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,3);
		void* userPtr=(Luna< void >::check(L,4));
		short int collisionFilterGroup=(short int)lua_tointeger(L,5);
		short int collisionFilterMask=(short int)lua_tointeger(L,6);

		return new btMultiSapBroadphase::btMultiSapProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask);
	}


	// Function binds:
	// btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMin()
	static int _bind_getAabbMin(lua_State *L) {
		if (!_lg_typecheck_getAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMin() function, expected prototype:\nbtVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMin()\nClass arguments details:\n");
		}


		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMin(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMax()
	static int _bind_getAabbMax(lua_State *L) {
		if (!_lg_typecheck_getAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMax() function, expected prototype:\nbtVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMax()\nClass arguments details:\n");
		}


		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSapBroadphase::btMultiSapProxy::m_aabbMax(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMax;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btMultiSapBroadphase::btMultiSapProxy::m_shapeType()
	static int _bind_getShapeType(lua_State *L) {
		if (!_lg_typecheck_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSapBroadphase::btMultiSapProxy::m_shapeType() function, expected prototype:\nint btMultiSapBroadphase::btMultiSapProxy::m_shapeType()\nClass arguments details:\n");
		}


		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSapBroadphase::btMultiSapProxy::m_shapeType(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->m_shapeType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMultiSapBroadphase::btMultiSapProxy::m_aabbMin(btVector3 value)
	static int _bind_setAabbMin(lua_State *L) {
		if (!_lg_typecheck_setAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::btMultiSapProxy::m_aabbMin(btVector3 value) function, expected prototype:\nvoid btMultiSapBroadphase::btMultiSapProxy::m_aabbMin(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btMultiSapBroadphase::btMultiSapProxy::m_aabbMin function");
		}
		btVector3 value=*value_ptr;

		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::btMultiSapProxy::m_aabbMin(btVector3). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_aabbMin = value;

		return 0;
	}

	// void btMultiSapBroadphase::btMultiSapProxy::m_aabbMax(btVector3 value)
	static int _bind_setAabbMax(lua_State *L) {
		if (!_lg_typecheck_setAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::btMultiSapProxy::m_aabbMax(btVector3 value) function, expected prototype:\nvoid btMultiSapBroadphase::btMultiSapProxy::m_aabbMax(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btMultiSapBroadphase::btMultiSapProxy::m_aabbMax function");
		}
		btVector3 value=*value_ptr;

		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::btMultiSapProxy::m_aabbMax(btVector3). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_aabbMax = value;

		return 0;
	}

	// void btMultiSapBroadphase::btMultiSapProxy::m_shapeType(int value)
	static int _bind_setShapeType(lua_State *L) {
		if (!_lg_typecheck_setShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::btMultiSapProxy::m_shapeType(int value) function, expected prototype:\nvoid btMultiSapBroadphase::btMultiSapProxy::m_shapeType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMultiSapBroadphase::btMultiSapProxy* self=Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::btMultiSapProxy::m_shapeType(int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_shapeType = value;

		return 0;
	}


	// Operator binds:

};

btMultiSapBroadphase::btMultiSapProxy* LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_ctor(L);
}

void LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::_bind_dtor(btMultiSapBroadphase::btMultiSapProxy* obj) {
	delete obj;
}

const char LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::className[] = "btMultiSapBroadphase_btMultiSapProxy";
const char LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::fullName[] = "btMultiSapBroadphase::btMultiSapProxy";
const char LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::moduleName[] = "bullet";
const char* LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::parents[] = {"bullet.btBroadphaseProxy", 0};
const int LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::hash = 239210;
const int LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::uniqueIDs[] = {44086089,0};

luna_RegType LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::methods[] = {
	{"getAabbMin", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_getAabbMin},
	{"getAabbMax", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_getAabbMax},
	{"getShapeType", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_getShapeType},
	{"setAabbMin", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_setAabbMin},
	{"setAabbMax", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_setAabbMax},
	{"setShapeType", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_setShapeType},
	{"__eq", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind___eq},
	{"fromVoid", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::converters[] = {
	{"btBroadphaseProxy", &luna_wrapper_btMultiSapBroadphase_btMultiSapProxy::_cast_from_btBroadphaseProxy},
	{0,0}
};

luna_RegEnumType LunaTraits< btMultiSapBroadphase::btMultiSapProxy >::enumValues[] = {
	{0,0}
};


