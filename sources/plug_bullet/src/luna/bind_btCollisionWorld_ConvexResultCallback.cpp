#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_ConvexResultCallback.h>

class luna_wrapper_btCollisionWorld_ConvexResultCallback {
public:
	typedef Luna< btCollisionWorld::ConvexResultCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld::ConvexResultCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18279310) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::ConvexResultCallback*)");
		}

		btCollisionWorld::ConvexResultCallback* rhs =(Luna< btCollisionWorld::ConvexResultCallback >::check(L,2));
		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
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

		btCollisionWorld::ConvexResultCallback* self= (btCollisionWorld::ConvexResultCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld::ConvexResultCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18279310) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
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

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::ConvexResultCallback");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::ConvexResultCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_hasHit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsCollision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addSingleResult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,34210430) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClosestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setClosestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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
	// btCollisionWorld::ConvexResultCallback::ConvexResultCallback(lua_Table * data)
	static btCollisionWorld::ConvexResultCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::ConvexResultCallback::ConvexResultCallback(lua_Table * data) function, expected prototype:\nbtCollisionWorld::ConvexResultCallback::ConvexResultCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionWorld_ConvexResultCallback(L,NULL);
	}


	// Function binds:
	// bool btCollisionWorld::ConvexResultCallback::hasHit() const
	static int _bind_hasHit(lua_State *L) {
		if (!_lg_typecheck_hasHit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ConvexResultCallback::hasHit() const function, expected prototype:\nbool btCollisionWorld::ConvexResultCallback::hasHit() const\nClass arguments details:\n");
		}


		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ConvexResultCallback::hasHit() const. Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		bool lret = self->hasHit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		bool lret = self->needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 34210430\n");
		}

		btCollisionWorld::LocalConvexResult* convexResult_ptr=(Luna< btCollisionWorld::LocalConvexResult >::check(L,2));
		if( !convexResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexResult in btCollisionWorld::ConvexResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalConvexResult & convexResult=*convexResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(convexResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionWorld::ConvexResultCallback::m_closestHitFraction()
	static int _bind_getClosestHitFraction(lua_State *L) {
		if (!_lg_typecheck_getClosestHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::ConvexResultCallback::m_closestHitFraction() function, expected prototype:\nfloat btCollisionWorld::ConvexResultCallback::m_closestHitFraction()\nClass arguments details:\n");
		}


		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::ConvexResultCallback::m_closestHitFraction(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		float lret = self->m_closestHitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup()
	static int _bind_getCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup() function, expected prototype:\nshort int btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup()\nClass arguments details:\n");
		}


		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::ConvexResultCallback::m_collisionFilterMask()
	static int _bind_getCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::ConvexResultCallback::m_collisionFilterMask() function, expected prototype:\nshort int btCollisionWorld::ConvexResultCallback::m_collisionFilterMask()\nClass arguments details:\n");
		}


		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::ConvexResultCallback::m_collisionFilterMask(). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::ConvexResultCallback::m_closestHitFraction(float value)
	static int _bind_setClosestHitFraction(lua_State *L) {
		if (!_lg_typecheck_setClosestHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ConvexResultCallback::m_closestHitFraction(float value) function, expected prototype:\nvoid btCollisionWorld::ConvexResultCallback::m_closestHitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ConvexResultCallback::m_closestHitFraction(float). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_closestHitFraction = value;

		return 0;
	}

	// void btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup(short int value)
	static int _bind_setCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup(short int value) function, expected prototype:\nvoid btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ConvexResultCallback::m_collisionFilterGroup(short int). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterGroup = value;

		return 0;
	}

	// void btCollisionWorld::ConvexResultCallback::m_collisionFilterMask(short int value)
	static int _bind_setCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::ConvexResultCallback::m_collisionFilterMask(short int value) function, expected prototype:\nvoid btCollisionWorld::ConvexResultCallback::m_collisionFilterMask(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::ConvexResultCallback::m_collisionFilterMask(short int). Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterMask = value;

		return 0;
	}

	// bool btCollisionWorld::ConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::ConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::ConvexResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::ConvexResultCallback* self=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::ConvexResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::ConvexResultCallback >::check(L,1)).name());
		}
		bool lret = self->ConvexResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::ConvexResultCallback* LunaTraits< btCollisionWorld::ConvexResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btCollisionWorld::ConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult & convexResult, bool normalInWorldSpace)
}

void LunaTraits< btCollisionWorld::ConvexResultCallback >::_bind_dtor(btCollisionWorld::ConvexResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::ConvexResultCallback >::className[] = "btCollisionWorld_ConvexResultCallback";
const char LunaTraits< btCollisionWorld::ConvexResultCallback >::fullName[] = "btCollisionWorld::ConvexResultCallback";
const char LunaTraits< btCollisionWorld::ConvexResultCallback >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::ConvexResultCallback >::parents[] = {0};
const int LunaTraits< btCollisionWorld::ConvexResultCallback >::hash = 18279310;
const int LunaTraits< btCollisionWorld::ConvexResultCallback >::uniqueIDs[] = {18279310,0};

luna_RegType LunaTraits< btCollisionWorld::ConvexResultCallback >::methods[] = {
	{"hasHit", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_hasHit},
	{"needsCollision", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_needsCollision},
	{"addSingleResult", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_addSingleResult},
	{"getClosestHitFraction", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_getClosestHitFraction},
	{"getCollisionFilterGroup", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_getCollisionFilterGroup},
	{"getCollisionFilterMask", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_getCollisionFilterMask},
	{"setClosestHitFraction", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_setClosestHitFraction},
	{"setCollisionFilterGroup", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_setCollisionFilterGroup},
	{"setCollisionFilterMask", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_setCollisionFilterMask},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_base_needsCollision},
	{"dynCast", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionWorld_ConvexResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::ConvexResultCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::ConvexResultCallback >::enumValues[] = {
	{0,0}
};


