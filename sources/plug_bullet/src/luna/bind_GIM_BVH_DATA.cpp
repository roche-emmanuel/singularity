#include <plug_common.h>

class luna_wrapper_GIM_BVH_DATA {
public:
	typedef Luna< GIM_BVH_DATA > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56409546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_BVH_DATA*)");
		}

		GIM_BVH_DATA* rhs =(Luna< GIM_BVH_DATA >::check(L,2));
		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
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

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_BVH_DATA");
		
		return luna_dynamicCast(L,converters,"GIM_BVH_DATA",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_bound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_bound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btAABB GIM_BVH_DATA::m_bound()
	static int _bind_getM_bound(lua_State *L) {
		if (!_lg_typecheck_getM_bound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB GIM_BVH_DATA::m_bound() function, expected prototype:\nbtAABB GIM_BVH_DATA::m_bound()\nClass arguments details:\n");
		}


		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAABB GIM_BVH_DATA::m_bound(). Got : '%s'",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name());
		}
		const btAABB* lret = &self->m_bound;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,false);

		return 1;
	}

	// int GIM_BVH_DATA::m_data()
	static int _bind_getM_data(lua_State *L) {
		if (!_lg_typecheck_getM_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_BVH_DATA::m_data() function, expected prototype:\nint GIM_BVH_DATA::m_data()\nClass arguments details:\n");
		}


		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_BVH_DATA::m_data(). Got : '%s'",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name());
		}
		int lret = self->m_data;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_BVH_DATA::m_bound(btAABB value)
	static int _bind_setM_bound(lua_State *L) {
		if (!_lg_typecheck_setM_bound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_BVH_DATA::m_bound(btAABB value) function, expected prototype:\nvoid GIM_BVH_DATA::m_bound(btAABB value)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		btAABB* value_ptr=(Luna< btAABB >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_BVH_DATA::m_bound function");
		}
		btAABB value=*value_ptr;

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_BVH_DATA::m_bound(btAABB). Got : '%s'",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name());
		}
		self->m_bound = value;

		return 0;
	}

	// void GIM_BVH_DATA::m_data(int value)
	static int _bind_setM_data(lua_State *L) {
		if (!_lg_typecheck_setM_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_BVH_DATA::m_data(int value) function, expected prototype:\nvoid GIM_BVH_DATA::m_data(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_BVH_DATA::m_data(int). Got : '%s'",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name());
		}
		self->m_data = value;

		return 0;
	}


	// Operator binds:

};

GIM_BVH_DATA* LunaTraits< GIM_BVH_DATA >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< GIM_BVH_DATA >::_bind_dtor(GIM_BVH_DATA* obj) {
	delete obj;
}

const char LunaTraits< GIM_BVH_DATA >::className[] = "GIM_BVH_DATA";
const char LunaTraits< GIM_BVH_DATA >::fullName[] = "GIM_BVH_DATA";
const char LunaTraits< GIM_BVH_DATA >::moduleName[] = "bullet";
const char* LunaTraits< GIM_BVH_DATA >::parents[] = {0};
const int LunaTraits< GIM_BVH_DATA >::hash = 56409546;
const int LunaTraits< GIM_BVH_DATA >::uniqueIDs[] = {56409546,0};

luna_RegType LunaTraits< GIM_BVH_DATA >::methods[] = {
	{"getM_bound", &luna_wrapper_GIM_BVH_DATA::_bind_getM_bound},
	{"getM_data", &luna_wrapper_GIM_BVH_DATA::_bind_getM_data},
	{"setM_bound", &luna_wrapper_GIM_BVH_DATA::_bind_setM_bound},
	{"setM_data", &luna_wrapper_GIM_BVH_DATA::_bind_setM_data},
	{"dynCast", &luna_wrapper_GIM_BVH_DATA::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_BVH_DATA::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_BVH_DATA >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_BVH_DATA >::enumValues[] = {
	{0,0}
};

