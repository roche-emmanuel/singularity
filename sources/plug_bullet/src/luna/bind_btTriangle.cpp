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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangle*)");
		}

		btTriangle* rhs =(Luna< btTriangle >::check(L,2));
		btTriangle* self=(Luna< btTriangle >::check(L,1));
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

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangle");
		
		return luna_dynamicCast(L,converters,"btTriangle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_vertex0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_vertex1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_vertex2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_partId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_vertex0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_vertex1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_vertex2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_partId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_triangleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btTriangle::m_vertex0()
	static int _bind_getM_vertex0(lua_State *L) {
		if (!_lg_typecheck_getM_vertex0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex0() function, expected prototype:\nbtVector3 btTriangle::m_vertex0()\nClass arguments details:\n");
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex0(). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_vertex0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTriangle::m_vertex1()
	static int _bind_getM_vertex1(lua_State *L) {
		if (!_lg_typecheck_getM_vertex1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex1() function, expected prototype:\nbtVector3 btTriangle::m_vertex1()\nClass arguments details:\n");
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex1(). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_vertex1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTriangle::m_vertex2()
	static int _bind_getM_vertex2(lua_State *L) {
		if (!_lg_typecheck_getM_vertex2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangle::m_vertex2() function, expected prototype:\nbtVector3 btTriangle::m_vertex2()\nClass arguments details:\n");
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangle::m_vertex2(). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_vertex2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btTriangle::m_partId()
	static int _bind_getM_partId(lua_State *L) {
		if (!_lg_typecheck_getM_partId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangle::m_partId() function, expected prototype:\nint btTriangle::m_partId()\nClass arguments details:\n");
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangle::m_partId(). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		int lret = self->m_partId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangle::m_triangleIndex()
	static int _bind_getM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_getM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangle::m_triangleIndex() function, expected prototype:\nint btTriangle::m_triangleIndex()\nClass arguments details:\n");
		}


		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangle::m_triangleIndex(). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		int lret = self->m_triangleIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangle::m_vertex0(btVector3 value)
	static int _bind_setM_vertex0(lua_State *L) {
		if (!_lg_typecheck_setM_vertex0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex0(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex0(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex0 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex0(btVector3). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		self->m_vertex0 = value;

		return 0;
	}

	// void btTriangle::m_vertex1(btVector3 value)
	static int _bind_setM_vertex1(lua_State *L) {
		if (!_lg_typecheck_setM_vertex1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex1(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex1(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex1 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex1(btVector3). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		self->m_vertex1 = value;

		return 0;
	}

	// void btTriangle::m_vertex2(btVector3 value)
	static int _bind_setM_vertex2(lua_State *L) {
		if (!_lg_typecheck_setM_vertex2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangle::m_vertex2(btVector3 value) function, expected prototype:\nvoid btTriangle::m_vertex2(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangle::m_vertex2 function");
		}
		btVector3 value=*value_ptr;

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangle::m_vertex2(btVector3). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		self->m_vertex2 = value;

		return 0;
	}

	// void btTriangle::m_partId(int value)
	static int _bind_setM_partId(lua_State *L) {
		if (!_lg_typecheck_setM_partId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangle::m_partId(int value) function, expected prototype:\nvoid btTriangle::m_partId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangle::m_partId(int). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
		}
		self->m_partId = value;

		return 0;
	}

	// void btTriangle::m_triangleIndex(int value)
	static int _bind_setM_triangleIndex(lua_State *L) {
		if (!_lg_typecheck_setM_triangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangle::m_triangleIndex(int value) function, expected prototype:\nvoid btTriangle::m_triangleIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTriangle* self=(Luna< btTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangle::m_triangleIndex(int). Got : '%s'",typeid(Luna< btTriangle >::check(L,1)).name());
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
	{"getM_vertex0", &luna_wrapper_btTriangle::_bind_getM_vertex0},
	{"getM_vertex1", &luna_wrapper_btTriangle::_bind_getM_vertex1},
	{"getM_vertex2", &luna_wrapper_btTriangle::_bind_getM_vertex2},
	{"getM_partId", &luna_wrapper_btTriangle::_bind_getM_partId},
	{"getM_triangleIndex", &luna_wrapper_btTriangle::_bind_getM_triangleIndex},
	{"setM_vertex0", &luna_wrapper_btTriangle::_bind_setM_vertex0},
	{"setM_vertex1", &luna_wrapper_btTriangle::_bind_setM_vertex1},
	{"setM_vertex2", &luna_wrapper_btTriangle::_bind_setM_vertex2},
	{"setM_partId", &luna_wrapper_btTriangle::_bind_setM_partId},
	{"setM_triangleIndex", &luna_wrapper_btTriangle::_bind_setM_triangleIndex},
	{"dynCast", &luna_wrapper_btTriangle::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangle >::enumValues[] = {
	{0,0}
};

