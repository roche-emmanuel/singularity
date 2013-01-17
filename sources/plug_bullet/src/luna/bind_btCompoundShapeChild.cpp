#include <plug_common.h>

class luna_wrapper_btCompoundShapeChild {
public:
	typedef Luna< btCompoundShapeChild > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8868405) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCompoundShapeChild*)");
		}

		btCompoundShapeChild* rhs =(Luna< btCompoundShapeChild >::check(L,2));
		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
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

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCompoundShapeChild");
		
		return luna_dynamicCast(L,converters,"btCompoundShapeChild",name);
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

	inline static bool _lg_typecheck_getM_node(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_childShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
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

	inline static bool _lg_typecheck_setM_node(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTransform btCompoundShapeChild::m_transform()
	static int _bind_getM_transform(lua_State *L) {
		if (!_lg_typecheck_getM_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btCompoundShapeChild::m_transform() function, expected prototype:\nbtTransform btCompoundShapeChild::m_transform()\nClass arguments details:\n");
		}


		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btCompoundShapeChild::m_transform(). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_transform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btCollisionShape * btCompoundShapeChild::m_childShape()
	static int _bind_getM_childShape(lua_State *L) {
		if (!_lg_typecheck_getM_childShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btCompoundShapeChild::m_childShape() function, expected prototype:\nbtCollisionShape * btCompoundShapeChild::m_childShape()\nClass arguments details:\n");
		}


		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btCompoundShapeChild::m_childShape(). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		btCollisionShape * lret = self->m_childShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// int btCompoundShapeChild::m_childShapeType()
	static int _bind_getM_childShapeType(lua_State *L) {
		if (!_lg_typecheck_getM_childShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShapeChild::m_childShapeType() function, expected prototype:\nint btCompoundShapeChild::m_childShapeType()\nClass arguments details:\n");
		}


		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShapeChild::m_childShapeType(). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		int lret = self->m_childShapeType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCompoundShapeChild::m_childMargin()
	static int _bind_getM_childMargin(lua_State *L) {
		if (!_lg_typecheck_getM_childMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShapeChild::m_childMargin() function, expected prototype:\nfloat btCompoundShapeChild::m_childMargin()\nClass arguments details:\n");
		}


		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShapeChild::m_childMargin(). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		float lret = self->m_childMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// struct btDbvtNode * btCompoundShapeChild::m_node()
	static int _bind_getM_node(lua_State *L) {
		if (!_lg_typecheck_getM_node(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in struct btDbvtNode * btCompoundShapeChild::m_node() function, expected prototype:\nstruct btDbvtNode * btCompoundShapeChild::m_node()\nClass arguments details:\n");
		}


		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call struct btDbvtNode * btCompoundShapeChild::m_node(). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		struct btDbvtNode * lret = self->m_node;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// void btCompoundShapeChild::m_transform(btTransform value)
	static int _bind_setM_transform(lua_State *L) {
		if (!_lg_typecheck_setM_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChild::m_transform(btTransform value) function, expected prototype:\nvoid btCompoundShapeChild::m_transform(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCompoundShapeChild::m_transform function");
		}
		btTransform value=*value_ptr;

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChild::m_transform(btTransform). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		self->m_transform = value;

		return 0;
	}

	// void btCompoundShapeChild::m_childShape(btCollisionShape * value)
	static int _bind_setM_childShape(lua_State *L) {
		if (!_lg_typecheck_setM_childShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChild::m_childShape(btCollisionShape * value) function, expected prototype:\nvoid btCompoundShapeChild::m_childShape(btCollisionShape * value)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* value=(Luna< btCollisionShape >::check(L,2));

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChild::m_childShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		self->m_childShape = value;

		return 0;
	}

	// void btCompoundShapeChild::m_childShapeType(int value)
	static int _bind_setM_childShapeType(lua_State *L) {
		if (!_lg_typecheck_setM_childShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChild::m_childShapeType(int value) function, expected prototype:\nvoid btCompoundShapeChild::m_childShapeType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChild::m_childShapeType(int). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		self->m_childShapeType = value;

		return 0;
	}

	// void btCompoundShapeChild::m_childMargin(float value)
	static int _bind_setM_childMargin(lua_State *L) {
		if (!_lg_typecheck_setM_childMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChild::m_childMargin(float value) function, expected prototype:\nvoid btCompoundShapeChild::m_childMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChild::m_childMargin(float). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		self->m_childMargin = value;

		return 0;
	}

	// void btCompoundShapeChild::m_node(struct btDbvtNode * value)
	static int _bind_setM_node(lua_State *L) {
		if (!_lg_typecheck_setM_node(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChild::m_node(struct btDbvtNode * value) function, expected prototype:\nvoid btCompoundShapeChild::m_node(struct btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btCompoundShapeChild* self=(Luna< btCompoundShapeChild >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShapeChild::m_node(struct btDbvtNode *). Got : '%s'",typeid(Luna< btCompoundShapeChild >::check(L,1)).name());
		}
		self->m_node = value;

		return 0;
	}


	// Operator binds:

};

btCompoundShapeChild* LunaTraits< btCompoundShapeChild >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCompoundShapeChild >::_bind_dtor(btCompoundShapeChild* obj) {
	delete obj;
}

const char LunaTraits< btCompoundShapeChild >::className[] = "btCompoundShapeChild";
const char LunaTraits< btCompoundShapeChild >::fullName[] = "btCompoundShapeChild";
const char LunaTraits< btCompoundShapeChild >::moduleName[] = "bullet";
const char* LunaTraits< btCompoundShapeChild >::parents[] = {0};
const int LunaTraits< btCompoundShapeChild >::hash = 8868405;
const int LunaTraits< btCompoundShapeChild >::uniqueIDs[] = {8868405,0};

luna_RegType LunaTraits< btCompoundShapeChild >::methods[] = {
	{"getM_transform", &luna_wrapper_btCompoundShapeChild::_bind_getM_transform},
	{"getM_childShape", &luna_wrapper_btCompoundShapeChild::_bind_getM_childShape},
	{"getM_childShapeType", &luna_wrapper_btCompoundShapeChild::_bind_getM_childShapeType},
	{"getM_childMargin", &luna_wrapper_btCompoundShapeChild::_bind_getM_childMargin},
	{"getM_node", &luna_wrapper_btCompoundShapeChild::_bind_getM_node},
	{"setM_transform", &luna_wrapper_btCompoundShapeChild::_bind_setM_transform},
	{"setM_childShape", &luna_wrapper_btCompoundShapeChild::_bind_setM_childShape},
	{"setM_childShapeType", &luna_wrapper_btCompoundShapeChild::_bind_setM_childShapeType},
	{"setM_childMargin", &luna_wrapper_btCompoundShapeChild::_bind_setM_childMargin},
	{"setM_node", &luna_wrapper_btCompoundShapeChild::_bind_setM_node},
	{"dynCast", &luna_wrapper_btCompoundShapeChild::_bind_dynCast},
	{"__eq", &luna_wrapper_btCompoundShapeChild::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundShapeChild >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundShapeChild >::enumValues[] = {
	{0,0}
};


