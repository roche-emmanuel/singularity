#include <plug_common.h>

class luna_wrapper_btStaticPlaneShapeData {
public:
	typedef Luna< btStaticPlaneShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36910585) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btStaticPlaneShapeData*)");
		}

		btStaticPlaneShapeData* rhs =(Luna< btStaticPlaneShapeData >::check(L,2));
		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
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

		btStaticPlaneShapeData* self= (btStaticPlaneShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btStaticPlaneShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36910585) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btStaticPlaneShapeData >::check(L,1));
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

		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btStaticPlaneShapeData");
		
		return luna_dynamicCast(L,converters,"btStaticPlaneShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCollisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlaneNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlaneConstant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94025107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlaneNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlaneConstant(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btStaticPlaneShapeData::m_collisionShapeData()
	static int _bind_getCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getCollisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btStaticPlaneShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btStaticPlaneShapeData::m_collisionShapeData()\nClass arguments details:\n");
		}


		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData btStaticPlaneShapeData::m_collisionShapeData(). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btStaticPlaneShapeData::m_localScaling()
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btStaticPlaneShapeData::m_localScaling() function, expected prototype:\nbtVector3FloatData btStaticPlaneShapeData::m_localScaling()\nClass arguments details:\n");
		}


		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btStaticPlaneShapeData::m_localScaling(). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_localScaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btStaticPlaneShapeData::m_planeNormal()
	static int _bind_getPlaneNormal(lua_State *L) {
		if (!_lg_typecheck_getPlaneNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btStaticPlaneShapeData::m_planeNormal() function, expected prototype:\nbtVector3FloatData btStaticPlaneShapeData::m_planeNormal()\nClass arguments details:\n");
		}


		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btStaticPlaneShapeData::m_planeNormal(). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_planeNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btStaticPlaneShapeData::m_planeConstant()
	static int _bind_getPlaneConstant(lua_State *L) {
		if (!_lg_typecheck_getPlaneConstant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btStaticPlaneShapeData::m_planeConstant() function, expected prototype:\nfloat btStaticPlaneShapeData::m_planeConstant()\nClass arguments details:\n");
		}


		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btStaticPlaneShapeData::m_planeConstant(). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		float lret = self->m_planeConstant;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStaticPlaneShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setCollisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btStaticPlaneShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStaticPlaneShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btStaticPlaneShapeData::m_localScaling(btVector3FloatData value)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShapeData::m_localScaling(btVector3FloatData value) function, expected prototype:\nvoid btStaticPlaneShapeData::m_localScaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStaticPlaneShapeData::m_localScaling function");
		}
		btVector3FloatData value=*value_ptr;

		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShapeData::m_localScaling(btVector3FloatData). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		self->m_localScaling = value;

		return 0;
	}

	// void btStaticPlaneShapeData::m_planeNormal(btVector3FloatData value)
	static int _bind_setPlaneNormal(lua_State *L) {
		if (!_lg_typecheck_setPlaneNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShapeData::m_planeNormal(btVector3FloatData value) function, expected prototype:\nvoid btStaticPlaneShapeData::m_planeNormal(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStaticPlaneShapeData::m_planeNormal function");
		}
		btVector3FloatData value=*value_ptr;

		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShapeData::m_planeNormal(btVector3FloatData). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		self->m_planeNormal = value;

		return 0;
	}

	// void btStaticPlaneShapeData::m_planeConstant(float value)
	static int _bind_setPlaneConstant(lua_State *L) {
		if (!_lg_typecheck_setPlaneConstant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStaticPlaneShapeData::m_planeConstant(float value) function, expected prototype:\nvoid btStaticPlaneShapeData::m_planeConstant(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btStaticPlaneShapeData* self=(Luna< btStaticPlaneShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStaticPlaneShapeData::m_planeConstant(float). Got : '%s'",typeid(Luna< btStaticPlaneShapeData >::check(L,1)).name());
		}
		self->m_planeConstant = value;

		return 0;
	}


	// Operator binds:

};

btStaticPlaneShapeData* LunaTraits< btStaticPlaneShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btStaticPlaneShapeData >::_bind_dtor(btStaticPlaneShapeData* obj) {
	delete obj;
}

const char LunaTraits< btStaticPlaneShapeData >::className[] = "btStaticPlaneShapeData";
const char LunaTraits< btStaticPlaneShapeData >::fullName[] = "btStaticPlaneShapeData";
const char LunaTraits< btStaticPlaneShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btStaticPlaneShapeData >::parents[] = {0};
const int LunaTraits< btStaticPlaneShapeData >::hash = 36910585;
const int LunaTraits< btStaticPlaneShapeData >::uniqueIDs[] = {36910585,0};

luna_RegType LunaTraits< btStaticPlaneShapeData >::methods[] = {
	{"getCollisionShapeData", &luna_wrapper_btStaticPlaneShapeData::_bind_getCollisionShapeData},
	{"getLocalScaling", &luna_wrapper_btStaticPlaneShapeData::_bind_getLocalScaling},
	{"getPlaneNormal", &luna_wrapper_btStaticPlaneShapeData::_bind_getPlaneNormal},
	{"getPlaneConstant", &luna_wrapper_btStaticPlaneShapeData::_bind_getPlaneConstant},
	{"setCollisionShapeData", &luna_wrapper_btStaticPlaneShapeData::_bind_setCollisionShapeData},
	{"setLocalScaling", &luna_wrapper_btStaticPlaneShapeData::_bind_setLocalScaling},
	{"setPlaneNormal", &luna_wrapper_btStaticPlaneShapeData::_bind_setPlaneNormal},
	{"setPlaneConstant", &luna_wrapper_btStaticPlaneShapeData::_bind_setPlaneConstant},
	{"dynCast", &luna_wrapper_btStaticPlaneShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btStaticPlaneShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btStaticPlaneShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btStaticPlaneShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btStaticPlaneShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btStaticPlaneShapeData >::enumValues[] = {
	{0,0}
};


