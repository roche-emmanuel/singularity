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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52132875) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphaseAabbCallback*)");
		}

		btBroadphaseAabbCallback* rhs =(Luna< btBroadphaseAabbCallback >::check(L,2));
		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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
	inline static bool _lg_typecheck_getM_rayDirectionInverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lambda_max(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_rayDirectionInverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lambda_max(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data)
	static btBroadphaseRayCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data) function, expected prototype:\nbtBroadphaseRayCallback::btBroadphaseRayCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btBroadphaseRayCallback(L,NULL);
	}


	// Function binds:
	// btVector3 btBroadphaseRayCallback::m_rayDirectionInverse()
	static int _bind_getM_rayDirectionInverse(lua_State *L) {
		if (!_lg_typecheck_getM_rayDirectionInverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBroadphaseRayCallback::m_rayDirectionInverse() function, expected prototype:\nbtVector3 btBroadphaseRayCallback::m_rayDirectionInverse()\nClass arguments details:\n");
		}


		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBroadphaseRayCallback::m_rayDirectionInverse(). Got : '%s'",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_rayDirectionInverse;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btBroadphaseRayCallback::m_lambda_max()
	static int _bind_getM_lambda_max(lua_State *L) {
		if (!_lg_typecheck_getM_lambda_max(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBroadphaseRayCallback::m_lambda_max() function, expected prototype:\nfloat btBroadphaseRayCallback::m_lambda_max()\nClass arguments details:\n");
		}


		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBroadphaseRayCallback::m_lambda_max(). Got : '%s'",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name());
		}
		float lret = self->m_lambda_max;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value)
	static int _bind_setM_rayDirectionInverse(lua_State *L) {
		if (!_lg_typecheck_setM_rayDirectionInverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value) function, expected prototype:\nvoid btBroadphaseRayCallback::m_rayDirectionInverse(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btBroadphaseRayCallback::m_rayDirectionInverse function");
		}
		btVector3 value=*value_ptr;

		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseRayCallback::m_rayDirectionInverse(btVector3). Got : '%s'",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name());
		}
		self->m_rayDirectionInverse = value;

		return 0;
	}

	// void btBroadphaseRayCallback::m_lambda_max(float value)
	static int _bind_setM_lambda_max(lua_State *L) {
		if (!_lg_typecheck_setM_lambda_max(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseRayCallback::m_lambda_max(float value) function, expected prototype:\nvoid btBroadphaseRayCallback::m_lambda_max(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btBroadphaseRayCallback* self=Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseRayCallback::m_lambda_max(float). Got : '%s'",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name());
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
	{"getM_rayDirectionInverse", &luna_wrapper_btBroadphaseRayCallback::_bind_getM_rayDirectionInverse},
	{"getM_lambda_max", &luna_wrapper_btBroadphaseRayCallback::_bind_getM_lambda_max},
	{"setM_rayDirectionInverse", &luna_wrapper_btBroadphaseRayCallback::_bind_setM_rayDirectionInverse},
	{"setM_lambda_max", &luna_wrapper_btBroadphaseRayCallback::_bind_setM_lambda_max},
	{"__eq", &luna_wrapper_btBroadphaseRayCallback::_bind___eq},
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

