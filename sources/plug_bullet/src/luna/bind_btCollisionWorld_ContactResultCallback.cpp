#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_ContactResultCallback.h>

class luna_wrapper_btCollisionWorld_ContactResultCallback {
public:
	typedef Luna< btCollisionWorld::ContactResultCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld::ContactResultCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79983320) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::ContactResultCallback*)");
		}

		btCollisionWorld::ContactResultCallback* rhs =(Luna< btCollisionWorld::ContactResultCallback >::check(L,2));
		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
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

		btCollisionWorld::ContactResultCallback* self= (btCollisionWorld::ContactResultCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld::ContactResultCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79983320) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
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

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::ContactResultCallback");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::ContactResultCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addSingleResult(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,32391296)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::ContactResultCallback::ContactResultCallback(lua_Table * data)
	static btCollisionWorld::ContactResultCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ContactResultCallback::ContactResultCallback(lua_Table * data) function, expected prototype:\nbtCollisionWorld::ContactResultCallback::ContactResultCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionWorld_ContactResultCallback(L,NULL);
	}


	// Function binds:
	// bool btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		bool lret = self->needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1) function, expected prototype:\nfloat btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1)\nClass arguments details:\narg 1 ID = 55239733\narg 2 ID = 32391296\narg 5 ID = 32391296\n");
		}

		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btCollisionWorld::ContactResultCallback::addSingleResult function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btCollisionObjectWrapper* colObj0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		int partId0=(int)lua_tointeger(L,4);
		int index0=(int)lua_tointeger(L,5);
		const btCollisionObjectWrapper* colObj1Wrap=(Luna< btCollisionObjectWrapper >::check(L,6));
		int partId1=(int)lua_tointeger(L,7);
		int index1=(int)lua_tointeger(L,8);

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint &, const btCollisionObjectWrapper *, int, int, const btCollisionObjectWrapper *, int, int). Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(cp, colObj0Wrap, partId0, index0, colObj1Wrap, partId1, index1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::ContactResultCallback::m_collisionFilterGroup()
	static int _bind_getCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::ContactResultCallback::m_collisionFilterGroup() function, expected prototype:\nshort int btCollisionWorld::ContactResultCallback::m_collisionFilterGroup()\nClass arguments details:\n");
		}


		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::ContactResultCallback::m_collisionFilterGroup(). Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::ContactResultCallback::m_collisionFilterMask()
	static int _bind_getCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::ContactResultCallback::m_collisionFilterMask() function, expected prototype:\nshort int btCollisionWorld::ContactResultCallback::m_collisionFilterMask()\nClass arguments details:\n");
		}


		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::ContactResultCallback::m_collisionFilterMask(). Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::ContactResultCallback::m_collisionFilterGroup(short int value)
	static int _bind_setCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ContactResultCallback::m_collisionFilterGroup(short int value) function, expected prototype:\nvoid btCollisionWorld::ContactResultCallback::m_collisionFilterGroup(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ContactResultCallback::m_collisionFilterGroup(short int). Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterGroup = value;

		return 0;
	}

	// void btCollisionWorld::ContactResultCallback::m_collisionFilterMask(short int value)
	static int _bind_setCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ContactResultCallback::m_collisionFilterMask(short int value) function, expected prototype:\nvoid btCollisionWorld::ContactResultCallback::m_collisionFilterMask(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ContactResultCallback::m_collisionFilterMask(short int). Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterMask = value;

		return 0;
	}

	// bool btCollisionWorld::ContactResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ContactResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ContactResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ContactResultCallback* self=(Luna< btCollisionWorld::ContactResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ContactResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::ContactResultCallback >::check(L,1)).name());
		}
		bool lret = self->ContactResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::ContactResultCallback* LunaTraits< btCollisionWorld::ContactResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btCollisionWorld::ContactResultCallback::addSingleResult(btManifoldPoint & cp, const btCollisionObjectWrapper * colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper * colObj1Wrap, int partId1, int index1)
}

void LunaTraits< btCollisionWorld::ContactResultCallback >::_bind_dtor(btCollisionWorld::ContactResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::ContactResultCallback >::className[] = "btCollisionWorld_ContactResultCallback";
const char LunaTraits< btCollisionWorld::ContactResultCallback >::fullName[] = "btCollisionWorld::ContactResultCallback";
const char LunaTraits< btCollisionWorld::ContactResultCallback >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::ContactResultCallback >::parents[] = {0};
const int LunaTraits< btCollisionWorld::ContactResultCallback >::hash = 79983320;
const int LunaTraits< btCollisionWorld::ContactResultCallback >::uniqueIDs[] = {79983320,0};

luna_RegType LunaTraits< btCollisionWorld::ContactResultCallback >::methods[] = {
	{"needsCollision", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_needsCollision},
	{"addSingleResult", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_addSingleResult},
	{"getCollisionFilterGroup", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_getCollisionFilterGroup},
	{"getCollisionFilterMask", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_getCollisionFilterMask},
	{"setCollisionFilterGroup", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_setCollisionFilterGroup},
	{"setCollisionFilterMask", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_setCollisionFilterMask},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_base_needsCollision},
	{"dynCast", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionWorld_ContactResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::ContactResultCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::ContactResultCallback >::enumValues[] = {
	{0,0}
};


