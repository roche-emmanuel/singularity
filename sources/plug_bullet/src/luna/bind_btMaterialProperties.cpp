#include <plug_common.h>

class luna_wrapper_btMaterialProperties {
public:
	typedef Luna< btMaterialProperties > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67602617) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMaterialProperties*)");
		}

		btMaterialProperties* rhs =(Luna< btMaterialProperties >::check(L,2));
		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
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

		btMaterialProperties* self= (btMaterialProperties*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMaterialProperties >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67602617) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btMaterialProperties >::check(L,1));
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

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMaterialProperties");
		
		return luna_dynamicCast(L,converters,"btMaterialProperties",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNumMaterials(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaterialBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaterialStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaterialType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleMaterialsBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleMaterialStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumMaterials(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaterialStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaterialType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleMaterialStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btMaterialProperties::m_numMaterials()
	static int _bind_getNumMaterials(lua_State *L) {
		if (!_lg_typecheck_getNumMaterials(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMaterialProperties::m_numMaterials() function, expected prototype:\nint btMaterialProperties::m_numMaterials()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMaterialProperties::m_numMaterials(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		int lret = self->m_numMaterials;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btMaterialProperties::m_materialBase()
	static int _bind_getMaterialBase(lua_State *L) {
		if (!_lg_typecheck_getMaterialBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btMaterialProperties::m_materialBase() function, expected prototype:\nconst unsigned char * btMaterialProperties::m_materialBase()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btMaterialProperties::m_materialBase(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		const unsigned char * lret = self->m_materialBase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btMaterialProperties::m_materialStride()
	static int _bind_getMaterialStride(lua_State *L) {
		if (!_lg_typecheck_getMaterialStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMaterialProperties::m_materialStride() function, expected prototype:\nint btMaterialProperties::m_materialStride()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMaterialProperties::m_materialStride(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		int lret = self->m_materialStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btMaterialProperties::m_materialType()
	static int _bind_getMaterialType(lua_State *L) {
		if (!_lg_typecheck_getMaterialType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btMaterialProperties::m_materialType() function, expected prototype:\nPHY_ScalarType btMaterialProperties::m_materialType()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call PHY_ScalarType btMaterialProperties::m_materialType(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		PHY_ScalarType lret = self->m_materialType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btMaterialProperties::m_numTriangles()
	static int _bind_getNumTriangles(lua_State *L) {
		if (!_lg_typecheck_getNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMaterialProperties::m_numTriangles() function, expected prototype:\nint btMaterialProperties::m_numTriangles()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMaterialProperties::m_numTriangles(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		int lret = self->m_numTriangles;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btMaterialProperties::m_triangleMaterialsBase()
	static int _bind_getTriangleMaterialsBase(lua_State *L) {
		if (!_lg_typecheck_getTriangleMaterialsBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btMaterialProperties::m_triangleMaterialsBase() function, expected prototype:\nconst unsigned char * btMaterialProperties::m_triangleMaterialsBase()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btMaterialProperties::m_triangleMaterialsBase(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		const unsigned char * lret = self->m_triangleMaterialsBase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btMaterialProperties::m_triangleMaterialStride()
	static int _bind_getTriangleMaterialStride(lua_State *L) {
		if (!_lg_typecheck_getTriangleMaterialStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMaterialProperties::m_triangleMaterialStride() function, expected prototype:\nint btMaterialProperties::m_triangleMaterialStride()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMaterialProperties::m_triangleMaterialStride(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		int lret = self->m_triangleMaterialStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btMaterialProperties::m_triangleType()
	static int _bind_getTriangleType(lua_State *L) {
		if (!_lg_typecheck_getTriangleType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btMaterialProperties::m_triangleType() function, expected prototype:\nPHY_ScalarType btMaterialProperties::m_triangleType()\nClass arguments details:\n");
		}


		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call PHY_ScalarType btMaterialProperties::m_triangleType(). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		PHY_ScalarType lret = self->m_triangleType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMaterialProperties::m_numMaterials(int value)
	static int _bind_setNumMaterials(lua_State *L) {
		if (!_lg_typecheck_setNumMaterials(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_numMaterials(int value) function, expected prototype:\nvoid btMaterialProperties::m_numMaterials(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_numMaterials(int). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_numMaterials = value;

		return 0;
	}

	// void btMaterialProperties::m_materialStride(int value)
	static int _bind_setMaterialStride(lua_State *L) {
		if (!_lg_typecheck_setMaterialStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_materialStride(int value) function, expected prototype:\nvoid btMaterialProperties::m_materialStride(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_materialStride(int). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_materialStride = value;

		return 0;
	}

	// void btMaterialProperties::m_materialType(PHY_ScalarType value)
	static int _bind_setMaterialType(lua_State *L) {
		if (!_lg_typecheck_setMaterialType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_materialType(PHY_ScalarType value) function, expected prototype:\nvoid btMaterialProperties::m_materialType(PHY_ScalarType value)\nClass arguments details:\n");
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_materialType(PHY_ScalarType). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_materialType = value;

		return 0;
	}

	// void btMaterialProperties::m_numTriangles(int value)
	static int _bind_setNumTriangles(lua_State *L) {
		if (!_lg_typecheck_setNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_numTriangles(int value) function, expected prototype:\nvoid btMaterialProperties::m_numTriangles(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_numTriangles(int). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_numTriangles = value;

		return 0;
	}

	// void btMaterialProperties::m_triangleMaterialStride(int value)
	static int _bind_setTriangleMaterialStride(lua_State *L) {
		if (!_lg_typecheck_setTriangleMaterialStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_triangleMaterialStride(int value) function, expected prototype:\nvoid btMaterialProperties::m_triangleMaterialStride(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_triangleMaterialStride(int). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_triangleMaterialStride = value;

		return 0;
	}

	// void btMaterialProperties::m_triangleType(PHY_ScalarType value)
	static int _bind_setTriangleType(lua_State *L) {
		if (!_lg_typecheck_setTriangleType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterialProperties::m_triangleType(PHY_ScalarType value) function, expected prototype:\nvoid btMaterialProperties::m_triangleType(PHY_ScalarType value)\nClass arguments details:\n");
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btMaterialProperties* self=(Luna< btMaterialProperties >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterialProperties::m_triangleType(PHY_ScalarType). Got : '%s'",typeid(Luna< btMaterialProperties >::check(L,1)).name());
		}
		self->m_triangleType = value;

		return 0;
	}


	// Operator binds:

};

btMaterialProperties* LunaTraits< btMaterialProperties >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btMaterialProperties >::_bind_dtor(btMaterialProperties* obj) {
	delete obj;
}

const char LunaTraits< btMaterialProperties >::className[] = "btMaterialProperties";
const char LunaTraits< btMaterialProperties >::fullName[] = "btMaterialProperties";
const char LunaTraits< btMaterialProperties >::moduleName[] = "bullet";
const char* LunaTraits< btMaterialProperties >::parents[] = {0};
const int LunaTraits< btMaterialProperties >::hash = 67602617;
const int LunaTraits< btMaterialProperties >::uniqueIDs[] = {67602617,0};

luna_RegType LunaTraits< btMaterialProperties >::methods[] = {
	{"getNumMaterials", &luna_wrapper_btMaterialProperties::_bind_getNumMaterials},
	{"getMaterialBase", &luna_wrapper_btMaterialProperties::_bind_getMaterialBase},
	{"getMaterialStride", &luna_wrapper_btMaterialProperties::_bind_getMaterialStride},
	{"getMaterialType", &luna_wrapper_btMaterialProperties::_bind_getMaterialType},
	{"getNumTriangles", &luna_wrapper_btMaterialProperties::_bind_getNumTriangles},
	{"getTriangleMaterialsBase", &luna_wrapper_btMaterialProperties::_bind_getTriangleMaterialsBase},
	{"getTriangleMaterialStride", &luna_wrapper_btMaterialProperties::_bind_getTriangleMaterialStride},
	{"getTriangleType", &luna_wrapper_btMaterialProperties::_bind_getTriangleType},
	{"setNumMaterials", &luna_wrapper_btMaterialProperties::_bind_setNumMaterials},
	{"setMaterialStride", &luna_wrapper_btMaterialProperties::_bind_setMaterialStride},
	{"setMaterialType", &luna_wrapper_btMaterialProperties::_bind_setMaterialType},
	{"setNumTriangles", &luna_wrapper_btMaterialProperties::_bind_setNumTriangles},
	{"setTriangleMaterialStride", &luna_wrapper_btMaterialProperties::_bind_setTriangleMaterialStride},
	{"setTriangleType", &luna_wrapper_btMaterialProperties::_bind_setTriangleType},
	{"dynCast", &luna_wrapper_btMaterialProperties::_bind_dynCast},
	{"__eq", &luna_wrapper_btMaterialProperties::_bind___eq},
	{"fromVoid", &luna_wrapper_btMaterialProperties::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMaterialProperties::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMaterialProperties >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMaterialProperties >::enumValues[] = {
	{0,0}
};


