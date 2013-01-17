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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::RayResultCallback*)");
		}

		btCollisionWorld::RayResultCallback* rhs =(Luna< btCollisionWorld::RayResultCallback >::check(L,2));
		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
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

	inline static bool _lg_typecheck_getM_closestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_flags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_closestHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_flags(lua_State *L) {
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
	// btCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data)
	static btCollisionWorld::RayResultCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data) function, expected prototype:\nbtCollisionWorld::RayResultCallback::RayResultCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionWorld_RayResultCallback(L,NULL);
	}


	// Function binds:
	// bool btCollisionWorld::RayResultCallback::hasHit() const
	static int _bind_hasHit(lua_State *L) {
		if (!_lg_typecheck_hasHit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::hasHit() const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::hasHit() const\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::hasHit() const. Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		bool lret = self->hasHit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_needsCollision(lua_State *L) {
		if (!_lg_typecheck_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		bool lret = self->needsCollision(proxy0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)
	static int _bind_addSingleResult(lua_State *L) {
		if (!_lg_typecheck_addSingleResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace) function, expected prototype:\nfloat btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult & rayResult, bool normalInWorldSpace)\nClass arguments details:\narg 1 ID = 32139575\n");
		}

		btCollisionWorld::LocalRayResult* rayResult_ptr=(Luna< btCollisionWorld::LocalRayResult >::check(L,2));
		if( !rayResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayResult in btCollisionWorld::RayResultCallback::addSingleResult function");
		}
		btCollisionWorld::LocalRayResult & rayResult=*rayResult_ptr;
		bool normalInWorldSpace=(bool)(lua_toboolean(L,3)==1);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::RayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult &, bool). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->addSingleResult(rayResult, normalInWorldSpace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionWorld::RayResultCallback::m_closestHitFraction()
	static int _bind_getM_closestHitFraction(lua_State *L) {
		if (!_lg_typecheck_getM_closestHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::RayResultCallback::m_closestHitFraction() function, expected prototype:\nfloat btCollisionWorld::RayResultCallback::m_closestHitFraction()\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::RayResultCallback::m_closestHitFraction(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		float lret = self->m_closestHitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject()
	static int _bind_getM_collisionObject(lua_State *L) {
		if (!_lg_typecheck_getM_collisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject() function, expected prototype:\nconst btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject()\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btCollisionWorld::RayResultCallback::m_collisionObject(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->m_collisionObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup()
	static int _bind_getM_collisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_getM_collisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup() function, expected prototype:\nshort int btCollisionWorld::RayResultCallback::m_collisionFilterGroup()\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::RayResultCallback::m_collisionFilterGroup(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btCollisionWorld::RayResultCallback::m_collisionFilterMask()
	static int _bind_getM_collisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_getM_collisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btCollisionWorld::RayResultCallback::m_collisionFilterMask() function, expected prototype:\nshort int btCollisionWorld::RayResultCallback::m_collisionFilterMask()\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btCollisionWorld::RayResultCallback::m_collisionFilterMask(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btCollisionWorld::RayResultCallback::m_flags()
	static int _bind_getM_flags(lua_State *L) {
		if (!_lg_typecheck_getM_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btCollisionWorld::RayResultCallback::m_flags() function, expected prototype:\nunsigned int btCollisionWorld::RayResultCallback::m_flags()\nClass arguments details:\n");
		}


		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btCollisionWorld::RayResultCallback::m_flags(). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		unsigned int lret = self->m_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::RayResultCallback::m_closestHitFraction(float value)
	static int _bind_setM_closestHitFraction(lua_State *L) {
		if (!_lg_typecheck_setM_closestHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_closestHitFraction(float value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_closestHitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_closestHitFraction(float). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_closestHitFraction = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value)
	static int _bind_setM_collisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_setM_collisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_collisionFilterGroup(short int). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterGroup = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value)
	static int _bind_setM_collisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_setM_collisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_collisionFilterMask(short int). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_collisionFilterMask = value;

		return 0;
	}

	// void btCollisionWorld::RayResultCallback::m_flags(unsigned int value)
	static int _bind_setM_flags(lua_State *L) {
		if (!_lg_typecheck_setM_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::RayResultCallback::m_flags(unsigned int value) function, expected prototype:\nvoid btCollisionWorld::RayResultCallback::m_flags(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::RayResultCallback::m_flags(unsigned int). Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
		}
		self->m_flags = value;

		return 0;
	}

	// bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const
	static int _bind_base_needsCollision(lua_State *L) {
		if (!_lg_typecheck_base_needsCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const function, expected prototype:\nbool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy * proxy0) const\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionWorld::RayResultCallback* self=(Luna< btCollisionWorld::RayResultCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionWorld::RayResultCallback::base_needsCollision(btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btCollisionWorld::RayResultCallback >::check(L,1)).name());
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
	{"getM_closestHitFraction", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getM_closestHitFraction},
	{"getM_collisionObject", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getM_collisionObject},
	{"getM_collisionFilterGroup", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getM_collisionFilterGroup},
	{"getM_collisionFilterMask", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getM_collisionFilterMask},
	{"getM_flags", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getM_flags},
	{"setM_closestHitFraction", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setM_closestHitFraction},
	{"setM_collisionFilterGroup", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setM_collisionFilterGroup},
	{"setM_collisionFilterMask", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setM_collisionFilterMask},
	{"setM_flags", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_setM_flags},
	{"base_needsCollision", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_base_needsCollision},
	{"dynCast", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind___eq},
	{"getTable", &luna_wrapper_btCollisionWorld_RayResultCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::RayResultCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::RayResultCallback >::enumValues[] = {
	{0,0}
};


