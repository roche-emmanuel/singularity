#include <plug_common.h>

class luna_wrapper_btDbvtProxy {
public:
	typedef Luna< btDbvtProxy > luna_t;

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

		btDbvtProxy* self= (btDbvtProxy*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvtProxy >::push(L,self,false);
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
		//btDbvtProxy* ptr= dynamic_cast< btDbvtProxy* >(Luna< btBroadphaseProxy >::check(L,1));
		btDbvtProxy* ptr= luna_caster< btBroadphaseProxy, btDbvtProxy >::cast(Luna< btBroadphaseProxy >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDbvtProxy >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvtProxy::btDbvtProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask)
	static btDbvtProxy* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtProxy::btDbvtProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask) function, expected prototype:\nbtDbvtProxy::btDbvtProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,1));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtProxy::btDbvtProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtProxy::btDbvtProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		void* userPtr=(Luna< void >::check(L,3));
		short int collisionFilterGroup=(short int)lua_tointeger(L,4);
		short int collisionFilterMask=(short int)lua_tointeger(L,5);

		return new btDbvtProxy(aabbMin, aabbMax, userPtr, collisionFilterGroup, collisionFilterMask);
	}


	// Function binds:
	// btDbvtNode * btDbvtProxy::leaf()
	static int _bind_getLeaf(lua_State *L) {
		if (!_lg_typecheck_getLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvtProxy::leaf() function, expected prototype:\nbtDbvtNode * btDbvtProxy::leaf()\nClass arguments details:\n");
		}


		btDbvtProxy* self=Luna< btBroadphaseProxy >::checkSubType< btDbvtProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvtProxy::leaf(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		btDbvtNode * lret = self->leaf;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// int btDbvtProxy::stage()
	static int _bind_getStage(lua_State *L) {
		if (!_lg_typecheck_getStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtProxy::stage() function, expected prototype:\nint btDbvtProxy::stage()\nClass arguments details:\n");
		}


		btDbvtProxy* self=Luna< btBroadphaseProxy >::checkSubType< btDbvtProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtProxy::stage(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->stage;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDbvtProxy::leaf(btDbvtNode * value)
	static int _bind_setLeaf(lua_State *L) {
		if (!_lg_typecheck_setLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtProxy::leaf(btDbvtNode * value) function, expected prototype:\nvoid btDbvtProxy::leaf(btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btDbvtProxy* self=Luna< btBroadphaseProxy >::checkSubType< btDbvtProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtProxy::leaf(btDbvtNode *). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->leaf = value;

		return 0;
	}

	// void btDbvtProxy::stage(int value)
	static int _bind_setStage(lua_State *L) {
		if (!_lg_typecheck_setStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtProxy::stage(int value) function, expected prototype:\nvoid btDbvtProxy::stage(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtProxy* self=Luna< btBroadphaseProxy >::checkSubType< btDbvtProxy >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtProxy::stage(int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->stage = value;

		return 0;
	}


	// Operator binds:

};

btDbvtProxy* LunaTraits< btDbvtProxy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvtProxy::_bind_ctor(L);
}

void LunaTraits< btDbvtProxy >::_bind_dtor(btDbvtProxy* obj) {
	delete obj;
}

const char LunaTraits< btDbvtProxy >::className[] = "btDbvtProxy";
const char LunaTraits< btDbvtProxy >::fullName[] = "btDbvtProxy";
const char LunaTraits< btDbvtProxy >::moduleName[] = "bullet";
const char* LunaTraits< btDbvtProxy >::parents[] = {"bullet.btBroadphaseProxy", 0};
const int LunaTraits< btDbvtProxy >::hash = 33356506;
const int LunaTraits< btDbvtProxy >::uniqueIDs[] = {44086089,0};

luna_RegType LunaTraits< btDbvtProxy >::methods[] = {
	{"getLeaf", &luna_wrapper_btDbvtProxy::_bind_getLeaf},
	{"getStage", &luna_wrapper_btDbvtProxy::_bind_getStage},
	{"setLeaf", &luna_wrapper_btDbvtProxy::_bind_setLeaf},
	{"setStage", &luna_wrapper_btDbvtProxy::_bind_setStage},
	{"__eq", &luna_wrapper_btDbvtProxy::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvtProxy::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvtProxy::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvtProxy >::converters[] = {
	{"btBroadphaseProxy", &luna_wrapper_btDbvtProxy::_cast_from_btBroadphaseProxy},
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvtProxy >::enumValues[] = {
	{0,0}
};


