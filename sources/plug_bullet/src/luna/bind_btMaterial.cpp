#include <plug_common.h>

class luna_wrapper_btMaterial {
public:
	typedef Luna< btMaterial > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47294335) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMaterial*)");
		}

		btMaterial* rhs =(Luna< btMaterial >::check(L,2));
		btMaterial* self=(Luna< btMaterial >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btMaterial* self= (btMaterial*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMaterial >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47294335) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btMaterial >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btMaterial* self=(Luna< btMaterial >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMaterial");
		
		return luna_dynamicCast(L,converters,"btMaterial",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMaterial::btMaterial()
	static btMaterial* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMaterial::btMaterial() function, expected prototype:\nbtMaterial::btMaterial()\nClass arguments details:\n");
		}


		return new btMaterial();
	}

	// btMaterial::btMaterial(float fric, float rest)
	static btMaterial* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMaterial::btMaterial(float fric, float rest) function, expected prototype:\nbtMaterial::btMaterial(float fric, float rest)\nClass arguments details:\n");
		}

		float fric=(float)lua_tonumber(L,1);
		float rest=(float)lua_tonumber(L,2);

		return new btMaterial(fric, rest);
	}

	// Overload binder for btMaterial::btMaterial
	static btMaterial* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btMaterial, cannot match any of the overloads for function btMaterial:\n  btMaterial()\n  btMaterial(float, float)\n");
		return NULL;
	}


	// Function binds:
	// float btMaterial::m_friction()
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMaterial::m_friction() function, expected prototype:\nfloat btMaterial::m_friction()\nClass arguments details:\n");
		}


		btMaterial* self=(Luna< btMaterial >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMaterial::m_friction(). Got : '%s'",typeid(Luna< btMaterial >::check(L,1)).name());
		}
		float lret = self->m_friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMaterial::m_restitution()
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMaterial::m_restitution() function, expected prototype:\nfloat btMaterial::m_restitution()\nClass arguments details:\n");
		}


		btMaterial* self=(Luna< btMaterial >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMaterial::m_restitution(). Got : '%s'",typeid(Luna< btMaterial >::check(L,1)).name());
		}
		float lret = self->m_restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMaterial::m_friction(float value)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterial::m_friction(float value) function, expected prototype:\nvoid btMaterial::m_friction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btMaterial* self=(Luna< btMaterial >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterial::m_friction(float). Got : '%s'",typeid(Luna< btMaterial >::check(L,1)).name());
		}
		self->m_friction = value;

		return 0;
	}

	// void btMaterial::m_restitution(float value)
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMaterial::m_restitution(float value) function, expected prototype:\nvoid btMaterial::m_restitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btMaterial* self=(Luna< btMaterial >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMaterial::m_restitution(float). Got : '%s'",typeid(Luna< btMaterial >::check(L,1)).name());
		}
		self->m_restitution = value;

		return 0;
	}


	// Operator binds:

};

btMaterial* LunaTraits< btMaterial >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMaterial::_bind_ctor(L);
}

void LunaTraits< btMaterial >::_bind_dtor(btMaterial* obj) {
	delete obj;
}

const char LunaTraits< btMaterial >::className[] = "btMaterial";
const char LunaTraits< btMaterial >::fullName[] = "btMaterial";
const char LunaTraits< btMaterial >::moduleName[] = "bullet";
const char* LunaTraits< btMaterial >::parents[] = {0};
const int LunaTraits< btMaterial >::hash = 47294335;
const int LunaTraits< btMaterial >::uniqueIDs[] = {47294335,0};

luna_RegType LunaTraits< btMaterial >::methods[] = {
	{"getFriction", &luna_wrapper_btMaterial::_bind_getFriction},
	{"getRestitution", &luna_wrapper_btMaterial::_bind_getRestitution},
	{"setFriction", &luna_wrapper_btMaterial::_bind_setFriction},
	{"setRestitution", &luna_wrapper_btMaterial::_bind_setRestitution},
	{"dynCast", &luna_wrapper_btMaterial::_bind_dynCast},
	{"__eq", &luna_wrapper_btMaterial::_bind___eq},
	{"fromVoid", &luna_wrapper_btMaterial::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMaterial::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMaterial >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMaterial >::enumValues[] = {
	{0,0}
};


