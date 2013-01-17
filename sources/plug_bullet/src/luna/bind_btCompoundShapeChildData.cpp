#include <plug_common.h>

class luna_wrapper_btCompoundShapeChildData {
public:
	typedef Luna< btCompoundShapeChildData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58634217) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCompoundShapeChildData*)");
		}

		btCompoundShapeChildData* rhs =(Luna< btCompoundShapeChildData >::check(L,2));
		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
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

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCompoundShapeChildData");
		
		return luna_dynamicCast(L,converters,"btCompoundShapeChildData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_transform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_childShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_childShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_childMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_childShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,94025107)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_childShapeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_childMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTransformFloatData btCompoundShapeChildData::m_transform()
	static int _bind_getM_transform(lua_State *L) {
		if (!_lg_typecheck_getM_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransformFloatData btCompoundShapeChildData::m_transform() function, expected prototype:\nbtTransformFloatData btCompoundShapeChildData::m_transform()\nClass arguments details:\n");
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransformFloatData btCompoundShapeChildData::m_transform(). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		const btTransformFloatData* lret = &self->m_transform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btCollisionShapeData * btCompoundShapeChildData::m_childShape()
	static int _bind_getM_childShape(lua_State *L) {
		if (!_lg_typecheck_getM_childShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShapeData * btCompoundShapeChildData::m_childShape() function, expected prototype:\nbtCollisionShapeData * btCompoundShapeChildData::m_childShape()\nClass arguments details:\n");
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShapeData * btCompoundShapeChildData::m_childShape(). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		btCollisionShapeData * lret = self->m_childShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// int btCompoundShapeChildData::m_childShapeType()
	static int _bind_getM_childShapeType(lua_State *L) {
		if (!_lg_typecheck_getM_childShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShapeChildData::m_childShapeType() function, expected prototype:\nint btCompoundShapeChildData::m_childShapeType()\nClass arguments details:\n");
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShapeChildData::m_childShapeType(). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		int lret = self->m_childShapeType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCompoundShapeChildData::m_childMargin()
	static int _bind_getM_childMargin(lua_State *L) {
		if (!_lg_typecheck_getM_childMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShapeChildData::m_childMargin() function, expected prototype:\nfloat btCompoundShapeChildData::m_childMargin()\nClass arguments details:\n");
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShapeChildData::m_childMargin(). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		float lret = self->m_childMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCompoundShapeChildData::m_transform(btTransformFloatData value)
	static int _bind_setM_transform(lua_State *L) {
		if (!_lg_typecheck_setM_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_transform(btTransformFloatData value) function, expected prototype:\nvoid btCompoundShapeChildData::m_transform(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n");
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCompoundShapeChildData::m_transform function");
		}
		btTransformFloatData value=*value_ptr;

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_transform(btTransformFloatData). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		self->m_transform = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childShape(btCollisionShapeData * value)
	static int _bind_setM_childShape(lua_State *L) {
		if (!_lg_typecheck_setM_childShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childShape(btCollisionShapeData * value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childShape(btCollisionShapeData * value)\nClass arguments details:\narg 1 ID = 94025107\n");
		}

		btCollisionShapeData* value=(Luna< btCollisionShapeData >::check(L,2));

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childShape(btCollisionShapeData *). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		self->m_childShape = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childShapeType(int value)
	static int _bind_setM_childShapeType(lua_State *L) {
		if (!_lg_typecheck_setM_childShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childShapeType(int value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childShapeType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childShapeType(int). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		self->m_childShapeType = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childMargin(float value)
	static int _bind_setM_childMargin(lua_State *L) {
		if (!_lg_typecheck_setM_childMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childMargin(float value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childMargin(float). Got : '%s'",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name());
		}
		self->m_childMargin = value;

		return 0;
	}


	// Operator binds:

};

btCompoundShapeChildData* LunaTraits< btCompoundShapeChildData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCompoundShapeChildData >::_bind_dtor(btCompoundShapeChildData* obj) {
	delete obj;
}

const char LunaTraits< btCompoundShapeChildData >::className[] = "btCompoundShapeChildData";
const char LunaTraits< btCompoundShapeChildData >::fullName[] = "btCompoundShapeChildData";
const char LunaTraits< btCompoundShapeChildData >::moduleName[] = "bullet";
const char* LunaTraits< btCompoundShapeChildData >::parents[] = {0};
const int LunaTraits< btCompoundShapeChildData >::hash = 58634217;
const int LunaTraits< btCompoundShapeChildData >::uniqueIDs[] = {58634217,0};

luna_RegType LunaTraits< btCompoundShapeChildData >::methods[] = {
	{"getM_transform", &luna_wrapper_btCompoundShapeChildData::_bind_getM_transform},
	{"getM_childShape", &luna_wrapper_btCompoundShapeChildData::_bind_getM_childShape},
	{"getM_childShapeType", &luna_wrapper_btCompoundShapeChildData::_bind_getM_childShapeType},
	{"getM_childMargin", &luna_wrapper_btCompoundShapeChildData::_bind_getM_childMargin},
	{"setM_transform", &luna_wrapper_btCompoundShapeChildData::_bind_setM_transform},
	{"setM_childShape", &luna_wrapper_btCompoundShapeChildData::_bind_setM_childShape},
	{"setM_childShapeType", &luna_wrapper_btCompoundShapeChildData::_bind_setM_childShapeType},
	{"setM_childMargin", &luna_wrapper_btCompoundShapeChildData::_bind_setM_childMargin},
	{"dynCast", &luna_wrapper_btCompoundShapeChildData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCompoundShapeChildData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundShapeChildData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundShapeChildData >::enumValues[] = {
	{0,0}
};


