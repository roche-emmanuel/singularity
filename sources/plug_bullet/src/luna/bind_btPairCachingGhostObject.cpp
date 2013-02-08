#include <plug_common.h>

#include <luna/wrappers/wrapper_btPairCachingGhostObject.h>

class luna_wrapper_btPairCachingGhostObject {
public:
	typedef Luna< btPairCachingGhostObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObject*)");
		}

		btCollisionObject* rhs =(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
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

		btPairCachingGhostObject* self= (btPairCachingGhostObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPairCachingGhostObject >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btPairCachingGhostObject* ptr= dynamic_cast< btPairCachingGhostObject* >(Luna< btCollisionObject >::check(L,1));
		btPairCachingGhostObject* ptr= luna_caster< btCollisionObject, btPairCachingGhostObject >::cast(Luna< btCollisionObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btPairCachingGhostObject >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,44086089)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPairCachingGhostObject::btPairCachingGhostObject()
	static btPairCachingGhostObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPairCachingGhostObject::btPairCachingGhostObject() function, expected prototype:\nbtPairCachingGhostObject::btPairCachingGhostObject()\nClass arguments details:\n");
		}


		return new btPairCachingGhostObject();
	}

	// btPairCachingGhostObject::btPairCachingGhostObject(lua_Table * data)
	static btPairCachingGhostObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPairCachingGhostObject::btPairCachingGhostObject(lua_Table * data) function, expected prototype:\nbtPairCachingGhostObject::btPairCachingGhostObject(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btPairCachingGhostObject(L,NULL);
	}

	// Overload binder for btPairCachingGhostObject::btPairCachingGhostObject
	static btPairCachingGhostObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btPairCachingGhostObject, cannot match any of the overloads for function btPairCachingGhostObject:\n  btPairCachingGhostObject()\n  btPairCachingGhostObject(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	static int _bind_addOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_addOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* thisProxy=luatop>2 ? (Luna< btBroadphaseProxy >::check(L,3)) : (btBroadphaseProxy*)0;

		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->addOverlappingObjectInternal(otherProxy, thisProxy);

		return 0;
	}

	// void btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	static int _bind_removeOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\narg 3 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));
		btBroadphaseProxy* thisProxy=luatop>3 ? (Luna< btBroadphaseProxy >::check(L,4)) : (btBroadphaseProxy*)0;

		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy *, btDispatcher *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);

		return 0;
	}

	// btHashedOverlappingPairCache * btPairCachingGhostObject::getOverlappingPairCache()
	static int _bind_getOverlappingPairCache(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHashedOverlappingPairCache * btPairCachingGhostObject::getOverlappingPairCache() function, expected prototype:\nbtHashedOverlappingPairCache * btPairCachingGhostObject::getOverlappingPairCache()\nClass arguments details:\n");
		}


		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btHashedOverlappingPairCache * btPairCachingGhostObject::getOverlappingPairCache(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btHashedOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btHashedOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// void btPairCachingGhostObject::base_setCollisionShape(btCollisionShape * collisionShape)
	static int _bind_base_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_base_setCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPairCachingGhostObject::base_setCollisionShape(btCollisionShape * collisionShape) function, expected prototype:\nvoid btPairCachingGhostObject::base_setCollisionShape(btCollisionShape * collisionShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,2));

		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPairCachingGhostObject::base_setCollisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btPairCachingGhostObject::setCollisionShape(collisionShape);

		return 0;
	}

	// int btPairCachingGhostObject::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPairCachingGhostObject::base_calculateSerializeBufferSize() const function, expected prototype:\nint btPairCachingGhostObject::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPairCachingGhostObject::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->btPairCachingGhostObject::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPairCachingGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	static int _bind_base_addOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPairCachingGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btPairCachingGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* thisProxy=luatop>2 ? (Luna< btBroadphaseProxy >::check(L,3)) : (btBroadphaseProxy*)0;

		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPairCachingGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btPairCachingGhostObject::addOverlappingObjectInternal(otherProxy, thisProxy);

		return 0;
	}

	// void btPairCachingGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	static int _bind_base_removeOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPairCachingGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btPairCachingGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\narg 3 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));
		btBroadphaseProxy* thisProxy=luatop>3 ? (Luna< btBroadphaseProxy >::check(L,4)) : (btBroadphaseProxy*)0;

		btPairCachingGhostObject* self=Luna< btCollisionObject >::checkSubType< btPairCachingGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPairCachingGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy *, btDispatcher *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btPairCachingGhostObject::removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);

		return 0;
	}


	// Operator binds:

};

btPairCachingGhostObject* LunaTraits< btPairCachingGhostObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPairCachingGhostObject::_bind_ctor(L);
}

void LunaTraits< btPairCachingGhostObject >::_bind_dtor(btPairCachingGhostObject* obj) {
	delete obj;
}

const char LunaTraits< btPairCachingGhostObject >::className[] = "btPairCachingGhostObject";
const char LunaTraits< btPairCachingGhostObject >::fullName[] = "btPairCachingGhostObject";
const char LunaTraits< btPairCachingGhostObject >::moduleName[] = "bullet";
const char* LunaTraits< btPairCachingGhostObject >::parents[] = {"bullet.btGhostObject", 0};
const int LunaTraits< btPairCachingGhostObject >::hash = 51395007;
const int LunaTraits< btPairCachingGhostObject >::uniqueIDs[] = {85758361,0};

luna_RegType LunaTraits< btPairCachingGhostObject >::methods[] = {
	{"addOverlappingObjectInternal", &luna_wrapper_btPairCachingGhostObject::_bind_addOverlappingObjectInternal},
	{"removeOverlappingObjectInternal", &luna_wrapper_btPairCachingGhostObject::_bind_removeOverlappingObjectInternal},
	{"getOverlappingPairCache", &luna_wrapper_btPairCachingGhostObject::_bind_getOverlappingPairCache},
	{"base_setCollisionShape", &luna_wrapper_btPairCachingGhostObject::_bind_base_setCollisionShape},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btPairCachingGhostObject::_bind_base_calculateSerializeBufferSize},
	{"base_addOverlappingObjectInternal", &luna_wrapper_btPairCachingGhostObject::_bind_base_addOverlappingObjectInternal},
	{"base_removeOverlappingObjectInternal", &luna_wrapper_btPairCachingGhostObject::_bind_base_removeOverlappingObjectInternal},
	{"__eq", &luna_wrapper_btPairCachingGhostObject::_bind___eq},
	{"fromVoid", &luna_wrapper_btPairCachingGhostObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPairCachingGhostObject::_bind_asVoid},
	{"getTable", &luna_wrapper_btPairCachingGhostObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btPairCachingGhostObject >::converters[] = {
	{"btCollisionObject", &luna_wrapper_btPairCachingGhostObject::_cast_from_btCollisionObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btPairCachingGhostObject >::enumValues[] = {
	{0,0}
};


