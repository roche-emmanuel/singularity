#include <plug_common.h>

#include <luna/wrappers/wrapper_btBroadphaseRayCallback.h>

class luna_wrapper_btBroadphaseRayCallback {
public:
	typedef Luna< btBroadphaseRayCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btBroadphaseAabbCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		btBroadphaseRayCallback* self= (btBroadphaseRayCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBroadphaseRayCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52132875) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btBroadphaseAabbCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btBroadphaseRayCallback* ptr= dynamic_cast< btBroadphaseRayCallback* >(Luna< btBroadphaseAabbCallback >::check(L,1));
		btBroadphaseRayCallback* ptr= luna_caster< btBroadphaseAabbCallback, btBroadphaseRayCallback >::cast(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBroadphaseRayCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRayDirectionInverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_lambda_max(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRayDirectionInverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_lambda_max(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data)
	static btBroadphaseRayCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data) function, expected prototype:\nbtBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btBroadphaseRayCallback(L,NULL);
	}


	// Function binds:
	// btVector3 btBroadphaseRayCallback::m_rayDirectionInverse()
	static int _bind_getRayDirectionInverse(lua_State *L) {
		if (!_lg_typecheck_getRayDirectionInverse(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btBroadphaseRayCallback::m_rayDirectionInverse() function, expected prototype:\nbtVector3 btBroadphaseRayCallback::m_rayDirectionInverse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btBroadphaseRayCallback::m_rayDirectionInverse(). Got : '%s'\n%s",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_rayDirectionInverse;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btBroadphaseRayCallback::m_lambda_max()
	static int _bind_get_lambda_max(lua_State *L) {
		if (!_lg_typecheck_get_lambda_max(L)) {
			luaL_error(L, "luna typecheck failed in float btBroadphaseRayCallback::m_lambda_max() function, expected prototype:\nfloat btBroadphaseRayCallback::m_lambda_max()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btBroadphaseRayCallback::m_lambda_max(). Got : '%s'\n%s",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_lambda_max;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value)
	static int _bind_setRayDirectionInverse(lua_State *L) {
		if (!_lg_typecheck_setRayDirectionInverse(L)) {
			luaL_error(L, "luna typecheck failed in void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value) function, expected prototype:\nvoid btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btBroadphaseRayCallback::m_rayDirectionInverse function");
		}
		btVector3 value=*value_ptr;

		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3). Got : '%s'\n%s",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_rayDirectionInverse = value;

		return 0;
	}

	// void btBroadphaseRayCallback::m_lambda_max(float value)
	static int _bind_set_lambda_max(lua_State *L) {
		if (!_lg_typecheck_set_lambda_max(L)) {
			luaL_error(L, "luna typecheck failed in void btBroadphaseRayCallback::m_lambda_max(float value) function, expected prototype:\nvoid btBroadphaseRayCallback::m_lambda_max(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBroadphaseRayCallback::m_lambda_max(float). Got : '%s'\n%s",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lambda_max = value;

		return 0;
	}


	// Operator binds:

};

btBroadphaseRayCallback* LunaTraits< btBroadphaseRayCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBroadphaseRayCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)
}

void LunaTraits< btBroadphaseRayCallback >::_bind_dtor(btBroadphaseRayCallback* obj) {
	delete obj;
}

const char LunaTraits< btBroadphaseRayCallback >::className[] = "btBroadphaseRayCallback";
const char LunaTraits< btBroadphaseRayCallback >::fullName[] = "btBroadphaseRayCallback";
const char LunaTraits< btBroadphaseRayCallback >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphaseRayCallback >::parents[] = {"bullet.btBroadphaseAabbCallback", 0};
const int LunaTraits< btBroadphaseRayCallback >::hash = 40837775;
const int LunaTraits< btBroadphaseRayCallback >::uniqueIDs[] = {52132875,0};

luna_RegType LunaTraits< btBroadphaseRayCallback >::methods[] = {
	{"getRayDirectionInverse", &luna_wrapper_btBroadphaseRayCallback::_bind_getRayDirectionInverse},
	{"get_lambda_max", &luna_wrapper_btBroadphaseRayCallback::_bind_get_lambda_max},
	{"setRayDirectionInverse", &luna_wrapper_btBroadphaseRayCallback::_bind_setRayDirectionInverse},
	{"set_lambda_max", &luna_wrapper_btBroadphaseRayCallback::_bind_set_lambda_max},
	{"fromVoid", &luna_wrapper_btBroadphaseRayCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBroadphaseRayCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btBroadphaseRayCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphaseRayCallback >::converters[] = {
	{"btBroadphaseAabbCallback", &luna_wrapper_btBroadphaseRayCallback::_cast_from_btBroadphaseAabbCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphaseRayCallback >::enumValues[] = {
	{0,0}
};


