#include <plug_common.h>

class luna_wrapper_btTriangleMeshShapeData {
public:
	typedef Luna< btTriangleMeshShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3729562) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleMeshShapeData*)");
		}

		btTriangleMeshShapeData* rhs =(Luna< btTriangleMeshShapeData >::check(L,2));
		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
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

		btTriangleMeshShapeData* self= (btTriangleMeshShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleMeshShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3729562) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTriangleMeshShapeData >::check(L,1));
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

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangleMeshShapeData");
		
		return luna_dynamicCast(L,converters,"btTriangleMeshShapeData",name);
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

	inline static bool _lg_typecheck_getQuantizedFloatBvh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuantizedDoubleBvh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleInfoMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionMargin(lua_State *L) {
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

	inline static bool _lg_typecheck_setQuantizedFloatBvh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49199970)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQuantizedDoubleBvh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,27343504)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleInfoMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,61372357)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btTriangleMeshShapeData::m_collisionShapeData()
	static int _bind_getCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getCollisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btTriangleMeshShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btTriangleMeshShapeData::m_collisionShapeData()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData btTriangleMeshShapeData::m_collisionShapeData(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btStridingMeshInterfaceData btTriangleMeshShapeData::m_meshInterface()
	static int _bind_getMeshInterface(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStridingMeshInterfaceData btTriangleMeshShapeData::m_meshInterface() function, expected prototype:\nbtStridingMeshInterfaceData btTriangleMeshShapeData::m_meshInterface()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStridingMeshInterfaceData btTriangleMeshShapeData::m_meshInterface(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		const btStridingMeshInterfaceData* lret = &self->m_meshInterface;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterfaceData >::push(L,lret,false);

		return 1;
	}

	// btQuantizedBvhFloatData * btTriangleMeshShapeData::m_quantizedFloatBvh()
	static int _bind_getQuantizedFloatBvh(lua_State *L) {
		if (!_lg_typecheck_getQuantizedFloatBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvhFloatData * btTriangleMeshShapeData::m_quantizedFloatBvh() function, expected prototype:\nbtQuantizedBvhFloatData * btTriangleMeshShapeData::m_quantizedFloatBvh()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuantizedBvhFloatData * btTriangleMeshShapeData::m_quantizedFloatBvh(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		btQuantizedBvhFloatData * lret = self->m_quantizedFloatBvh;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuantizedBvhFloatData >::push(L,lret,false);

		return 1;
	}

	// btQuantizedBvhDoubleData * btTriangleMeshShapeData::m_quantizedDoubleBvh()
	static int _bind_getQuantizedDoubleBvh(lua_State *L) {
		if (!_lg_typecheck_getQuantizedDoubleBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvhDoubleData * btTriangleMeshShapeData::m_quantizedDoubleBvh() function, expected prototype:\nbtQuantizedBvhDoubleData * btTriangleMeshShapeData::m_quantizedDoubleBvh()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuantizedBvhDoubleData * btTriangleMeshShapeData::m_quantizedDoubleBvh(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		btQuantizedBvhDoubleData * lret = self->m_quantizedDoubleBvh;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuantizedBvhDoubleData >::push(L,lret,false);

		return 1;
	}

	// btTriangleInfoMapData * btTriangleMeshShapeData::m_triangleInfoMap()
	static int _bind_getTriangleInfoMap(lua_State *L) {
		if (!_lg_typecheck_getTriangleInfoMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleInfoMapData * btTriangleMeshShapeData::m_triangleInfoMap() function, expected prototype:\nbtTriangleInfoMapData * btTriangleMeshShapeData::m_triangleInfoMap()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTriangleInfoMapData * btTriangleMeshShapeData::m_triangleInfoMap(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		btTriangleInfoMapData * lret = self->m_triangleInfoMap;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTriangleInfoMapData >::push(L,lret,false);

		return 1;
	}

	// float btTriangleMeshShapeData::m_collisionMargin()
	static int _bind_getCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_getCollisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleMeshShapeData::m_collisionMargin() function, expected prototype:\nfloat btTriangleMeshShapeData::m_collisionMargin()\nClass arguments details:\n");
		}


		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleMeshShapeData::m_collisionMargin(). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		float lret = self->m_collisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMeshShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setCollisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setCollisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleMeshShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btTriangleMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)
	static int _bind_setMeshInterface(lua_State *L) {
		if (!_lg_typecheck_setMeshInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_meshInterface(btStridingMeshInterfaceData value)\nClass arguments details:\narg 1 ID = 5637632\n");
		}

		btStridingMeshInterfaceData* value_ptr=(Luna< btStridingMeshInterfaceData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleMeshShapeData::m_meshInterface function");
		}
		btStridingMeshInterfaceData value=*value_ptr;

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_meshInterface(btStridingMeshInterfaceData). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_meshInterface = value;

		return 0;
	}

	// void btTriangleMeshShapeData::m_quantizedFloatBvh(btQuantizedBvhFloatData * value)
	static int _bind_setQuantizedFloatBvh(lua_State *L) {
		if (!_lg_typecheck_setQuantizedFloatBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_quantizedFloatBvh(btQuantizedBvhFloatData * value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_quantizedFloatBvh(btQuantizedBvhFloatData * value)\nClass arguments details:\narg 1 ID = 49199970\n");
		}

		btQuantizedBvhFloatData* value=(Luna< btQuantizedBvhFloatData >::check(L,2));

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_quantizedFloatBvh(btQuantizedBvhFloatData *). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_quantizedFloatBvh = value;

		return 0;
	}

	// void btTriangleMeshShapeData::m_quantizedDoubleBvh(btQuantizedBvhDoubleData * value)
	static int _bind_setQuantizedDoubleBvh(lua_State *L) {
		if (!_lg_typecheck_setQuantizedDoubleBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_quantizedDoubleBvh(btQuantizedBvhDoubleData * value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_quantizedDoubleBvh(btQuantizedBvhDoubleData * value)\nClass arguments details:\narg 1 ID = 27343504\n");
		}

		btQuantizedBvhDoubleData* value=(Luna< btQuantizedBvhDoubleData >::check(L,2));

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_quantizedDoubleBvh(btQuantizedBvhDoubleData *). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_quantizedDoubleBvh = value;

		return 0;
	}

	// void btTriangleMeshShapeData::m_triangleInfoMap(btTriangleInfoMapData * value)
	static int _bind_setTriangleInfoMap(lua_State *L) {
		if (!_lg_typecheck_setTriangleInfoMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_triangleInfoMap(btTriangleInfoMapData * value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_triangleInfoMap(btTriangleInfoMapData * value)\nClass arguments details:\narg 1 ID = 61372357\n");
		}

		btTriangleInfoMapData* value=(Luna< btTriangleInfoMapData >::check(L,2));

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_triangleInfoMap(btTriangleInfoMapData *). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_triangleInfoMap = value;

		return 0;
	}

	// void btTriangleMeshShapeData::m_collisionMargin(float value)
	static int _bind_setCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_setCollisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShapeData::m_collisionMargin(float value) function, expected prototype:\nvoid btTriangleMeshShapeData::m_collisionMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleMeshShapeData* self=(Luna< btTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShapeData::m_collisionMargin(float). Got : '%s'",typeid(Luna< btTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_collisionMargin = value;

		return 0;
	}


	// Operator binds:

};

btTriangleMeshShapeData* LunaTraits< btTriangleMeshShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTriangleMeshShapeData >::_bind_dtor(btTriangleMeshShapeData* obj) {
	delete obj;
}

const char LunaTraits< btTriangleMeshShapeData >::className[] = "btTriangleMeshShapeData";
const char LunaTraits< btTriangleMeshShapeData >::fullName[] = "btTriangleMeshShapeData";
const char LunaTraits< btTriangleMeshShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleMeshShapeData >::parents[] = {0};
const int LunaTraits< btTriangleMeshShapeData >::hash = 3729562;
const int LunaTraits< btTriangleMeshShapeData >::uniqueIDs[] = {3729562,0};

luna_RegType LunaTraits< btTriangleMeshShapeData >::methods[] = {
	{"getCollisionShapeData", &luna_wrapper_btTriangleMeshShapeData::_bind_getCollisionShapeData},
	{"getMeshInterface", &luna_wrapper_btTriangleMeshShapeData::_bind_getMeshInterface},
	{"getQuantizedFloatBvh", &luna_wrapper_btTriangleMeshShapeData::_bind_getQuantizedFloatBvh},
	{"getQuantizedDoubleBvh", &luna_wrapper_btTriangleMeshShapeData::_bind_getQuantizedDoubleBvh},
	{"getTriangleInfoMap", &luna_wrapper_btTriangleMeshShapeData::_bind_getTriangleInfoMap},
	{"getCollisionMargin", &luna_wrapper_btTriangleMeshShapeData::_bind_getCollisionMargin},
	{"setCollisionShapeData", &luna_wrapper_btTriangleMeshShapeData::_bind_setCollisionShapeData},
	{"setMeshInterface", &luna_wrapper_btTriangleMeshShapeData::_bind_setMeshInterface},
	{"setQuantizedFloatBvh", &luna_wrapper_btTriangleMeshShapeData::_bind_setQuantizedFloatBvh},
	{"setQuantizedDoubleBvh", &luna_wrapper_btTriangleMeshShapeData::_bind_setQuantizedDoubleBvh},
	{"setTriangleInfoMap", &luna_wrapper_btTriangleMeshShapeData::_bind_setTriangleInfoMap},
	{"setCollisionMargin", &luna_wrapper_btTriangleMeshShapeData::_bind_setCollisionMargin},
	{"dynCast", &luna_wrapper_btTriangleMeshShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangleMeshShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleMeshShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleMeshShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleMeshShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleMeshShapeData >::enumValues[] = {
	{0,0}
};


