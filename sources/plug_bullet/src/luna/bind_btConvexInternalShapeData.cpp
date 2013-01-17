#include <plug_common.h>

class luna_wrapper_btConvexInternalShapeData {
public:
	typedef Luna< btConvexInternalShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7968673) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexInternalShapeData*)");
		}

		btConvexInternalShapeData* rhs =(Luna< btConvexInternalShapeData >::check(L,2));
		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
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

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexInternalShapeData");
		
		return luna_dynamicCast(L,converters,"btConvexInternalShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_implicitShapeDimensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_padding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94025107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_implicitShapeDimensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_padding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btConvexInternalShapeData::m_collisionShapeData()
	static int _bind_getM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btConvexInternalShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btConvexInternalShapeData::m_collisionShapeData()\nClass arguments details:\n");
		}


		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData btConvexInternalShapeData::m_collisionShapeData(). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btConvexInternalShapeData::m_localScaling()
	static int _bind_getM_localScaling(lua_State *L) {
		if (!_lg_typecheck_getM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btConvexInternalShapeData::m_localScaling() function, expected prototype:\nbtVector3FloatData btConvexInternalShapeData::m_localScaling()\nClass arguments details:\n");
		}


		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btConvexInternalShapeData::m_localScaling(). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_localScaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btConvexInternalShapeData::m_implicitShapeDimensions()
	static int _bind_getM_implicitShapeDimensions(lua_State *L) {
		if (!_lg_typecheck_getM_implicitShapeDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btConvexInternalShapeData::m_implicitShapeDimensions() function, expected prototype:\nbtVector3FloatData btConvexInternalShapeData::m_implicitShapeDimensions()\nClass arguments details:\n");
		}


		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btConvexInternalShapeData::m_implicitShapeDimensions(). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_implicitShapeDimensions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btConvexInternalShapeData::m_collisionMargin()
	static int _bind_getM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_getM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexInternalShapeData::m_collisionMargin() function, expected prototype:\nfloat btConvexInternalShapeData::m_collisionMargin()\nClass arguments details:\n");
		}


		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexInternalShapeData::m_collisionMargin(). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		float lret = self->m_collisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexInternalShapeData::m_padding()
	static int _bind_getM_padding(lua_State *L) {
		if (!_lg_typecheck_getM_padding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexInternalShapeData::m_padding() function, expected prototype:\nint btConvexInternalShapeData::m_padding()\nClass arguments details:\n");
		}


		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexInternalShapeData::m_padding(). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		int lret = self->m_padding;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexInternalShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btConvexInternalShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexInternalShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btConvexInternalShapeData::m_localScaling(btVector3FloatData value)
	static int _bind_setM_localScaling(lua_State *L) {
		if (!_lg_typecheck_setM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShapeData::m_localScaling(btVector3FloatData value) function, expected prototype:\nvoid btConvexInternalShapeData::m_localScaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexInternalShapeData::m_localScaling function");
		}
		btVector3FloatData value=*value_ptr;

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShapeData::m_localScaling(btVector3FloatData). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		self->m_localScaling = value;

		return 0;
	}

	// void btConvexInternalShapeData::m_implicitShapeDimensions(btVector3FloatData value)
	static int _bind_setM_implicitShapeDimensions(lua_State *L) {
		if (!_lg_typecheck_setM_implicitShapeDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShapeData::m_implicitShapeDimensions(btVector3FloatData value) function, expected prototype:\nvoid btConvexInternalShapeData::m_implicitShapeDimensions(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexInternalShapeData::m_implicitShapeDimensions function");
		}
		btVector3FloatData value=*value_ptr;

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShapeData::m_implicitShapeDimensions(btVector3FloatData). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		self->m_implicitShapeDimensions = value;

		return 0;
	}

	// void btConvexInternalShapeData::m_collisionMargin(float value)
	static int _bind_setM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_setM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShapeData::m_collisionMargin(float value) function, expected prototype:\nvoid btConvexInternalShapeData::m_collisionMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShapeData::m_collisionMargin(float). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		self->m_collisionMargin = value;

		return 0;
	}

	// void btConvexInternalShapeData::m_padding(int value)
	static int _bind_setM_padding(lua_State *L) {
		if (!_lg_typecheck_setM_padding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalShapeData::m_padding(int value) function, expected prototype:\nvoid btConvexInternalShapeData::m_padding(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btConvexInternalShapeData* self=(Luna< btConvexInternalShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalShapeData::m_padding(int). Got : '%s'",typeid(Luna< btConvexInternalShapeData >::check(L,1)).name());
		}
		self->m_padding = value;

		return 0;
	}


	// Operator binds:

};

btConvexInternalShapeData* LunaTraits< btConvexInternalShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConvexInternalShapeData >::_bind_dtor(btConvexInternalShapeData* obj) {
	delete obj;
}

const char LunaTraits< btConvexInternalShapeData >::className[] = "btConvexInternalShapeData";
const char LunaTraits< btConvexInternalShapeData >::fullName[] = "btConvexInternalShapeData";
const char LunaTraits< btConvexInternalShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btConvexInternalShapeData >::parents[] = {0};
const int LunaTraits< btConvexInternalShapeData >::hash = 7968673;
const int LunaTraits< btConvexInternalShapeData >::uniqueIDs[] = {7968673,0};

luna_RegType LunaTraits< btConvexInternalShapeData >::methods[] = {
	{"getM_collisionShapeData", &luna_wrapper_btConvexInternalShapeData::_bind_getM_collisionShapeData},
	{"getM_localScaling", &luna_wrapper_btConvexInternalShapeData::_bind_getM_localScaling},
	{"getM_implicitShapeDimensions", &luna_wrapper_btConvexInternalShapeData::_bind_getM_implicitShapeDimensions},
	{"getM_collisionMargin", &luna_wrapper_btConvexInternalShapeData::_bind_getM_collisionMargin},
	{"getM_padding", &luna_wrapper_btConvexInternalShapeData::_bind_getM_padding},
	{"setM_collisionShapeData", &luna_wrapper_btConvexInternalShapeData::_bind_setM_collisionShapeData},
	{"setM_localScaling", &luna_wrapper_btConvexInternalShapeData::_bind_setM_localScaling},
	{"setM_implicitShapeDimensions", &luna_wrapper_btConvexInternalShapeData::_bind_setM_implicitShapeDimensions},
	{"setM_collisionMargin", &luna_wrapper_btConvexInternalShapeData::_bind_setM_collisionMargin},
	{"setM_padding", &luna_wrapper_btConvexInternalShapeData::_bind_setM_padding},
	{"dynCast", &luna_wrapper_btConvexInternalShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexInternalShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexInternalShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexInternalShapeData >::enumValues[] = {
	{0,0}
};

