#include <plug_common.h>

#include <luna/wrappers/wrapper_btOverlappingPairCallback.h>

class luna_wrapper_btOverlappingPairCallback {
public:
	typedef Luna< btOverlappingPairCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btOverlappingPairCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78133027) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOverlappingPairCallback*)");
		}

		btOverlappingPairCallback* rhs =(Luna< btOverlappingPairCallback >::check(L,2));
		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btOverlappingPairCallback* self= (btOverlappingPairCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btOverlappingPairCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78133027) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btOverlappingPairCallback >::check(L,1));
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

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOverlappingPairCallback");
		
		return luna_dynamicCast(L,converters,"btOverlappingPairCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btOverlappingPairCallback::btOverlappingPairCallback(lua_Table * data)
	static btOverlappingPairCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCallback::btOverlappingPairCallback(lua_Table * data) function, expected prototype:\nbtOverlappingPairCallback::btOverlappingPairCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btOverlappingPairCallback(L,NULL);
	}


	// Function binds:
	// btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_addOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		btBroadphasePair * lret = self->addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		void * lret = self->removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPairsContainingProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher) function, expected prototype:\nvoid btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btOverlappingPairCallback* self=(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name());
		}
		self->removeOverlappingPairsContainingProxy(proxy0, dispatcher);

		return 0;
	}


	// Operator binds:

};

btOverlappingPairCallback* LunaTraits< btOverlappingPairCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btOverlappingPairCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	// void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	// void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)
}

void LunaTraits< btOverlappingPairCallback >::_bind_dtor(btOverlappingPairCallback* obj) {
	delete obj;
}

const char LunaTraits< btOverlappingPairCallback >::className[] = "btOverlappingPairCallback";
const char LunaTraits< btOverlappingPairCallback >::fullName[] = "btOverlappingPairCallback";
const char LunaTraits< btOverlappingPairCallback >::moduleName[] = "bullet";
const char* LunaTraits< btOverlappingPairCallback >::parents[] = {0};
const int LunaTraits< btOverlappingPairCallback >::hash = 78133027;
const int LunaTraits< btOverlappingPairCallback >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btOverlappingPairCallback >::methods[] = {
	{"addOverlappingPair", &luna_wrapper_btOverlappingPairCallback::_bind_addOverlappingPair},
	{"removeOverlappingPair", &luna_wrapper_btOverlappingPairCallback::_bind_removeOverlappingPair},
	{"removeOverlappingPairsContainingProxy", &luna_wrapper_btOverlappingPairCallback::_bind_removeOverlappingPairsContainingProxy},
	{"dynCast", &luna_wrapper_btOverlappingPairCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btOverlappingPairCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btOverlappingPairCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btOverlappingPairCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btOverlappingPairCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btOverlappingPairCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOverlappingPairCallback >::enumValues[] = {
	{0,0}
};


