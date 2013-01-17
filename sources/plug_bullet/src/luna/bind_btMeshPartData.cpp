#include <plug_common.h>

class luna_wrapper_btMeshPartData {
public:
	typedef Luna< btMeshPartData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75941957) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMeshPartData*)");
		}

		btMeshPartData* rhs =(Luna< btMeshPartData >::check(L,2));
		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
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

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMeshPartData");
		
		return luna_dynamicCast(L,converters,"btMeshPartData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_vertices3f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_vertices3d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_indices32(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_3indices16(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_3indices8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_indices16(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_vertices3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96449857)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_vertices3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89582070)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_indices32(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,39554929)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_3indices16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10920434)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_3indices8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66220201)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_indices16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,8692805)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3FloatData * btMeshPartData::m_vertices3f()
	static int _bind_getM_vertices3f(lua_State *L) {
		if (!_lg_typecheck_getM_vertices3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData * btMeshPartData::m_vertices3f() function, expected prototype:\nbtVector3FloatData * btMeshPartData::m_vertices3f()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData * btMeshPartData::m_vertices3f(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btVector3FloatData * lret = self->m_vertices3f;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData * btMeshPartData::m_vertices3d()
	static int _bind_getM_vertices3d(lua_State *L) {
		if (!_lg_typecheck_getM_vertices3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData * btMeshPartData::m_vertices3d() function, expected prototype:\nbtVector3DoubleData * btMeshPartData::m_vertices3d()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData * btMeshPartData::m_vertices3d(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btVector3DoubleData * lret = self->m_vertices3d;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btIntIndexData * btMeshPartData::m_indices32()
	static int _bind_getM_indices32(lua_State *L) {
		if (!_lg_typecheck_getM_indices32(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIntIndexData * btMeshPartData::m_indices32() function, expected prototype:\nbtIntIndexData * btMeshPartData::m_indices32()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIntIndexData * btMeshPartData::m_indices32(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btIntIndexData * lret = self->m_indices32;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIntIndexData >::push(L,lret,false);

		return 1;
	}

	// btShortIntIndexTripletData * btMeshPartData::m_3indices16()
	static int _bind_getM_3indices16(lua_State *L) {
		if (!_lg_typecheck_getM_3indices16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btShortIntIndexTripletData * btMeshPartData::m_3indices16() function, expected prototype:\nbtShortIntIndexTripletData * btMeshPartData::m_3indices16()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btShortIntIndexTripletData * btMeshPartData::m_3indices16(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btShortIntIndexTripletData * lret = self->m_3indices16;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btShortIntIndexTripletData >::push(L,lret,false);

		return 1;
	}

	// btCharIndexTripletData * btMeshPartData::m_3indices8()
	static int _bind_getM_3indices8(lua_State *L) {
		if (!_lg_typecheck_getM_3indices8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCharIndexTripletData * btMeshPartData::m_3indices8() function, expected prototype:\nbtCharIndexTripletData * btMeshPartData::m_3indices8()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCharIndexTripletData * btMeshPartData::m_3indices8(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btCharIndexTripletData * lret = self->m_3indices8;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCharIndexTripletData >::push(L,lret,false);

		return 1;
	}

	// btShortIntIndexData * btMeshPartData::m_indices16()
	static int _bind_getM_indices16(lua_State *L) {
		if (!_lg_typecheck_getM_indices16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btShortIntIndexData * btMeshPartData::m_indices16() function, expected prototype:\nbtShortIntIndexData * btMeshPartData::m_indices16()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btShortIntIndexData * btMeshPartData::m_indices16(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		btShortIntIndexData * lret = self->m_indices16;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btShortIntIndexData >::push(L,lret,false);

		return 1;
	}

	// int btMeshPartData::m_numTriangles()
	static int _bind_getM_numTriangles(lua_State *L) {
		if (!_lg_typecheck_getM_numTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMeshPartData::m_numTriangles() function, expected prototype:\nint btMeshPartData::m_numTriangles()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMeshPartData::m_numTriangles(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		int lret = self->m_numTriangles;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btMeshPartData::m_numVertices()
	static int _bind_getM_numVertices(lua_State *L) {
		if (!_lg_typecheck_getM_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMeshPartData::m_numVertices() function, expected prototype:\nint btMeshPartData::m_numVertices()\nClass arguments details:\n");
		}


		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMeshPartData::m_numVertices(). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		int lret = self->m_numVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMeshPartData::m_vertices3f(btVector3FloatData * value)
	static int _bind_setM_vertices3f(lua_State *L) {
		if (!_lg_typecheck_setM_vertices3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_vertices3f(btVector3FloatData * value) function, expected prototype:\nvoid btMeshPartData::m_vertices3f(btVector3FloatData * value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value=(Luna< btVector3FloatData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_vertices3f(btVector3FloatData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_vertices3f = value;

		return 0;
	}

	// void btMeshPartData::m_vertices3d(btVector3DoubleData * value)
	static int _bind_setM_vertices3d(lua_State *L) {
		if (!_lg_typecheck_setM_vertices3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_vertices3d(btVector3DoubleData * value) function, expected prototype:\nvoid btMeshPartData::m_vertices3d(btVector3DoubleData * value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value=(Luna< btVector3DoubleData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_vertices3d(btVector3DoubleData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_vertices3d = value;

		return 0;
	}

	// void btMeshPartData::m_indices32(btIntIndexData * value)
	static int _bind_setM_indices32(lua_State *L) {
		if (!_lg_typecheck_setM_indices32(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_indices32(btIntIndexData * value) function, expected prototype:\nvoid btMeshPartData::m_indices32(btIntIndexData * value)\nClass arguments details:\narg 1 ID = 39554929\n");
		}

		btIntIndexData* value=(Luna< btIntIndexData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_indices32(btIntIndexData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_indices32 = value;

		return 0;
	}

	// void btMeshPartData::m_3indices16(btShortIntIndexTripletData * value)
	static int _bind_setM_3indices16(lua_State *L) {
		if (!_lg_typecheck_setM_3indices16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_3indices16(btShortIntIndexTripletData * value) function, expected prototype:\nvoid btMeshPartData::m_3indices16(btShortIntIndexTripletData * value)\nClass arguments details:\narg 1 ID = 10920434\n");
		}

		btShortIntIndexTripletData* value=(Luna< btShortIntIndexTripletData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_3indices16(btShortIntIndexTripletData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_3indices16 = value;

		return 0;
	}

	// void btMeshPartData::m_3indices8(btCharIndexTripletData * value)
	static int _bind_setM_3indices8(lua_State *L) {
		if (!_lg_typecheck_setM_3indices8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_3indices8(btCharIndexTripletData * value) function, expected prototype:\nvoid btMeshPartData::m_3indices8(btCharIndexTripletData * value)\nClass arguments details:\narg 1 ID = 66220201\n");
		}

		btCharIndexTripletData* value=(Luna< btCharIndexTripletData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_3indices8(btCharIndexTripletData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_3indices8 = value;

		return 0;
	}

	// void btMeshPartData::m_indices16(btShortIntIndexData * value)
	static int _bind_setM_indices16(lua_State *L) {
		if (!_lg_typecheck_setM_indices16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_indices16(btShortIntIndexData * value) function, expected prototype:\nvoid btMeshPartData::m_indices16(btShortIntIndexData * value)\nClass arguments details:\narg 1 ID = 8692805\n");
		}

		btShortIntIndexData* value=(Luna< btShortIntIndexData >::check(L,2));

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_indices16(btShortIntIndexData *). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_indices16 = value;

		return 0;
	}

	// void btMeshPartData::m_numTriangles(int value)
	static int _bind_setM_numTriangles(lua_State *L) {
		if (!_lg_typecheck_setM_numTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_numTriangles(int value) function, expected prototype:\nvoid btMeshPartData::m_numTriangles(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_numTriangles(int). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_numTriangles = value;

		return 0;
	}

	// void btMeshPartData::m_numVertices(int value)
	static int _bind_setM_numVertices(lua_State *L) {
		if (!_lg_typecheck_setM_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMeshPartData::m_numVertices(int value) function, expected prototype:\nvoid btMeshPartData::m_numVertices(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMeshPartData* self=(Luna< btMeshPartData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMeshPartData::m_numVertices(int). Got : '%s'",typeid(Luna< btMeshPartData >::check(L,1)).name());
		}
		self->m_numVertices = value;

		return 0;
	}


	// Operator binds:

};

btMeshPartData* LunaTraits< btMeshPartData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btMeshPartData >::_bind_dtor(btMeshPartData* obj) {
	delete obj;
}

const char LunaTraits< btMeshPartData >::className[] = "btMeshPartData";
const char LunaTraits< btMeshPartData >::fullName[] = "btMeshPartData";
const char LunaTraits< btMeshPartData >::moduleName[] = "bullet";
const char* LunaTraits< btMeshPartData >::parents[] = {0};
const int LunaTraits< btMeshPartData >::hash = 75941957;
const int LunaTraits< btMeshPartData >::uniqueIDs[] = {75941957,0};

luna_RegType LunaTraits< btMeshPartData >::methods[] = {
	{"getM_vertices3f", &luna_wrapper_btMeshPartData::_bind_getM_vertices3f},
	{"getM_vertices3d", &luna_wrapper_btMeshPartData::_bind_getM_vertices3d},
	{"getM_indices32", &luna_wrapper_btMeshPartData::_bind_getM_indices32},
	{"getM_3indices16", &luna_wrapper_btMeshPartData::_bind_getM_3indices16},
	{"getM_3indices8", &luna_wrapper_btMeshPartData::_bind_getM_3indices8},
	{"getM_indices16", &luna_wrapper_btMeshPartData::_bind_getM_indices16},
	{"getM_numTriangles", &luna_wrapper_btMeshPartData::_bind_getM_numTriangles},
	{"getM_numVertices", &luna_wrapper_btMeshPartData::_bind_getM_numVertices},
	{"setM_vertices3f", &luna_wrapper_btMeshPartData::_bind_setM_vertices3f},
	{"setM_vertices3d", &luna_wrapper_btMeshPartData::_bind_setM_vertices3d},
	{"setM_indices32", &luna_wrapper_btMeshPartData::_bind_setM_indices32},
	{"setM_3indices16", &luna_wrapper_btMeshPartData::_bind_setM_3indices16},
	{"setM_3indices8", &luna_wrapper_btMeshPartData::_bind_setM_3indices8},
	{"setM_indices16", &luna_wrapper_btMeshPartData::_bind_setM_indices16},
	{"setM_numTriangles", &luna_wrapper_btMeshPartData::_bind_setM_numTriangles},
	{"setM_numVertices", &luna_wrapper_btMeshPartData::_bind_setM_numVertices},
	{"dynCast", &luna_wrapper_btMeshPartData::_bind_dynCast},
	{"__eq", &luna_wrapper_btMeshPartData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btMeshPartData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMeshPartData >::enumValues[] = {
	{0,0}
};


