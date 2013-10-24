#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionWorld_RayResultCallback.h>

class luna_wrapper_btCollisionWorld_RayResultCallback {
public:
	typedef Luna< btCollisionWorld::RayResultCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld::RayResultCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44790882) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::RayResultCallback*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld::RayResultCallback* rhs =(Luna< btCollisionWorld::RayResultCallback >::check(L,2));
		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld::RayResultCallback* self= (btCollisionWorld::RayResultCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionWorld::RayResultCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44790882) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::RayResultCallback");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::RayResultCallback",name);
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

		if( !Luna<void>::has_uniqueid(L,2,32139575) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClosestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionObject(lua_State *L) {
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

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClosestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// btCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data)
	static btCollisionWorld::RayResultCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data) function, expected prototype:\nbtCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btCollisionWorld_RayResultCallback(L,NULL);
	}


	// Function binds:
	// bool btCollisionWorld::RayResultCallback::hasHit() const
	static int _bind_hasHit(lua_State *L) {
		if (!_lg_typecheck_hasHit(L)) {
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::hasHit() const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::hasHit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::hasHit() const. Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasHit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy *) const. Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::RayResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionWorld::RayResultCallback::m_closestHitFraction()
	static int _bind_getClosestHitFraction(lua_State *L) {
		if (!_lg_typecheck_getClosestHitFraction(L)) {
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::RayResultCallback::m_closestHitFraction() function, expected prototype:\nfloat btCollisionWorld::RayResultCallback::m_closestHitFraction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCollisionWorld::RayResultCallback::m_closestHitFraction(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_closestHitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject()
	static int _bind_getCollisionObject(lua_State *L) {
		if (!_lg_typecheck_getCollisionObject(L)) {
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject() function, expected prototype:\nconst btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btCollisionObject * lret = self->m_collisionObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup()
	static int _bind_getCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterGroup(L)) {
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup() function, expected prototype:\nshort int btCollisionWorld::RayResultCallback::m_collisionFilterGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short int lret = self->m_collisionFilterGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::RayResultCallback::m_collisionFilterMask()
	static int _bind_getCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterMask(L)) {
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::RayResultCallback::m_collisionFilterMask() function, expected prototype:\nshort int btCollisionWorld::RayResultCallback::m_collisionFilterMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::RayResultCallback::m_collisionFilterMask(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short int lret = self->m_collisionFilterMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btCollisionWorld::RayResultCallback::m_flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int btCollisionWorld::RayResultCallback::m_flags() function, expected prototype:\nunsigned int btCollisionWorld::RayResultCallback::m_flags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int btCollisionWorld::RayResultCallback::m_flags(). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->m_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::RayResultCallback::m_closestHitFraction(float value)
	static int _bind_setClosestHitFraction(lua_State *L) {
		if (!_lg_typecheck_setClosestHitFraction(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_closestHitFraction(float value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_closestHitFraction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_closestHitFraction(float). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_closestHitFraction = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value)
	static int _bind_setCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterGroup(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_collisionFilterGroup = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value)
	static int _bind_setCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterMask(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_collisionFilterMask = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_flags(unsigned int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_flags(unsigned int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_flags(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_flags(unsigned int). Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_flags = value;

		return 0;
	}

	// bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'\n%s",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RayResultCallback::needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btCollisionWorld::RayResultCallback* LunaTraits< btCollisionWorld::RayResultCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_RayResultCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
}

void LunaTraits< btCollisionWorld::RayResultCallback >::_bind_dtor(btCollisionWorld::RayResultCallback* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::RayResultCallback >::className[] = "btCollisionWorld_RayResultCallback";
const char LunaTraits< btCollisionWorld::RayResultCallback >::fullName[] = "btCollisionWorld::RayResultCallback";
const char LunaTraits< btCollisionWorld::RayResultCallback >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionWorld::RayResultCallback >::parents[] = {0};
const int LunaTraits< btCollisionWorld::RayResultCallback >::hash = 44790882;
const int LunaTraits< btCollisionWorld::RayResultCallback >::uniqueIDs[] = {44790882,0};

luna_RegType LunaTraits< btCollisionWorld::RayResultCallback >::methods[] = {
	{"hasHit", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_hasHit},
	{"needsCollision", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_needsCollision},
	{"addSingleResult", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_addSingleResult},
	{"getClosestHitFraction", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getClosestHitFraction},
	{"getCollisionObject", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getCollisionObject},
	{"getCollisionFilterGroup", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getCollisionFilterGroup},
	{"getCollisionFilterMask", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getCollisionFilterMask},
	{"getFlags", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getFlags},
	{"setClosestHitFraction", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setClosestHitFraction},
	{"setCollisionFilterGroup", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setCollisionFilterGroup},
	{"setCollisionFilterMask", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setCollisionFilterMask},
	{"setFlags", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setFlags},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_base_needsCollision},
	{"dynCast", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::RayResultCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::RayResultCallback >::enumValues[] = {
	{0,0}
};


