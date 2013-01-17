#include <plug_common.h>

class luna_wrapper_btGImpactMeshShapeData {
public:
	typedef Luna< btGImpactMeshShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48029312) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGImpactMeshShapeData*)");
		}

		btGImpactMeshShapeData* rhs =(Luna< btGImpactMeshShapeData >::check(L,2));
		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
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

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGImpactMeshShapeData");
		
		return luna_dynamicCast(L,converters,"btGImpactMeshShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_meshInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_gimpactSubType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94025107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_meshInterface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5637632) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_gimpactSubType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData()
	static int _bind_getM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData()\nClass arguments details:\n");
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData(). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface()
	static int _bind_getM_meshInterface(lua_State *L) {
		if (!_lg_typecheck_getM_meshInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface() function, expected prototype:\nbtStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface()\nClass arguments details:\n");
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface(). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		const btStridingMeshInterfaceData* lret = &self->m_meshInterface;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterfaceData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGImpactMeshShapeData::m_localScaling()
	static int _bind_getM_localScaling(lua_State *L) {
		if (!_lg_typecheck_getM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGImpactMeshShapeData::m_localScaling() function, expected prototype:\nbtVector3FloatData btGImpactMeshShapeData::m_localScaling()\nClass arguments details:\n");
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btGImpactMeshShapeData::m_localScaling(). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_localScaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btGImpactMeshShapeData::m_collisionMargin()
	static int _bind_getM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_getM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapeData::m_collisionMargin() function, expected prototype:\nfloat btGImpactMeshShapeData::m_collisionMargin()\nClass arguments details:\n");
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapeData::m_collisionMargin(). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		float lret = self->m_collisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapeData::m_gimpactSubType()
	static int _bind_getM_gimpactSubType(lua_State *L) {
		if (!_lg_typecheck_getM_gimpactSubType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapeData::m_gimpactSubType() function, expected prototype:\nint btGImpactMeshShapeData::m_gimpactSubType()\nClass arguments details:\n");
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapeData::m_gimpactSubType(). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		int lret = self->m_gimpactSubType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)
	static int _bind_setM_meshInterface(lua_State *L) {
		if (!_lg_typecheck_setM_meshInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)\nClass arguments details:\narg 1 ID = 5637632\n");
		}

		btStridingMeshInterfaceData* value_ptr=(Luna< btStridingMeshInterfaceData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_meshInterface function");
		}
		btStridingMeshInterfaceData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		self->m_meshInterface = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_localScaling(btVector3FloatData value)
	static int _bind_setM_localScaling(lua_State *L) {
		if (!_lg_typecheck_setM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_localScaling(btVector3FloatData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_localScaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_localScaling function");
		}
		btVector3FloatData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_localScaling(btVector3FloatData). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		self->m_localScaling = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_collisionMargin(float value)
	static int _bind_setM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_setM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_collisionMargin(float value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_collisionMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_collisionMargin(float). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		self->m_collisionMargin = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_gimpactSubType(int value)
	static int _bind_setM_gimpactSubType(lua_State *L) {
		if (!_lg_typecheck_setM_gimpactSubType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_gimpactSubType(int value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_gimpactSubType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_gimpactSubType(int). Got : '%s'",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name());
		}
		self->m_gimpactSubType = value;

		return 0;
	}


	// Operator binds:

};

btGImpactMeshShapeData* LunaTraits< btGImpactMeshShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGImpactMeshShapeData >::_bind_dtor(btGImpactMeshShapeData* obj) {
	delete obj;
}

const char LunaTraits< btGImpactMeshShapeData >::className[] = "btGImpactMeshShapeData";
const char LunaTraits< btGImpactMeshShapeData >::fullName[] = "btGImpactMeshShapeData";
const char LunaTraits< btGImpactMeshShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactMeshShapeData >::parents[] = {0};
const int LunaTraits< btGImpactMeshShapeData >::hash = 48029312;
const int LunaTraits< btGImpactMeshShapeData >::uniqueIDs[] = {48029312,0};

luna_RegType LunaTraits< btGImpactMeshShapeData >::methods[] = {
	{"getM_collisionShapeData", &luna_wrapper_btGImpactMeshShapeData::_bind_getM_collisionShapeData},
	{"getM_meshInterface", &luna_wrapper_btGImpactMeshShapeData::_bind_getM_meshInterface},
	{"getM_localScaling", &luna_wrapper_btGImpactMeshShapeData::_bind_getM_localScaling},
	{"getM_collisionMargin", &luna_wrapper_btGImpactMeshShapeData::_bind_getM_collisionMargin},
	{"getM_gimpactSubType", &luna_wrapper_btGImpactMeshShapeData::_bind_getM_gimpactSubType},
	{"setM_collisionShapeData", &luna_wrapper_btGImpactMeshShapeData::_bind_setM_collisionShapeData},
	{"setM_meshInterface", &luna_wrapper_btGImpactMeshShapeData::_bind_setM_meshInterface},
	{"setM_localScaling", &luna_wrapper_btGImpactMeshShapeData::_bind_setM_localScaling},
	{"setM_collisionMargin", &luna_wrapper_btGImpactMeshShapeData::_bind_setM_collisionMargin},
	{"setM_gimpactSubType", &luna_wrapper_btGImpactMeshShapeData::_bind_setM_gimpactSubType},
	{"dynCast", &luna_wrapper_btGImpactMeshShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btGImpactMeshShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactMeshShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactMeshShapeData >::enumValues[] = {
	{0,0}
};


