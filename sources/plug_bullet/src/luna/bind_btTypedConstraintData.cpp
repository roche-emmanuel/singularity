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
	inline static bool _lg_typecheck_getM_rbA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rbB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_objectType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_userConstraintType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_userConstraintId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_needsFeedback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_dbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_disableCollisionsBetweenLinkedBodies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_overrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_breakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_rbA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1580424)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1580424)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_objectType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_userConstraintType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_userConstraintId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_needsFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_dbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_disableCollisionsBetweenLinkedBodies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_overrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_breakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btRigidBodyFloatData * btTypedConstraintData::m_rbA()
	static int _bind_getM_rbA(lua_State *L) {
		if (!_lg_typecheck_getM_rbA(L)) {
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
	static int _bind_getM_rbB(lua_State *L) {
		if (!_lg_typecheck_getM_rbB(L)) {
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
	static int _bind_getM_name(lua_State *L) {
		if (!_lg_typecheck_getM_name(L)) {
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
	static int _bind_getM_objectType(lua_State *L) {
		if (!_lg_typecheck_getM_objectType(L)) {
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
	static int _bind_getM_userConstraintType(lua_State *L) {
		if (!_lg_typecheck_getM_userConstraintType(L)) {
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
	static int _bind_getM_userConstraintId(lua_State *L) {
		if (!_lg_typecheck_getM_userConstraintId(L)) {
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
	static int _bind_getM_needsFeedback(lua_State *L) {
		if (!_lg_typecheck_getM_needsFeedback(L)) {
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
	static int _bind_getM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_appliedImpulse(L)) {
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
	static int _bind_getM_dbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_getM_dbgDrawSize(L)) {
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
	static int _bind_getM_disableCollisionsBetweenLinkedBodies(lua_State *L) {
		if (!_lg_typecheck_getM_disableCollisionsBetweenLinkedBodies(L)) {
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
	static int _bind_getM_overrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_getM_overrideNumSolverIterations(L)) {
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
	static int _bind_getM_breakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_breakingImpulseThreshold(L)) {
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
	static int _bind_getM_isEnabled(lua_State *L) {
		if (!_lg_typecheck_getM_isEnabled(L)) {
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
	static int _bind_setM_rbA(lua_State *L) {
		if (!_lg_typecheck_setM_rbA(L)) {
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
	static int _bind_setM_rbB(lua_State *L) {
		if (!_lg_typecheck_setM_rbB(L)) {
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
	static int _bind_setM_name(lua_State *L) {
		if (!_lg_typecheck_setM_name(L)) {
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
	static int _bind_setM_objectType(lua_State *L) {
		if (!_lg_typecheck_setM_objectType(L)) {
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
	static int _bind_setM_userConstraintType(lua_State *L) {
		if (!_lg_typecheck_setM_userConstraintType(L)) {
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
	static int _bind_setM_userConstraintId(lua_State *L) {
		if (!_lg_typecheck_setM_userConstraintId(L)) {
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
	static int _bind_setM_needsFeedback(lua_State *L) {
		if (!_lg_typecheck_setM_needsFeedback(L)) {
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
	static int _bind_setM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_appliedImpulse(L)) {
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
	static int _bind_setM_dbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_setM_dbgDrawSize(L)) {
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
	static int _bind_setM_disableCollisionsBetweenLinkedBodies(lua_State *L) {
		if (!_lg_typecheck_setM_disableCollisionsBetweenLinkedBodies(L)) {
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
	static int _bind_setM_overrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_setM_overrideNumSolverIterations(L)) {
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
	static int _bind_setM_breakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_breakingImpulseThreshold(L)) {
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
	static int _bind_setM_isEnabled(lua_State *L) {
		if (!_lg_typecheck_setM_isEnabled(L)) {
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
	{"getM_rbA", &luna_wrapper_btTypedConstraintData::_bind_getM_rbA},
	{"getM_rbB", &luna_wrapper_btTypedConstraintData::_bind_getM_rbB},
	{"getM_name", &luna_wrapper_btTypedConstraintData::_bind_getM_name},
	{"getM_objectType", &luna_wrapper_btTypedConstraintData::_bind_getM_objectType},
	{"getM_userConstraintType", &luna_wrapper_btTypedConstraintData::_bind_getM_userConstraintType},
	{"getM_userConstraintId", &luna_wrapper_btTypedConstraintData::_bind_getM_userConstraintId},
	{"getM_needsFeedback", &luna_wrapper_btTypedConstraintData::_bind_getM_needsFeedback},
	{"getM_appliedImpulse", &luna_wrapper_btTypedConstraintData::_bind_getM_appliedImpulse},
	{"getM_dbgDrawSize", &luna_wrapper_btTypedConstraintData::_bind_getM_dbgDrawSize},
	{"getM_disableCollisionsBetweenLinkedBodies", &luna_wrapper_btTypedConstraintData::_bind_getM_disableCollisionsBetweenLinkedBodies},
	{"getM_overrideNumSolverIterations", &luna_wrapper_btTypedConstraintData::_bind_getM_overrideNumSolverIterations},
	{"getM_breakingImpulseThreshold", &luna_wrapper_btTypedConstraintData::_bind_getM_breakingImpulseThreshold},
	{"getM_isEnabled", &luna_wrapper_btTypedConstraintData::_bind_getM_isEnabled},
	{"setM_rbA", &luna_wrapper_btTypedConstraintData::_bind_setM_rbA},
	{"setM_rbB", &luna_wrapper_btTypedConstraintData::_bind_setM_rbB},
	{"setM_name", &luna_wrapper_btTypedConstraintData::_bind_setM_name},
	{"setM_objectType", &luna_wrapper_btTypedConstraintData::_bind_setM_objectType},
	{"setM_userConstraintType", &luna_wrapper_btTypedConstraintData::_bind_setM_userConstraintType},
	{"setM_userConstraintId", &luna_wrapper_btTypedConstraintData::_bind_setM_userConstraintId},
	{"setM_needsFeedback", &luna_wrapper_btTypedConstraintData::_bind_setM_needsFeedback},
	{"setM_appliedImpulse", &luna_wrapper_btTypedConstraintData::_bind_setM_appliedImpulse},
	{"setM_dbgDrawSize", &luna_wrapper_btTypedConstraintData::_bind_setM_dbgDrawSize},
	{"setM_disableCollisionsBetweenLinkedBodies", &luna_wrapper_btTypedConstraintData::_bind_setM_disableCollisionsBetweenLinkedBodies},
	{"setM_overrideNumSolverIterations", &luna_wrapper_btTypedConstraintData::_bind_setM_overrideNumSolverIterations},
	{"setM_breakingImpulseThreshold", &luna_wrapper_btTypedConstraintData::_bind_setM_breakingImpulseThreshold},
	{"setM_isEnabled", &luna_wrapper_btTypedConstraintData::_bind_setM_isEnabled},
	{"dynCast", &luna_wrapper_btTypedConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedConstraintData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraintData >::enumValues[] = {
	{0,0}
};


