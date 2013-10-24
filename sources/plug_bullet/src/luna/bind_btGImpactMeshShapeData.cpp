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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGImpactMeshShapeData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btGImpactMeshShapeData* rhs =(Luna< btGImpactMeshShapeData >::check(L,2));
		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
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

		btGImpactMeshShapeData* self= (btGImpactMeshShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactMeshShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48029312) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btGImpactMeshShapeData >::check(L,1));
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

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGImpactMeshShapeData");
		
		return luna_dynamicCast(L,converters,"btGImpactMeshShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCollisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGimpactSubType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94025107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMeshInterface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5637632) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGimpactSubType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData()
	static int _bind_getCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getCollisionShapeData(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionShapeData btGImpactMeshShapeData::m_collisionShapeData(). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface()
	static int _bind_getMeshInterface(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface(L)) {
			luaL_error(L, "luna typecheck failed in btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface() function, expected prototype:\nbtStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btStridingMeshInterfaceData btGImpactMeshShapeData::m_meshInterface(). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btStridingMeshInterfaceData* lret = &self->m_meshInterface;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterfaceData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btGImpactMeshShapeData::m_localScaling()
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in btVector3FloatData btGImpactMeshShapeData::m_localScaling() function, expected prototype:\nbtVector3FloatData btGImpactMeshShapeData::m_localScaling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3FloatData btGImpactMeshShapeData::m_localScaling(). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3FloatData* lret = &self->m_localScaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btGImpactMeshShapeData::m_collisionMargin()
	static int _bind_getCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_getCollisionMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapeData::m_collisionMargin() function, expected prototype:\nfloat btGImpactMeshShapeData::m_collisionMargin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapeData::m_collisionMargin(). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_collisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapeData::m_gimpactSubType()
	static int _bind_getGimpactSubType(lua_State *L) {
		if (!_lg_typecheck_getGimpactSubType(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapeData::m_gimpactSubType() function, expected prototype:\nint btGImpactMeshShapeData::m_gimpactSubType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapeData::m_gimpactSubType(). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_gimpactSubType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setCollisionShapeData(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)
	static int _bind_setMeshInterface(lua_State *L) {
		if (!_lg_typecheck_setMeshInterface(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)\nClass arguments details:\narg 1 ID = 5637632\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterfaceData* value_ptr=(Luna< btStridingMeshInterfaceData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_meshInterface function");
		}
		btStridingMeshInterfaceData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_meshInterface(btStridingMeshInterfaceData). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_meshInterface = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_localScaling(btVector3FloatData value)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_localScaling(btVector3FloatData value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_localScaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapeData::m_localScaling function");
		}
		btVector3FloatData value=*value_ptr;

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_localScaling(btVector3FloatData). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_localScaling = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_collisionMargin(float value)
	static int _bind_setCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_setCollisionMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_collisionMargin(float value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_collisionMargin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_collisionMargin(float). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_collisionMargin = value;

		return 0;
	}

	// void btGImpactMeshShapeData::m_gimpactSubType(int value)
	static int _bind_setGimpactSubType(lua_State *L) {
		if (!_lg_typecheck_setGimpactSubType(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapeData::m_gimpactSubType(int value) function, expected prototype:\nvoid btGImpactMeshShapeData::m_gimpactSubType(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapeData* self=(Luna< btGImpactMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapeData::m_gimpactSubType(int). Got : '%s'\n%s",typeid(Luna< btGImpactMeshShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getCollisionShapeData", &luna_wrapper_btGImpactMeshShapeData::_bind_getCollisionShapeData},
	{"getMeshInterface", &luna_wrapper_btGImpactMeshShapeData::_bind_getMeshInterface},
	{"getLocalScaling", &luna_wrapper_btGImpactMeshShapeData::_bind_getLocalScaling},
	{"getCollisionMargin", &luna_wrapper_btGImpactMeshShapeData::_bind_getCollisionMargin},
	{"getGimpactSubType", &luna_wrapper_btGImpactMeshShapeData::_bind_getGimpactSubType},
	{"setCollisionShapeData", &luna_wrapper_btGImpactMeshShapeData::_bind_setCollisionShapeData},
	{"setMeshInterface", &luna_wrapper_btGImpactMeshShapeData::_bind_setMeshInterface},
	{"setLocalScaling", &luna_wrapper_btGImpactMeshShapeData::_bind_setLocalScaling},
	{"setCollisionMargin", &luna_wrapper_btGImpactMeshShapeData::_bind_setCollisionMargin},
	{"setGimpactSubType", &luna_wrapper_btGImpactMeshShapeData::_bind_setGimpactSubType},
	{"dynCast", &luna_wrapper_btGImpactMeshShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btGImpactMeshShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btGImpactMeshShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactMeshShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactMeshShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactMeshShapeData >::enumValues[] = {
	{0,0}
};


