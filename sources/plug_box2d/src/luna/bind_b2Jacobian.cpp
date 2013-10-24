#include <plug_common.h>

class luna_wrapper_b2Jacobian {
public:
	typedef Luna< b2Jacobian > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26064803) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Jacobian*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Jacobian* rhs =(Luna< b2Jacobian >::check(L,2));
		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
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

		b2Jacobian* self= (b2Jacobian*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Jacobian >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26064803) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Jacobian >::check(L,1));
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

		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Jacobian");
		
		return luna_dynamicCast(L,converters,"b2Jacobian",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getLinear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLinear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2Jacobian::linear()
	static int _bind_getLinear(lua_State *L) {
		if (!_lg_typecheck_getLinear(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Jacobian::linear() function, expected prototype:\nb2Vec2 b2Jacobian::linear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Jacobian::linear(). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->linear;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2Jacobian::angularA()
	static int _bind_getAngularA(lua_State *L) {
		if (!_lg_typecheck_getAngularA(L)) {
			luaL_error(L, "luna typecheck failed in float b2Jacobian::angularA() function, expected prototype:\nfloat b2Jacobian::angularA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Jacobian::angularA(). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->angularA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Jacobian::angularB()
	static int _bind_getAngularB(lua_State *L) {
		if (!_lg_typecheck_getAngularB(L)) {
			luaL_error(L, "luna typecheck failed in float b2Jacobian::angularB() function, expected prototype:\nfloat b2Jacobian::angularB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Jacobian::angularB(). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->angularB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Jacobian::linear(b2Vec2 value)
	static int _bind_setLinear(lua_State *L) {
		if (!_lg_typecheck_setLinear(L)) {
			luaL_error(L, "luna typecheck failed in void b2Jacobian::linear(b2Vec2 value) function, expected prototype:\nvoid b2Jacobian::linear(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Jacobian::linear function");
		}
		b2Vec2 value=*value_ptr;

		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Jacobian::linear(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->linear = value;

		return 0;
	}

	// void b2Jacobian::angularA(float value)
	static int _bind_setAngularA(lua_State *L) {
		if (!_lg_typecheck_setAngularA(L)) {
			luaL_error(L, "luna typecheck failed in void b2Jacobian::angularA(float value) function, expected prototype:\nvoid b2Jacobian::angularA(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Jacobian::angularA(float). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->angularA = value;

		return 0;
	}

	// void b2Jacobian::angularB(float value)
	static int _bind_setAngularB(lua_State *L) {
		if (!_lg_typecheck_setAngularB(L)) {
			luaL_error(L, "luna typecheck failed in void b2Jacobian::angularB(float value) function, expected prototype:\nvoid b2Jacobian::angularB(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Jacobian* self=(Luna< b2Jacobian >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Jacobian::angularB(float). Got : '%s'\n%s",typeid(Luna< b2Jacobian >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->angularB = value;

		return 0;
	}


	// Operator binds:

};

b2Jacobian* LunaTraits< b2Jacobian >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Jacobian >::_bind_dtor(b2Jacobian* obj) {
	delete obj;
}

const char LunaTraits< b2Jacobian >::className[] = "b2Jacobian";
const char LunaTraits< b2Jacobian >::fullName[] = "b2Jacobian";
const char LunaTraits< b2Jacobian >::moduleName[] = "box2d";
const char* LunaTraits< b2Jacobian >::parents[] = {0};
const int LunaTraits< b2Jacobian >::hash = 26064803;
const int LunaTraits< b2Jacobian >::uniqueIDs[] = {26064803,0};

luna_RegType LunaTraits< b2Jacobian >::methods[] = {
	{"getLinear", &luna_wrapper_b2Jacobian::_bind_getLinear},
	{"getAngularA", &luna_wrapper_b2Jacobian::_bind_getAngularA},
	{"getAngularB", &luna_wrapper_b2Jacobian::_bind_getAngularB},
	{"setLinear", &luna_wrapper_b2Jacobian::_bind_setLinear},
	{"setAngularA", &luna_wrapper_b2Jacobian::_bind_setAngularA},
	{"setAngularB", &luna_wrapper_b2Jacobian::_bind_setAngularB},
	{"dynCast", &luna_wrapper_b2Jacobian::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Jacobian::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Jacobian::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Jacobian::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Jacobian >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Jacobian >::enumValues[] = {
	{0,0}
};


