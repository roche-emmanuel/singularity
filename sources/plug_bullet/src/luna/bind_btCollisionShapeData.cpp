#include <plug_common.h>

class luna_wrapper_btCollisionShapeData {
public:
	typedef Luna< btCollisionShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94025107) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionShapeData*)");
		}

		btCollisionShapeData* rhs =(Luna< btCollisionShapeData >::check(L,2));
		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
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

		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionShapeData");
		
		return luna_dynamicCast(L,converters,"btCollisionShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_shapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_shapeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char * btCollisionShapeData::m_name()
	static int _bind_getM_name(lua_State *L) {
		if (!_lg_typecheck_getM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * btCollisionShapeData::m_name() function, expected prototype:\nchar * btCollisionShapeData::m_name()\nClass arguments details:\n");
		}


		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * btCollisionShapeData::m_name(). Got : '%s'",typeid(Luna< btCollisionShapeData >::check(L,1)).name());
		}
		char * lret = self->m_name;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int btCollisionShapeData::m_shapeType()
	static int _bind_getM_shapeType(lua_State *L) {
		if (!_lg_typecheck_getM_shapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionShapeData::m_shapeType() function, expected prototype:\nint btCollisionShapeData::m_shapeType()\nClass arguments details:\n");
		}


		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionShapeData::m_shapeType(). Got : '%s'",typeid(Luna< btCollisionShapeData >::check(L,1)).name());
		}
		int lret = self->m_shapeType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionShapeData::m_name(char * value)
	static int _bind_setM_name(lua_State *L) {
		if (!_lg_typecheck_setM_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShapeData::m_name(char * value) function, expected prototype:\nvoid btCollisionShapeData::m_name(char * value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShapeData::m_name(char *). Got : '%s'",typeid(Luna< btCollisionShapeData >::check(L,1)).name());
		}
		self->m_name = &value;

		return 0;
	}

	// void btCollisionShapeData::m_shapeType(int value)
	static int _bind_setM_shapeType(lua_State *L) {
		if (!_lg_typecheck_setM_shapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShapeData::m_shapeType(int value) function, expected prototype:\nvoid btCollisionShapeData::m_shapeType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCollisionShapeData* self=(Luna< btCollisionShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShapeData::m_shapeType(int). Got : '%s'",typeid(Luna< btCollisionShapeData >::check(L,1)).name());
		}
		self->m_shapeType = value;

		return 0;
	}


	// Operator binds:

};

btCollisionShapeData* LunaTraits< btCollisionShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCollisionShapeData >::_bind_dtor(btCollisionShapeData* obj) {
	delete obj;
}

const char LunaTraits< btCollisionShapeData >::className[] = "btCollisionShapeData";
const char LunaTraits< btCollisionShapeData >::fullName[] = "btCollisionShapeData";
const char LunaTraits< btCollisionShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionShapeData >::parents[] = {0};
const int LunaTraits< btCollisionShapeData >::hash = 94025107;
const int LunaTraits< btCollisionShapeData >::uniqueIDs[] = {94025107,0};

luna_RegType LunaTraits< btCollisionShapeData >::methods[] = {
	{"getM_name", &luna_wrapper_btCollisionShapeData::_bind_getM_name},
	{"getM_shapeType", &luna_wrapper_btCollisionShapeData::_bind_getM_shapeType},
	{"setM_name", &luna_wrapper_btCollisionShapeData::_bind_setM_name},
	{"setM_shapeType", &luna_wrapper_btCollisionShapeData::_bind_setM_shapeType},
	{"dynCast", &luna_wrapper_btCollisionShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionShapeData >::enumValues[] = {
	{0,0}
};


