#include <plug_common.h>

class luna_wrapper_btIndexedMesh {
public:
	typedef Luna< btIndexedMesh > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78051397) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btIndexedMesh*)");
		}

		btIndexedMesh* rhs =(Luna< btIndexedMesh >::check(L,2));
		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
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

		btIndexedMesh* self= (btIndexedMesh*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btIndexedMesh >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78051397) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btIndexedMesh >::check(L,1));
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

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btIndexedMesh");
		
		return luna_dynamicCast(L,converters,"btIndexedMesh",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndexBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndexStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleIndexStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btIndexedMesh::btIndexedMesh()
	static btIndexedMesh* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIndexedMesh::btIndexedMesh() function, expected prototype:\nbtIndexedMesh::btIndexedMesh()\nClass arguments details:\n");
		}


		return new btIndexedMesh();
	}


	// Function binds:
	// int btIndexedMesh::m_numTriangles()
	static int _bind_getNumTriangles(lua_State *L) {
		if (!_lg_typecheck_getNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btIndexedMesh::m_numTriangles() function, expected prototype:\nint btIndexedMesh::m_numTriangles()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btIndexedMesh::m_numTriangles(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		int lret = self->m_numTriangles;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btIndexedMesh::m_triangleIndexBase()
	static int _bind_getTriangleIndexBase(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btIndexedMesh::m_triangleIndexBase() function, expected prototype:\nconst unsigned char * btIndexedMesh::m_triangleIndexBase()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btIndexedMesh::m_triangleIndexBase(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		const unsigned char * lret = self->m_triangleIndexBase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btIndexedMesh::m_triangleIndexStride()
	static int _bind_getTriangleIndexStride(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btIndexedMesh::m_triangleIndexStride() function, expected prototype:\nint btIndexedMesh::m_triangleIndexStride()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btIndexedMesh::m_triangleIndexStride(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		int lret = self->m_triangleIndexStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btIndexedMesh::m_numVertices()
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btIndexedMesh::m_numVertices() function, expected prototype:\nint btIndexedMesh::m_numVertices()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btIndexedMesh::m_numVertices(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		int lret = self->m_numVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btIndexedMesh::m_vertexBase()
	static int _bind_getVertexBase(lua_State *L) {
		if (!_lg_typecheck_getVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btIndexedMesh::m_vertexBase() function, expected prototype:\nconst unsigned char * btIndexedMesh::m_vertexBase()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btIndexedMesh::m_vertexBase(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		const unsigned char * lret = self->m_vertexBase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btIndexedMesh::m_vertexStride()
	static int _bind_getVertexStride(lua_State *L) {
		if (!_lg_typecheck_getVertexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btIndexedMesh::m_vertexStride() function, expected prototype:\nint btIndexedMesh::m_vertexStride()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btIndexedMesh::m_vertexStride(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		int lret = self->m_vertexStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btIndexedMesh::m_indexType()
	static int _bind_getIndexType(lua_State *L) {
		if (!_lg_typecheck_getIndexType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btIndexedMesh::m_indexType() function, expected prototype:\nPHY_ScalarType btIndexedMesh::m_indexType()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call PHY_ScalarType btIndexedMesh::m_indexType(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		PHY_ScalarType lret = self->m_indexType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btIndexedMesh::m_vertexType()
	static int _bind_getVertexType(lua_State *L) {
		if (!_lg_typecheck_getVertexType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btIndexedMesh::m_vertexType() function, expected prototype:\nPHY_ScalarType btIndexedMesh::m_vertexType()\nClass arguments details:\n");
		}


		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call PHY_ScalarType btIndexedMesh::m_vertexType(). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		PHY_ScalarType lret = self->m_vertexType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btIndexedMesh::m_numTriangles(int value)
	static int _bind_setNumTriangles(lua_State *L) {
		if (!_lg_typecheck_setNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_numTriangles(int value) function, expected prototype:\nvoid btIndexedMesh::m_numTriangles(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_numTriangles(int). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_numTriangles = value;

		return 0;
	}

	// void btIndexedMesh::m_triangleIndexStride(int value)
	static int _bind_setTriangleIndexStride(lua_State *L) {
		if (!_lg_typecheck_setTriangleIndexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_triangleIndexStride(int value) function, expected prototype:\nvoid btIndexedMesh::m_triangleIndexStride(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_triangleIndexStride(int). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_triangleIndexStride = value;

		return 0;
	}

	// void btIndexedMesh::m_numVertices(int value)
	static int _bind_setNumVertices(lua_State *L) {
		if (!_lg_typecheck_setNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_numVertices(int value) function, expected prototype:\nvoid btIndexedMesh::m_numVertices(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_numVertices(int). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_numVertices = value;

		return 0;
	}

	// void btIndexedMesh::m_vertexStride(int value)
	static int _bind_setVertexStride(lua_State *L) {
		if (!_lg_typecheck_setVertexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_vertexStride(int value) function, expected prototype:\nvoid btIndexedMesh::m_vertexStride(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_vertexStride(int). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_vertexStride = value;

		return 0;
	}

	// void btIndexedMesh::m_indexType(PHY_ScalarType value)
	static int _bind_setIndexType(lua_State *L) {
		if (!_lg_typecheck_setIndexType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_indexType(PHY_ScalarType value) function, expected prototype:\nvoid btIndexedMesh::m_indexType(PHY_ScalarType value)\nClass arguments details:\n");
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_indexType(PHY_ScalarType). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_indexType = value;

		return 0;
	}

	// void btIndexedMesh::m_vertexType(PHY_ScalarType value)
	static int _bind_setVertexType(lua_State *L) {
		if (!_lg_typecheck_setVertexType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIndexedMesh::m_vertexType(PHY_ScalarType value) function, expected prototype:\nvoid btIndexedMesh::m_vertexType(PHY_ScalarType value)\nClass arguments details:\n");
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btIndexedMesh* self=(Luna< btIndexedMesh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIndexedMesh::m_vertexType(PHY_ScalarType). Got : '%s'",typeid(Luna< btIndexedMesh >::check(L,1)).name());
		}
		self->m_vertexType = value;

		return 0;
	}


	// Operator binds:

};

btIndexedMesh* LunaTraits< btIndexedMesh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btIndexedMesh::_bind_ctor(L);
}

void LunaTraits< btIndexedMesh >::_bind_dtor(btIndexedMesh* obj) {
	delete obj;
}

const char LunaTraits< btIndexedMesh >::className[] = "btIndexedMesh";
const char LunaTraits< btIndexedMesh >::fullName[] = "btIndexedMesh";
const char LunaTraits< btIndexedMesh >::moduleName[] = "bullet";
const char* LunaTraits< btIndexedMesh >::parents[] = {0};
const int LunaTraits< btIndexedMesh >::hash = 78051397;
const int LunaTraits< btIndexedMesh >::uniqueIDs[] = {78051397,0};

luna_RegType LunaTraits< btIndexedMesh >::methods[] = {
	{"getNumTriangles", &luna_wrapper_btIndexedMesh::_bind_getNumTriangles},
	{"getTriangleIndexBase", &luna_wrapper_btIndexedMesh::_bind_getTriangleIndexBase},
	{"getTriangleIndexStride", &luna_wrapper_btIndexedMesh::_bind_getTriangleIndexStride},
	{"getNumVertices", &luna_wrapper_btIndexedMesh::_bind_getNumVertices},
	{"getVertexBase", &luna_wrapper_btIndexedMesh::_bind_getVertexBase},
	{"getVertexStride", &luna_wrapper_btIndexedMesh::_bind_getVertexStride},
	{"getIndexType", &luna_wrapper_btIndexedMesh::_bind_getIndexType},
	{"getVertexType", &luna_wrapper_btIndexedMesh::_bind_getVertexType},
	{"setNumTriangles", &luna_wrapper_btIndexedMesh::_bind_setNumTriangles},
	{"setTriangleIndexStride", &luna_wrapper_btIndexedMesh::_bind_setTriangleIndexStride},
	{"setNumVertices", &luna_wrapper_btIndexedMesh::_bind_setNumVertices},
	{"setVertexStride", &luna_wrapper_btIndexedMesh::_bind_setVertexStride},
	{"setIndexType", &luna_wrapper_btIndexedMesh::_bind_setIndexType},
	{"setVertexType", &luna_wrapper_btIndexedMesh::_bind_setVertexType},
	{"dynCast", &luna_wrapper_btIndexedMesh::_bind_dynCast},
	{"__eq", &luna_wrapper_btIndexedMesh::_bind___eq},
	{"fromVoid", &luna_wrapper_btIndexedMesh::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btIndexedMesh::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btIndexedMesh >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btIndexedMesh >::enumValues[] = {
	{0,0}
};


