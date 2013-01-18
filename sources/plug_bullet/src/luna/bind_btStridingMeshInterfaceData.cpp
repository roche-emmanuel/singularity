#include <plug_common.h>

class luna_wrapper_btStridingMeshInterfaceData {
public:
	typedef Luna< btStridingMeshInterfaceData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5637632) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btStridingMeshInterfaceData*)");
		}

		btStridingMeshInterfaceData* rhs =(Luna< btStridingMeshInterfaceData >::check(L,2));
		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
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

		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btStridingMeshInterfaceData");
		
		return luna_dynamicCast(L,converters,"btStridingMeshInterfaceData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMeshPartsPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumMeshParts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMeshPartsPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,75941957)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumMeshParts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btMeshPartData * btStridingMeshInterfaceData::m_meshPartsPtr()
	static int _bind_getMeshPartsPtr(lua_State *L) {
		if (!_lg_typecheck_getMeshPartsPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMeshPartData * btStridingMeshInterfaceData::m_meshPartsPtr() function, expected prototype:\nbtMeshPartData * btStridingMeshInterfaceData::m_meshPartsPtr()\nClass arguments details:\n");
		}


		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMeshPartData * btStridingMeshInterfaceData::m_meshPartsPtr(). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		btMeshPartData * lret = self->m_meshPartsPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMeshPartData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btStridingMeshInterfaceData::m_scaling()
	static int _bind_getScaling(lua_State *L) {
		if (!_lg_typecheck_getScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btStridingMeshInterfaceData::m_scaling() function, expected prototype:\nbtVector3FloatData btStridingMeshInterfaceData::m_scaling()\nClass arguments details:\n");
		}


		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btStridingMeshInterfaceData::m_scaling(). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_scaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// int btStridingMeshInterfaceData::m_numMeshParts()
	static int _bind_getNumMeshParts(lua_State *L) {
		if (!_lg_typecheck_getNumMeshParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStridingMeshInterfaceData::m_numMeshParts() function, expected prototype:\nint btStridingMeshInterfaceData::m_numMeshParts()\nClass arguments details:\n");
		}


		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStridingMeshInterfaceData::m_numMeshParts(). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		int lret = self->m_numMeshParts;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStridingMeshInterfaceData::m_meshPartsPtr(btMeshPartData * value)
	static int _bind_setMeshPartsPtr(lua_State *L) {
		if (!_lg_typecheck_setMeshPartsPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterfaceData::m_meshPartsPtr(btMeshPartData * value) function, expected prototype:\nvoid btStridingMeshInterfaceData::m_meshPartsPtr(btMeshPartData * value)\nClass arguments details:\narg 1 ID = 75941957\n");
		}

		btMeshPartData* value=(Luna< btMeshPartData >::check(L,2));

		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterfaceData::m_meshPartsPtr(btMeshPartData *). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		self->m_meshPartsPtr = value;

		return 0;
	}

	// void btStridingMeshInterfaceData::m_scaling(btVector3FloatData value)
	static int _bind_setScaling(lua_State *L) {
		if (!_lg_typecheck_setScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterfaceData::m_scaling(btVector3FloatData value) function, expected prototype:\nvoid btStridingMeshInterfaceData::m_scaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStridingMeshInterfaceData::m_scaling function");
		}
		btVector3FloatData value=*value_ptr;

		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterfaceData::m_scaling(btVector3FloatData). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		self->m_scaling = value;

		return 0;
	}

	// void btStridingMeshInterfaceData::m_numMeshParts(int value)
	static int _bind_setNumMeshParts(lua_State *L) {
		if (!_lg_typecheck_setNumMeshParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterfaceData::m_numMeshParts(int value) function, expected prototype:\nvoid btStridingMeshInterfaceData::m_numMeshParts(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btStridingMeshInterfaceData* self=(Luna< btStridingMeshInterfaceData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterfaceData::m_numMeshParts(int). Got : '%s'",typeid(Luna< btStridingMeshInterfaceData >::check(L,1)).name());
		}
		self->m_numMeshParts = value;

		return 0;
	}


	// Operator binds:

};

btStridingMeshInterfaceData* LunaTraits< btStridingMeshInterfaceData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btStridingMeshInterfaceData >::_bind_dtor(btStridingMeshInterfaceData* obj) {
	delete obj;
}

const char LunaTraits< btStridingMeshInterfaceData >::className[] = "btStridingMeshInterfaceData";
const char LunaTraits< btStridingMeshInterfaceData >::fullName[] = "btStridingMeshInterfaceData";
const char LunaTraits< btStridingMeshInterfaceData >::moduleName[] = "bullet";
const char* LunaTraits< btStridingMeshInterfaceData >::parents[] = {0};
const int LunaTraits< btStridingMeshInterfaceData >::hash = 5637632;
const int LunaTraits< btStridingMeshInterfaceData >::uniqueIDs[] = {5637632,0};

luna_RegType LunaTraits< btStridingMeshInterfaceData >::methods[] = {
	{"getMeshPartsPtr", &luna_wrapper_btStridingMeshInterfaceData::_bind_getMeshPartsPtr},
	{"getScaling", &luna_wrapper_btStridingMeshInterfaceData::_bind_getScaling},
	{"getNumMeshParts", &luna_wrapper_btStridingMeshInterfaceData::_bind_getNumMeshParts},
	{"setMeshPartsPtr", &luna_wrapper_btStridingMeshInterfaceData::_bind_setMeshPartsPtr},
	{"setScaling", &luna_wrapper_btStridingMeshInterfaceData::_bind_setScaling},
	{"setNumMeshParts", &luna_wrapper_btStridingMeshInterfaceData::_bind_setNumMeshParts},
	{"dynCast", &luna_wrapper_btStridingMeshInterfaceData::_bind_dynCast},
	{"__eq", &luna_wrapper_btStridingMeshInterfaceData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btStridingMeshInterfaceData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btStridingMeshInterfaceData >::enumValues[] = {
	{0,0}
};


