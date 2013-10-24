#include <plug_common.h>

class luna_wrapper_btJointFeedback {
public:
	typedef Luna< btJointFeedback > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18466422) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btJointFeedback*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btJointFeedback* rhs =(Luna< btJointFeedback >::check(L,2));
		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
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

		btJointFeedback* self= (btJointFeedback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btJointFeedback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18466422) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btJointFeedback >::check(L,1));
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

		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btJointFeedback");
		
		return luna_dynamicCast(L,converters,"btJointFeedback",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getAppliedForceBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedTorqueBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedForceBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedTorqueBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAppliedForceBodyA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedTorqueBodyA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedForceBodyB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedTorqueBodyB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btJointFeedback::m_appliedForceBodyA()
	static int _bind_getAppliedForceBodyA(lua_State *L) {
		if (!_lg_typecheck_getAppliedForceBodyA(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btJointFeedback::m_appliedForceBodyA() function, expected prototype:\nbtVector3 btJointFeedback::m_appliedForceBodyA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btJointFeedback::m_appliedForceBodyA(). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_appliedForceBodyA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJointFeedback::m_appliedTorqueBodyA()
	static int _bind_getAppliedTorqueBodyA(lua_State *L) {
		if (!_lg_typecheck_getAppliedTorqueBodyA(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btJointFeedback::m_appliedTorqueBodyA() function, expected prototype:\nbtVector3 btJointFeedback::m_appliedTorqueBodyA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btJointFeedback::m_appliedTorqueBodyA(). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_appliedTorqueBodyA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJointFeedback::m_appliedForceBodyB()
	static int _bind_getAppliedForceBodyB(lua_State *L) {
		if (!_lg_typecheck_getAppliedForceBodyB(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btJointFeedback::m_appliedForceBodyB() function, expected prototype:\nbtVector3 btJointFeedback::m_appliedForceBodyB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btJointFeedback::m_appliedForceBodyB(). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_appliedForceBodyB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJointFeedback::m_appliedTorqueBodyB()
	static int _bind_getAppliedTorqueBodyB(lua_State *L) {
		if (!_lg_typecheck_getAppliedTorqueBodyB(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btJointFeedback::m_appliedTorqueBodyB() function, expected prototype:\nbtVector3 btJointFeedback::m_appliedTorqueBodyB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btJointFeedback::m_appliedTorqueBodyB(). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_appliedTorqueBodyB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btJointFeedback::m_appliedForceBodyA(btVector3 value)
	static int _bind_setAppliedForceBodyA(lua_State *L) {
		if (!_lg_typecheck_setAppliedForceBodyA(L)) {
			luaL_error(L, "luna typecheck failed in void btJointFeedback::m_appliedForceBodyA(btVector3 value) function, expected prototype:\nvoid btJointFeedback::m_appliedForceBodyA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJointFeedback::m_appliedForceBodyA function");
		}
		btVector3 value=*value_ptr;

		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btJointFeedback::m_appliedForceBodyA(btVector3). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedForceBodyA = value;

		return 0;
	}

	// void btJointFeedback::m_appliedTorqueBodyA(btVector3 value)
	static int _bind_setAppliedTorqueBodyA(lua_State *L) {
		if (!_lg_typecheck_setAppliedTorqueBodyA(L)) {
			luaL_error(L, "luna typecheck failed in void btJointFeedback::m_appliedTorqueBodyA(btVector3 value) function, expected prototype:\nvoid btJointFeedback::m_appliedTorqueBodyA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJointFeedback::m_appliedTorqueBodyA function");
		}
		btVector3 value=*value_ptr;

		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btJointFeedback::m_appliedTorqueBodyA(btVector3). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedTorqueBodyA = value;

		return 0;
	}

	// void btJointFeedback::m_appliedForceBodyB(btVector3 value)
	static int _bind_setAppliedForceBodyB(lua_State *L) {
		if (!_lg_typecheck_setAppliedForceBodyB(L)) {
			luaL_error(L, "luna typecheck failed in void btJointFeedback::m_appliedForceBodyB(btVector3 value) function, expected prototype:\nvoid btJointFeedback::m_appliedForceBodyB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJointFeedback::m_appliedForceBodyB function");
		}
		btVector3 value=*value_ptr;

		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btJointFeedback::m_appliedForceBodyB(btVector3). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedForceBodyB = value;

		return 0;
	}

	// void btJointFeedback::m_appliedTorqueBodyB(btVector3 value)
	static int _bind_setAppliedTorqueBodyB(lua_State *L) {
		if (!_lg_typecheck_setAppliedTorqueBodyB(L)) {
			luaL_error(L, "luna typecheck failed in void btJointFeedback::m_appliedTorqueBodyB(btVector3 value) function, expected prototype:\nvoid btJointFeedback::m_appliedTorqueBodyB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJointFeedback::m_appliedTorqueBodyB function");
		}
		btVector3 value=*value_ptr;

		btJointFeedback* self=(Luna< btJointFeedback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btJointFeedback::m_appliedTorqueBodyB(btVector3). Got : '%s'\n%s",typeid(Luna< btJointFeedback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedTorqueBodyB = value;

		return 0;
	}


	// Operator binds:

};

btJointFeedback* LunaTraits< btJointFeedback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btJointFeedback >::_bind_dtor(btJointFeedback* obj) {
	delete obj;
}

const char LunaTraits< btJointFeedback >::className[] = "btJointFeedback";
const char LunaTraits< btJointFeedback >::fullName[] = "btJointFeedback";
const char LunaTraits< btJointFeedback >::moduleName[] = "bullet";
const char* LunaTraits< btJointFeedback >::parents[] = {0};
const int LunaTraits< btJointFeedback >::hash = 18466422;
const int LunaTraits< btJointFeedback >::uniqueIDs[] = {18466422,0};

luna_RegType LunaTraits< btJointFeedback >::methods[] = {
	{"getAppliedForceBodyA", &luna_wrapper_btJointFeedback::_bind_getAppliedForceBodyA},
	{"getAppliedTorqueBodyA", &luna_wrapper_btJointFeedback::_bind_getAppliedTorqueBodyA},
	{"getAppliedForceBodyB", &luna_wrapper_btJointFeedback::_bind_getAppliedForceBodyB},
	{"getAppliedTorqueBodyB", &luna_wrapper_btJointFeedback::_bind_getAppliedTorqueBodyB},
	{"setAppliedForceBodyA", &luna_wrapper_btJointFeedback::_bind_setAppliedForceBodyA},
	{"setAppliedTorqueBodyA", &luna_wrapper_btJointFeedback::_bind_setAppliedTorqueBodyA},
	{"setAppliedForceBodyB", &luna_wrapper_btJointFeedback::_bind_setAppliedForceBodyB},
	{"setAppliedTorqueBodyB", &luna_wrapper_btJointFeedback::_bind_setAppliedTorqueBodyB},
	{"dynCast", &luna_wrapper_btJointFeedback::_bind_dynCast},
	{"__eq", &luna_wrapper_btJointFeedback::_bind___eq},
	{"fromVoid", &luna_wrapper_btJointFeedback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btJointFeedback::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btJointFeedback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btJointFeedback >::enumValues[] = {
	{0,0}
};


