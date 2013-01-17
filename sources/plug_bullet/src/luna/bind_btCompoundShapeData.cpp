#include <plug_common.h>

class luna_wrapper_btCompoundShapeData {
public:
	typedef Luna< btCompoundShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55148189) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCompoundShapeData*)");
		}

		btCompoundShapeData* rhs =(Luna< btCompoundShapeData >::check(L,2));
		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
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

		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCompoundShapeData");
		
		return luna_dynamicCast(L,converters,"btCompoundShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_childShapePtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_collisionShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94025107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_childShapePtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58634217)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numChildShapes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_collisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btCollisionShapeData btCompoundShapeData::m_collisionShapeData()
	static int _bind_getM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData btCompoundShapeData::m_collisionShapeData() function, expected prototype:\nbtCollisionShapeData btCompoundShapeData::m_collisionShapeData()\nClass arguments details:\n");
		}


		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData btCompoundShapeData::m_collisionShapeData(). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		const btCollisionShapeData* lret = &self->m_collisionShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// btCompoundShapeChildData * btCompoundShapeData::m_childShapePtr()
	static int _bind_getM_childShapePtr(lua_State *L) {
		if (!_lg_typecheck_getM_childShapePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCompoundShapeChildData * btCompoundShapeData::m_childShapePtr() function, expected prototype:\nbtCompoundShapeChildData * btCompoundShapeData::m_childShapePtr()\nClass arguments details:\n");
		}


		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCompoundShapeChildData * btCompoundShapeData::m_childShapePtr(). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		btCompoundShapeChildData * lret = self->m_childShapePtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCompoundShapeChildData >::push(L,lret,false);

		return 1;
	}

	// int btCompoundShapeData::m_numChildShapes()
	static int _bind_getM_numChildShapes(lua_State *L) {
		if (!_lg_typecheck_getM_numChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShapeData::m_numChildShapes() function, expected prototype:\nint btCompoundShapeData::m_numChildShapes()\nClass arguments details:\n");
		}


		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShapeData::m_numChildShapes(). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		int lret = self->m_numChildShapes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCompoundShapeData::m_collisionMargin()
	static int _bind_getM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_getM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShapeData::m_collisionMargin() function, expected prototype:\nfloat btCompoundShapeData::m_collisionMargin()\nClass arguments details:\n");
		}


		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShapeData::m_collisionMargin(). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		float lret = self->m_collisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCompoundShapeData::m_collisionShapeData(btCollisionShapeData value)
	static int _bind_setM_collisionShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_collisionShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeData::m_collisionShapeData(btCollisionShapeData value) function, expected prototype:\nvoid btCompoundShapeData::m_collisionShapeData(btCollisionShapeData value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value_ptr=(Luna< btCollisionShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCompoundShapeData::m_collisionShapeData function");
		}
		btCollisionShapeData value=*value_ptr;

		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeData::m_collisionShapeData(btCollisionShapeData). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		self->m_collisionShapeData = value;

		return 0;
	}

	// void btCompoundShapeData::m_childShapePtr(btCompoundShapeChildData * value)
	static int _bind_setM_childShapePtr(lua_State *L) {
		if (!_lg_typecheck_setM_childShapePtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeData::m_childShapePtr(btCompoundShapeChildData * value) function, expected prototype:\nvoid btCompoundShapeData::m_childShapePtr(btCompoundShapeChildData * value)\nClass arguments details:\narg 1 ID = 58634217\n");
		}

		btCompoundShapeChildData* value=(Luna< btCompoundShapeChildData >::check(L,2));

		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeData::m_childShapePtr(btCompoundShapeChildData *). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		self->m_childShapePtr = value;

		return 0;
	}

	// void btCompoundShapeData::m_numChildShapes(int value)
	static int _bind_setM_numChildShapes(lua_State *L) {
		if (!_lg_typecheck_setM_numChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeData::m_numChildShapes(int value) function, expected prototype:\nvoid btCompoundShapeData::m_numChildShapes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeData::m_numChildShapes(int). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		self->m_numChildShapes = value;

		return 0;
	}

	// void btCompoundShapeData::m_collisionMargin(float value)
	static int _bind_setM_collisionMargin(lua_State *L) {
		if (!_lg_typecheck_setM_collisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeData::m_collisionMargin(float value) function, expected prototype:\nvoid btCompoundShapeData::m_collisionMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCompoundShapeData* self=(Luna< btCompoundShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeData::m_collisionMargin(float). Got : '%s'",typeid(Luna< btCompoundShapeData >::check(L,1)).name());
		}
		self->m_collisionMargin = value;

		return 0;
	}


	// Operator binds:

};

btCompoundShapeData* LunaTraits< btCompoundShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCompoundShapeData >::_bind_dtor(btCompoundShapeData* obj) {
	delete obj;
}

const char LunaTraits< btCompoundShapeData >::className[] = "btCompoundShapeData";
const char LunaTraits< btCompoundShapeData >::fullName[] = "btCompoundShapeData";
const char LunaTraits< btCompoundShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btCompoundShapeData >::parents[] = {0};
const int LunaTraits< btCompoundShapeData >::hash = 55148189;
const int LunaTraits< btCompoundShapeData >::uniqueIDs[] = {55148189,0};

luna_RegType LunaTraits< btCompoundShapeData >::methods[] = {
	{"getM_collisionShapeData", &luna_wrapper_btCompoundShapeData::_bind_getM_collisionShapeData},
	{"getM_childShapePtr", &luna_wrapper_btCompoundShapeData::_bind_getM_childShapePtr},
	{"getM_numChildShapes", &luna_wrapper_btCompoundShapeData::_bind_getM_numChildShapes},
	{"getM_collisionMargin", &luna_wrapper_btCompoundShapeData::_bind_getM_collisionMargin},
	{"setM_collisionShapeData", &luna_wrapper_btCompoundShapeData::_bind_setM_collisionShapeData},
	{"setM_childShapePtr", &luna_wrapper_btCompoundShapeData::_bind_setM_childShapePtr},
	{"setM_numChildShapes", &luna_wrapper_btCompoundShapeData::_bind_setM_numChildShapes},
	{"setM_collisionMargin", &luna_wrapper_btCompoundShapeData::_bind_setM_collisionMargin},
	{"dynCast", &luna_wrapper_btCompoundShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCompoundShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundShapeData >::enumValues[] = {
	{0,0}
};


