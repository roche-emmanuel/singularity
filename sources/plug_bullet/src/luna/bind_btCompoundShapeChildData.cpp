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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCompoundShapeChildData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCompoundShapeChildData* rhs =(Luna< btCompoundShapeChildData >::check(L,2));
		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
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

		btCompoundShapeChildData* self= (btCompoundShapeChildData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCompoundShapeChildData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58634217) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCompoundShapeChildData >::check(L,1));
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

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCompoundShapeChildData");
		
		return luna_dynamicCast(L,converters,"btCompoundShapeChildData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93855928) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,94025107)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildShapeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTransformFloatData btCompoundShapeChildData::m_transform()
	static int _bind_getTransform(lua_State *L) {
		if (!_lg_typecheck_getTransform(L)) {
			luaL_error(L, "luna typecheck failed in btTransformFloatData btCompoundShapeChildData::m_transform() function, expected prototype:\nbtTransformFloatData btCompoundShapeChildData::m_transform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btTransformFloatData btCompoundShapeChildData::m_transform(). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btTransformFloatData* lret = &self->m_transform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransformFloatData >::push(L,lret,false);

		return 1;
	}

	// btCollisionShapeData * btCompoundShapeChildData::m_childShape()
	static int _bind_getChildShape(lua_State *L) {
		if (!_lg_typecheck_getChildShape(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionShapeData * btCompoundShapeChildData::m_childShape() function, expected prototype:\nbtCollisionShapeData * btCompoundShapeChildData::m_childShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionShapeData * btCompoundShapeChildData::m_childShape(). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionShapeData * lret = self->m_childShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShapeData >::push(L,lret,false);

		return 1;
	}

	// int btCompoundShapeChildData::m_childShapeType()
	static int _bind_getChildShapeType(lua_State *L) {
		if (!_lg_typecheck_getChildShapeType(L)) {
			luaL_error(L, "luna typecheck failed in int btCompoundShapeChildData::m_childShapeType() function, expected prototype:\nint btCompoundShapeChildData::m_childShapeType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCompoundShapeChildData::m_childShapeType(). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_childShapeType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCompoundShapeChildData::m_childMargin()
	static int _bind_getChildMargin(lua_State *L) {
		if (!_lg_typecheck_getChildMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btCompoundShapeChildData::m_childMargin() function, expected prototype:\nfloat btCompoundShapeChildData::m_childMargin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btCompoundShapeChildData::m_childMargin(). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_childMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCompoundShapeChildData::m_transform(btTransformFloatData value)
	static int _bind_setTransform(lua_State *L) {
		if (!_lg_typecheck_setTransform(L)) {
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_transform(btTransformFloatData value) function, expected prototype:\nvoid btCompoundShapeChildData::m_transform(btTransformFloatData value)\nClass arguments details:\narg 1 ID = 93855928\n\n%s",luna_dumpStack(L).c_str());
		}

		btTransformFloatData* value_ptr=(Luna< btTransformFloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCompoundShapeChildData::m_transform function");
		}
		btTransformFloatData value=*value_ptr;

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_transform(btTransformFloatData). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_transform = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childShape(btCollisionShapeData * value)
	static int _bind_setChildShape(lua_State *L) {
		if (!_lg_typecheck_setChildShape(L)) {
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childShape(btCollisionShapeData * value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childShape(btCollisionShapeData * value)\nClass arguments details:\narg 1 ID = 94025107\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionShapeData* value=(Luna< btCollisionShapeData >::check(L,2));

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childShape(btCollisionShapeData *). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_childShape = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childShapeType(int value)
	static int _bind_setChildShapeType(lua_State *L) {
		if (!_lg_typecheck_setChildShapeType(L)) {
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childShapeType(int value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childShapeType(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childShapeType(int). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_childShapeType = value;

		return 0;
	}

	// void btCompoundShapeChildData::m_childMargin(float value)
	static int _bind_setChildMargin(lua_State *L) {
		if (!_lg_typecheck_setChildMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btCompoundShapeChildData::m_childMargin(float value) function, expected prototype:\nvoid btCompoundShapeChildData::m_childMargin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btCompoundShapeChildData* self=(Luna< btCompoundShapeChildData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCompoundShapeChildData::m_childMargin(float). Got : '%s'\n%s",typeid(Luna< btCompoundShapeChildData >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getTransform", &luna_wrapper_btCompoundShapeChildData::_bind_getTransform},
	{"getChildShape", &luna_wrapper_btCompoundShapeChildData::_bind_getChildShape},
	{"getChildShapeType", &luna_wrapper_btCompoundShapeChildData::_bind_getChildShapeType},
	{"getChildMargin", &luna_wrapper_btCompoundShapeChildData::_bind_getChildMargin},
	{"setTransform", &luna_wrapper_btCompoundShapeChildData::_bind_setTransform},
	{"setChildShape", &luna_wrapper_btCompoundShapeChildData::_bind_setChildShape},
	{"setChildShapeType", &luna_wrapper_btCompoundShapeChildData::_bind_setChildShapeType},
	{"setChildMargin", &luna_wrapper_btCompoundShapeChildData::_bind_setChildMargin},
	{"dynCast", &luna_wrapper_btCompoundShapeChildData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCompoundShapeChildData::_bind___eq},
	{"fromVoid", &luna_wrapper_btCompoundShapeChildData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCompoundShapeChildData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundShapeChildData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundShapeChildData >::enumValues[] = {
	{0,0}
};


