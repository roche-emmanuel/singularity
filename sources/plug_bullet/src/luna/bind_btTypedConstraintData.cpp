#include <plug_common.h>

class luna_wrapper_btTypedConstraintData {
public:
	typedef Luna< btTypedConstraintData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98838043) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedConstraintData*)");
		}

		btTypedConstraintData* rhs =(Luna< btTypedConstraintData >::check(L,2));
		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
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

		btTypedConstraintData* self= (btTypedConstraintData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTypedConstraintData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98838043) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTypedConstraintData >::check(L,1));
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

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTypedConstraintData");
		
		return luna_dynamicCast(L,converters,"btTypedConstraintData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRbA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRbB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObjectType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNeedsFeedback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisableCollisionsBetweenLinkedBodies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBreakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRbA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1580424)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRbB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1580424)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setObjectType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNeedsFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDisableCollisionsBetweenLinkedBodies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBreakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btRigidBodyFloatData * btTypedConstraintData::m_rbA()
	static int _bind_getRbA(lua_State *L) {
		if (!_lg_typecheck_getRbA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBodyFloatData * btTypedConstraintData::m_rbA() function, expected prototype:\nbtRigidBodyFloatData * btTypedConstraintData::m_rbA()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBodyFloatData * btTypedConstraintData::m_rbA(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		btRigidBodyFloatData * lret = self->m_rbA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBodyFloatData >::push(L,lret,false);

		return 1;
	}

	// btRigidBodyFloatData * btTypedConstraintData::m_rbB()
	static int _bind_getRbB(lua_State *L) {
		if (!_lg_typecheck_getRbB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBodyFloatData * btTypedConstraintData::m_rbB() function, expected prototype:\nbtRigidBodyFloatData * btTypedConstraintData::m_rbB()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBodyFloatData * btTypedConstraintData::m_rbB(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		btRigidBodyFloatData * lret = self->m_rbB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBodyFloatData >::push(L,lret,false);

		return 1;
	}

	// char * btTypedConstraintData::m_name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * btTypedConstraintData::m_name() function, expected prototype:\nchar * btTypedConstraintData::m_name()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * btTypedConstraintData::m_name(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		char * lret = self->m_name;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int btTypedConstraintData::m_objectType()
	static int _bind_getObjectType(lua_State *L) {
		if (!_lg_typecheck_getObjectType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_objectType() function, expected prototype:\nint btTypedConstraintData::m_objectType()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_objectType(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_objectType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_userConstraintType()
	static int _bind_getUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_userConstraintType() function, expected prototype:\nint btTypedConstraintData::m_userConstraintType()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_userConstraintType(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_userConstraintType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_userConstraintId()
	static int _bind_getUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_userConstraintId() function, expected prototype:\nint btTypedConstraintData::m_userConstraintId()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_userConstraintId(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_userConstraintId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_needsFeedback()
	static int _bind_getNeedsFeedback(lua_State *L) {
		if (!_lg_typecheck_getNeedsFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_needsFeedback() function, expected prototype:\nint btTypedConstraintData::m_needsFeedback()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_needsFeedback(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_needsFeedback;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraintData::m_appliedImpulse()
	static int _bind_getAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraintData::m_appliedImpulse() function, expected prototype:\nfloat btTypedConstraintData::m_appliedImpulse()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraintData::m_appliedImpulse(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		float lret = self->m_appliedImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraintData::m_dbgDrawSize()
	static int _bind_getDbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_getDbgDrawSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraintData::m_dbgDrawSize() function, expected prototype:\nfloat btTypedConstraintData::m_dbgDrawSize()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraintData::m_dbgDrawSize(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		float lret = self->m_dbgDrawSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies()
	static int _bind_getDisableCollisionsBetweenLinkedBodies(lua_State *L) {
		if (!_lg_typecheck_getDisableCollisionsBetweenLinkedBodies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies() function, expected prototype:\nint btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_disableCollisionsBetweenLinkedBodies;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_overrideNumSolverIterations()
	static int _bind_getOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_getOverrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_overrideNumSolverIterations() function, expected prototype:\nint btTypedConstraintData::m_overrideNumSolverIterations()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_overrideNumSolverIterations(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_overrideNumSolverIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraintData::m_breakingImpulseThreshold()
	static int _bind_getBreakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_getBreakingImpulseThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraintData::m_breakingImpulseThreshold() function, expected prototype:\nfloat btTypedConstraintData::m_breakingImpulseThreshold()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraintData::m_breakingImpulseThreshold(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		float lret = self->m_breakingImpulseThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraintData::m_isEnabled()
	static int _bind_getIsEnabled(lua_State *L) {
		if (!_lg_typecheck_getIsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraintData::m_isEnabled() function, expected prototype:\nint btTypedConstraintData::m_isEnabled()\nClass arguments details:\n");
		}


		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraintData::m_isEnabled(). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		int lret = self->m_isEnabled;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraintData::m_rbA(btRigidBodyFloatData * value)
	static int _bind_setRbA(lua_State *L) {
		if (!_lg_typecheck_setRbA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_rbA(btRigidBodyFloatData * value) function, expected prototype:\nvoid btTypedConstraintData::m_rbA(btRigidBodyFloatData * value)\nClass arguments details:\narg 1 ID = 1580424\n");
		}

		btRigidBodyFloatData* value=(Luna< btRigidBodyFloatData >::check(L,2));

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_rbA(btRigidBodyFloatData *). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_rbA = value;

		return 0;
	}

	// void btTypedConstraintData::m_rbB(btRigidBodyFloatData * value)
	static int _bind_setRbB(lua_State *L) {
		if (!_lg_typecheck_setRbB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_rbB(btRigidBodyFloatData * value) function, expected prototype:\nvoid btTypedConstraintData::m_rbB(btRigidBodyFloatData * value)\nClass arguments details:\narg 1 ID = 1580424\n");
		}

		btRigidBodyFloatData* value=(Luna< btRigidBodyFloatData >::check(L,2));

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_rbB(btRigidBodyFloatData *). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_rbB = value;

		return 0;
	}

	// void btTypedConstraintData::m_name(char * value)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_name(char * value) function, expected prototype:\nvoid btTypedConstraintData::m_name(char * value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_name(char *). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_name = &value;

		return 0;
	}

	// void btTypedConstraintData::m_objectType(int value)
	static int _bind_setObjectType(lua_State *L) {
		if (!_lg_typecheck_setObjectType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_objectType(int value) function, expected prototype:\nvoid btTypedConstraintData::m_objectType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_objectType(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_objectType = value;

		return 0;
	}

	// void btTypedConstraintData::m_userConstraintType(int value)
	static int _bind_setUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_userConstraintType(int value) function, expected prototype:\nvoid btTypedConstraintData::m_userConstraintType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_userConstraintType(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_userConstraintType = value;

		return 0;
	}

	// void btTypedConstraintData::m_userConstraintId(int value)
	static int _bind_setUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_userConstraintId(int value) function, expected prototype:\nvoid btTypedConstraintData::m_userConstraintId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_userConstraintId(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_userConstraintId = value;

		return 0;
	}

	// void btTypedConstraintData::m_needsFeedback(int value)
	static int _bind_setNeedsFeedback(lua_State *L) {
		if (!_lg_typecheck_setNeedsFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_needsFeedback(int value) function, expected prototype:\nvoid btTypedConstraintData::m_needsFeedback(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_needsFeedback(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_needsFeedback = value;

		return 0;
	}

	// void btTypedConstraintData::m_appliedImpulse(float value)
	static int _bind_setAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_appliedImpulse(float value) function, expected prototype:\nvoid btTypedConstraintData::m_appliedImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_appliedImpulse(float). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_appliedImpulse = value;

		return 0;
	}

	// void btTypedConstraintData::m_dbgDrawSize(float value)
	static int _bind_setDbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_setDbgDrawSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_dbgDrawSize(float value) function, expected prototype:\nvoid btTypedConstraintData::m_dbgDrawSize(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_dbgDrawSize(float). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_dbgDrawSize = value;

		return 0;
	}

	// void btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies(int value)
	static int _bind_setDisableCollisionsBetweenLinkedBodies(lua_State *L) {
		if (!_lg_typecheck_setDisableCollisionsBetweenLinkedBodies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies(int value) function, expected prototype:\nvoid btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_disableCollisionsBetweenLinkedBodies(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_disableCollisionsBetweenLinkedBodies = value;

		return 0;
	}

	// void btTypedConstraintData::m_overrideNumSolverIterations(int value)
	static int _bind_setOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_setOverrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_overrideNumSolverIterations(int value) function, expected prototype:\nvoid btTypedConstraintData::m_overrideNumSolverIterations(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_overrideNumSolverIterations(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_overrideNumSolverIterations = value;

		return 0;
	}

	// void btTypedConstraintData::m_breakingImpulseThreshold(float value)
	static int _bind_setBreakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_setBreakingImpulseThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_breakingImpulseThreshold(float value) function, expected prototype:\nvoid btTypedConstraintData::m_breakingImpulseThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_breakingImpulseThreshold(float). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_breakingImpulseThreshold = value;

		return 0;
	}

	// void btTypedConstraintData::m_isEnabled(int value)
	static int _bind_setIsEnabled(lua_State *L) {
		if (!_lg_typecheck_setIsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraintData::m_isEnabled(int value) function, expected prototype:\nvoid btTypedConstraintData::m_isEnabled(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraintData* self=(Luna< btTypedConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraintData::m_isEnabled(int). Got : '%s'",typeid(Luna< btTypedConstraintData >::check(L,1)).name());
		}
		self->m_isEnabled = value;

		return 0;
	}


	// Operator binds:

};

btTypedConstraintData* LunaTraits< btTypedConstraintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTypedConstraintData >::_bind_dtor(btTypedConstraintData* obj) {
	delete obj;
}

const char LunaTraits< btTypedConstraintData >::className[] = "btTypedConstraintData";
const char LunaTraits< btTypedConstraintData >::fullName[] = "btTypedConstraintData";
const char LunaTraits< btTypedConstraintData >::moduleName[] = "bullet";
const char* LunaTraits< btTypedConstraintData >::parents[] = {0};
const int LunaTraits< btTypedConstraintData >::hash = 98838043;
const int LunaTraits< btTypedConstraintData >::uniqueIDs[] = {98838043,0};

luna_RegType LunaTraits< btTypedConstraintData >::methods[] = {
	{"getRbA", &luna_wrapper_btTypedConstraintData::_bind_getRbA},
	{"getRbB", &luna_wrapper_btTypedConstraintData::_bind_getRbB},
	{"getName", &luna_wrapper_btTypedConstraintData::_bind_getName},
	{"getObjectType", &luna_wrapper_btTypedConstraintData::_bind_getObjectType},
	{"getUserConstraintType", &luna_wrapper_btTypedConstraintData::_bind_getUserConstraintType},
	{"getUserConstraintId", &luna_wrapper_btTypedConstraintData::_bind_getUserConstraintId},
	{"getNeedsFeedback", &luna_wrapper_btTypedConstraintData::_bind_getNeedsFeedback},
	{"getAppliedImpulse", &luna_wrapper_btTypedConstraintData::_bind_getAppliedImpulse},
	{"getDbgDrawSize", &luna_wrapper_btTypedConstraintData::_bind_getDbgDrawSize},
	{"getDisableCollisionsBetweenLinkedBodies", &luna_wrapper_btTypedConstraintData::_bind_getDisableCollisionsBetweenLinkedBodies},
	{"getOverrideNumSolverIterations", &luna_wrapper_btTypedConstraintData::_bind_getOverrideNumSolverIterations},
	{"getBreakingImpulseThreshold", &luna_wrapper_btTypedConstraintData::_bind_getBreakingImpulseThreshold},
	{"getIsEnabled", &luna_wrapper_btTypedConstraintData::_bind_getIsEnabled},
	{"setRbA", &luna_wrapper_btTypedConstraintData::_bind_setRbA},
	{"setRbB", &luna_wrapper_btTypedConstraintData::_bind_setRbB},
	{"setName", &luna_wrapper_btTypedConstraintData::_bind_setName},
	{"setObjectType", &luna_wrapper_btTypedConstraintData::_bind_setObjectType},
	{"setUserConstraintType", &luna_wrapper_btTypedConstraintData::_bind_setUserConstraintType},
	{"setUserConstraintId", &luna_wrapper_btTypedConstraintData::_bind_setUserConstraintId},
	{"setNeedsFeedback", &luna_wrapper_btTypedConstraintData::_bind_setNeedsFeedback},
	{"setAppliedImpulse", &luna_wrapper_btTypedConstraintData::_bind_setAppliedImpulse},
	{"setDbgDrawSize", &luna_wrapper_btTypedConstraintData::_bind_setDbgDrawSize},
	{"setDisableCollisionsBetweenLinkedBodies", &luna_wrapper_btTypedConstraintData::_bind_setDisableCollisionsBetweenLinkedBodies},
	{"setOverrideNumSolverIterations", &luna_wrapper_btTypedConstraintData::_bind_setOverrideNumSolverIterations},
	{"setBreakingImpulseThreshold", &luna_wrapper_btTypedConstraintData::_bind_setBreakingImpulseThreshold},
	{"setIsEnabled", &luna_wrapper_btTypedConstraintData::_bind_setIsEnabled},
	{"dynCast", &luna_wrapper_btTypedConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedConstraintData::_bind___eq},
	{"fromVoid", &luna_wrapper_btTypedConstraintData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTypedConstraintData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraintData >::enumValues[] = {
	{0,0}
};


