#include <plug_common.h>

class luna_wrapper_btGeneric6DofConstraintData {
public:
	typedef Luna< btGeneric6DofConstraintData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56103271) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGeneric6DofConstraintData*)");
		}

		btGeneric6DofConstraintData* rhs =(Luna< btGeneric6DofConstraintData >::check(L,2));
		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
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

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGeneric6DofConstraintData");
		
		return luna_dynamicCast(L,converters,"btGeneric6DofConstraintData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rbAFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_rbBFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_linearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_linearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_angularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useLinearReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useOffsetForConstraintFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_typeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98838043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbAFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_rbBFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_linearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_linearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_angularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useLinearReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useOffsetForConstraintFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btGeneric6DofConstraintData::m_typeConstraintData()
	static int _bind_getM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btGeneric6DofConstraintData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btGeneric6DofConstraintData::m_typeConstraintData()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintData btGeneric6DofConstraintData::m_typeConstraintData(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btGeneric6DofConstraintData::m_rbAFrame()
	static int _bind_getM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btGeneric6DofConstraintData::m_rbAFrame() function, expected prototype:\nbtTransformFloatData btGeneric6DofConstraintData::m_rbAFrame()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btGeneric6DofConstraintData::m_rbAFrame(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbAFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btTransformFloatData btGeneric6DofConstraintData::m_rbBFrame()
	static int _bind_getM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_getM_rbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btGeneric6DofConstraintData::m_rbBFrame() function, expected prototype:\nbtTransformFloatData btGeneric6DofConstraintData::m_rbBFrame()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btGeneric6DofConstraintData::m_rbBFrame(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_rbBFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGeneric6DofConstraintData::m_linearUpperLimit()
	static int _bind_getM_linearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_linearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGeneric6DofConstraintData::m_linearUpperLimit() function, expected prototype:\nbtVector3FloatData btGeneric6DofConstraintData::m_linearUpperLimit()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btGeneric6DofConstraintData::m_linearUpperLimit(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_linearUpperLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGeneric6DofConstraintData::m_linearLowerLimit()
	static int _bind_getM_linearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_linearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGeneric6DofConstraintData::m_linearLowerLimit() function, expected prototype:\nbtVector3FloatData btGeneric6DofConstraintData::m_linearLowerLimit()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btGeneric6DofConstraintData::m_linearLowerLimit(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_linearLowerLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGeneric6DofConstraintData::m_angularUpperLimit()
	static int _bind_getM_angularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_angularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGeneric6DofConstraintData::m_angularUpperLimit() function, expected prototype:\nbtVector3FloatData btGeneric6DofConstraintData::m_angularUpperLimit()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btGeneric6DofConstraintData::m_angularUpperLimit(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_angularUpperLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGeneric6DofConstraintData::m_angularLowerLimit()
	static int _bind_getM_angularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_angularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGeneric6DofConstraintData::m_angularLowerLimit() function, expected prototype:\nbtVector3FloatData btGeneric6DofConstraintData::m_angularLowerLimit()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btGeneric6DofConstraintData::m_angularLowerLimit(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_angularLowerLimit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// int btGeneric6DofConstraintData::m_useLinearReferenceFrameA()
	static int _bind_getM_useLinearReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getM_useLinearReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraintData::m_useLinearReferenceFrameA() function, expected prototype:\nint btGeneric6DofConstraintData::m_useLinearReferenceFrameA()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraintData::m_useLinearReferenceFrameA(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		int lret = self->m_useLinearReferenceFrameA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGeneric6DofConstraintData::m_useOffsetForConstraintFrame()
	static int _bind_getM_useOffsetForConstraintFrame(lua_State *L) {
		if (!_lg_typecheck_getM_useOffsetForConstraintFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraintData::m_useOffsetForConstraintFrame() function, expected prototype:\nint btGeneric6DofConstraintData::m_useOffsetForConstraintFrame()\nClass arguments details:\n");
		}


		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraintData::m_useOffsetForConstraintFrame(). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		int lret = self->m_useOffsetForConstraintFrame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofConstraintData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setM_typeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setM_typeConstraintData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n");
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_typeConstraintData(btTypedConstraintData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_rbAFrame(btTransformFloatData value)
	static int _bind_setM_rbAFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_rbAFrame(btTransformFloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_rbAFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_rbAFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_rbAFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_rbAFrame = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_rbBFrame(btTransformFloatData value)
	static int _bind_setM_rbBFrame(lua_State *L) {
		if (!_lg_typecheck_setM_rbBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_rbBFrame(btTransformFloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_rbBFrame(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_rbBFrame function");
		}
		btTransformFloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_rbBFrame(btTransformFloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_rbBFrame = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_linearUpperLimit(btVector3FloatData value)
	static int _bind_setM_linearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_linearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_linearUpperLimit(btVector3FloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_linearUpperLimit(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_linearUpperLimit function");
		}
		btVector3FloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_linearUpperLimit(btVector3FloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_linearUpperLimit = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_linearLowerLimit(btVector3FloatData value)
	static int _bind_setM_linearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_linearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_linearLowerLimit(btVector3FloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_linearLowerLimit(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_linearLowerLimit function");
		}
		btVector3FloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_linearLowerLimit(btVector3FloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_linearLowerLimit = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_angularUpperLimit(btVector3FloatData value)
	static int _bind_setM_angularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_angularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_angularUpperLimit(btVector3FloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_angularUpperLimit(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_angularUpperLimit function");
		}
		btVector3FloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_angularUpperLimit(btVector3FloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_angularUpperLimit = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_angularLowerLimit(btVector3FloatData value)
	static int _bind_setM_angularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_angularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_angularLowerLimit(btVector3FloatData value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_angularLowerLimit(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofConstraintData::m_angularLowerLimit function");
		}
		btVector3FloatData value=*value_ptr;

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_angularLowerLimit(btVector3FloatData). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_angularLowerLimit = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_useLinearReferenceFrameA(int value)
	static int _bind_setM_useLinearReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_setM_useLinearReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_useLinearReferenceFrameA(int value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_useLinearReferenceFrameA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_useLinearReferenceFrameA(int). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_useLinearReferenceFrameA = value;

		return 0;
	}

	// void btGeneric6DofConstraintData::m_useOffsetForConstraintFrame(int value)
	static int _bind_setM_useOffsetForConstraintFrame(lua_State *L) {
		if (!_lg_typecheck_setM_useOffsetForConstraintFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraintData::m_useOffsetForConstraintFrame(int value) function, expected prototype:\nvoid btGeneric6DofConstraintData::m_useOffsetForConstraintFrame(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGeneric6DofConstraintData* self=(Luna< btGeneric6DofConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraintData::m_useOffsetForConstraintFrame(int). Got : '%s'",typeid(Luna< btGeneric6DofConstraintData >::check(L,1)).name());
		}
		self->m_useOffsetForConstraintFrame = value;

		return 0;
	}


	// Operator binds:

};

btGeneric6DofConstraintData* LunaTraits< btGeneric6DofConstraintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGeneric6DofConstraintData >::_bind_dtor(btGeneric6DofConstraintData* obj) {
	delete obj;
}

const char LunaTraits< btGeneric6DofConstraintData >::className[] = "btGeneric6DofConstraintData";
const char LunaTraits< btGeneric6DofConstraintData >::fullName[] = "btGeneric6DofConstraintData";
const char LunaTraits< btGeneric6DofConstraintData >::moduleName[] = "bullet";
const char* LunaTraits< btGeneric6DofConstraintData >::parents[] = {0};
const int LunaTraits< btGeneric6DofConstraintData >::hash = 56103271;
const int LunaTraits< btGeneric6DofConstraintData >::uniqueIDs[] = {56103271,0};

luna_RegType LunaTraits< btGeneric6DofConstraintData >::methods[] = {
	{"getM_typeConstraintData", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_typeConstraintData},
	{"getM_rbAFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_rbAFrame},
	{"getM_rbBFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_rbBFrame},
	{"getM_linearUpperLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_linearUpperLimit},
	{"getM_linearLowerLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_linearLowerLimit},
	{"getM_angularUpperLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_angularUpperLimit},
	{"getM_angularLowerLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_angularLowerLimit},
	{"getM_useLinearReferenceFrameA", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_useLinearReferenceFrameA},
	{"getM_useOffsetForConstraintFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_getM_useOffsetForConstraintFrame},
	{"setM_typeConstraintData", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_typeConstraintData},
	{"setM_rbAFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_rbAFrame},
	{"setM_rbBFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_rbBFrame},
	{"setM_linearUpperLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_linearUpperLimit},
	{"setM_linearLowerLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_linearLowerLimit},
	{"setM_angularUpperLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_angularUpperLimit},
	{"setM_angularLowerLimit", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_angularLowerLimit},
	{"setM_useLinearReferenceFrameA", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_useLinearReferenceFrameA},
	{"setM_useOffsetForConstraintFrame", &luna_wrapper_btGeneric6DofConstraintData::_bind_setM_useOffsetForConstraintFrame},
	{"dynCast", &luna_wrapper_btGeneric6DofConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btGeneric6DofConstraintData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGeneric6DofConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGeneric6DofConstraintData >::enumValues[] = {
	{0,0}
};


