#include <plug_common.h>

class luna_wrapper_b2RopeDef {
public:
	typedef Luna< b2RopeDef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6905047) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2RopeDef*)");
		}

		b2RopeDef* rhs =(Luna< b2RopeDef >::check(L,2));
		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		b2RopeDef* self= (b2RopeDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RopeDef >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6905047) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2RopeDef >::check(L,1));
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

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2RopeDef");
		
		return luna_dynamicCast(L,converters,"b2RopeDef",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMasses(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getK2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getK3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMasses(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setK2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setK3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2RopeDef::b2RopeDef()
	static b2RopeDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2RopeDef::b2RopeDef() function, expected prototype:\nb2RopeDef::b2RopeDef()\nClass arguments details:\n");
		}


		return new b2RopeDef();
	}


	// Function binds:
	// b2Vec2 * b2RopeDef::vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 * b2RopeDef::vertices() function, expected prototype:\nb2Vec2 * b2RopeDef::vertices()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 * b2RopeDef::vertices(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		b2Vec2 * lret = self->vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// signed int b2RopeDef::count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2RopeDef::count() function, expected prototype:\nsigned int b2RopeDef::count()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2RopeDef::count(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		signed int lret = self->count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float * b2RopeDef::masses()
	static int _bind_getMasses(lua_State *L) {
		if (!_lg_typecheck_getMasses(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * b2RopeDef::masses() function, expected prototype:\nfloat * b2RopeDef::masses()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * b2RopeDef::masses(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		float * lret = self->masses;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// b2Vec2 b2RopeDef::gravity()
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeDef::gravity() function, expected prototype:\nb2Vec2 b2RopeDef::gravity()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeDef::gravity(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->gravity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RopeDef::damping()
	static int _bind_getDamping(lua_State *L) {
		if (!_lg_typecheck_getDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeDef::damping() function, expected prototype:\nfloat b2RopeDef::damping()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeDef::damping(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		float lret = self->damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RopeDef::k2()
	static int _bind_getK2(lua_State *L) {
		if (!_lg_typecheck_getK2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeDef::k2() function, expected prototype:\nfloat b2RopeDef::k2()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeDef::k2(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		float lret = self->k2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RopeDef::k3()
	static int _bind_getK3(lua_State *L) {
		if (!_lg_typecheck_getK3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeDef::k3() function, expected prototype:\nfloat b2RopeDef::k3()\nClass arguments details:\n");
		}


		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeDef::k3(). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		float lret = self->k3;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RopeDef::vertices(b2Vec2 * value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::vertices(b2Vec2 * value) function, expected prototype:\nvoid b2RopeDef::vertices(b2Vec2 * value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value=(Luna< b2Vec2 >::check(L,2));

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::vertices(b2Vec2 *). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->vertices = value;

		return 0;
	}

	// void b2RopeDef::count(signed int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::count(signed int value) function, expected prototype:\nvoid b2RopeDef::count(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::count(signed int). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->count = value;

		return 0;
	}

	// void b2RopeDef::masses(float * value)
	static int _bind_setMasses(lua_State *L) {
		if (!_lg_typecheck_setMasses(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::masses(float * value) function, expected prototype:\nvoid b2RopeDef::masses(float * value)\nClass arguments details:\n");
		}

		float* value=(float*)Luna< void >::check(L,2);

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::masses(float *). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->masses = value;

		return 0;
	}

	// void b2RopeDef::gravity(b2Vec2 value)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::gravity(b2Vec2 value) function, expected prototype:\nvoid b2RopeDef::gravity(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RopeDef::gravity function");
		}
		b2Vec2 value=*value_ptr;

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::gravity(b2Vec2). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->gravity = value;

		return 0;
	}

	// void b2RopeDef::damping(float value)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::damping(float value) function, expected prototype:\nvoid b2RopeDef::damping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::damping(float). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->damping = value;

		return 0;
	}

	// void b2RopeDef::k2(float value)
	static int _bind_setK2(lua_State *L) {
		if (!_lg_typecheck_setK2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::k2(float value) function, expected prototype:\nvoid b2RopeDef::k2(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::k2(float). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->k2 = value;

		return 0;
	}

	// void b2RopeDef::k3(float value)
	static int _bind_setK3(lua_State *L) {
		if (!_lg_typecheck_setK3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeDef::k3(float value) function, expected prototype:\nvoid b2RopeDef::k3(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2RopeDef* self=(Luna< b2RopeDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeDef::k3(float). Got : '%s'",typeid(Luna< b2RopeDef >::check(L,1)).name());
		}
		self->k3 = value;

		return 0;
	}


	// Operator binds:

};

b2RopeDef* LunaTraits< b2RopeDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2RopeDef::_bind_ctor(L);
}

void LunaTraits< b2RopeDef >::_bind_dtor(b2RopeDef* obj) {
	delete obj;
}

const char LunaTraits< b2RopeDef >::className[] = "b2RopeDef";
const char LunaTraits< b2RopeDef >::fullName[] = "b2RopeDef";
const char LunaTraits< b2RopeDef >::moduleName[] = "box2d";
const char* LunaTraits< b2RopeDef >::parents[] = {0};
const int LunaTraits< b2RopeDef >::hash = 6905047;
const int LunaTraits< b2RopeDef >::uniqueIDs[] = {6905047,0};

luna_RegType LunaTraits< b2RopeDef >::methods[] = {
	{"getVertices", &luna_wrapper_b2RopeDef::_bind_getVertices},
	{"getCount", &luna_wrapper_b2RopeDef::_bind_getCount},
	{"getMasses", &luna_wrapper_b2RopeDef::_bind_getMasses},
	{"getGravity", &luna_wrapper_b2RopeDef::_bind_getGravity},
	{"getDamping", &luna_wrapper_b2RopeDef::_bind_getDamping},
	{"getK2", &luna_wrapper_b2RopeDef::_bind_getK2},
	{"getK3", &luna_wrapper_b2RopeDef::_bind_getK3},
	{"setVertices", &luna_wrapper_b2RopeDef::_bind_setVertices},
	{"setCount", &luna_wrapper_b2RopeDef::_bind_setCount},
	{"setMasses", &luna_wrapper_b2RopeDef::_bind_setMasses},
	{"setGravity", &luna_wrapper_b2RopeDef::_bind_setGravity},
	{"setDamping", &luna_wrapper_b2RopeDef::_bind_setDamping},
	{"setK2", &luna_wrapper_b2RopeDef::_bind_setK2},
	{"setK3", &luna_wrapper_b2RopeDef::_bind_setK3},
	{"dynCast", &luna_wrapper_b2RopeDef::_bind_dynCast},
	{"__eq", &luna_wrapper_b2RopeDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2RopeDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RopeDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2RopeDef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2RopeDef >::enumValues[] = {
	{0,0}
};


