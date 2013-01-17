#include <plug_common.h>

class luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput {
public:
	typedef Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99215612) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface::ClosestPointInput*)");
		}

		btDiscreteCollisionDetectorInterface::ClosestPointInput* rhs =(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
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

		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDiscreteCollisionDetectorInterface::ClosestPointInput");
		
		return luna_dynamicCast(L,converters,"btDiscreteCollisionDetectorInterface::ClosestPointInput",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_transformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_transformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_maximumDistanceSquared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_stackAlloc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_transformA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_transformB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_maximumDistanceSquared(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stackAlloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46980417)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDiscreteCollisionDetectorInterface::ClosestPointInput::ClosestPointInput()
	static btDiscreteCollisionDetectorInterface::ClosestPointInput* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDiscreteCollisionDetectorInterface::ClosestPointInput::ClosestPointInput() function, expected prototype:\nbtDiscreteCollisionDetectorInterface::ClosestPointInput::ClosestPointInput()\nClass arguments details:\n");
		}


		return new btDiscreteCollisionDetectorInterface::ClosestPointInput();
	}


	// Function binds:
	// btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA()
	static int _bind_getM_transformA(lua_State *L) {
		if (!_lg_typecheck_getM_transformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA() function, expected prototype:\nbtTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA()\nClass arguments details:\n");
		}


		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_transformA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB()
	static int _bind_getM_transformB(lua_State *L) {
		if (!_lg_typecheck_getM_transformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB() function, expected prototype:\nbtTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB()\nClass arguments details:\n");
		}


		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_transformB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// float btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared()
	static int _bind_getM_maximumDistanceSquared(lua_State *L) {
		if (!_lg_typecheck_getM_maximumDistanceSquared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared() function, expected prototype:\nfloat btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared()\nClass arguments details:\n");
		}


		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		float lret = self->m_maximumDistanceSquared;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btStackAlloc * btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc()
	static int _bind_getM_stackAlloc(lua_State *L) {
		if (!_lg_typecheck_getM_stackAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc * btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc() function, expected prototype:\nbtStackAlloc * btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc()\nClass arguments details:\n");
		}


		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStackAlloc * btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		btStackAlloc * lret = self->m_stackAlloc;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA(btTransform value)
	static int _bind_setM_transformA(lua_State *L) {
		if (!_lg_typecheck_setM_transformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA(btTransform value) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA function");
		}
		btTransform value=*value_ptr;

		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformA(btTransform). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		self->m_transformA = value;

		return 0;
	}

	// void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB(btTransform value)
	static int _bind_setM_transformB(lua_State *L) {
		if (!_lg_typecheck_setM_transformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB(btTransform value) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB function");
		}
		btTransform value=*value_ptr;

		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_transformB(btTransform). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		self->m_transformB = value;

		return 0;
	}

	// void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared(float value)
	static int _bind_setM_maximumDistanceSquared(lua_State *L) {
		if (!_lg_typecheck_setM_maximumDistanceSquared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared(float value) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_maximumDistanceSquared(float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		self->m_maximumDistanceSquared = value;

		return 0;
	}

	// void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc(btStackAlloc * value)
	static int _bind_setM_stackAlloc(lua_State *L) {
		if (!_lg_typecheck_setM_stackAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc(btStackAlloc * value) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc(btStackAlloc * value)\nClass arguments details:\narg 1 ID = 46980417\n");
		}

		btStackAlloc* value=(Luna< btStackAlloc >::check(L,2));

		btDiscreteCollisionDetectorInterface::ClosestPointInput* self=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::ClosestPointInput::m_stackAlloc(btStackAlloc *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,1)).name());
		}
		self->m_stackAlloc = value;

		return 0;
	}


	// Operator binds:

};

btDiscreteCollisionDetectorInterface::ClosestPointInput* LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_ctor(L);
}

void LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::_bind_dtor(btDiscreteCollisionDetectorInterface::ClosestPointInput* obj) {
	delete obj;
}

const char LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::className[] = "btDiscreteCollisionDetectorInterface_ClosestPointInput";
const char LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::fullName[] = "btDiscreteCollisionDetectorInterface::ClosestPointInput";
const char LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::moduleName[] = "bullet";
const char* LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::parents[] = {0};
const int LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::hash = 99215612;
const int LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::uniqueIDs[] = {99215612,0};

luna_RegType LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::methods[] = {
	{"getM_transformA", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_getM_transformA},
	{"getM_transformB", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_getM_transformB},
	{"getM_maximumDistanceSquared", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_getM_maximumDistanceSquared},
	{"getM_stackAlloc", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_getM_stackAlloc},
	{"setM_transformA", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_setM_transformA},
	{"setM_transformB", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_setM_transformB},
	{"setM_maximumDistanceSquared", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_setM_maximumDistanceSquared},
	{"setM_stackAlloc", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_setM_stackAlloc},
	{"dynCast", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind_dynCast},
	{"__eq", &luna_wrapper_btDiscreteCollisionDetectorInterface_ClosestPointInput::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput >::enumValues[] = {
	{0,0}
};


