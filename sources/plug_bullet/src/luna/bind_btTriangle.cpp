#include <plug_common.h>

class luna_wrapper_btTriangle {
public:
	typedef Luna< btTriangle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4403420) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTriangle* rhs =(Luna< btTriangle >::check(L,2));
		btTriangle* self=(Luna< btTriangle >::check(L,1));
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

		btTriangle* self= (btTriangle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4403420) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btTriangle >::check(L,1));
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

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangle");
		
		return luna_dynamicCast(L,converters,"btTriangle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getVertex0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPartId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertex0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPartId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btTriangle::m_vertex0()
	static int _bind_getVertex0(lua_State *L) {
		if (!_lg_typecheck_getVertex0(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex0() function, expected prototype:\nbtVector3 btTriangle::m_vertex0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex0(). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_vertex0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTriangle::m_vertex1()
	static int _bind_getVertex1(lua_State *L) {
		if (!_lg_typecheck_getVertex1(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex1() function, expected prototype:\nbtVector3 btTriangle::m_vertex1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex1(). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_vertex1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTriangle::m_vertex2()
	static int _bind_getVertex2(lua_State *L) {
		if (!_lg_typecheck_getVertex2(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex2() function, expected prototype:\nbtVector3 btTriangle::m_vertex2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex2(). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_vertex2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btTriangle::m_partId()
	static int _bind_getPartId(lua_State *L) {
		if (!_lg_typecheck_getPartId(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangle::m_partId() function, expected prototype:\nint btTriangle::m_partId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangle::m_partId(). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_partId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangle::m_triangleIndex()
	static int _bind_getTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_getTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangle::m_triangleIndex() function, expected prototype:\nint btTriangle::m_triangleIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangle::m_triangleIndex(). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangle::m_vertex0(btVector3 value)
	static int _bind_setVertex0(lua_State *L) {
		if (!_lg_typecheck_setVertex0(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex0(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex0(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex0 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex0(btVector3). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex0 = value;

		return 0;
	}

	// void btTriangle::m_vertex1(btVector3 value)
	static int _bind_setVertex1(lua_State *L) {
		if (!_lg_typecheck_setVertex1(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex1(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex1(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex1 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex1(btVector3). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex1 = value;

		return 0;
	}

	// void btTriangle::m_vertex2(btVector3 value)
	static int _bind_setVertex2(lua_State *L) {
		if (!_lg_typecheck_setVertex2(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex2(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex2(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex2 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex2(btVector3). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex2 = value;

		return 0;
	}

	// void btTriangle::m_partId(int value)
	static int _bind_setPartId(lua_State *L) {
		if (!_lg_typecheck_setPartId(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangle::m_partId(int value) function, expected prototype:\nvoid btTriangle::m_partId(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangle::m_partId(int). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_partId = value;

		return 0;
	}

	// void btTriangle::m_triangleIndex(int value)
	static int _bind_setTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_setTriangleIndex(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangle::m_triangleIndex(int value) function, expected prototype:\nvoid btTriangle::m_triangleIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangle::m_triangleIndex(int). Got : '%s'\n%s",typeid(Luna< btTriangle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_triangleIndex = value;

		return 0;
	}


	// Operator binds:

};

btTriangle* LunaTraits< btTriangle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTriangle >::_bind_dtor(btTriangle* obj) {
	delete obj;
}

const char LunaTraits< btTriangle >::className[] = "btTriangle";
const char LunaTraits< btTriangle >::fullName[] = "btTriangle";
const char LunaTraits< btTriangle >::moduleName[] = "bullet";
const char* LunaTraits< btTriangle >::parents[] = {0};
const int LunaTraits< btTriangle >::hash = 4403420;
const int LunaTraits< btTriangle >::uniqueIDs[] = {4403420,0};

luna_RegType LunaTraits< btTriangle >::methods[] = {
	{"getVertex0", &luna_wrapper_btTriangle::_bind_getVertex0},
	{"getVertex1", &luna_wrapper_btTriangle::_bind_getVertex1},
	{"getVertex2", &luna_wrapper_btTriangle::_bind_getVertex2},
	{"getPartId", &luna_wrapper_btTriangle::_bind_getPartId},
	{"getTriangleIndex", &luna_wrapper_btTriangle::_bind_getTriangleIndex},
	{"setVertex0", &luna_wrapper_btTriangle::_bind_setVertex0},
	{"setVertex1", &luna_wrapper_btTriangle::_bind_setVertex1},
	{"setVertex2", &luna_wrapper_btTriangle::_bind_setVertex2},
	{"setPartId", &luna_wrapper_btTriangle::_bind_setPartId},
	{"setTriangleIndex", &luna_wrapper_btTriangle::_bind_setTriangleIndex},
	{"dynCast", &luna_wrapper_btTriangle::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangle::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangle >::enumValues[] = {
	{0,0}
};


