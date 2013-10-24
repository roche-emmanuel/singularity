#include <plug_common.h>

#include <luna/wrappers/wrapper_btGhostPairCallback.h>

class luna_wrapper_btGhostPairCallback {
public:
	typedef Luna< btGhostPairCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btGhostPairCallback* self= (btGhostPairCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGhostPairCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78133027) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btOverlappingPairCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btOverlappingPairCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGhostPairCallback* ptr= dynamic_cast< btGhostPairCallback* >(Luna< btOverlappingPairCallback >::check(L,1));
		btGhostPairCallback* ptr= luna_caster< btOverlappingPairCallback, btGhostPairCallback >::cast(Luna< btOverlappingPairCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGhostPairCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_addOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGhostPairCallback::btGhostPairCallback()
	static btGhostPairCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btGhostPairCallback::btGhostPairCallback() function, expected prototype:\nbtGhostPairCallback::btGhostPairCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btGhostPairCallback();
	}

	// btGhostPairCallback::btGhostPairCallback(lua_Table * data)
	static btGhostPairCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btGhostPairCallback::btGhostPairCallback(lua_Table * data) function, expected prototype:\nbtGhostPairCallback::btGhostPairCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btGhostPairCallback(L,NULL);
	}

	// Overload binder for btGhostPairCallback::btGhostPairCallback
	static btGhostPairCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGhostPairCallback, cannot match any of the overloads for function btGhostPairCallback:\n  btGhostPairCallback()\n  btGhostPairCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btBroadphasePair * btGhostPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_addOverlappingPair(L)) {
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btGhostPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btGhostPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btBroadphasePair * btGhostPairCallback::addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btBroadphasePair * lret = self->addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void * btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPair(L)) {
			luaL_error(L, "luna typecheck failed in void * btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btGhostPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingPairsContainingProxy(L)) {
			luaL_error(L, "luna typecheck failed in void btGhostPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btGhostPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGhostPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeOverlappingPairsContainingProxy(_arg1, _arg2);

		return 0;
	}

	// btBroadphasePair * btGhostPairCallback::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_base_addOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingPair(L)) {
			luaL_error(L, "luna typecheck failed in btBroadphasePair * btGhostPairCallback::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbtBroadphasePair * btGhostPairCallback::base_addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btBroadphasePair * btGhostPairCallback::base_addOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btBroadphasePair * lret = self->btGhostPairCallback::addOverlappingPair(proxy0, proxy1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphasePair >::push(L,lret,false);

		return 1;
	}

	// void * btGhostPairCallback::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	static int _bind_base_removeOverlappingPair(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPair(L)) {
			luaL_error(L, "luna typecheck failed in void * btGhostPairCallback::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) function, expected prototype:\nvoid * btGhostPairCallback::base_removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 71097681\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,4));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btGhostPairCallback::base_removeOverlappingPair(btBroadphaseProxy *, btBroadphaseProxy *, btDispatcher *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->btGhostPairCallback::removeOverlappingPair(proxy0, proxy1, dispatcher);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btGhostPairCallback::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	static int _bind_base_removeOverlappingPairsContainingProxy(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingPairsContainingProxy(L)) {
			luaL_error(L, "luna typecheck failed in void btGhostPairCallback::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) function, expected prototype:\nvoid btGhostPairCallback::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* _arg1=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* _arg2=(Luna< btDispatcher >::check(L,3));

		btGhostPairCallback* self=Luna< btOverlappingPairCallback >::checkSubType< btGhostPairCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGhostPairCallback::base_removeOverlappingPairsContainingProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'\n%s",typeid(Luna< btOverlappingPairCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGhostPairCallback::removeOverlappingPairsContainingProxy(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

btGhostPairCallback* LunaTraits< btGhostPairCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGhostPairCallback::_bind_ctor(L);
}

void LunaTraits< btGhostPairCallback >::_bind_dtor(btGhostPairCallback* obj) {
	delete obj;
}

const char LunaTraits< btGhostPairCallback >::className[] = "btGhostPairCallback";
const char LunaTraits< btGhostPairCallback >::fullName[] = "btGhostPairCallback";
const char LunaTraits< btGhostPairCallback >::moduleName[] = "bullet";
const char* LunaTraits< btGhostPairCallback >::parents[] = {"bullet.btOverlappingPairCallback", 0};
const int LunaTraits< btGhostPairCallback >::hash = 28321634;
const int LunaTraits< btGhostPairCallback >::uniqueIDs[] = {78133027,0};

luna_RegType LunaTraits< btGhostPairCallback >::methods[] = {
	{"addOverlappingPair", &luna_wrapper_btGhostPairCallback::_bind_addOverlappingPair},
	{"removeOverlappingPair", &luna_wrapper_btGhostPairCallback::_bind_removeOverlappingPair},
	{"removeOverlappingPairsContainingProxy", &luna_wrapper_btGhostPairCallback::_bind_removeOverlappingPairsContainingProxy},
	{"base_addOverlappingPair", &luna_wrapper_btGhostPairCallback::_bind_base_addOverlappingPair},
	{"base_removeOverlappingPair", &luna_wrapper_btGhostPairCallback::_bind_base_removeOverlappingPair},
	{"base_removeOverlappingPairsContainingProxy", &luna_wrapper_btGhostPairCallback::_bind_base_removeOverlappingPairsContainingProxy},
	{"fromVoid", &luna_wrapper_btGhostPairCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGhostPairCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btGhostPairCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGhostPairCallback >::converters[] = {
	{"btOverlappingPairCallback", &luna_wrapper_btGhostPairCallback::_cast_from_btOverlappingPairCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btGhostPairCallback >::enumValues[] = {
	{0,0}
};


